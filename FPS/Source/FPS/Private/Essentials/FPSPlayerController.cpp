// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSPlayerController.h"

#include "FPSCharacter.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "FPSPlayerState.h"
#include "FPSCharacterHUD.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/GameFramework/GameMode.h"

#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"

void AFPSPlayerController::BeginPlay()
{
	Super::BeginPlay();

	AFPSPlayerState* FPSPlayerState = Cast<AFPSPlayerState>(PlayerState);

	if (FPSPlayerState)
	{
		FPSPlayerState->OnCurrentCharacterInfoChange.AddDynamic(this, &AFPSPlayerController::UpdateCharacterFromInfo);
	}
}

void AFPSPlayerController::OnPossess(APawn* P)
{
	Super::OnPossess(P);

	UpdateCharacterFromInfo();
}

void AFPSPlayerController::AcknowledgePossession(APawn* P)
{
	Super::AcknowledgePossession(P);

	UpdateCharacterFromInfo();
	
	
	AFPSCharacter* Character = Cast<AFPSCharacter>(P);
	if (Character)
	{
		Character->OnPossessedByClient(this);
	}
	AFPSCharacterHUD* FPSCharacterHUD = Cast<AFPSCharacterHUD>(GetHUD());
	if (FPSCharacterHUD)
	{
		FPSCharacterHUD->OnClientPossessFPSCharacter();
	}
}

// If trying to change character make sure to unpossess and destroy current character
void AFPSPlayerController::UpdateCharacterFromInfo()
{
	//We have the new CharacterInfo available if there is one (It would be stored in FPSPlayerState::CurrentCharacterInfo)
	AFPSPlayerState* FPSPlayerState = Cast<AFPSPlayerState>(PlayerState);
	AFPSCharacter* Char = Cast<AFPSCharacter>(GetPawn());
	if (!Char && HasAuthority())
	{
		
		if (GetPawn())	// We're possessing something else other than AFPSCharacter for some reason
		{
			return;	//I'll figure out what to do in this case later
		}

		FActorSpawnParameters ASP;
		ASP.Owner = this;
		ASP.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		if (FPSPlayerState->GetCurrentCharacterInfo()->CharacterClass)
		{
			Char = GetWorld()->SpawnActor<AFPSCharacter>(FPSPlayerState->GetCurrentCharacterInfo()->CharacterClass, ASP);	//Spawn new character as Char
			if (Char)
			{
				Possess(Char);
				ClientSetHUD(FPSPlayerState->GetCurrentCharacterInfo()->HUDClass);	//Once Character is possessed, make the new HUD class the one for that new Character
			}
			
		}
	}

	if (FPSPlayerState && Char)
	{
		if (FPSPlayerState->GetCurrentCharacterInfo() == nullptr && FPSPlayerState->GetCharacterInfos().IsValidIndex(0))
		{
			FPSPlayerState->SetCurrentCharacterInfo(FPSPlayerState->GetCharacterInfos()[0]);	// If CurrentCharacterInfo is null, assign it CharacterInfos[0]
		}


		if (FPSPlayerState->TryInjectDataIntoCharacter(Char))
		{
			GLog->Log(ELogVerbosity::Warning, FString::Printf(TEXT("%s: Data injected into new character"), *GetNameSafe(this)));
		}
	}
}



#pragma region ForTesting
bool AFPSPlayerController::ServerDie_Validate()
{
	return true;
}
void AFPSPlayerController::ServerDie_Implementation()
{
	if (GetLocalRole() == ROLE_Authority && GetPawn())
	{
		GetPawn()->Destroy();
	}
}

void AFPSPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	//InputComponent->BindAction("Fire", IE_Pressed, this, &AFPSPlayerController::Fire);
	//InputComponent->BindAction("ADS", IE_Pressed, this, &AFPSPlayerController::ADS);
}
void AFPSPlayerController::Fire()
{
	//ServerDie();
}
void AFPSPlayerController::ADS()
{
	//AFPSPlayerState* FPSPlayerState = Cast<AFPSPlayerState>(PlayerState);
	//if (FPSPlayerState && FPSPlayerState->GetCharacterInfos().IsValidIndex(0))
	//{
	//	FPSPlayerState->SetCurrentCharacterInfo(FPSPlayerState->GetCharacterInfos()[0]);
	//}
}
#pragma endregion




/*Things to do
1) Make a one time cast to FPSPlayerState for reference
*/
