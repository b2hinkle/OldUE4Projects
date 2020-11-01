// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseFPSWidget.h"

#include "FPSCharacter.h"

void UBaseFPSWidget::NativeConstruct()	//BeginPlay basicly BUT it only is called after AddToViewport() is called
{
	Super::NativeConstruct();

	OwningFPSCharacter = Cast<AFPSCharacter>(GetOwningPlayerPawn());
	
}