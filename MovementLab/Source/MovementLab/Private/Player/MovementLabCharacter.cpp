// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MovementLabCharacter.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

#include "Kismet/KismetSystemLibrary.h"
#include "DrawDebugHelpers.h"



AMovementLabCharacter::AMovementLabCharacter(const FObjectInitializer& PCIP)
	: Super(PCIP.SetDefaultSubobjectClass<UCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Movement
	WalkSpeed = 400.f;
	RunSpeed = 600.f;
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;

	// Set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 600.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;


	// Mesh defaults
	GetMesh()->SetRelativeLocation(FVector(0.f, 0.f, -96.f));
	GetMesh()->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));
	GetMesh()->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));

	// Create CameraBoom
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f;
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create FollowCamera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm
}
void AMovementLabCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();


}

//////////////////////////////////////////////////////////////////////////
// Input
void AMovementLabCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// Action
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMovementLabCharacter::JumpPressed);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AMovementLabCharacter::JumpReleased);
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AMovementLabCharacter::SprintPressed);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AMovementLabCharacter::SprintReleased);
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &AMovementLabCharacter::InteractPressed);
	PlayerInputComponent->BindAction("Interact", IE_Released, this, &AMovementLabCharacter::InteractReleased);
	// Axis
	PlayerInputComponent->BindAxis("MoveForward", this, &AMovementLabCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMovementLabCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AMovementLabCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMovementLabCharacter::LookUpAtRate);
}

void AMovementLabCharacter::JumpPressed()
{
	Jump();
}
void AMovementLabCharacter::JumpReleased()
{
	StopJumping();
}

void AMovementLabCharacter::SprintPressed()
{

}
void AMovementLabCharacter::SprintReleased()
{

}

void AMovementLabCharacter::InteractPressed()
{

}
void AMovementLabCharacter::InteractReleased()
{

}


void AMovementLabCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}
void AMovementLabCharacter::MoveRight(float Value)
{
	if ( (Controller != NULL) && (Value != 0.0f) )
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Value);
	}
}

void AMovementLabCharacter::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}
void AMovementLabCharacter::LookUpAtRate(float Rate)
{
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}
