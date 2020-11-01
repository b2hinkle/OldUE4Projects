// Fill out your copyright notice in the Description page of Project Settings.


#include "GA_SetPreviousWeaponAsCurrent.h"

#include "CustomAbilityTasks/GAT_SetCurrentWeapon.h"
#include "BaseWeapon.h"
#include "FPSCharacter.h"
#include "ActorComponents/Inventory.h"

#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"

bool UGA_SetPreviousWeaponAsCurrent::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, OUT FGameplayTagContainer* OptionalRelevantTags) const
{
	if (!Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags))
	{
		return false;
	}

	return true;
}

void UGA_SetPreviousWeaponAsCurrent::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Character = Cast<AFPSCharacter>(ActorInfo->AvatarActor);
	if (Character)
	{
		Inventory = Character->GetInventory();
		if (Inventory)
		{
			WeaponToEquip = Character->GetInventory()->PreviousWeapon;
		}
	}
	
	

	if (Character && Inventory && WeaponToEquip)
	{
		if (CommitAbility(Handle, ActorInfo, ActivationInfo))
		{
			UGAT_SetCurrentWeapon* Task = UGAT_SetCurrentWeapon::CreateGAT_SetCurrentWeapon(this, "SetCurrentWeaponProxy", -1, WeaponToEquip);
			Task->OnCompleted.AddDynamic(this, &UGA_SetPreviousWeaponAsCurrent::OnTaskCompleted);
			Task->OnFailed.AddDynamic(this, &UGA_SetPreviousWeaponAsCurrent::OnTaskFailed);
			Task->ReadyForActivation();
		}
		else
		{
			OnTaskFailed();
		}
	}
	
	
}

void UGA_SetPreviousWeaponAsCurrent::OnTaskCompleted()
{
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
}

void UGA_SetPreviousWeaponAsCurrent::OnTaskFailed()
{
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
}
