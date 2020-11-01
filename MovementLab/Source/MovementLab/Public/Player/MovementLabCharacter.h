// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "MovementLabCharacter.generated.h"


class USpringArmComponent;
class UCameraComponent;



UCLASS(config=Game)
class AMovementLabCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = Camera)
		USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleDefaultsOnly, Category = Camera)
		UCameraComponent* FollowCamera;
public:
	AMovementLabCharacter(const FObjectInitializer& PCIP);

	USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	UPROPERTY(VisibleDefaultsOnly, Category = Movement)
		float WalkSpeed;
	UPROPERTY(VisibleDefaultsOnly, Category = Movement)
		float RunSpeed;


protected:
	float BaseTurnRate;
	float BaseLookUpRate;

	// Action
	virtual void JumpPressed();
	virtual void JumpReleased();
	virtual void SprintPressed();
	virtual void SprintReleased();
	virtual void InteractPressed();
	virtual void InteractReleased();
	// Axis
	virtual void MoveForward(float Value);
	virtual void MoveRight(float Value);
	virtual void TurnAtRate(float Rate);
	virtual void LookUpAtRate(float Rate);

	
	virtual void PostInitializeComponents() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};

