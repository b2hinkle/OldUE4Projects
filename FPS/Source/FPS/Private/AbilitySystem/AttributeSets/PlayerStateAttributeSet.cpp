// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerStateAttributeSet.h"

#include "UnrealNetwork.h"

UPlayerStateAttributeSet::UPlayerStateAttributeSet()
	: TestVar(56)	//you can initialize attributes here
{
}

void UPlayerStateAttributeSet::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//DOREPLIFETIME( UMyAttributeSet, MyAttribute); Chances are this is how you would ordinarily do it,
	//however in the case of attributes this'll lead to confusing and annoying replication errors, usually involving clientside ability prediction.
	DOREPLIFETIME_CONDITION_NOTIFY(UPlayerStateAttributeSet, TestVar, COND_None, REPNOTIFY_Always);	//This is how it is done properly for attributes.
}
#include "Kismet/KismetSystemLibrary.h"
void UPlayerStateAttributeSet::OnRep_TestVar(const FGameplayAttributeData& ServerBaseValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPlayerStateAttributeSet, TestVar, ServerBaseValue);
}
