// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BaseHUD.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API ABaseHUD : public AHUD
{
	GENERATED_BODY()


public:
	ABaseHUD();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		TSubclassOf<UUserWidget> MainMenuWidget;

	


	UFUNCTION(BlueprintCallable)
		void SpawnMainMenu();



protected:
	virtual void BeginPlay() override;
};
