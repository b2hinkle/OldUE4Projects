// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimationInstances/BaseAnimInstance.h"
#include "FPSCharacterAnimInstance.generated.h"

class AFPSCharacter;
/**
 * 
 */
UCLASS()
class FPS_API UFPSCharacterAnimInstance : public UBaseAnimInstance
{
	GENERATED_BODY()
	
	public:
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = References)
	AFPSCharacter* controlled;

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	float characterSpeed;

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Arms)
	bool ADS;

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	FRotator ReplicatedNormalizedDeltaRotator;

	virtual void NativeInitializeAnimation() override;

	virtual void NativeUpdateAnimation(float DeltaTimeX) override;
};
