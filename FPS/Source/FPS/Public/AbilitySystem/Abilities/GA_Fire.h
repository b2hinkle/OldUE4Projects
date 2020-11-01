// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GAT_Fire.h"
#include "FPSGameplayAbility.h"
#include "GA_Fire.generated.h"

class AFPSCharacter;
class ABaseWeapon;
/**
 * 
 */
UCLASS()
class FPS_API UGA_Fire : public UFPSGameplayAbility
{
	GENERATED_BODY()

protected:
	AFPSCharacter* Character;
	ABaseWeapon* WeaponToFire;
	UPROPERTY(EditDefaultsOnly, Category = Effects)
		TSubclassOf<UGameplayEffect> FireEffectClass;

	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags = nullptr, const FGameplayTagContainer* TargetTags = nullptr, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	
	UFUNCTION()
		void OnTaskCompleted(FFireHitResult Impact);
	UFUNCTION()
		void OnTaskFailed();

	UFUNCTION()
		void OnMontageTaskCompleted();
	UFUNCTION()
		void OnMontageTaskCancelled();
	UFUNCTION()
		void OnMontageTaskInterrupted();
	UFUNCTION()
		void OnMontageTaskBlendOut();

	UPROPERTY(EditDefaultsOnly)
		UAnimMontage* GunFireMontage;
};
