#pragma once

#include "Basic.hpp"

#include "GCN_Loop_SnowFlakes_CameraAttached_Niagara_classes.hpp"
#include "GCN_Loop_SnowFlakes_CameraAttached_Niagara_parameters.hpp"

namespace SDK
{

void AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C::ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_SnowFlakes_CameraAttached_Niagara_C", "ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara");

	Params::GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C::OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_SnowFlakes_CameraAttached_Niagara_C", "OnLoopingStartGeneric");

	Params::GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStartGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

}
