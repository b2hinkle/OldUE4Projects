// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseWeapon.h"

#include "FPS.h"
#include "UnrealNetwork.h"
#include "..\..\Public\Weapons\BaseWeapon.h"
#include "..\FPSCharacter.h"
#include "..\BaseCharacter.h"
#include "Inventory.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "FPSPlayerController.h"
#include "WeaponAttributeSet.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "FPSAbilitySystemComponent.h"
#include "GameplayAbilitySpec.h"


#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

void ABaseWeapon::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(ABaseWeapon, FPSCharacter, COND_OwnerOnly);
	DOREPLIFETIME(ABaseWeapon, AttributeSet);
	DOREPLIFETIME_CONDITION(ABaseWeapon, FireAbilityHandle, COND_OwnerOnly);
	DOREPLIFETIME_CONDITION(ABaseWeapon, FPSAbilitySystemComponent, COND_OwnerOnly);



}

ABaseWeapon::ABaseWeapon()
{
	PrimaryActorTick.bCanEverTick = false;

	SetReplicates(true);
}

void ABaseWeapon::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	
	if (Mesh)
	{
		Mesh->bCastDynamicShadow = false;			// Disallow mesh to cast dynamic shadows
		Mesh->CastShadow = false;					// Disallow mesh to cast other shadows
	}
	if (SkeletalMesh)
	{
		SkeletalMesh->bCastDynamicShadow = false;			// Disallow mesh to cast dynamic shadows
		SkeletalMesh->CastShadow = false;					// Disallow mesh to cast other shadows
	}
}

void ABaseWeapon::OnInteract()
{

}

void ABaseWeapon::OnEnterInventory(AFPSCharacter* OwningCharacter)	//rn for client side this only gets called for 1 weapon...... FIX
{
	FPSCharacter = OwningCharacter;
	FPSAbilitySystemComponent = Cast<UFPSAbilitySystemComponent>(OwningCharacter->GetAbilitySystemComponent());
	SetInstigator(OwningCharacter);

	if (GetLocalRole() == ROLE_Authority && FPSCharacter)
	{
		SetOwner(FPSCharacter);
	}
	

	if (Mesh)
	{
		Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	if (SkeletalMesh)
	{
		SkeletalMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	
	if (FPSCharacter)
	{
		if (GetOwner()->GetLocalRole() == ROLE_Authority)
		{
			FAttachmentTransformRules rules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, false);
			AttachToComponent(FPSCharacter->GetMesh(), rules, TEXT("Socket_RHand"));

			SetActorLocation(SkeletalMesh->GetSocketLocation(TEXT("Socket_Grip")));
			SetActorRotation(SkeletalMesh->GetSocketRotation(TEXT("Socket_Grip")));
			SetActorScale3D(SkeletalMesh->GetSocketTransform(TEXT("Socket_Grip")).GetScale3D());

		}
		else if (GetOwner()->GetLocalRole() == ROLE_AutonomousProxy)
		{
			FAttachmentTransformRules rules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, false);
			AttachToComponent(FPSCharacter->FPSMesh, rules, TEXT("Socket_RHand"));

			SetActorLocation(SkeletalMesh->GetSocketLocation(TEXT("Socket_Grip")));
			SetActorRotation(SkeletalMesh->GetSocketRotation(TEXT("Socket_Grip")));
			SetActorScale3D(SkeletalMesh->GetSocketTransform(TEXT("Socket_Grip")).GetScale3D());

		}
	}	
}

void ABaseWeapon::OnExitInventory()
{
	SetOwner(nullptr);
	FPSCharacter = nullptr;
	FPSAbilitySystemComponent = nullptr;
	SetInstigator(nullptr);

}

void ABaseWeapon::OnEquip()
{
	///Give ASC this weapon's Attribute Set
	UAbilitySystemComponent* ASC = FPSCharacter->GetAbilitySystemComponent();
	if (ASC)
	{
		if (!ASC->SpawnedAttributes.Contains(AttributeSet))	//if the ASC dosn't have the attribute set
		{
			if (!AttributeSet)	//if said attribute set is nullptr
			{
				AttributeSet = NewObject<UWeaponAttributeSet>(FPSCharacter->GetPlayerState(), UWeaponAttributeSet::StaticClass());
				ASC->AddDefaultSubobjectSet(AttributeSet);
				ASC->ForceReplication();
			}
			else				//if said attribute set has already been spawned
			{
				ASC->AddDefaultSubobjectSet(AttributeSet);
				ASC->ForceReplication();
			}
		}
	}

	if (Mesh)
	{
		Mesh->SetVisibility(true);
	}
	if (SkeletalMesh)
	{
		SkeletalMesh->SetVisibility(true);
	}
	
	
	
	
	if (GetLocalRole() == ROLE_Authority && FPSAbilitySystemComponent)
	{
		FireAbilityHandle = FPSAbilitySystemComponent->GrantAbility(this, FireAbilityTSub);
	}
}

