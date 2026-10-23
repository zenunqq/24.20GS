#pragma once

#include "Basic.hpp"

#include "GCN_NPC_Interaction_RezOut_Glitch_classes.hpp"
#include "GCN_NPC_Interaction_RezOut_Glitch_parameters.hpp"

namespace SDK
{

void AGCN_NPC_Interaction_RezOut_Glitch_C::ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_NPC_Interaction_RezOut_Glitch_C", "ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch");

	Params::GCN_NPC_Interaction_RezOut_Glitch_C_ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_NPC_Interaction_RezOut_Glitch_C::Spawn_Dissolve_VFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_NPC_Interaction_RezOut_Glitch_C", "Spawn Dissolve VFX");

	UObject::ProcessEvent(Func, nullptr);
}

}
