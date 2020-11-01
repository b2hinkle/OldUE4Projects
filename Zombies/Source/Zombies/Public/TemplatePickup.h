// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Interfaces/Interactable.h"
#include "TemplatePickup.generated.h"



/**
 * 
 */
UCLASS()
class ZOMBIES_API ATemplatePickup : public AStaticMeshActor, public IInteractable
{
	GENERATED_BODY()
	
public:
	ATemplatePickup();

	virtual void OnInteract_Implementation(ATemplateCharacter* Instigator) override;
};
