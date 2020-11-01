// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayCueNotify_Static.h"
#include "FPSGameplayCueNotify_Static.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API UFPSGameplayCueNotify_Static : public UGameplayCueNotify_Static
{
	GENERATED_BODY()

protected:
	virtual void HandleGameplayCue(AActor* MyTarget, EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters) override;

	virtual void CPPOnExecute(AActor* MyTarget, const FGameplayCueParameters& Parameters) const;
	
};
