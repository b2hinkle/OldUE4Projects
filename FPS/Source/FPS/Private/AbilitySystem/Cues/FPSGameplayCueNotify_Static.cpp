// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSGameplayCueNotify_Static.h"

void UFPSGameplayCueNotify_Static::HandleGameplayCue(AActor* MyTarget, EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters)
{
	Super::HandleGameplayCue(MyTarget, EventType, Parameters);

	if (MyTarget && !MyTarget->IsPendingKill())
	{
		if (EventType == EGameplayCueEvent::Executed)
		{
			CPPOnExecute(MyTarget, Parameters);
		}
	}
}

void UFPSGameplayCueNotify_Static::CPPOnExecute(AActor* MyTarget, const FGameplayCueParameters& Parameters) const
{
}
