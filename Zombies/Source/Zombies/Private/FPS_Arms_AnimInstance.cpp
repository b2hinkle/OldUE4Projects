// Fill out your copyright notice in the Description page of Project Settings.


#include "FPS_Arms_AnimInstance.h"
#include "TemplateCharacter.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"

void UFPS_Arms_AnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	isRunning = false;
	if (TryGetPawnOwner())
	{
		controlled = Cast<ATemplateCharacter>(TryGetPawnOwner());
	}
}

//Tick
void UFPS_Arms_AnimInstance::NativeUpdateAnimation(float DeltaTimeX)
{
	Super::NativeUpdateAnimation(DeltaTimeX);

	
	if (IsValid(controlled))
	{
		characterVelocity = controlled->GetVelocity().Size();
		isRunning = controlled->isRunning;

		//maybe need to do this differently using some interface method
		EDown = controlled->EDown;
		leftShiftDown = controlled->leftShiftDown;
		spaceDown = controlled->spaceDown;
		leftMouseButtonDown = controlled->leftMouseButtonDown;
		rightMouseButtonDown = controlled->rightMouseButtonDown;
		horizontalMouseRateInput = controlled->horizontalMouseRateInput;
		verticalMouseRateInput = controlled->verticalMouseRateInput;
		verticalMoveInput = controlled->verticalMoveInput;
		horizontalMoveInput = controlled->horizontalMoveInput;
	}
}