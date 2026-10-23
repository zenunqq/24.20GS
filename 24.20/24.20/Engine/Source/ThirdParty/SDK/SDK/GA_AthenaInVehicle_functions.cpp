#pragma once

#include "Basic.hpp"

#include "GA_AthenaInVehicle_classes.hpp"
#include "GA_AthenaInVehicle_parameters.hpp"

namespace SDK
{

void UGA_AthenaInVehicle_C::ExecuteUbergraph_GA_AthenaInVehicle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AthenaInVehicle_C", "ExecuteUbergraph_GA_AthenaInVehicle");

	Params::GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_AthenaInVehicle_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AthenaInVehicle_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_AthenaInVehicle_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AthenaInVehicle_C", "K2_OnEndAbility");

	Params::GA_AthenaInVehicle_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}
