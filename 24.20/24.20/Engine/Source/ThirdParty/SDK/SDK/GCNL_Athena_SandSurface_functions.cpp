#pragma once

#include "Basic.hpp"

#include "GCNL_Athena_SandSurface_classes.hpp"
#include "GCNL_Athena_SandSurface_parameters.hpp"

namespace SDK
{

void AGCNL_Athena_SandSurface_C::ExecuteUbergraph_GCNL_Athena_SandSurface(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_SandSurface_C", "ExecuteUbergraph_GCNL_Athena_SandSurface");

	Params::GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Athena_SandSurface_C::OnLoopingStartNiagara(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UNiagaraComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_SandSurface_C", "OnLoopingStartNiagara");

	Params::GCNL_Athena_SandSurface_C_OnLoopingStartNiagara Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Athena_SandSurface_C::OnPlayerFootstep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_SandSurface_C", "OnPlayerFootstep");

	UObject::ProcessEvent(Func, nullptr);
}

}
