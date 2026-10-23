#pragma once

#include "Basic.hpp"

#include "PBW_BP_Parent_classes.hpp"
#include "PBW_BP_Parent_parameters.hpp"

namespace SDK
{

void APBW_BP_Parent_C::ExecuteUbergraph_PBW_BP_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PBW_BP_Parent_C", "ExecuteUbergraph_PBW_BP_Parent");

	Params::PBW_BP_Parent_C_ExecuteUbergraph_PBW_BP_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void APBW_BP_Parent_C::OnRep_Random_Chance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PBW_BP_Parent_C", "OnRep_Random Chance");

	UObject::ProcessEvent(Func, nullptr);
}

void APBW_BP_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PBW_BP_Parent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
