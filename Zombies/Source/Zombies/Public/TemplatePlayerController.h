// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interfaces/Controllable.h"
#include "GameFramework/PlayerController.h"
#include "TemplatePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ZOMBIES_API ATemplatePlayerController : public APlayerController, public IControllable
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

	virtual void SetupInputComponent() override;

	class ATemplateCharacter* controlled;



	virtual void LeftShiftPressed() override;

	virtual void LeftShiftReleased() override;

	virtual void EPressed() override;

	virtual void EReleased() override;

	virtual void SpacePressed() override;

	virtual void SpaceReleased() override;

	virtual void LeftClickPressed() override;

	virtual void LeftClickReleased() override;

	virtual void RightClickPressed() override;

	virtual void RightClickReleased() override;

	virtual void UpdateHorizontalMouseRateInput(float axisValue) override;

	virtual void UpdateVerticalMouseRateInput(float axisValue) override;

	virtual void UpdateVerticalMoveInput(float axisValue) override;

	virtual void UpdateHorizontalMoveInput(float axisValue) override;

	//explicitly for the Playercontroller. Passes calculated value to the character
	virtual void UpdateVertizontalMoveInput() override;



	








public:

};

