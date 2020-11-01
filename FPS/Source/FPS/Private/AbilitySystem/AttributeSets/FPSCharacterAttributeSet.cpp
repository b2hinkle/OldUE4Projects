// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacterAttributeSet.h"

#include "UnrealNetwork.h"
#include "GameplayEffectExtension.h"
#include "GameplayEffect.h"
#include "Kismet/KismetSystemLibrary.h"


UFPSCharacterAttributeSet::UFPSCharacterAttributeSet()
	: MaxHealth(100), Health(GetMaxHealth()) 
{
}

void UFPSCharacterAttributeSet::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//DOREPLIFETIME( UMyAttributeSet, MyAttribute);     <---Chances are this is how you would ordinarily do it,
	//however in the case of attributes this'll lead to confusing and annoying replication errors, usually involving clientside ability prediction.
	DOREPLIFETIME_CONDITION_NOTIFY(UFPSCharacterAttributeSet, Health, COND_None, REPNOTIFY_Always);	//    <-----This is how it is done properly for attributes. 
	DOREPLIFETIME_CONDITION_NOTIFY(UFPSCharacterAttributeSet, Damage, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UFPSCharacterAttributeSet, Healing, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UFPSCharacterAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
}

bool UFPSCharacterAttributeSet::PreGameplayEffectExecute(struct FGameplayEffectModCallbackData& Data)
{
	Super::PreGameplayEffectExecute(Data);

	FGameplayAttribute AttributeToModify = Data.EvaluatedData.Attribute;





	if (AttributeToModify == GetDamageAttribute())
	{
		//Handle extra Attribute Modifications here (ie. armor, damage vulnerability)
		float hitBoneDmgMultiplier = Data.EffectSpec.GetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag("BoneHitMultiplier"));
		Data.EvaluatedData.Magnitude = Data.EvaluatedData.Magnitude * hitBoneDmgMultiplier;

	}

	if (AttributeToModify == GetHealingAttribute())
	{
		//Handle extra Attribute Modifications here (ie. less healing, extra healing)


	}

	return true;
}
void UFPSCharacterAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	FGameplayAttribute ModifiedAttribute = Data.EvaluatedData.Attribute;



	
	if (ModifiedAttribute == GetDamageAttribute())
    {
        // Treat damage as minus health
		const float damageDone = Damage.GetCurrentValue();
		SetDamage(0.f);

        SetHealth(FMath::Clamp(GetHealth() - damageDone, 0.f, GetMaxHealth()));
        
    }

	if (ModifiedAttribute == GetHealingAttribute())
	{
		const float healingDone = Healing.GetCurrentValue();
		SetHealing(0.f);

		SetHealth(FMath::Clamp(GetHealth() + Healing.GetCurrentValue(), 0.f, GetMaxHealth()));
		
	}
}

void UFPSCharacterAttributeSet::OnRep_Health(const FGameplayAttributeData& ServerBaseValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UFPSCharacterAttributeSet, Health, ServerBaseValue);
}
void UFPSCharacterAttributeSet::OnRep_Damage(const FGameplayAttributeData& ServerBaseValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UFPSCharacterAttributeSet, Damage, ServerBaseValue);
}
void UFPSCharacterAttributeSet::OnRep_Healing(const FGameplayAttributeData& ServerBaseValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UFPSCharacterAttributeSet, Healing, ServerBaseValue);
}
void UFPSCharacterAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& ServerBaseValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UFPSCharacterAttributeSet, MaxHealth, ServerBaseValue);
}
