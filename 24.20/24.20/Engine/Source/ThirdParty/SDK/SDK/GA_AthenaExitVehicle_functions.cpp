#pragma once

#include "Basic.hpp"

#include "GA_AthenaExitVehicle_classes.hpp"
#include "GA_AthenaExitVehicle_parameters.hpp"

namespace SDK
{

void UGA_AthenaExitVehicle_C::ExecuteUbergraph_GA_AthenaExitVehicle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AthenaExitVehicle_C", "ExecuteUbergraph_GA_AthenaExitVehicle");

	Params::GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_AthenaExitVehicle_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AthenaExitVehicle_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}
