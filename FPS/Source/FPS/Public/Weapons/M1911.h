// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/SkeletalMeshComponent.h"

#include "CoreMinimal.h"
#include "Weapons/RangedWeapon.h"
#include "M1911.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API AM1911 : public ARangedWeapon
{
	GENERATED_BODY()

public:
	AM1911();

	void PostInitializeComponents() override;
};
