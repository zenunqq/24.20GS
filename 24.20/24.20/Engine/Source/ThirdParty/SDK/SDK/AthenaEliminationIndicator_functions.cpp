#pragma once

#include "Basic.hpp"

#include "AthenaEliminationIndicator_classes.hpp"
#include "AthenaEliminationIndicator_parameters.hpp"

namespace SDK
{

void UAthenaEliminationIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaEliminationIndicator_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaEliminationIndicator_C::ExecuteUbergraph_AthenaEliminationIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaEliminationIndicator_C", "ExecuteUbergraph_AthenaEliminationIndicator");

	Params::AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
