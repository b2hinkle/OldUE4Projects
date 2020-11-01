// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FPSPlayerController.generated.h"

class AFPSCharacter;
class AFPSPlayerState;

/**
 * Ability System aware player controller.
 */
UCLASS()
class FPS_API AFPSPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	// Overrides and events
	virtual void BeginPlay() override;
	//Called on server
	virtual void OnPossess(class APawn* P) override;
	//Called on client
	virtual void AcknowledgePossession(class APawn* P) override;

	//Whether it's possessing a new character from a new current FCharacterInfo or whether the character needs to be updated on it's variables (ie its attribute set) this is the function that gets called
	UFUNCTION()
		void UpdateCharacterFromInfo();

	UFUNCTION(Server, Reliable, WithValidation)
		void ServerDie();

protected:

#pragma region ForTesting
	virtual void SetupInputComponent() override;
	void ADS();
	void Fire();
#pragma endregion
};
