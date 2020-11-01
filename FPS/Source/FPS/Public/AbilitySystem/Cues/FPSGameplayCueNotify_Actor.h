// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayCueNotify_Actor.h"
#include "FPSGameplayCueNotify_Actor.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API AFPSGameplayCueNotify_Actor : public AGameplayCueNotify_Actor
{
	GENERATED_BODY()
	
protected:
	virtual void HandleGameplayCue(AActor* MyTarget, EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters) override;

	virtual void CPPOnExecute(AActor* MyTarget, const FGameplayCueParameters& Parameters) const;
};
