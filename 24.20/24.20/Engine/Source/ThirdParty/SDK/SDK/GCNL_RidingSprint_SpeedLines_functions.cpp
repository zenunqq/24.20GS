#pragma once

#include "Basic.hpp"

#include "GCNL_RidingSprint_SpeedLines_classes.hpp"
#include "GCNL_RidingSprint_SpeedLines_parameters.hpp"

namespace SDK
{

void AGCNL_RidingSprint_SpeedLines_C::ExecuteUbergraph_GCNL_RidingSprint_SpeedLines(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_RidingSprint_SpeedLines_C", "ExecuteUbergraph_GCNL_RidingSprint_SpeedLines");

	Params::GCNL_RidingSprint_SpeedLines_C_ExecuteUbergraph_GCNL_RidingSprint_SpeedLines Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_RidingSprint_SpeedLines_C::OnApplicationGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_RidingSprint_SpeedLines_C", "OnApplicationGeneric");

	Params::GCNL_RidingSprint_SpeedLines_C_OnApplicationGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_RidingSprint_SpeedLines_C::OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_RidingSprint_SpeedLines_C", "OnRemovalGeneric");

	Params::GCNL_RidingSprint_SpeedLines_C_OnRemovalGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

}
