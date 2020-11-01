// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Cues/FPSGameplayCueNotify_Static.h"
#include "GC_BulletTrail.generated.h"

class UParticleSystem;


/**
 * 
 */
UCLASS()
class FPS_API UGC_BulletTrail : public UFPSGameplayCueNotify_Static
{
	GENERATED_BODY()
	
protected:
	virtual void CPPOnExecute(AActor* MyTarget, const FGameplayCueParameters& Parameters) const;

	UPROPERTY(EditDefaultsOnly)
		UParticleSystem* MussleFlashPS;
	UPROPERTY(EditDefaultsOnly)
		UParticleSystem* TrailPS;
};
