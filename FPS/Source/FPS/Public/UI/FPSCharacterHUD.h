// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseHUD.h"
#include "FPSCharacterHUD.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API AFPSCharacterHUD : public ABaseHUD
{
	GENERATED_BODY()


public:
	void PostInitializeComponents() override;

	void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	void OnClientPossessFPSCharacter();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		TSubclassOf<UUserWidget> CharacterWidget;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		TSubclassOf<UUserWidget> CenterPointWidget;

	/** if Overriding, do not call  super that way you can create your own character widget */
	UFUNCTION(BlueprintCallable)
		virtual void SpawnCharacterWidget();
	UFUNCTION(BlueprintCallable, Exec)
		virtual void DebugCenterPoint();

protected:
	UUserWidget* WidgetInstance;
};
