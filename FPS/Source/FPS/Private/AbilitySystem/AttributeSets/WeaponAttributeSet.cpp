// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponAttributeSet.h"

#include "UnrealNetwork.h"



UWeaponAttributeSet::UWeaponAttributeSet() 
	: CurrentAmmo(56), CurrentAmmoInClip(7)	//you can initialize attributes here
{

}

//void UWeaponAttributeSet::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
//{
//	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
//
//	
//}

void UWeaponAttributeSet::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//DOREPLIFETIME( UMyAttributeSet, MyAttribute); Chances are this is how you would ordinarily do it,
	//however in the case of attributes this'll lead to confusing and annoying replication errors, usually involving clientside ability prediction.
	DOREPLIFETIME_CONDITION_NOTIFY(UWeaponAttributeSet, CurrentAmmo, COND_None, REPNOTIFY_Always);	//This is how it is done properly for attributes. 
	DOREPLIFETIME_CONDITION_NOTIFY(UWeaponAttributeSet, CurrentAmmoInClip, COND_None, REPNOTIFY_Always);
}

void UWeaponAttributeSet::OnRep_CurrentAmmo(const FGameplayAttributeData& ServerBaseValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWeaponAttributeSet, CurrentAmmo, ServerBaseValue);

}

void UWeaponAttributeSet::OnRep_CurrentAmmoInClip(const FGameplayAttributeData& ServerBaseValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWeaponAttributeSet, CurrentAmmoInClip, ServerBaseValue);
}
