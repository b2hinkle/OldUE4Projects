// Fill out your copyright notice in the Description page of Project Settings.


#include "TemplatePickup.h"
#include "TemplateCharacter.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"

ATemplatePickup::ATemplatePickup()
{
	bReplicates = true;
	
}

void ATemplatePickup::OnInteract_Implementation(ATemplateCharacter* Instigator)
{
	UKismetSystemLibrary::PrintString(this, "This is the base Implementation for OnInteract()");
	
}