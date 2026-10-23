#pragma once

#include "Basic.hpp"

#include "GCNL_Athena_HidingProp_PropTeleporting_classes.hpp"
#include "GCNL_Athena_HidingProp_PropTeleporting_parameters.hpp"

namespace SDK
{

void AGCNL_Athena_HidingProp_PropTeleporting_C::ExecuteUbergraph_GCNL_Athena_HidingProp_PropTeleporting(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_HidingProp_PropTeleporting_C", "ExecuteUbergraph_GCNL_Athena_HidingProp_PropTeleporting");

	Params::GCNL_Athena_HidingProp_PropTeleporting_C_ExecuteUbergraph_GCNL_Athena_HidingProp_PropTeleporting Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Athena_HidingProp_PropTeleporting_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_HidingProp_PropTeleporting_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
