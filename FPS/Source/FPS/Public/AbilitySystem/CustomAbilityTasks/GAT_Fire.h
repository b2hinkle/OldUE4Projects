// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPSAbilityTask.h"
#include "GAT_Fire.generated.h"

class ABaseWeapon;
class AFPSCharacter;
class UGameplayAbility;

USTRUCT(BlueprintType)
struct FFireHitResult
{
	GENERATED_BODY()

public:
	FFireHitResult()
	{

	}
	FFireHitResult(FHitResult PassedInHitResult)
	{
		Impact = PassedInHitResult;
		HitBoneName = Impact.BoneName.ToString();

		if (HitBoneName.Compare(TEXT("Bone_006")) == 0)			//Headshot
		{
			boneHitMultiplier = 2;
		}
		else if (HitBoneName.Compare(TEXT("Bone_005")) == 0)	//Neck
		{
			boneHitMultiplier = 1.5;
		}
		else if (HitBoneName.Compare(TEXT("Bone_009")) == 0)	//Upper Right Arm
		{
			boneHitMultiplier = .9;
		}
		else if (HitBoneName.Compare(TEXT("Bone_011")) == 0)	//Lower Right Arm
		{
			boneHitMultiplier = .7;
		}
		else if (HitBoneName.Compare(TEXT("Bone_013")) == 0)	//Right Hand
		{
			boneHitMultiplier = .4;
		}
		else if (HitBoneName.Compare(TEXT("Bone_010")) == 0)	//Upper Left Arm
		{
			boneHitMultiplier = .9;
		}
		else if (HitBoneName.Compare(TEXT("Bone_012")) == 0)	//Lower Left Arm
		{
			boneHitMultiplier = .7;
		}
		else if (HitBoneName.Compare(TEXT("Bone_014")) == 0)	//Left Hand
		{
			boneHitMultiplier = .4;
		}
		else if (HitBoneName.Compare(TEXT("Bone_003")) == 0)	//Upper Torso (Chest)
		{
			boneHitMultiplier = 1;
		}
		else if (HitBoneName.Compare(TEXT("Bone_002")) == 0)	//Middle Torso
		{
			boneHitMultiplier = 1;
		}
		else if (HitBoneName.Compare(TEXT("Bone_001")) == 0)	//Lower Torso
		{
			boneHitMultiplier = 1;
		}
		else if (HitBoneName.Compare(TEXT("Root")) == 0)		//Hips
		{
			boneHitMultiplier = 1;
		}
		else if (HitBoneName.Compare(TEXT("Root_001")) == 0)	//Upper Right Leg
		{
			boneHitMultiplier = .9;
		}
		else if (HitBoneName.Compare(TEXT("Root_003")) == 0)	//Lower Right Leg
		{
			boneHitMultiplier = .7;
		}
		else if (HitBoneName.Compare(TEXT("Root_005")) == 0)	//Right Foot
		{
			boneHitMultiplier = .4;
		}
		else if (HitBoneName.Compare(TEXT("Root_002")) == 0)	//Upper Left Leg
		{
			boneHitMultiplier = .9;
		}
		else if (HitBoneName.Compare(TEXT("Root_004")) == 0)	//Lower Left Leg
		{
			boneHitMultiplier = .7;
		}
		else if (HitBoneName.Compare(TEXT("Root_006")) == 0)	//Left Foot
		{
			boneHitMultiplier = .4;
		}
		
	}

	FHitResult Impact;
	FString HitBoneName;
	float boneHitMultiplier;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGAT_OnCompleted, FFireHitResult, Impact);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGAT_OnFailed);
/**
 * 
 */
UCLASS()
class FPS_API UGAT_Fire : public UFPSAbilityTask
{
	GENERATED_BODY()
	
public:
	UFUNCTION(Category = "Ability|Tasks", meta = (DisplayName = "GAT_Fire", HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
		static UGAT_Fire* CreateGAT_Fire(UGameplayAbility* OwningAbility, FName TaskInstanceName, ABaseWeapon* WeaponToFire, int16 randomSeed);

	FGAT_OnCompleted OnCompleted;
	FGAT_OnFailed OnFailed;

protected:
	ABaseWeapon* WeaponToFire;
	int16 randomSeed;
	

	virtual void Activate() override;
};
