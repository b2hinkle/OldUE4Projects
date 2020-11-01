// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "BaseFPSWidget.h"

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WeaponInfoWidget.generated.h"

class UTextBlock;
class UInventory;

/**
 *	This is spawned after the client has possession over the FPSCharacter. 
 */
UCLASS()
class FPS_API UWeaponInfoWidget : public UBaseFPSWidget
{
	GENERATED_BODY()

	void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
		UTextBlock* WeaponText;

	UPROPERTY(meta = (BindWidget))
		UTextBlock* AmmoText;

	UInventory* FPSCharacterInventory;

	UFUNCTION()
		void UpdateWeaponText();
	UFUNCTION()
		void UpdateAmmoText();
};
