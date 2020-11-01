// Fill out your copyright notice in the Description page of Project Settings.


#include "GAT_ADS.h"

#include "AbilitySystemComponent.h"
#include "GameFramework\PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "FPSCharacter.h"
#include "Inventory.h"
#include "FPSCharacterAnimInstance.h"

UGAT_ADS* UGAT_ADS::CreateGAT_ADS(UGameplayAbility* OwningAbility, FName TaskInstanceName)
{
	UGAT_ADS* MyObj = NewAbilityTask<UGAT_ADS>(OwningAbility, TaskInstanceName);

	return MyObj;
}

void UGAT_ADS::Activate()
{
	if (!Ability)
	{
		OnFailed.Broadcast();
		return;
	}
	/////////// make sure to take into account if the player has no weapon equipted since that can be a case when this is fired
	UFPSCharacterAnimInstance* AnimInstance = Cast<UFPSCharacterAnimInstance>(Character->FPSMesh->GetAnimInstance());
	if (shouldADS)
	{
		if (Character && Character->GetInventory() && AnimInstance)
		{
			AnimInstance->ADS = true;
		}
		
	}
	else
	{	
		if (Character && AnimInstance)
		{
			AnimInstance->ADS = false;
		}
	}



	OnCompleted.Broadcast();
}

void UGAT_ADS::OnADSTagAdded()
{

}

void UGAT_ADS::OnADSTagRemoved()
{

}
