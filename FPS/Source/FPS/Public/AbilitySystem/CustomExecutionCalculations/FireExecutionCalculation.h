// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "FireExecutionCalculation.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API UFireExecutionCalculation : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()
	
public:
	void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, OUT FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const override;
};
