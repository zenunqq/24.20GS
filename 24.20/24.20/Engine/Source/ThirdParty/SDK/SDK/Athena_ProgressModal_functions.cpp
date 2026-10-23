#pragma once

#include "Basic.hpp"

#include "Athena_ProgressModal_classes.hpp"
#include "Athena_ProgressModal_parameters.hpp"

namespace SDK
{

void UAthena_ProgressModal_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_ProgressModal_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthena_ProgressModal_C::ExecuteUbergraph_Athena_ProgressModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_ProgressModal_C", "ExecuteUbergraph_Athena_ProgressModal");

	Params::Athena_ProgressModal_C_ExecuteUbergraph_Athena_ProgressModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
