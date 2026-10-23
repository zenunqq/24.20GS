#pragma once

#include "Basic.hpp"

#include "GCNL_Zipline_Downhill_classes.hpp"
#include "GCNL_Zipline_Downhill_parameters.hpp"

namespace SDK
{

void AGCNL_Zipline_Downhill_C::cameraShakeTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Zipline_Downhill_C", "cameraShakeTimer");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_Zipline_Downhill_C::ExecuteUbergraph_GCNL_Zipline_Downhill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Zipline_Downhill_C", "ExecuteUbergraph_GCNL_Zipline_Downhill");

	Params::GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Zipline_Downhill_C::OnApplicationGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Zipline_Downhill_C", "OnApplicationGeneric");

	Params::GCNL_Zipline_Downhill_C_OnApplicationGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Zipline_Downhill_C::OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Zipline_Downhill_C", "OnLoopingStartGeneric");

	Params::GCNL_Zipline_Downhill_C_OnLoopingStartGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Zipline_Downhill_C::OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Zipline_Downhill_C", "OnRemovalGeneric");

	Params::GCNL_Zipline_Downhill_C_OnRemovalGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

}
