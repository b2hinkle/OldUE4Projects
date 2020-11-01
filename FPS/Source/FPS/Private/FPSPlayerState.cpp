// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSPlayerState.h"

#include "FPSCharacter.h"
#include "UnrealNetwork.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "FPSPlayerController.h"
#include "FPSAbilitySystemComponent.h"
#include "PlayerStateAttributeSet.h"
#include "FPSCharacterAttributeSet.h"
#include "WeaponAttributeSet.h"


#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"

void AFPSPlayerState::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AFPSPlayerState, CurrentCharacterInfo);
	DOREPLIFETIME(AFPSPlayerState, level);
}

AFPSPlayerState::AFPSPlayerState()
{	
	level = 1.0f;
	AbilitySystem = CreateDefaultSubobject<UFPSAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystem->SetIsReplicated(true);
	// Mixed mode means we only are replicated the GEs to ourself, not the GEs to simulated proxies. If another GDPlayerState (Hero) receives a GE,
	// we won't be told about it by the Server. Attributes, GameplayTags, and GameplayCues will still replicate to us.
	AbilitySystem->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UPlayerStateAttributeSet>(TEXT("AttributeSet"));
}

void AFPSPlayerState::PopulateCharacterInfo()
{
	// We would use this if we decide sometime to add the infos through code, not BP (ie: get them from a server)



	bInitialized = true;
}

FCharacterInfo* AFPSPlayerState::GetCurrentCharacterInfo()
{
	if (&CurrentCharacterInfo)
	{
		return &CurrentCharacterInfo;
	}
	else
	{
		return nullptr;
	}
}



void AFPSPlayerState::SetCurrentCharacterInfo(FCharacterInfo NewCharacterInfo)
{
	if (!bInitialized)
	{
		PopulateCharacterInfo();
	}

	if (HasAuthority())
	{
		CurrentCharacterInfo = NewCharacterInfo;
		OnRep_CurrentCharacterInfo();
	}
	else
	{
		Server_SetCharacterInfo(NewCharacterInfo);
	}
}

void AFPSPlayerState::OnRep_CurrentCharacterInfo()
{
	OnCurrentCharacterInfoChange.Broadcast();
}

bool AFPSPlayerState::Server_SetCharacterInfo_Validate(FCharacterInfo NewCharacterInfo)
{
	return true;
}
void AFPSPlayerState::Server_SetCharacterInfo_Implementation(FCharacterInfo NewCharacterInfo)
{
	SetCurrentCharacterInfo(NewCharacterInfo);
}

bool AFPSPlayerState::TryInjectDataIntoCharacter(AFPSCharacter* PossessedCharacter)
{
	if (GetCurrentCharacterInfo() == nullptr || !PossessedCharacter)
	{
		return false;
	}

	

	PossessedCharacter->SetAbilitySystem(AbilitySystem);
	if (AbilitySystem && PossessedCharacter->GetAbilitySystemComponent())
	{
		if (HasAuthority())
		{
			AbilitySystem->ClearAllAbilities();
		}

		AbilitySystem->InitAbilityActorInfo(this, PossessedCharacter);

		PossessedCharacter->OnAbilityDataInjected();

		BindAttributes(PossessedCharacter);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed To inject AbilitySystem data into character..... ASC was NULL"));
	}
	

	
	
	return true;
}

void AFPSPlayerState::BindAttributes(AFPSCharacter* PossessedCharacter)
{
	for (int i = 0; i < AbilitySystem->SpawnedAttributes.Num(); i++)
	{
		if (Cast<UPlayerStateAttributeSet>(AbilitySystem->SpawnedAttributes[i]))
		{

		}
		else if (Cast<UFPSCharacterAttributeSet>(AbilitySystem->SpawnedAttributes[i]))
		{

		}
		else if (Cast<UWeaponAttributeSet>(AbilitySystem->SpawnedAttributes[i]))
		{

		}
	}


	UFPSCharacterAttributeSet* CharacterAttributeSet = nullptr;
	if (PossessedCharacter)
	{
		CharacterAttributeSet = PossessedCharacter->CharacterAttributeSet;

	}

	if (AbilitySystem && CharacterAttributeSet)
	{
		//make sure that this updates every time you possess a new character
		HealthChangedDelegateHandle = AbilitySystem->GetGameplayAttributeValueChangeDelegate(CharacterAttributeSet->GetHealthAttribute()).AddUObject(this, &AFPSPlayerState::OnHealthChange);
		MaxHealthChangedDelegateHandle = AbilitySystem->GetGameplayAttributeValueChangeDelegate(CharacterAttributeSet->GetMaxHealthAttribute()).AddUObject(this, &AFPSPlayerState::OnMaxHealthChange);
	}
	

	//for far (external) attribute sets like the weapons maybe access them through the ASC here, and maybe update them through a pre made delegate if it exists

}

void AFPSPlayerState::OnHealthChange(const FOnAttributeChangeData& Data)
{
	UKismetSystemLibrary::PrintString(this, "sdfsdf");
}
void AFPSPlayerState::OnMaxHealthChange(const FOnAttributeChangeData& Data)
{

}
