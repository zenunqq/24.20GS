#pragma once

#include "Basic.hpp"

#include "B_GasPump_Valet_Component_classes.hpp"
#include "B_GasPump_Valet_Component_parameters.hpp"

namespace SDK
{

void UB_GasPump_Valet_Component_C::ExecuteUbergraph_B_GasPump_Valet_Component(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GasPump_Valet_Component_C", "ExecuteUbergraph_B_GasPump_Valet_Component");

	Params::B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UB_GasPump_Valet_Component_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GasPump_Valet_Component_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_GasPump_Valet_Component_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_GasPump_Valet_Component_C", "ReceiveEndPlay");

	Params::B_GasPump_Valet_Component_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

}
