// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Equiptable.generated.h"

class AFPSCharacter;

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEquiptable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class FPS_API IEquiptable
{
	GENERATED_BODY()

public:
	virtual void OnEnterInventory(AFPSCharacter* Instigator) =0;

	virtual void OnExitInventory() = 0;

	virtual void OnEquip() =0;

	virtual void OnUnEquip() =0;
};
