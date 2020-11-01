// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPSAttributeSet.h"
#include "FPSCharacterAttributeSet.generated.h"






/**
 * 
 */
UCLASS()
class FPS_API UFPSCharacterAttributeSet : public UFPSAttributeSet
{
	GENERATED_BODY()

public:
	// Constructor and overrides
	UFPSCharacterAttributeSet();

	// Attributes
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxHealth, Category = "Attributes")
		FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UFPSCharacterAttributeSet, MaxHealth)
	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Health, Category = "Attributes", meta = (HideFromModifiers))
		FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UFPSCharacterAttributeSet, Health)

	/** This Damage is just used for applying negative health mods. Its not a 'persistent' attribute. */
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Damage, Category = "Attributes", meta = (HideFromLevelInfos))	// You can't make a GameplayEffect 'powered' by Damage (Its transient)
		FGameplayAttributeData Damage;
	ATTRIBUTE_ACCESSORS(UFPSCharacterAttributeSet, Damage)

	/** This Damage is just used for applying negative health mods. Its not a 'persistent' attribute. */
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Healing, Category = "Attributes", meta = (HideFromLevelInfos))	// You can't make a GameplayEffect 'powered' by Damage (Its transient)
		FGameplayAttributeData Healing;
	ATTRIBUTE_ACCESSORS(UFPSCharacterAttributeSet, Healing)

	

protected:
	virtual bool PreGameplayEffectExecute(struct FGameplayEffectModCallbackData &Data) override;
	virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData &Data) override;

	//These OnReps exist to make sure the GAS internal representations are synchornized properly durring replication
	UFUNCTION()
		virtual void OnRep_Health(const FGameplayAttributeData& ServerBaseValue);
	UFUNCTION()
		virtual void OnRep_Damage(const FGameplayAttributeData& ServerBaseValue);
	UFUNCTION()
		virtual void OnRep_Healing(const FGameplayAttributeData& ServerBaseValue);
	UFUNCTION()
		virtual void OnRep_MaxHealth(const FGameplayAttributeData& ServerBaseValue);
};
