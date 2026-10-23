#pragma once

#include "Basic.hpp"

#include "GCN_RezOut_NPC_classes.hpp"
#include "GCN_RezOut_NPC_parameters.hpp"

namespace SDK
{

void AGCN_RezOut_NPC_C::ExecuteUbergraph_GCN_RezOut_NPC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_RezOut_NPC_C", "ExecuteUbergraph_GCN_RezOut_NPC");

	Params::GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_RezOut_NPC_C::Pre_Sequence_Change()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_RezOut_NPC_C", "Pre-Sequence Change");

	UObject::ProcessEvent(Func, nullptr);
}

}
