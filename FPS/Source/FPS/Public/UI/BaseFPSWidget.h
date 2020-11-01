// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseFPSWidget.generated.h"

class AFPSCharacter;
/**
 * Base class for all FPS widgets. Inheriting from it gives you some cached data
 */
UCLASS()
class FPS_API UBaseFPSWidget : public UUserWidget
{
	GENERATED_BODY()


protected:
	void NativeConstruct() override;

	AFPSCharacter* OwningFPSCharacter;
};
