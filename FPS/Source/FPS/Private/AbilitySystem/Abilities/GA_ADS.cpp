// Fill out your copyright notice in the Description page of Project Settings.


#include "GA_ADS.h"

#include "GAT_ADS.h"
#include "FPSCharacter.h"
#include "BaseWeapon.h"
#include "Camera/CameraComponent.h"
#include "FPSCharacterAnimInstance.h"

#include "Kismet/KismetSystemLibrary.h"

bool UGA_ADS::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, OUT FGameplayTagContainer* OptionalRelevantTags) const
{
	if (!Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags))
	{
		return false;
	}

	return true;
}

void UGA_ADS::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	if (ActorInfo)
	{
		if (!Character)
		{
			Character = Cast<AFPSCharacter>(ActorInfo->AvatarActor);
		}
		if (!FPSCharacterAnimInstance)
		{
			FPSCharacterAnimInstance = Cast<UFPSCharacterAnimInstance>(Character->FPSMesh->GetAnimInstance());
		}
	}

	if (CommitAbility(Handle, ActorInfo, ActivationInfo))
	{
		if (!ActorInfo->AbilitySystemComponent->HasMatchingGameplayTag(FGameplayTag::RequestGameplayTag("WeaponState.ADS")))
		{	

			

			ADSEffectHandle = ApplyGameplayEffectToOwner(Handle, ActorInfo, ActivationInfo, AddADSTagEffect.GetDefaultObject(), 1);
			if (FPSCharacterAnimInstance)
			{
				FPSCharacterAnimInstance->ADS = true;
			}
			UGAT_ADS* Task = UGAT_ADS::CreateGAT_ADS(this, "task to return from aiming");
			Task->shouldADS = true;
			Task->Character = Character;
			Task->OnCompleted.AddDynamic(this, &UGA_ADS::OnTaskCompleted);
			Task->OnFailed.AddDynamic(this, &UGA_ADS::OnTaskFailed);
			Task->ReadyForActivation();
		}
		else
		{
			ActorInfo->AbilitySystemComponent->RemoveActiveGameplayEffect(ADSEffectHandle);
			if (FPSCharacterAnimInstance)
			{
				FPSCharacterAnimInstance->ADS = false;
			}
			UGAT_ADS* Task = UGAT_ADS::CreateGAT_ADS(this, "task to return from aiming");
			Task->shouldADS = false;
			Task->Character = Character;
			Task->OnCompleted.AddDynamic(this, &UGA_ADS::OnTaskCompleted);
			Task->OnFailed.AddDynamic(this, &UGA_ADS::OnTaskFailed);
			Task->ReadyForActivation();
		}
	}
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
	
}







void UGA_ADS::OnTaskCompleted()
{

	
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
}

void UGA_ADS::OnTaskFailed()
{


	UE_LOG(LogTemp, Warning, TEXT("ADS Task Failed"));
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
}
