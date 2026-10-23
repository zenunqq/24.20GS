#pragma once

#include "Basic.hpp"

#include "GCNL_EnvCampFire_Stoke_classes.hpp"
#include "GCNL_EnvCampFire_Stoke_parameters.hpp"

namespace SDK
{

void AGCNL_EnvCampFire_Stoke_C::ExecuteUbergraph_GCNL_EnvCampFire_Stoke(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_EnvCampFire_Stoke_C", "ExecuteUbergraph_GCNL_EnvCampFire_Stoke");

	Params::GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_EnvCampFire_Stoke_C::OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_EnvCampFire_Stoke_C", "OnLoopingStart");

	Params::GCNL_EnvCampFire_Stoke_C_OnLoopingStart Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

}
