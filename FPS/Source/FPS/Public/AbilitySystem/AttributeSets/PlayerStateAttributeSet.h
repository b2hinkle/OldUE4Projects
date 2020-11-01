// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPSAttributeSet.h"
#include "PlayerStateAttributeSet.generated.h"


/**
 * 
 */
UCLASS()
class FPS_API UPlayerStateAttributeSet : public UFPSAttributeSet
{
	GENERATED_BODY()
	
		public:
	// Constructor and overrides
	UPlayerStateAttributeSet();

	// Attributes
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_TestVar, Category = "Attributes")
		FGameplayAttributeData TestVar;
	ATTRIBUTE_ACCESSORS(UPlayerStateAttributeSet, TestVar)

protected:
	//These OnReps exist to make sure the GAS internal representations are synchornized properly durring replication
	UFUNCTION()
		virtual void OnRep_TestVar(const FGameplayAttributeData& ServerBaseValue);

};
