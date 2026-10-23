#pragma once

#include "Basic.hpp"

#include "GCN_Loop_SnowFlakes_CameraAttached_classes.hpp"
#include "GCN_Loop_SnowFlakes_CameraAttached_parameters.hpp"

namespace SDK
{

void AGCN_Loop_SnowFlakes_CameraAttached_C::ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_SnowFlakes_CameraAttached_C", "ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached");

	Params::GCN_Loop_SnowFlakes_CameraAttached_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_SnowFlakes_CameraAttached_C::OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_SnowFlakes_CameraAttached_C", "OnLoopingStart");

	Params::GCN_Loop_SnowFlakes_CameraAttached_C_OnLoopingStart Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

}
