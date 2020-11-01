// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/TemplateWeapon.h"
#include "TemplateGun.generated.h"

/**
 * 
 */
UCLASS()
class ZOMBIES_API ATemplateGun : public ATemplateWeapon
{
	GENERATED_BODY()
	

public:
	ATemplateGun();

	virtual void OnInteract_Implementation(ATemplateCharacter* Instigator) override;

	virtual void MulticastOnWeaponIsOwned_Implementation(AFirstPersonCharacter* Instigator) override;

	virtual void ClientOnWeaponIsOwned_Implementation(AFirstPersonCharacter* Instigator) override;

};
