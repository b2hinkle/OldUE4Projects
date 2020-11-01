// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "FPSAbilitySystemComponent.h"

#include "FPSPlayerState.generated.h"


class AFPSCharacter;
class AFPSPlayerController;
class AFPSCharacterHUD;
class UPlayerStateAttributeSet;
class UFPSAbilitySystemComponent;

 // The controller can use this to know when the current character is changed,
 // and recreate or modify its pawn as needed (by calling UpdateCharacter())
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCharacterInfoChange);

// This should store the info for a character. A player may switch characters by
// calling SetCurrentCharacterInfo(FCharacterInfo NewCharacterInfo), and then calling UpdateCharacter().
USTRUCT(BlueprintType)
struct FCharacterInfo
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditDefaultsOnly, Category = CharacterClasses)
		TSubclassOf<AFPSCharacter> CharacterClass;

	UPROPERTY(EditDefaultsOnly, Category = CharacterClasses)
		TSubclassOf<AHUD> HUDClass;

	UPROPERTY(EditDefaultsOnly, Category = CharacterInfo)
		FString Name;
};

/**
 * Stores the available characters and the current character for the player
 */
UCLASS()
class FPS_API AFPSPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	AFPSPlayerState();

	void BindAttributes(AFPSCharacter* PossessedCharacter);
	// When the player starts the game, this might contact an online service to get
	// the list of characters, so that they can select one in the menu.
	// Currently, not much use since you can popultat it in the playerstate blueprint
	void PopulateCharacterInfo();

	// Set a new character to be active. Can be called on client
	void SetCurrentCharacterInfo(FCharacterInfo NewCharacterInfo);

	UFUNCTION(Server, Reliable, WithValidation)
		void Server_SetCharacterInfo(FCharacterInfo NewCharacterInfo);

	UPROPERTY()
		FCharacterInfoChange OnCurrentCharacterInfoChange;

	// Sets up the ASC on the new character so you can do Ability system login within the character
	// Also applies the current character info to the new character. Should be called on possession on both client
	// and server.
	bool TryInjectDataIntoCharacter(class AFPSCharacter* Character);

	// Will be null if no character has been selected yet
	FCharacterInfo* GetCurrentCharacterInfo();

	UAbilitySystemComponent* GetAbilitySystemComponent() const override { return AbilitySystem; }

	UPlayerStateAttributeSet* GetAttributeSet() const { return AttributeSet; }

	TArray<FCharacterInfo> GetCharacterInfos() { return CharacterInfos; }

	float GetCurrentLevel() const { return level; }

	bool bInitialized;

	
#pragma region Delegates
	FDelegateHandle HealthChangedDelegateHandle;
	FDelegateHandle MaxHealthChangedDelegateHandle;
#pragma endregion.


	virtual void OnHealthChange(const FOnAttributeChangeData& Data);
	virtual void OnMaxHealthChange(const FOnAttributeChangeData& Data);


	

protected:
	UPROPERTY()
		UFPSAbilitySystemComponent* AbilitySystem;
	UPROPERTY()
		UPlayerStateAttributeSet* AttributeSet;
	

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = CharacterInfo)
		TArray<FCharacterInfo> CharacterInfos;

	UPROPERTY(ReplicatedUsing = OnRep_CurrentCharacterInfo)
		FCharacterInfo CurrentCharacterInfo;

	UFUNCTION()
		void OnRep_CurrentCharacterInfo();

	AFPSPlayerController* PlayerController;

	UPROPERTY(Replicated)
	float level;

};



/*List of things to do.......
1) Create level system for actual player (must get and set though functions), not for individual characters
*/