// Fill out your copyright notice in the Description page of Project Settings.

#include "GAT_SetCurrentWeapon.h"

#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "FPSCharacter.h"
#include "ActorComponents/Inventory.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"



UGAT_SetCurrentWeapon* UGAT_SetCurrentWeapon::CreateGAT_SetCurrentWeapon(UGameplayAbility* OwningAbility, FName TaskInstanceName, float index, ABaseWeapon* WeaponToEquip)
{
	UGAT_SetCurrentWeapon* MyObj = NewAbilityTask<UGAT_SetCurrentWeapon>(OwningAbility, TaskInstanceName);

	MyObj->index = index;
	MyObj->WeaponToEquip = WeaponToEquip;
	MyObj->PlayerCharacter = Cast<AFPSCharacter>(MyObj->GetAvatarActor());
	
	return MyObj;
}

void UGAT_SetCurrentWeapon::Activate()
{
	if (Ability == nullptr)
	{
		OnFailed.Broadcast();
		return;
	}

	if (index >= 0 && WeaponToEquip == nullptr)
	{
		SetByIndex(index);
	}
	else if (WeaponToEquip != nullptr && index < 0)
	{
		SetByReference(WeaponToEquip);
	}
	else
	{
		OnFailed.Broadcast();
	}
}

void UGAT_SetCurrentWeapon::SetByIndex(int32 index)
{
	if (PlayerCharacter)
	{
		PlayerCharacter->GetInventory()->SetCurrentWeaponByIndex(index);
		OnCompleted.Broadcast();
	}
	else
	{
		OnFailed.Broadcast();
	}
	
}

void UGAT_SetCurrentWeapon::SetByReference(ABaseWeapon* WeaponToEquip)
{
	if (PlayerCharacter)
	{
		PlayerCharacter->GetInventory()->SetCurrentWeapon(WeaponToEquip);
		OnCompleted.Broadcast();
	}
	else
	{
		OnFailed.Broadcast();
	}
}