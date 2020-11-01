// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/FPSGameplayAbility.h"

#include "GA_ADS.generated.h"

class AFPSCharacter;
class ABaseWeapon;
class UGameplayEffect;
class UFPSCharacterAnimInstance;

/**
 * 
 */
UCLASS()
class FPS_API UGA_ADS : public UFPSGameplayAbility
{
	GENERATED_BODY()
	
protected:
	AFPSCharacter* Character;
	UPROPERTY(EditDefaultsOnly, Category = Effects)
		TSubclassOf<UGameplayEffect> AddADSTagEffect;

	UFPSCharacterAnimInstance* FPSCharacterAnimInstance;

	UPROPERTY(EditDefaultsOnly, Category = Animation)
		UAnimMontage* ADSMontage;
	FActiveGameplayEffectHandle ADSEffectHandle;
	FOnActiveGameplayEffectRemoved_Info* OnADSTagRemovedDelegate;
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, OUT FGameplayTagContainer* OptionalRelevantTags) const;
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData);

	UFUNCTION()
		void OnTaskCompleted();
	UFUNCTION()
		void OnTaskFailed();
};
