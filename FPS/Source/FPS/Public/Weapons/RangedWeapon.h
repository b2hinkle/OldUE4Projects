// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Weapons/BaseWeapon.h"
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"

#include "RangedWeapon.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FGunStats
{
	GENERATED_BODY()

public:
	int32 maxAmmo;
	int32 maxClips;
	int32 clipSize;

	/** base weapon spread (degrees) */
	UPROPERTY(EditDefaultsOnly, Category = Accuracy)
		float WeaponSpread;

	/** targeting spread modifier */
	UPROPERTY(EditDefaultsOnly, Category = Accuracy)
		float TargetingSpreadMod;

	/** continuous firing: spread increment */
	UPROPERTY(EditDefaultsOnly, Category = Accuracy)
		float FiringSpreadIncrement;

	/** continuous firing: max increment */
	UPROPERTY(EditDefaultsOnly, Category = Accuracy)
		float FiringSpreadMax;

	/** weapon range */
	UPROPERTY(EditDefaultsOnly, Category = WeaponStat)
		float WeaponRange;

	/** damage amount */
	UPROPERTY(EditDefaultsOnly, Category = WeaponStat)
		int32 HitDamage;

	/** type of damage */
	UPROPERTY(EditDefaultsOnly, Category = WeaponStat)
		TSubclassOf<UDamageType> DamageType;

	/** hit verification: scale for bounding box of hit actor */
	UPROPERTY(EditDefaultsOnly, Category = HitVerification)
		float ClientSideHitLeeway;

	/** hit verification: threshold for dot product between view direction and hit direction */
	UPROPERTY(EditDefaultsOnly, Category = HitVerification)
		float AllowedViewDotHitDir;

	/** defaults */
	FGunStats()
	{
		WeaponSpread = 5.0f;
		TargetingSpreadMod = 0.25f;
		FiringSpreadIncrement = 1.0f;
		FiringSpreadMax = 10.0f;
		WeaponRange = 10000.0f;
		HitDamage = 10;
		//DamageType = UDamageType::StaticClass();		//implement my own damage type system
		ClientSideHitLeeway = 200.0f;
		AllowedViewDotHitDir = 0.8f;
	}
};

UCLASS()
class FPS_API ARangedWeapon : public ABaseWeapon
{
	GENERATED_BODY()

public:
	ARangedWeapon();
	
	FGunStats gunStats;

	void PostInitializeComponents() override;

	virtual FHitResult Fire(int16 randomSeed) override;

	virtual void Reload() override;

	float GetCurrentSpread();

	UFUNCTION(BlueprintCallable, BlueprintPure)
		FVector GetMuzzleLocation();
protected:


private:
	float currentFiringSpread;
	

};
