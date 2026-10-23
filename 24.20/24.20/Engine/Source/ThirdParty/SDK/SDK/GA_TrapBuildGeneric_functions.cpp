#pragma once

#include "Basic.hpp"

#include "GA_TrapBuildGeneric_classes.hpp"
#include "GA_TrapBuildGeneric_parameters.hpp"

namespace SDK
{

void UGA_TrapBuildGeneric_C::ExecuteUbergraph_GA_TrapBuildGeneric(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TrapBuildGeneric_C", "ExecuteUbergraph_GA_TrapBuildGeneric");

	Params::GA_TrapBuildGeneric_C_ExecuteUbergraph_GA_TrapBuildGeneric Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_TrapBuildGeneric_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TrapBuildGeneric_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}