void ABaseWeapon::OnUnEquip()
{
	///Remove this weapon's Attribute Set from ASC
	UAbilitySystemComponent* ASC = FPSCharacter->GetAbilitySystemComponent();
	if (ASC)
	{
		if (ASC->SpawnedAttributes.Contains(AttributeSet))	//if the ASC has the attribute set
		{
			ASC->SpawnedAttributes.RemoveAt(ASC->SpawnedAttributes.Find(AttributeSet));
			ASC->ForceReplication();
		}
	}

	if (Mesh)
	{
		Mesh->SetVisibility(false);
	}
	if (SkeletalMesh)
	{
		SkeletalMesh->SetVisibility(false);
	}

	
	
	if (GetLocalRole() == ROLE_Authority)
	{
		FPSAbilitySystemComponent->ClearAbility(FireAbilityHandle);
	}
	
}

#pragma region Helper Information
FVector ABaseWeapon::GetAdjustedAim() const
{
	FVector FinalAim = FVector::ZeroVector;
	AFPSPlayerController* const PC = GetInstigator() ? Cast<AFPSPlayerController>(GetInstigator()->Controller) : NULL;
	
	// If we have a player controller use it for the aim
	if (PC)
	{
		FVector CamLoc;
		FRotator CamRot;
		PC->GetPlayerViewPoint(CamLoc, CamRot);
		FinalAim = CamRot.Vector();
	}
	
	return FinalAim;
}

FVector ABaseWeapon::GetCameraDamageStartLocation(const FVector& AimDir) const
{
	AFPSPlayerController* PC = GetInstigator() ? Cast<AFPSPlayerController>(GetInstigator()->Controller) : NULL;
	
	FVector OutStartTrace = FVector::ZeroVector;

	if (PC)
	{
		// use player's camera
		FRotator UnusedRot;
		PC->GetPlayerViewPoint(OutStartTrace, UnusedRot);

		// Adjust trace so there is nothing blocking the ray between the camera and the pawn, and calculate distance from adjusted start
		OutStartTrace = OutStartTrace + AimDir * ((GetInstigator()->GetActorLocation() - OutStartTrace) | AimDir);
	}
	
	return OutStartTrace;
}
#pragma endregion


FHitResult ABaseWeapon::WeaponTrace(const FVector& StartTrace, const FVector& EndTrace) const
{
	// Perform trace to retrieve hit info
	FCollisionQueryParams TraceParams(SCENE_QUERY_STAT(WeaponTrace), true, GetInstigator());
	TraceParams.bReturnPhysicalMaterial = true;

	FHitResult Hit(ForceInit);
	GetWorld()->LineTraceSingleByChannel(Hit, StartTrace, EndTrace, COLLISION_WEAPON, TraceParams);

	return Hit;
}

FHitResult ABaseWeapon::Fire(int16 randomSeed)
{
	return FHitResult();
}

void ABaseWeapon::Reload()
{

}

bool ABaseWeapon::TryFireWeapon()
{
	if (FPSAbilitySystemComponent->TryActivateAbility(FireAbilityHandle))
	{
		return true;
	}
	else
	{
		return false;
	}
	
	
#pragma region Batched RPC Template (well i tried at least)
	//if (FPSAbilitySystemComponent)
	//{
	//	FPSAbilitySystemComponent->TryActivateAbility(FireAbilityHandle);
	//	
	//	//FGameplayTag ApplicationTag = FGameplayTag::EmptyTag;

	//	//FScopedServerAbilityRPCBatcher ScopedRPCBatcher(FPSAbilitySystemComponent, FireAbilityHandle);	//On construction of this, this will put "FireAbilityHandle" (the passed in FGameplayAbilitySpecHandle) into an FServerAbilityRPCBatch which is then added to a list of more of those (all client side)
	//	//
	//	////Next we want to give this new FServerAbilityRPCBatch some information.........
	//	//FPSAbilitySystemComponent->CallServerTryActivateAbility(FireAbilityHandle, true /*what does this mean?*/, FPSAbilitySystemComponent->ScopedPredictionKey /*should I use GetPredictionKeyForNewAction() instead?*/);	//send the local generated prediction key to the server, store that it started, store if an input was pressed, store the prediction key
 //       FPSAbilitySystemComponent->CallServerSetReplicatedTargetData(FireAbilityHandle, FPSAbilitySystemComponent->ScopedPredictionKey, TargetData, ApplicationTag /*what does this mean?*/, FPSAbilitySystemComponent->ScopedPredictionKey);	//store the target data
 //       FPSAbilitySystemComponent->CallServerEndAbility(FireAbilityHandle, FGameplayAbilityActivationInfo() /*doesn't seem right*/, FPSAbilitySystemComponent->ScopedPredictionKey);	//store that it ended

	//	////all of this stored information is inside of the FServerAbilityRPCBatch and once the FScopedServerAbilityRPCBatcher goes out of scope the descructor will call a method to send it to the server 
	//	return true;
	//}
#pragma endregion
}
