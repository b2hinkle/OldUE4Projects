// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/RangedWeapon.h"
#include "AR4.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API AAR4 : public ARangedWeapon
{
	GENERATED_BODY()

public:
	AAR4();

	void PostInitializeComponents() override;
};
