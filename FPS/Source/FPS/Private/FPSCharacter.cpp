// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacter.h"

#include "UnrealNetwork.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "FPSAbilitySystemComponent.h"
#include "BaseWeapon.h"
#include "ActorComponents/Inventory.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "UI/FPSCharacterHUD.h"
#include "WeaponAttributeSet.h"
#include "FPSAbilitySystemComponent.h"
#include "FPSPlayerState.h"
#include "FPSCharacterAttributeSet.h"
#include "FPSCharacterAnimInstance.h"

#include "Kismet/KismetMathLibrary.h"

void AFPSCharacter::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(AFPSCharacter, CharacterAttributeSet);	//see if I can do owner ownly
	DOREPLIFETIME_CONDITION(AFPSCharacter, SwitchWeaponHandle, COND_OwnerOnly);
	DOREPLIFETIME_CONDITION(AFPSCharacter, ADSAbilityHandle, COND_OwnerOnly);
	DOREPLIFETIME_CONDITION(AFPSCharacter, ReplicatedNormalizedDeltaRotator, COND_SkipOwner);
}

AFPSCharacter::AFPSCharacter()
{
	bAlwaysRelevant = true;

	CameraSwayAmount = FVector(0, 1.3f, .4f);
	AddedCameraSwayDuringADS = FVector(0, -1.1f, -.1f);

	
	FPSMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Arms"));
	FPSMesh->SetupAttachment(RootComponent);

	if (GetMesh())
	{
		FPSMeshConstructedPosition = FVector(GetMesh()->GetComponentLocation().X, GetMesh()->GetComponentLocation().Y, GetMesh()->GetComponentLocation().Z);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Couldn't set position of the fps character model because third person character model was NULL."));
	}
	FPSMeshConstructedRotation = FRotator(0, 0, 0);
	FPSMeshConstructedScale = FVector(1, 1, 1);

	FPSMesh->SetRelativeLocationAndRotation(FPSMeshConstructedPosition, FPSMeshConstructedRotation);
	FPSMesh->SetRelativeScale3D(FPSMeshConstructedScale);

	FPSMesh->SetOnlyOwnerSee(true);
	FPSMesh->SetCastShadow(false);
	FPSMesh->bCastDynamicShadow = false;			// Disallow mesh to cast dynamic shadows

	Inventory = CreateDefaultSubobject<UInventory>(TEXT("Inventory"));
	Inventory->SetIsReplicated(true);

	if (GetFollowCamera())
	{
		GetFollowCamera()->SetFieldOfView(100);
	}

	GetCameraBoom()->SetupAttachment(RootComponent);
	cameraBoomConstructedRotation = FRotator(0, 0, 0);
	cameraBoomConstructedPosition = FVector(0,0,0);
	cameraBoomConstructedArmLength = 0;
	GetCameraBoom()->SetRelativeLocationAndRotation(cameraBoomConstructedPosition, cameraBoomConstructedRotation);
	GetCameraBoom()->TargetArmLength = cameraBoomConstructedArmLength;



	CharacterAttributeSet = CreateDefaultSubobject<UFPSCharacterAttributeSet>(TEXT("AttributeSet"));

	if (GetMesh())
	{
		Goggles = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Goggles"));
		Goggles->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		Goggles->SetupAttachment(GetMesh());
	}
}

#pragma region Events
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetLocalRole() == ROLE_Authority || IsLocallyControlled())
	{
		ReplicatedNormalizedDeltaRotator = UKismetMathLibrary::NormalizedDeltaRotator(GetControlRotation(), GetActorRotation());
		
	}

	if (FPSMesh && AbilitySystem && !AbilitySystem->HasMatchingGameplayTag(FGameplayTag::RequestGameplayTag(FName("WeaponState.ADS"))))
	{
		FVector CameraSocketLocation = FPSMesh->GetSocketTransform(TEXT("CameraBoneSocket"), ERelativeTransformSpace::RTS_ParentBoneSpace).GetLocation();
		FVector FrameMouseRate = FVector(0, -frameHorizontalMouseRate, -frameVerticalMouseRate);
		FVector NewCameraLocation = CameraSocketLocation - (FrameMouseRate*CameraSwayAmount);
		if (GetCameraBoom())
		{
			FVector CurrentCameraLocation = FVector(GetCameraBoom()->GetRelativeTransform().GetLocation());

			GetCameraBoom()->SetRelativeLocation(UKismetMathLibrary::VInterpTo(CurrentCameraLocation, NewCameraLocation, DeltaTime, 10));
		}


	}
	else
	{
		FVector CameraSocketLocation = FPSMesh->GetSocketTransform(TEXT("CameraBoneSocket"), ERelativeTransformSpace::RTS_ParentBoneSpace).GetLocation();
		FVector NewCameraLocation = FVector(0,0,0);
		if (GetCameraBoom())
		{
			FVector CurrentCameraLocation = FVector(GetCameraBoom()->GetRelativeTransform().GetLocation());

			float yaw = CurrentCameraLocation.Y - frameHorizontalMouseRate;
			float pitch = CurrentCameraLocation.Z - frameVerticalMouseRate;
			FVector Sway = FVector(CurrentCameraLocation.X, yaw, pitch);

			FVector ADSCameraSwayAmount = CameraSwayAmount + AddedCameraSwayDuringADS;

			NewCameraLocation = CameraSocketLocation - (Sway* ADSCameraSwayAmount);




			GetCameraBoom()->SetRelativeLocation(UKismetMathLibrary::VInterpTo(CurrentCameraLocation, NewCameraLocation, DeltaTime, 10));
		}



	}
}

void AFPSCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

}

void AFPSCharacter::OnPossessedByClient(AController* NewController)
{
	if (IsLocallyControlled() && GetMesh())
	{
		GetMesh()->SetVisibility(false);
		if (Goggles)
		{
			Goggles->SetVisibility(false);
		}
	}
	ServerSpawnDefaultInventory();
}

void AFPSCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	
	GetCameraBoom()->AttachToComponent(FPSMesh, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, false), FName("CameraBoneSocket"));

	if (GetMesh() && Goggles)
	{
		FAttachmentTransformRules rules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, true);
		Goggles->AttachToComponent(GetMesh(), rules, TEXT("GogglesSocket"));
		
	}
	if (GetFollowCamera() && GetCameraBoom())
	{
		GetFollowCamera()->SetRelativeRotation(GetCameraBoom()->GetComponentTransform().GetRotation());
	}
	
}

void AFPSCharacter::OnAbilityDataInjected()
{
	

	if (GetLocalRole() == ROLE_Authority && AbilitySystem)
	{
		AbilitySystem->AddDefaultSubobjectSet<UFPSCharacterAttributeSet>(CharacterAttributeSet);
		GrantStartingAbilities();

	}
	GetAbilitySystemComponent()->AddDefaultSubobjectSet(CharacterAttributeSet);
	GetAbilitySystemComponent()->ForceReplication();
}

void AFPSCharacter::GrantStartingAbilities()
{
	SwitchWeaponHandle = AbilitySystem->GrantAbility(this, SwitchWeaponAbilityTSub);
	ADSAbilityHandle = AbilitySystem->GrantAbility(this, ADSAbilityTSub);

	
}

void AFPSCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	AFPSPlayerState* PS = GetPlayerState<AFPSPlayerState>();
	if (PS)
		// Set the ASC for clients. Server does this in FPSPlayerState::TryInjectDataIntoCharacter(AFPSCharacter* Character).
	{
		AbilitySystem = Cast<UFPSAbilitySystemComponent>(PS->GetAbilitySystemComponent());

		// Refresh ASC Actor Info for clients. Server will be refreshed by its AIController/PlayerController when it possesses a new Actor.
		if (AbilitySystem)
		{
			AbilitySystem->RefreshAbilityActorInfo();
		}
	}
}
#pragma endregion



#pragma region Controls
void AFPSCharacter::OnFirePressed()
{
	if (Inventory && Inventory->CurrentWeapon)
	{
		Inventory->CurrentWeapon->TryFireWeapon();
	}
}
void AFPSCharacter::OnReloadPressed()
{
	//Inventory->CurrentWeapon->Reload();
}
void AFPSCharacter::OnADSPressed()
{
	if (AbilitySystem)
	{
		AbilitySystem->TryActivateAbility(ADSAbilityHandle);
	}
}
void AFPSCharacter::OnADSReleased()
{
	if (AbilitySystem)
	{
		AbilitySystem->TryActivateAbility(ADSAbilityHandle);
	}
}
void AFPSCharacter::OnWeaponTogglePressed()
{
	AbilitySystem->TryActivateAbility(SwitchWeaponHandle);
	
}

void AFPSCharacter::OnMouseMoveVertical(float verticalMouseRate)
{
	Super::OnMouseMoveVertical(verticalMouseRate);
	
	frameVerticalMouseRate = verticalMouseRate;

}
void AFPSCharacter::OnMouseMoveHorizontal(float horizontalMouseRate)
{
	Super::OnMouseMoveHorizontal(horizontalMouseRate);
	
	frameHorizontalMouseRate = horizontalMouseRate;

}
#pragma endregion

bool AFPSCharacter::ServerSpawnDefaultInventory_Validate()
{
	return true;
}

void AFPSCharacter::ServerSpawnDefaultInventory_Implementation()
{
	if (GetLocalRole() == ROLE_Authority)
	{
		Inventory->ForServerSpawnDefaultInventory();
	}
}

void AFPSCharacter::OnDie()
{

}

FRotator AFPSCharacter::GetReplicatedNormalizedDeltaRotator()
{
	return ReplicatedNormalizedDeltaRotator.GetNormalized();
}

/*To do
1) 
*/
