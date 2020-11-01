// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimationInstances/FPSCharacterAnimInstance.h"
#include "TPSSoldierAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API UTPSSoldierAnimInstance : public UFPSCharacterAnimInstance
{
	GENERATED_BODY()

	virtual void NativeInitializeAnimation() override;

	virtual void NativeUpdateAnimation(float DeltaTimeX) override;
};
