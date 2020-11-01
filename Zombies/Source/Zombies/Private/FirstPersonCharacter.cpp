// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstPersonCharacter.h"

#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"

AFirstPersonCharacter::AFirstPersonCharacter()
{
	armsMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Arms"));
	armsMesh->SetupAttachment(GetFollowCamera());

	armsMeshConstructedPosition = FVector(53.0, -0.0000018, -20);
	armsMeshConstructedRotation = FRotator(0, 90,0);
	armsMeshConstructedScale = FVector(80,80,80);
	armsMesh->SetRelativeLocationAndRotation(armsMeshConstructedPosition, armsMeshConstructedRotation);
	armsMesh->SetRelativeScale3D(armsMeshConstructedScale);

	armsMesh->SetOnlyOwnerSee(true);				// Set so only owner can see mesh
	armsMesh->bCastDynamicShadow = false;			// Disallow mesh to cast dynamic shadows
	armsMesh->CastShadow = false;					// Disallow mesh to cast other shadows

	HoldingWeapons.Add(nullptr);
	HoldingWeapons.Add(nullptr);


	//M1911Player = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("M1911Player"));
	//M1911Player->SetupAttachment(RootComponent); 
	//M1911Player->AttachToComponent(armsMesh, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("bRightMiddle"));
	//M1911Player->SetRelativeScale3D(M1911Size);

	//M1911Player->SetOnlyOwnerSee(true);				// Set so only owner can see mesh
	//M1911Player->bCastDynamicShadow = false;			// Disallow mesh to cast dynamic shadows
	//M1911Player->CastShadow = false;					// Disallow mesh to cast other shadows




	cameraBoomConstructedPosition = FVector(0, 0, 44.2299995);
	cameraBoomConstructedArmLength = 0;
	GetCameraBoom()->SetRelativeLocation(cameraBoomConstructedPosition);
	GetCameraBoom()->TargetArmLength = cameraBoomConstructedArmLength;

	
}

void AFirstPersonCharacter::BeginPlay()
{
	Super::BeginPlay();

	
	if (IsLocallyControlled())
	{
		GetMesh()->SetHiddenInGame(true);
	}
}


void AFirstPersonCharacter::SwitchWeapon(int index)
{

}

void AFirstPersonCharacter::ToggleWeapon()
{

}

void AFirstPersonCharacter::ServerUse_Implementation()
{
	if (Role = ROLE_Authority)
	{
		FHitResult Hit;

		float RayLength = 200;

		FVector StartLocation = FollowCamera->GetComponentLocation();

		FVector EndLocation = StartLocation + (FollowCamera->GetForwardVector() * RayLength);

		FCollisionQueryParams CollisionParameters;
		CollisionParameters.AddIgnoredActor(this);

		GetWorld()->LineTraceSingleByChannel(Hit, StartLocation, EndLocation, ECollisionChannel::ECC_WorldDynamic, CollisionParameters);

		AActor* hitActor = Hit.GetActor();

		if (hitActor)
		{
			if (hitActor->GetClass()->ImplementsInterface(UInteractable::StaticClass()))
			{
				IInteractable::Execute_OnInteract(hitActor, this);
				ClientUse(hitActor);
			}
		}
	}
}

void AFirstPersonCharacter::ClientUse_Implementation(AActor* hitActor)
{

}

void AFirstPersonCharacter::RecieveWeapon(ATemplateWeapon* Weapon)
{
	ObtainedWeapon = Weapon;
	HoldingWeapons[0] = ObtainedWeapon;


}
