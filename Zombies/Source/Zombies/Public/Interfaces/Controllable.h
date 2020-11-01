// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Controllable.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType)
class UControllable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ZOMBIES_API IControllable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	bool leftShiftDown;

	bool EDown;

	bool spaceDown;

	bool leftMouseButtonDown;

	bool rightMouseButtonDown;

	float horizontalMouseRateInput;

	float verticalMouseRateInput;

	float verticalMoveInput;

	float horizontalMoveInput;

	float vertizontalMoveInput;


	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Input")
	void Test();


	virtual void LeftShiftPressed();

	virtual void LeftShiftReleased();

	virtual void EPressed();

	virtual void EReleased();

	virtual void SpacePressed();

	virtual void SpaceReleased();

	virtual void LeftClickPressed();

	virtual void LeftClickReleased();

	virtual void RightClickPressed();

	virtual void RightClickReleased();

	virtual void UpdateHorizontalMouseRateInput(float axisValue);

	virtual void UpdateVerticalMouseRateInput(float axisValue);

	virtual void UpdateVerticalMoveInput(float axisValue);

	virtual void UpdateHorizontalMoveInput(float axisValue);

	//explicitly for the Playercontroller. Passes calculated value to the character
	virtual void UpdateVertizontalMoveInput();
};
