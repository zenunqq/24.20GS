#pragma once

#include "Basic.hpp"

#include "GCNL_Riding_Sprint_CameraShake_classes.hpp"
#include "GCNL_Riding_Sprint_CameraShake_parameters.hpp"

namespace SDK
{

void AGCNL_Riding_Sprint_CameraShake_C::ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Riding_Sprint_CameraShake_C", "ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake");

	Params::GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Riding_Sprint_CameraShake_C::OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Riding_Sprint_CameraShake_C", "OnLoopingStartGeneric");

	Params::GCNL_Riding_Sprint_CameraShake_C_OnLoopingStartGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

bool AGCNL_Riding_Sprint_CameraShake_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Riding_Sprint_CameraShake_C", "OnRemove");

	Params::GCNL_Riding_Sprint_CameraShake_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
