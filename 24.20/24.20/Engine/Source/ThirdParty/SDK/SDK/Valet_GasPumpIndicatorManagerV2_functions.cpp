#pragma once

#include "Basic.hpp"

#include "Valet_GasPumpIndicatorManagerV2_classes.hpp"
#include "Valet_GasPumpIndicatorManagerV2_parameters.hpp"

namespace SDK
{

void UValet_GasPumpIndicatorManagerV2_C::AddGasPump(class UB_GasPump_Valet_Component_C* Gas_Pump)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_GasPumpIndicatorManagerV2_C", "AddGasPump");

	Params::Valet_GasPumpIndicatorManagerV2_C_AddGasPump Parms{};

	Parms.Gas_Pump = Gas_Pump;

	UObject::ProcessEvent(Func, &Parms);
}

void UValet_GasPumpIndicatorManagerV2_C::RemoveGasPump(class UB_GasPump_Valet_Component_C* Gas_Pump)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Valet_GasPumpIndicatorManagerV2_C", "RemoveGasPump");

	Params::Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump Parms{};

	Parms.Gas_Pump = Gas_Pump;

	UObject::ProcessEvent(Func, &Parms);
}

}
