// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AbilitySystemComponent.h"

#include "CoreMinimal.h"
#include "FPSAttributeSet.h"
#include "WeaponAttributeSet.generated.h"



/**
 *
 */
UCLASS()
class FPS_API UWeaponAttributeSet : public UFPSAttributeSet
{
	GENERATED_BODY()

public:
	// Constructor and overrides
	UWeaponAttributeSet();

	// Attributes
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_CurrentAmmo, Category = "Attributes")
		FGameplayAttributeData CurrentAmmo;
	ATTRIBUTE_ACCESSORS(UWeaponAttributeSet, CurrentAmmo)

		UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_CurrentAmmoInClip, Category = "Attributes")
		FGameplayAttributeData CurrentAmmoInClip;
	ATTRIBUTE_ACCESSORS(UWeaponAttributeSet, CurrentAmmoInClip)

protected:
	//These OnReps exist to make sure the GAS internal representations are synchornized properly durring replication
	UFUNCTION()
		virtual void OnRep_CurrentAmmo(const FGameplayAttributeData& ServerBaseValue);

	UFUNCTION()
		virtual void OnRep_CurrentAmmoInClip(const FGameplayAttributeData& ServerBaseValue);
};
