// Fill out your copyright notice in the Description page of Project Settings.


#include "TemplateCharacter.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Public/DrawDebugHelpers.h"
#include "TemplatePickup.h"
#include "UnrealNetwork.h"

void ATemplateCharacter::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ATemplateCharacter, points);
}

ATemplateCharacter::ATemplateCharacter()
{
	maxHealth = 100;
	health = maxHealth;

	points = 0;

	if (GetCharacterMovement())
	{
		walkSpeed = GetCharacterMovement()->MaxWalkSpeed;
		runSpeed = GetCharacterMovement()->MaxWalkSpeed * 1.25;
	}
	isRunning = false;
	
	currentWeapon = Weapons::NONE;
	
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	meshConstructedPosition = FVector(0, 0, -90);
	meshConstructedRotation = FRotator(0, -90, 0);

	GetMesh()->SetRelativeLocation(meshConstructedPosition);
	GetMesh()->SetRelativeRotation(meshConstructedRotation);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;


	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)






	//The line of code that saved me days of confusion
	GetCharacterMovement()->bNetworkSkipProxyPredictionOnNetUpdate = true;
}

//////////////////////////////////////////////////////////////////////////
// Input


#pragma region Control Evvents
void ATemplateCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{

}

void ATemplateCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void ATemplateCharacter::LeftClickPressed()
{
	leftMouseButtonDown = true;
}

void ATemplateCharacter::LeftClickReleased()
{
	leftMouseButtonDown = false;
}

void ATemplateCharacter::RightClickPressed()
{
	rightMouseButtonDown = true;
}

void ATemplateCharacter::RightClickReleased()
{
	rightMouseButtonDown = false;
}

void ATemplateCharacter::RecieveWeapon(ATemplateWeapon* Weapon)
{
}

void ATemplateCharacter::Test_Implementation()
{

}

void ATemplateCharacter::LeftShiftPressed()
{
	leftShiftDown = true;

	SetRunning(true);

}

void ATemplateCharacter::LeftShiftReleased()
{
	leftShiftDown = false;

}

void ATemplateCharacter::EPressed()
{
	EDown = true;
	ServerUse();

	
}

void ATemplateCharacter::EReleased()
{
	EDown = false;


}

void ATemplateCharacter::SpacePressed()
{
	spaceDown = true;

	Jump();
}

void ATemplateCharacter::SpaceReleased()
{
	spaceDown = false;

	StopJumping();
}



void ATemplateCharacter::UpdateVerticalMoveInput(float axisValue)
{
	verticalMoveInput = axisValue;
	if ((Controller != NULL) && (verticalMoveInput != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, verticalMoveInput);
	}


	//Find better way to implement
	if (isRunning && (verticalMoveInput < .2f && GetCharacterMovement()->MaxWalkSpeed > walkSpeed || !GetCharacterMovement()->IsMovingOnGround()))
	{
		SetRunning(false);
	}
}

void ATemplateCharacter::UpdateHorizontalMoveInput(float axisValue)
{
	horizontalMoveInput = axisValue;

	if ((Controller != NULL) && (horizontalMoveInput != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, horizontalMoveInput);
	}
}

void ATemplateCharacter::UpdateVerticalMouseRateInput(float axisValue)
{
	verticalMouseRateInput = axisValue;

	AddControllerPitchInput(BaseLookUpRate * -verticalMouseRateInput * GetWorld()->GetDeltaSeconds());
}

void ATemplateCharacter::UpdateHorizontalMouseRateInput(float axisValue)
{
	horizontalMouseRateInput = axisValue;

	AddControllerYawInput(BaseTurnRate * horizontalMouseRateInput * GetWorld()->GetDeltaSeconds());
}
#pragma endregion





#pragma region RPCs

#pragma region SetRunning
void ATemplateCharacter::SetRunning(bool running)
{

	ServerSetRunning(running);
}



bool ATemplateCharacter::ServerSetRunning_Validate(bool running)
{
	return true;
}

void ATemplateCharacter::ServerSetRunning_Implementation(bool running)
{

	if (Role = ROLE_Authority)
	{
		if (running)
		{
			GetCharacterMovement()->MaxWalkSpeed = runSpeed;
			ClientSetRunning(true);
		}
		else
		{
			GetCharacterMovement()->MaxWalkSpeed = walkSpeed;
			ClientSetRunning(false);
		}
	}

}

void ATemplateCharacter::ClientSetRunning_Implementation(bool running)
{
	if (running)
	{
		GetCharacterMovement()->MaxWalkSpeed = runSpeed;
		isRunning = true;
	}
	else
	{
		GetCharacterMovement()->MaxWalkSpeed = walkSpeed;
		isRunning = false;
	}
}
#pragma endregion


#pragma region Die
bool ATemplateCharacter::ServerDie_Validate()
{
	return true;
}

void ATemplateCharacter::ServerDie_Implementation()
{
	Destroy();

	ClientDie();
}

void ATemplateCharacter::ClientDie_Implementation()
{
	Destroy();
}
#pragma endregion


#pragma region Use
bool ATemplateCharacter::ServerUse_Validate()
{
	
	return true;
}
void ATemplateCharacter::ServerUse_Implementation()
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

void ATemplateCharacter::ClientUse_Implementation(AActor* hitActor)
{
	
	

}
#pragma endregion



#pragma endregion



