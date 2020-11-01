// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "GameFramework/Controller.h"
#include "AbilitySystemComponent.h"

#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"

ABaseCharacter::ABaseCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	GetCapsuleComponent()->SetCapsuleHalfHeight(88);

	meshConstructedPosition = FVector(0, 0, -88);
	meshConstructedRotation = FRotator(0, 0, 0);

	GetMesh()->SetRelativeLocation(meshConstructedPosition);
	GetMesh()->SetRelativeRotation(meshConstructedRotation);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	


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

	//AbilitySystem = CreateDefaultSubobject<AAbilitySystemComponent>(TEXT("AbilitySystemComponent"));

	//The line of code that saved me days of confusion
	GetCharacterMovement()->bNetworkSkipProxyPredictionOnNetUpdate = false;		//for some reason I changed it back to false and it works now and also fix movement choppieness
}

void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABaseCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	DefaultPostProcessing.bOverride_AmbientOcclusionIntensity = true;
	DefaultPostProcessing.AmbientOcclusionIntensity = 1;
	DefaultPostProcessing.bOverride_ScreenSpaceReflectionQuality = true;
	DefaultPostProcessing.ScreenSpaceReflectionQuality = 100;
	DefaultPostProcessing.bOverride_ScreenPercentage = true;
	DefaultPostProcessing.ScreenPercentage = 100;
	DefaultPostProcessing.bOverride_VignetteIntensity = true;
	DefaultPostProcessing.VignetteIntensity = .41f;
	DefaultPostProcessing.bOverride_BloomIntensity = true;
	DefaultPostProcessing.BloomIntensity = 4.f;
	DefaultPostProcessing.bOverride_BloomThreshold = true;
	DefaultPostProcessing.BloomThreshold = 8.f;
	DefaultPostProcessing.bOverride_BloomThreshold = true;
	DefaultPostProcessing.BloomThreshold = -.057f;
	DefaultPostProcessing.bOverride_AutoExposureMinBrightness = true;
	DefaultPostProcessing.AutoExposureMinBrightness = .7f;
	DefaultPostProcessing.bOverride_AutoExposureMaxBrightness = true;
	DefaultPostProcessing.AutoExposureMaxBrightness = .7f;
	DefaultPostProcessing.bOverride_BloomDirtMask = true;
	DefaultPostProcessing.BloomDirtMask = DirtMask;
	DefaultPostProcessing.bOverride_BloomDirtMaskIntensity = true;
	DefaultPostProcessing.BloomDirtMaskIntensity = 40;
	DefaultPostProcessing.bOverride_LensFlareIntensity = true;
	DefaultPostProcessing.LensFlareIntensity = .01f;
	DefaultPostProcessing.bOverride_MobileHQGaussian = true;
	DefaultPostProcessing.bMobileHQGaussian = true;
	//DefaultPostProcessing.bOverride_DepthOfFieldMethod = true;
	//DefaultPostProcessing.DepthOfFieldMethod = EDepthOfFieldMethod::DOFM_Gaussian;
	DefaultPostProcessing.bOverride_DepthOfFieldFocalDistance = true;
	DefaultPostProcessing.DepthOfFieldFocalDistance = 3;	//distance blured near
	DefaultPostProcessing.bOverride_DepthOfFieldFocalRegion = true;
	DefaultPostProcessing.DepthOfFieldFocalRegion = 8047;	//depth of field basicly
	DefaultPostProcessing.bOverride_DepthOfFieldNearBlurSize = true;
	DefaultPostProcessing.DepthOfFieldNearBlurSize = 5;
	DefaultPostProcessing.bOverride_DepthOfFieldFarBlurSize = true;
	DefaultPostProcessing.DepthOfFieldFarBlurSize = 0;
	DefaultPostProcessing.bOverride_MotionBlurAmount = true;
	DefaultPostProcessing.MotionBlurAmount = 2;
	DefaultPostProcessing.bOverride_MotionBlurMax = true;
	DefaultPostProcessing.MotionBlurMax = 3;
	DefaultPostProcessing.bOverride_MotionBlurPerObjectSize = true;
	DefaultPostProcessing.MotionBlurPerObjectSize = .4f;

	FollowCamera->PostProcessSettings = DefaultPostProcessing;
}

void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAction("Run", IE_Pressed, this, &ABaseCharacter::OnRunPressed);
	PlayerInputComponent->BindAction("Run", IE_Released, this, &ABaseCharacter::OnRunReleased);

	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &ABaseCharacter::OnInteractPressed);
	PlayerInputComponent->BindAction("Interact", IE_Released, this, &ABaseCharacter::OnInteractReleased);

	PlayerInputComponent->BindAction("WeaponToggle", IE_Pressed, this, &ABaseCharacter::OnWeaponTogglePressed);
	PlayerInputComponent->BindAction("WeaponToggle", IE_Released, this, &ABaseCharacter::OnWeaponToggleReleased);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ABaseCharacter::OnFirePressed);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &ABaseCharacter::OnFireReleased);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &ABaseCharacter::OnReloadPressed);
	PlayerInputComponent->BindAction("Reload", IE_Released, this, &ABaseCharacter::OnReloadReleased);
	PlayerInputComponent->BindAction("ADS", IE_Pressed, this, &ABaseCharacter::OnADSPressed);
	PlayerInputComponent->BindAction("ADS", IE_Released, this, &ABaseCharacter::OnADSReleased);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ABaseCharacter::OnJumpPressed);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ABaseCharacter::OnJumpReleased);


	PlayerInputComponent->BindAxis("MoveUp", this, &ABaseCharacter::OnMoveUp);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABaseCharacter::OnMoveRight);

	PlayerInputComponent->BindAxis("LookUpRate", this, &ABaseCharacter::OnMouseMoveVertical);
	PlayerInputComponent->BindAxis("LookRightRate", this, &ABaseCharacter::OnMouseMoveHorizontal);

}

#pragma region Control Events
void ABaseCharacter::OnRunPressed()
{
	
}

void ABaseCharacter::OnRunReleased()
{
	
}

void ABaseCharacter::OnInteractPressed()
{

}

void ABaseCharacter::OnInteractReleased()
{
}

void ABaseCharacter::OnWeaponTogglePressed()
{

}

void ABaseCharacter::OnWeaponToggleReleased()
{

}

void ABaseCharacter::OnJumpPressed()
{
	Jump();
}

void ABaseCharacter::OnJumpReleased()
{
}

void ABaseCharacter::OnFirePressed()
{
}

void ABaseCharacter::OnFireReleased()
{
	
}

void ABaseCharacter::OnReloadPressed()
{

}

void ABaseCharacter::OnReloadReleased()
{

}

void ABaseCharacter::OnADSPressed()
{
}

void ABaseCharacter::OnADSReleased()
{
}

void ABaseCharacter::OnMouseMoveHorizontal(float horizontalMouseRate)
{
	AddControllerYawInput(BaseTurnRate * horizontalMouseRate * GetWorld()->GetDeltaSeconds());
}

void ABaseCharacter::OnMouseMoveVertical(float verticalMouseRate)
{
	AddControllerPitchInput(BaseLookUpRate * -verticalMouseRate * GetWorld()->GetDeltaSeconds());
}

void ABaseCharacter::OnMoveUp(float verticalMoveAmount)
{
	if ((Controller != NULL) && (verticalMoveAmount != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, verticalMoveAmount);
	}



}

void ABaseCharacter::OnMoveRight(float horizontalMoveAmount)
{
	if ((Controller != NULL) && (horizontalMoveAmount != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, horizontalMoveAmount);
	}
}
#pragma endregion