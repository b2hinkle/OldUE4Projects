// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"

#include "Inventory.generated.h"

class ABaseWeapon;
class AFPSCharacter;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FClientCurrentWeaponChanged);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FPS_API UInventory : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventory();

	FClientCurrentWeaponChanged onClientCurrentWeaponChanged;

	bool inventoryInitialized;

	//Should get called by the owner of the inventory
	void ForServerSpawnDefaultInventory();

	void AddWeapon(ABaseWeapon* WeaponToAdd, bool setAsCurrent = true);

	void SetCurrentWeaponByIndex(int index);

	void SetCurrentWeapon(ABaseWeapon* NewCurrentWeapon);

	UPROPERTY(Transient, ReplicatedUsing = OnRep_PreviousWeapon)
		ABaseWeapon* PreviousWeapon;

	UPROPERTY(Transient, ReplicatedUsing = OnRep_CurrentWeapon)
		ABaseWeapon* CurrentWeapon;

	TArray<ABaseWeapon*> GetInventory() { return Inventory; }

protected:
	/** default inventory list */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Inventory, meta = (AllowPrivateAccess = "true"))
		TArray<TSubclassOf<ABaseWeapon> > DefaultInventoryClasses;

	UFUNCTION()
		void OnRep_CurrentWeapon(ABaseWeapon* PrevWeapon);
	UFUNCTION()
		void OnRep_PreviousWeapon();

	/** weapons in inventory */
	UPROPERTY(ReplicatedUsing = OnRep_Inventory)
		TArray<ABaseWeapon*> Inventory;

	UFUNCTION()
		void OnRep_Inventory(TArray<ABaseWeapon*> PreRepInventory);


	AFPSCharacter* Character;
		
};
