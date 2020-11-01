// Fill out your copyright notice in the Description page of Project Settings.


#include "GC_BulletTrail.h"

#include "RangedWeapon.h"
#include "Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"


void UGC_BulletTrail::CPPOnExecute(AActor* MyTarget, const FGameplayCueParameters& Parameters) const
{
	if (Parameters.EffectContext.GetHitResult())
	{
		ARangedWeapon* RangedWeapon = Cast<ARangedWeapon>(Parameters.EffectContext.GetEffectCauser());
		if (RangedWeapon)
		{
			UParticleSystemComponent* MussleFlash = UGameplayStatics::SpawnEmitterAtLocation(MyTarget, MussleFlashPS, RangedWeapon->GetMuzzleLocation());
			UParticleSystemComponent* BulletTrail = UGameplayStatics::SpawnEmitterAtLocation(MyTarget, TrailPS, RangedWeapon->GetMuzzleLocation());
			if (BulletTrail)
			{
				BulletTrail->SetVectorParameter(FName("TrailEndpoint"), Parameters.EffectContext.GetHitResult()->TraceEnd);
			}
		}
	}
	
}
//