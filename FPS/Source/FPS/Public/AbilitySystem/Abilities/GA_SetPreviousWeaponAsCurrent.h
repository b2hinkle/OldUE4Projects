// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPSGameplayAbility.h"
#include "GA_SetPreviousWeaponAsCurrent.generated.h"

class AFPSCharacter;
class ABaseWeapon;
class UInventory;
/**
 * 
 */
UCLASS()
class FPS_API UGA_SetPreviousWeaponAsCurrent : public UFPSGameplayAbility
{
	GENERATED_BODY()

protected:
	AFPSCharacter* Character;
	UInventory* Inventory;
	ABaseWeapon* WeaponToEquip;

	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags = nullptr, const FGameplayTagContainer* TargetTags = nullptr, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	
	UFUNCTION()
		void OnTaskCompleted();
	UFUNCTION()
		void OnTaskFailed();
};
