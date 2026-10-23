#pragma once

#include "Basic.hpp"

#include "GCN_Athena_Interrogation_Reveal_Stencil_Latent_classes.hpp"
#include "GCN_Athena_Interrogation_Reveal_Stencil_Latent_parameters.hpp"

namespace SDK
{

void AGCN_Athena_Interrogation_Reveal_Stencil_Latent_C::BeginSweepFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_Interrogation_Reveal_Stencil_Latent_C", "BeginSweepFX");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_Athena_Interrogation_Reveal_Stencil_Latent_C::EndSweepFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_Interrogation_Reveal_Stencil_Latent_C", "EndSweepFX");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_Athena_Interrogation_Reveal_Stencil_Latent_C::ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Stencil_Latent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_Interrogation_Reveal_Stencil_Latent_C", "ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Stencil_Latent");

	Params::GCN_Athena_Interrogation_Reveal_Stencil_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Stencil_Latent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

bool AGCN_Athena_Interrogation_Reveal_Stencil_Latent_C::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_Interrogation_Reveal_Stencil_Latent_C", "OnExecute");

	Params::GCN_Athena_Interrogation_Reveal_Stencil_Latent_C_OnExecute Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void AGCN_Athena_Interrogation_Reveal_Stencil_Latent_C::PlayWorldSweep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_Interrogation_Reveal_Stencil_Latent_C", "PlayWorldSweep");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_Athena_Interrogation_Reveal_Stencil_Latent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_Interrogation_Reveal_Stencil_Latent_C", "ReceiveEndPlay");

	Params::GCN_Athena_Interrogation_Reveal_Stencil_Latent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

}
