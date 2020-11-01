// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory.h"

#include "UnrealNetwork.h"
#include "BaseWeapon.h"
#include "FPSCharacter.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "..\..\Public\ActorComponents\Inventory.h"

void UInventory::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(UInventory, PreviousWeapon, COND_OwnerOnly); 
	DOREPLIFETIME(UInventory, CurrentWeapon);
	DOREPLIFETIME_CONDITION(UInventory, Inventory, COND_OwnerOnly);
}

UInventory::UInventory()
{
	SetIsReplicated(true);
	inventoryInitialized = false;
	PrimaryComponentTick.bCanEverTick = false;

	Character = Cast<AFPSCharacter>(GetOwner());

}

void UInventory::ForServerSpawnDefaultInventory()
{
	if (Character->GetLocalRole() == ROLE_Authority)
	{
		int32 defaultInventoryClassesSize = DefaultInventoryClasses.Num();
		for (int i = 0; i < defaultInventoryClassesSize; i++)
		{
			if (DefaultInventoryClasses[i])
			{
				FActorSpawnParameters SpawnInfo;
				SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
				ABaseWeapon* NewWeapon = GetWorld()->SpawnActor<ABaseWeapon>(DefaultInventoryClasses[i], SpawnInfo);
				if (NewWeapon)
				{
					if (i == 0)			//If we are adding the 1st weapon (DefaultInventoryClasses[0])
					{
						AddWeapon(NewWeapon, false);
					}
					else if (i == 1)	//If we are adding the 2nd weapon (DefaultInventoryClasses[1]) then equip it when added, that way it's the previous weapon when we equip the primary gun
					{
						AddWeapon(NewWeapon);
					}
					else
					{
						AddWeapon(NewWeapon, false);
					}
				}

			}



		}


		SetCurrentWeaponByIndex(0);
	}
}

void UInventory::AddWeapon(ABaseWeapon* WeaponToAdd, bool setAsCurrent)
{
	if (Character->GetLocalRole() < ROLE_Authority)
	{
		return;
	}

	if (WeaponToAdd)
	{
		Inventory.Add(WeaponToAdd);
		if (UKismetSystemLibrary::DoesImplementInterface(WeaponToAdd, UEquiptable::StaticClass()))
		{
			WeaponToAdd->OnEnterInventory(Character);
		}


		if (setAsCurrent)
		{
			SetCurrentWeapon(WeaponToAdd);
		}
	}

}

void UInventory::SetCurrentWeapon(ABaseWeapon* NewCurrentWeapon)
{
	if (NewCurrentWeapon /*|| NewCurrentWeapon != CurrentWeapon*/)
	{
		if (Inventory.Contains(NewCurrentWeapon))
		{
			PreviousWeapon = CurrentWeapon;
			if (UKismetSystemLibrary::DoesImplementInterface(PreviousWeapon, UEquiptable::StaticClass()))
			{
				CurrentWeapon->OnUnEquip();
			}
			CurrentWeapon = NewCurrentWeapon;
			if (Character->GetLocalRole() == ROLE_AutonomousProxy)
			{
				onClientCurrentWeaponChanged.Broadcast();
			}
			if (UKismetSystemLibrary::DoesImplementInterface(CurrentWeapon, UEquiptable::StaticClass()))
			{
				CurrentWeapon->OnEquip();
			}
		}
	}
	
}

void UInventory::SetCurrentWeaponByIndex(int index)
{
	if (Inventory.IsValidIndex(index))
	{
		ABaseWeapon* NewCurrentWeapon = Inventory[index];
		if (NewCurrentWeapon /*|| NewCurrentWeapon != CurrentWeapon*/)
		{
			PreviousWeapon = CurrentWeapon;
			if (PreviousWeapon && UKismetSystemLibrary::DoesImplementInterface(PreviousWeapon, UEquiptable::StaticClass()))
			{
				PreviousWeapon->OnUnEquip();
			}

			CurrentWeapon = NewCurrentWeapon;
			if (Character->GetLocalRole() == ROLE_AutonomousProxy)
			{
				onClientCurrentWeaponChanged.Broadcast();
			}
			if (CurrentWeapon && UKismetSystemLibrary::DoesImplementInterface(CurrentWeapon, UEquiptable::StaticClass()))
			{
				CurrentWeapon->OnEquip();
			}
		}

		
	}
	
}




void UInventory::OnRep_CurrentWeapon(ABaseWeapon* PrevWeapon)
{
	onClientCurrentWeaponChanged.Broadcast();

}

void UInventory::OnRep_PreviousWeapon()
{
	
}

void UInventory::OnRep_Inventory(TArray<ABaseWeapon*> PreRepInventory)
{
	int greatestNumberOfEitherArray = Inventory.Num();
	if (PreRepInventory.Num() > greatestNumberOfEitherArray)
	{
		greatestNumberOfEitherArray = PreRepInventory.Num(); // if weapons were generally removed from inventory
	}

	for (int i = 0; i < greatestNumberOfEitherArray; i++)
	{
		if (Inventory[i] != PreRepInventory[i])
		{
			if (PreRepInventory[i])
				PreRepInventory[i]->OnExitInventory();
			if (Inventory[i])
				Inventory[i]->OnEnterInventory(Character);
		}
	}

	if (CurrentWeapon)
		CurrentWeapon->OnEquip();



#pragma region Old Algorithm that might have value or some reason
	//ABaseWeapon* AddedWeapon = Inventory.Last();
	//if (AddedWeapon)
	//{
	//	if (UKismetSystemLibrary::DoesImplementInterface(AddedWeapon, UEquiptable::StaticClass()))
	//	{
	//		AddedWeapon->OnEnterInventory(Character);
	//	}
	//}

	//if (!inventoryInitialized)
	//{
	//	int32 currentInventorySize = Inventory.Num();
	//	int32 defaultInventoryClassesSize = DefaultInventoryClasses.Num();
	//	if (currentInventorySize == defaultInventoryClassesSize)
	//	{
	//		bool shouldInventoryBeInitialized = true;
	//		for (int32 i = 0; i < currentInventorySize; i++)
	//		{
	//			if (Inventory.IsValidIndex(i) && Inventory[i])
	//			{
	//				if (Inventory[i]->IsA(DefaultInventoryClasses[i]))
	//				{
	//					continue;
	//				}
	//				else
	//				{
	//					shouldInventoryBeInitialized = false;
	//					break;
	//				}
	//			}
	//		}

	//		

	//		if (shouldInventoryBeInitialized && Inventory.IsValidIndex(0))
	//		{
	//			if (Inventory[0])
	//			{
	//				Inventory[0]->OnEquip();
	//				inventoryInitialized = shouldInventoryBeInitialized;
	//			}
	//		}
	//	}
	//}
#pragma endregion
}
