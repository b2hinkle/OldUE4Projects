// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "FPS_Arms_AnimInstance.generated.h"

/**
 * 
 */
UCLASS(transient, Blueprintable, hideCategories = AnimInstance, BlueprintType)
class ZOMBIES_API UFPS_Arms_AnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	/** Is Moving */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
		bool EDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
		bool leftShiftDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
		bool spaceDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
		bool leftMouseButtonDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
		bool rightMouseButtonDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
		bool isRunning;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
		float horizontalMouseRateInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
		float verticalMouseRateInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
		float verticalMoveInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
		float horizontalMoveInput;

	//init and tick
public:
	

	UPROPERTY()
	class ATemplateCharacter* controlled;

	float characterVelocity;

	virtual void NativeInitializeAnimation() override;

	virtual void NativeUpdateAnimation(float DeltaTimeX) override;
};
