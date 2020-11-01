// Fill out your copyright notice in the Description page of Project Settings.


#include "GAT_Fire.h"

#include "FPSCharacter.h"
#include "Inventory.h"
#include "BaseWeapon.h"
#include "RangedWeapon.h"
#include "WeaponAttributeSet.h"
#include "GameplayAbility.h"

#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"

UGAT_Fire* UGAT_Fire::CreateGAT_Fire(UGameplayAbility* OwningAbility, FName TaskInstanceName, ABaseWeapon* WeaponToFire, int16 randomSeed)
{
	UGAT_Fire* MyObj = NewAbilityTask<UGAT_Fire>(OwningAbility, TaskInstanceName);

	MyObj->WeaponToFire = WeaponToFire;
	MyObj->randomSeed = randomSeed;

	return MyObj;
}

void UGAT_Fire::Activate()
{
	if (!Ability || !WeaponToFire)
	{
		OnFailed.Broadcast();
		return;
	}

	
	FFireHitResult FireHitResult = FFireHitResult(WeaponToFire->Fire(randomSeed));

	

	OnCompleted.Broadcast(FireHitResult);
}
