// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPSAbilityTask.h"
#include "GAT_SetCurrentWeapon.generated.h"

class ABaseWeapon;
class AFPSCharacter;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGAT_SetCurrentWeaponDelegate);

/**
 * 
 */
UCLASS()
class FPS_API UGAT_SetCurrentWeapon : public UFPSAbilityTask
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (DisplayName = "ExecuteMyTask", HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
	static UGAT_SetCurrentWeapon* CreateGAT_SetCurrentWeapon(UGameplayAbility* OwningAbility, FName TaskInstanceName, float index = -1, ABaseWeapon * WeaponToEquip = nullptr);

	FGAT_SetCurrentWeaponDelegate OnCompleted;
	FGAT_SetCurrentWeaponDelegate OnFailed;
	
	float index;
	ABaseWeapon* WeaponToEquip;
	AFPSCharacter* PlayerCharacter;

	virtual void Activate() override;

	void SetByIndex(int32 index);
	void SetByReference(ABaseWeapon* WeaponToEquip);
};
