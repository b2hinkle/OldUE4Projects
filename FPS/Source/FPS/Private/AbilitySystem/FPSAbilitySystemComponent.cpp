// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSAbilitySystemComponent.h"

#include "AbilitySystemGlobals.h"
#include "GameplayCueManager.h"
#include "FPSCharacter.h"
#include "FPSPlayerState.h"


UFPSAbilitySystemComponent::UFPSAbilitySystemComponent() 
{
	PlayerState = Cast<AFPSPlayerState>(OwnerActor);
	if (PlayerState)
	{
		PlayerState->GetCurrentLevel();
	}
}

void UFPSAbilitySystemComponent::GetActiveAbilitiesWithTags(const FGameplayTagContainer& GameplayTagContainer, TArray<UGameplayAbility*>& ActiveAbilities)
{
	TArray<FGameplayAbilitySpec*> AbilitiesToActivate;
	GetActivatableGameplayAbilitySpecsByAllMatchingTags(GameplayTagContainer, AbilitiesToActivate, false);

	// Iterate the list of all ability specs
	for (FGameplayAbilitySpec* Spec : AbilitiesToActivate)
	{
		// Iterate all instances on this ability spec
		TArray<UGameplayAbility*> AbilityInstances = Spec->GetAbilityInstances();

		for (UGameplayAbility* ActiveAbility : AbilityInstances)
		{
			ActiveAbilities.Add(Cast<UGameplayAbility>(ActiveAbility));
		}
	}
}

FGameplayAbilitySpecHandle UFPSAbilitySystemComponent::GrantAbility(AActor* ContexActor, TSubclassOf<UGameplayAbility> NewAbility)
{
	if (NewAbility && ContexActor->GetLocalRole() == ROLE_Authority)
	{
		return GiveAbility(FGameplayAbilitySpec(NewAbility.GetDefaultObject(), 1));
	}
	
	return FGameplayAbilitySpecHandle();

}

float UFPSAbilitySystemComponent::GetLevel() const
{
	if (PlayerState)
	{
		return PlayerState->GetCurrentLevel();
	}

	return 1;
}

UFPSAbilitySystemComponent* UFPSAbilitySystemComponent::GetAbilitySystemComponentFromActor(const AActor* Actor, bool LookForComponent)
{
	return Cast<UFPSAbilitySystemComponent>(UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Actor, LookForComponent));
}

void UFPSAbilitySystemComponent::ExecuteGameplayCueLocal(const FGameplayTag GameplayCueTag, const FGameplayCueParameters & GameplayCueParameters)
{
	UAbilitySystemGlobals::Get().GetGameplayCueManager()->HandleGameplayCue(GetOwner(), GameplayCueTag, EGameplayCueEvent::Type::Executed, GameplayCueParameters);
}
void UFPSAbilitySystemComponent::AddGameplayCueLocal(const FGameplayTag GameplayCueTag, const FGameplayCueParameters & GameplayCueParameters)
{
	UAbilitySystemGlobals::Get().GetGameplayCueManager()->HandleGameplayCue(GetOwner(), GameplayCueTag, EGameplayCueEvent::Type::OnActive, GameplayCueParameters);
}
void UFPSAbilitySystemComponent::RemoveGameplayCueLocal(const FGameplayTag GameplayCueTag, const FGameplayCueParameters & GameplayCueParameters)
{
	UAbilitySystemGlobals::Get().GetGameplayCueManager()->HandleGameplayCue(GetOwner(), GameplayCueTag, EGameplayCueEvent::Type::Removed, GameplayCueParameters);
}





//Would be very very useful if I had this method working properly for here
///void AGun::AddAttributeSetToASC(UAttributeSet* AttributeSet)
///{
///	UAbilitySystemComponent* ASC = FPSCharacter->GetAbilitySystemComponent();
///	if (ASC)
///	{
///		if (!ASC->SpawnedAttributes.Contains(AttributeSet))	//if the ASC dosn't have the attribute set
///		{
///			if (!AttributeSet)	//if said attribute set is nullptr
///			{
///				AttributeSet = NewObject<UGunAttributeSet>(FPSCharacter->GetPlayerState(), UGunAttributeSet::StaticClass());
///				ASC->AddDefaultSubobjectSet(AttributeSet);
///				ASC->ForceReplication();
///			}
///			else				//if said attribute set has already been spawned
///			{
///				ASC->AddDefaultSubobjectSet(AttributeSet);
///				ASC->ForceReplication();
///			}
///		}
///
///	}
///}