// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Player/MovementLabCharacter.h"

#include "MovementLabCharacterClawShot.generated.h"



/**
 * 
 */
UCLASS()
class MOVEMENTLAB_API AMovementLabCharacterClawShot : public AMovementLabCharacter
{
	GENERATED_BODY()

public:
	AMovementLabCharacterClawShot(const FObjectInitializer& PCIP);

protected:
	// Action
	virtual void JumpPressed() override;
	virtual void JumpReleased() override;
	virtual void SprintPressed() override;
	virtual void SprintReleased() override;
	virtual void InteractPressed() override;
	virtual void InteractReleased() override;
	// Axis
	virtual void MoveForward(float Value) override;
	virtual void MoveRight(float Value) override;
	virtual void TurnAtRate(float Rate) override;
	virtual void LookUpAtRate(float Rate) override;
	
};
