#pragma once

#include "Basic.hpp"

#include "GCN_Athena_OutsideSafeZoneDamage_classes.hpp"
#include "GCN_Athena_OutsideSafeZoneDamage_parameters.hpp"

namespace SDK
{

void UGCN_Athena_OutsideSafeZoneDamage_C::ExecuteUbergraph_GCN_Athena_OutsideSafeZoneDamage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_OutsideSafeZoneDamage_C", "ExecuteUbergraph_GCN_Athena_OutsideSafeZoneDamage");

	Params::GCN_Athena_OutsideSafeZoneDamage_C_ExecuteUbergraph_GCN_Athena_OutsideSafeZoneDamage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGCN_Athena_OutsideSafeZoneDamage_C::OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_OutsideSafeZoneDamage_C", "OnBurst");

	Params::GCN_Athena_OutsideSafeZoneDamage_C_OnBurst Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void UGCN_Athena_OutsideSafeZoneDamage_C::ZapFX(int32 ZapCount, class APlayerPawn_Athena_C* PlayerPawnAthena) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_OutsideSafeZoneDamage_C", "ZapFX");

	Params::GCN_Athena_OutsideSafeZoneDamage_C_ZapFX Parms{};

	Parms.ZapCount = ZapCount;
	Parms.PlayerPawnAthena = PlayerPawnAthena;

	UObject::ProcessEvent(Func, &Parms);
}

}
