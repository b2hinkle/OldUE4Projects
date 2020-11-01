// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponInfoWidget.h"
#include "..\..\Public\UI\WeaponInfoWidget.h"
#include "FPSCharacter.h"
#include "Inventory.h"
#include "BaseWeapon.h"
#include "RangedWeapon.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "WeaponAttributeSet.h"

#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"


void UWeaponInfoWidget::NativeConstruct()	//BeginPlay basicly BUT it only is called after AddToViewport() is called
{
	Super::NativeConstruct();

	FPSCharacterInventory = OwningFPSCharacter->GetInventory();
	if (OwningFPSCharacter)
	{
		if (FPSCharacterInventory)
		{
			FPSCharacterInventory->onClientCurrentWeaponChanged.AddDynamic(this, &UWeaponInfoWidget::UpdateWeaponText);
			FPSCharacterInventory->onClientCurrentWeaponChanged.AddDynamic(this, &UWeaponInfoWidget::UpdateAmmoText);
		}
		//OwningFPSCharacter->onClientFirePressed.AddDynamic(this, &UWeaponInfoWidget::UpdateAmmoText);
	}
}

void UWeaponInfoWidget::UpdateWeaponText()
{
	if (WeaponText && FPSCharacterInventory)
	{
		WeaponText->SetText(FText::FromString(FPSCharacterInventory->CurrentWeapon->weaponInfo.weaponName));
	}
}

void UWeaponInfoWidget::UpdateAmmoText()
{
	if (AmmoText && FPSCharacterInventory)
	{
		ABaseWeapon* CurrentWeapon = FPSCharacterInventory->CurrentWeapon;
		if (CurrentWeapon)
		{
			UWeaponAttributeSet* CurrentWeaponAttributeSet = CurrentWeapon->AttributeSet;

			if (CurrentWeaponAttributeSet)
			{
				AmmoText->SetText(FText::FromString(FString::FromInt(CurrentWeaponAttributeSet->GetCurrentAmmoInClip()) + " | " + FString::FromInt(CurrentWeaponAttributeSet->GetCurrentAmmo())));
			}
		}
		
	}
}
