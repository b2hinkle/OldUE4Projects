// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/Interactable.h"
#include "Interfaces/Equiptable.h"
#include "AbilitySystemInterface.h"
#include "GameplayAbilitySpec.h"

#include "BaseWeapon.generated.h"

//Forward Declare FPSCharacter because #include would cause circular dependency
class AFPSCharacter;
class UInventory;
class UGunAttributeSet;
class UWeaponAttributeSet;
class UFPSAbilitySystemComponent;

USTRUCT(BlueprintType)
struct FWeaponInfo
{
	GENERATED_BODY()

public:
	FString weaponName;
};

UCLASS()
class FPS_API ABaseWeapon : public AActor, public IInteractable, public IEquiptable
{
	GENERATED_BODY()
	
public:	
	FWeaponInfo weaponInfo;
	

	UPROPERTY(Replicated)
		UWeaponAttributeSet* AttributeSet;
	UPROPERTY(EditDefaultsOnly, Category = AbilitySystem)
		TSubclassOf<UGameplayAbility> FireAbilityTSub;
	UPROPERTY(Replicated)
		FGameplayAbilitySpecHandle FireAbilityHandle;

	// Events
	ABaseWeapon();
	virtual void PostInitializeComponents() override;
	virtual void OnInteract() override;

#pragma region IEquiptable Events
	virtual void OnEnterInventory(AFPSCharacter* Instigator) override;
	virtual void OnExitInventory() override;
	virtual void OnEquip() override;
	virtual void OnUnEquip() override;
#pragma endregion

	FVector GetAdjustedAim() const;
	FVector GetCameraDamageStartLocation(const FVector& AimDir) const;
	FHitResult WeaponTrace(const FVector& StartTrace, const FVector& EndTrace) const;

	UPROPERTY(Replicated, BlueprintReadWrite)
		AFPSCharacter* FPSCharacter;
	UPROPERTY(Replicated)
		UFPSAbilitySystemComponent* FPSAbilitySystemComponent;

	USkeletalMeshComponent* GetSkeletalMesh() { return SkeletalMesh; }
	UStaticMeshComponent* GetMesh() { return Mesh; }

	virtual FHitResult Fire(int16 randomSeed);
	virtual void Reload();


	virtual bool TryFireWeapon();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		USkeletalMeshComponent* SkeletalMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* Mesh;

};
