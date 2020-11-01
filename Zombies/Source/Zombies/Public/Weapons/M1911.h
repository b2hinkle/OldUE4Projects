// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/TemplateGun.h"
#include "M1911.generated.h"

/**
 * 
 */
UCLASS()
class ZOMBIES_API AM1911 : public ATemplateGun
{
	GENERATED_BODY()
	
public:
	AM1911();

	virtual void OnInteract_Implementation(ATemplateCharacter* Instigator) override;

	void MulticastOnWeaponIsOwned_Implementation(AFirstPersonCharacter* Instigator) override;

	void ClientOnWeaponIsOwned_Implementation(AFirstPersonCharacter* Instigator) override;
};
