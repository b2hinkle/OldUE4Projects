// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSGameplayAbility.h"

UFPSGameplayAbility::UFPSGameplayAbility()
{
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	bServerRespectsRemoteAbilityCancellation = false;
}
