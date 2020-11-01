// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterMovementComponentClawSh.h"

#include "MovementLabCharacterClawShot.h"

#include "Kismet/KismetSystemLibrary.h"

UCharacterMovementComponentClawSh::UCharacterMovementComponentClawSh()
{

}

void UCharacterMovementComponentClawSh::PrintStringTest()
{
	UKismetSystemLibrary::PrintString(this);
}
