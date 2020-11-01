// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "FPSAbilitySystemComponent.generated.h"

class AFPSPlayerState;
/**
 * 
 */
UCLASS()
class FPS_API UFPSAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:
	// Constructors and overrides
	UFPSAbilitySystemComponent();
	virtual bool ShouldDoServerAbilityRPCBatch() const override { return true; }

	FGameplayAbilitySpecHandle GrantAbility(AActor* ContexActor, TSubclassOf<UGameplayAbility> NewAbility);

	/** Returns a list of currently active ability instances that match the tags */
	void GetActiveAbilitiesWithTags(const FGameplayTagContainer& GameplayTagContainer, TArray<UGameplayAbility*>& ActiveAbilities);

	/** Returns the default level used for ability activations, derived from the character */
	float GetLevel() const;

	/** Version of function in AbilitySystemGlobals that returns correct type */
	static UFPSAbilitySystemComponent* GetAbilitySystemComponentFromActor(const AActor* Actor, bool LookForComponent = false);

	void ExecuteGameplayCueLocal(const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters);
	void AddGameplayCueLocal(const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters);
	void RemoveGameplayCueLocal(const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters);

protected:
	AFPSPlayerState* PlayerState;
};
