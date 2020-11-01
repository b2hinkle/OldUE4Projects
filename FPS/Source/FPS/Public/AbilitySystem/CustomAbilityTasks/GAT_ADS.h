// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/CustomAbilityTasks/FPSAbilityTask.h"
#include "GAT_ADS.generated.h"

class ABaseWeapon;
class AFPSCharacter;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGATDelegate);

/**
 * 
 */
UCLASS()
class FPS_API UGAT_ADS : public UFPSAbilityTask
{
	GENERATED_BODY()
	
public:
	UFUNCTION(Category = "Ability|Tasks", meta = (DisplayName = "GAT_ADS", HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
		static UGAT_ADS* CreateGAT_ADS(UGameplayAbility* OwningAbility, FName TaskInstanceName);

	FGATDelegate OnCompleted;
	FGATDelegate OnFailed;
	bool shouldADS;
	AFPSCharacter* Character;

protected:
	virtual void Activate() override;

	UFUNCTION()
		void OnADSTagAdded();
	UFUNCTION()
		void OnADSTagRemoved();
	
};
