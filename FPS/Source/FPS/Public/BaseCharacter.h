// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameplayAbility.h"
#include "AbilitySystemComponent.h"
#include "FPSAbilitySystemComponent.h"
#include "AbilitySystemInterface.h"

#include "BaseCharacter.generated.h"

UCLASS()
class FPS_API ABaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ABaseCharacter();

	UAbilitySystemComponent* GetAbilitySystemComponent() const override { return AbilitySystem; }
	void SetAbilitySystem(UFPSAbilitySystemComponent* NewASC) { AbilitySystem = NewASC; }

	FORCEINLINE class USpringArmComponent* GetCameraBoom() { return CameraBoom; }

	FORCEINLINE class UCameraComponent* GetFollowCamera() { return FollowCamera; }

	virtual void Tick(float DeltaTime) override;
	virtual void PostInitializeComponents() override;

#pragma region Controls
	virtual void OnRunPressed();

	virtual void OnRunReleased();

	virtual void OnInteractPressed();

	virtual void OnInteractReleased();

	virtual void OnWeaponTogglePressed();

	virtual void OnWeaponToggleReleased();

	virtual void OnJumpPressed();

	virtual void OnJumpReleased();

	virtual void OnFirePressed();

	virtual void OnFireReleased();

	virtual void OnReloadPressed();

	virtual void OnReloadReleased();

	virtual void OnADSPressed();

	virtual void OnADSReleased();

	virtual void OnMouseMoveHorizontal(float horizontalMouseRate);

	virtual void OnMouseMoveVertical(float verticalMouseRate);

	virtual void OnMoveUp(float verticalMoveAmount);

	virtual void OnMoveRight(float horizontalMoveAmount);
#pragma endregion

protected:

	UPROPERTY(VisibleAnywhere, Category = AbilitySystem)
		UFPSAbilitySystemComponent* AbilitySystem;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FollowCamera;

	FPostProcessSettings DefaultPostProcessing;
	UPROPERTY(EditDefaultsOnly, Category = PostProcessing)
		UTexture* DirtMask;

	FVector meshConstructedPosition;
	FRotator meshConstructedRotation;

	virtual void BeginPlay() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;



};
