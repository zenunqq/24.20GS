#pragma once

#include "Basic.hpp"

#include "GCN_BurtCharging_Player_Latent_classes.hpp"
#include "GCN_BurtCharging_Player_Latent_parameters.hpp"

namespace SDK
{

void AGCN_BurtCharging_Player_Latent_C::BoostEndEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_BurtCharging_Player_Latent_C", "BoostEndEvent");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_BurtCharging_Player_Latent_C::ExecuteBoostLogic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_BurtCharging_Player_Latent_C", "ExecuteBoostLogic");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCN_BurtCharging_Player_Latent_C::ExecuteUbergraph_GCN_BurtCharging_Player_Latent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_BurtCharging_Player_Latent_C", "ExecuteUbergraph_GCN_BurtCharging_Player_Latent");

	Params::GCN_BurtCharging_Player_Latent_C_ExecuteUbergraph_GCN_BurtCharging_Player_Latent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

bool AGCN_BurtCharging_Player_Latent_C::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_BurtCharging_Player_Latent_C", "OnExecute");

	Params::GCN_BurtCharging_Player_Latent_C_OnExecute Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
