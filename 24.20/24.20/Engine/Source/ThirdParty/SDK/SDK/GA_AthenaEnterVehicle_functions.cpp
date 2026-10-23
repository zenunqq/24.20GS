#pragma once

#include "Basic.hpp"

#include "GA_AthenaEnterVehicle_classes.hpp"
#include "GA_AthenaEnterVehicle_parameters.hpp"

namespace SDK
{

void UGA_AthenaEnterVehicle_C::ExecuteUbergraph_GA_AthenaEnterVehicle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AthenaEnterVehicle_C", "ExecuteUbergraph_GA_AthenaEnterVehicle");

	Params::GA_AthenaEnterVehicle_C_ExecuteUbergraph_GA_AthenaEnterVehicle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_AthenaEnterVehicle_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AthenaEnterVehicle_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}
