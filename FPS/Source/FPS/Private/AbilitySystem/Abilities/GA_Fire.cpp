// Fill out your copyright notice in the Description page of Project Settings.


#include "GA_Fire.h"

#include "FPSCharacter.h"
#include "Inventory.h"
#include "RangedWeapon.h"
#include "GAT_Fire.h"
#include "WeaponAttributeSet.h"
#include "FPSPlayerState.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemGlobals.h"
#include "AbilityTask_PlayMontageAndWait.h"


#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"

bool UGA_Fire::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, OUT FGameplayTagContainer* OptionalRelevantTags) const
{
	if (!Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags))
	{
		return false;
	}

	return true;
}

void UGA_Fire::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	if (ActorInfo)
	{
		Character = Cast<AFPSCharacter>(ActorInfo->AvatarActor);
	}
	

	if (Character)
	{
		UInventory* Inventory = Character->GetInventory();
		if (Inventory)
		{
			WeaponToFire = Inventory->CurrentWeapon;
			if (WeaponToFire && WeaponToFire->AttributeSet && WeaponToFire->AttributeSet->GetCurrentAmmoInClip() >= 1)
			{
				if (CommitAbility(Handle, ActorInfo, ActivationInfo))	//Costs us 1 bullet in the clip through a GE	and starts the cooldow GE
				{
					int16 randomSeed = CurrentActivationInfo.GetActivationPredictionKey().Current;
					UGAT_Fire* Task = UGAT_Fire::CreateGAT_Fire(this, "FireProxy", WeaponToFire, randomSeed);
					Task->OnCompleted.AddDynamic(this, &UGA_Fire::OnTaskCompleted);
					Task->OnFailed.AddDynamic(this, &UGA_Fire::OnTaskFailed);
					Task->ReadyForActivation();

				}
				else
				{
					OnTaskFailed();
				}
			}
		}
	}
	
}

void UGA_Fire::OnTaskCompleted(FFireHitResult FireHitResult)
{
	if (FireHitResult.Impact.Actor.Get())
	{
		if (Cast<AFPSCharacter>(FireHitResult.Impact.Actor.Get()))
		{
			FGameplayEffectSpecHandle EffectSpecHandle = UAbilitySystemBlueprintLibrary::MakeSpecHandle(FireEffectClass.GetDefaultObject(), Character, WeaponToFire, 1);
			FGameplayAbilityTargetDataHandle TargetDataHandle = UAbilitySystemBlueprintLibrary::AbilityTargetDataFromHitResult(FireHitResult.Impact);
			UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(EffectSpecHandle, FGameplayTag::RequestGameplayTag(FName("BoneHitMultiplier")), FireHitResult.boneHitMultiplier);

			ApplyGameplayEffectSpecToTarget(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, EffectSpecHandle, TargetDataHandle);
		}
		else
		{
			FGameplayEffectContext* EffectContext = UAbilitySystemGlobals::Get().AllocGameplayEffectContext();
			EffectContext->AddInstigator(Character, WeaponToFire);
			FGameplayEffectContextHandle ContexHandle = FGameplayEffectContextHandle(EffectContext);
			ContexHandle.Get()->AddHitResult(FireHitResult.Impact);
			FGameplayCueParameters GCParams = UAbilitySystemBlueprintLibrary::MakeGameplayCueParameters(0, 0, ContexHandle, FGameplayTag(), FGameplayTag(), FGameplayTagContainer(), FGameplayTagContainer(), FVector(), FVector(), nullptr, nullptr, this, nullptr, 1, GetAbilityLevel(), nullptr);
			CurrentActorInfo->AbilitySystemComponent->ExecuteGameplayCue(FGameplayTag::RequestGameplayTag("GameplayCue.FireM1911"), GCParams);
		}
	}
	
	//ToDo: UAbilityTask_PlayMontageAndWait only works with the player character skeletal mesh so I need to make a custom GAT that will allow me to pass in a skeletal mesh and then perform the montage on that skeletal mesh. (Use UAbilityTask_PlayMontageAndWait as a guide)
	//UAbilityTask_PlayMontageAndWait* WeaponFireMontageTask /*UNCOMMENT THIS-> =*/ UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(this, TEXT("WeaponFireAnimProxy"), GunFireMontage);
	//WeaponFireMontageTask->ReadyForActivation();
	//WeaponFireMontageTask->OnCompleted.AddDynamic(this, &UGA_Fire::OnMontageTaskCompleted);
	//WeaponFireMontageTask->OnCancelled.AddDynamic(this, &UGA_Fire::OnMontageTaskCancelled);
	//WeaponFireMontageTask->OnInterrupted.AddDynamic(this, &UGA_Fire::OnMontageTaskInterrupted);
	//WeaponFireMontageTask->OnBlendOut.AddDynamic(this, &UGA_Fire::OnMontageTaskBlendOut);
}

void UGA_Fire::OnTaskFailed()
{
	UE_LOG(LogTemp, Warning, TEXT("Fire Task Failed"));
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
}



void UGA_Fire::OnMontageTaskCompleted()
{
	UKismetSystemLibrary::PrintString(this, "Completed");
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
}

void UGA_Fire::OnMontageTaskCancelled()
{
	UKismetSystemLibrary::PrintString(this, "Calcelled");
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
}

void UGA_Fire::OnMontageTaskInterrupted()
{
	UKismetSystemLibrary::PrintString(this, "Interrupted");
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
}

void UGA_Fire::OnMontageTaskBlendOut()
{
	UKismetSystemLibrary::PrintString(this, "Blending Out");
}


