// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSGameplayCueNotify_Actor.h"

void AFPSGameplayCueNotify_Actor::HandleGameplayCue(AActor* MyTarget, EGameplayCueEvent::Type EventType, const FGameplayCueParameters& Parameters)
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

void AFPSGameplayCueNotify_Actor::CPPOnExecute(AActor* MyTarget, const FGameplayCueParameters& Parameters) const
{
}
