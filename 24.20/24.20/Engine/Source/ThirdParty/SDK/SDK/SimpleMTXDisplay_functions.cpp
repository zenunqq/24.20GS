#pragma once

#include "Basic.hpp"

#include "SimpleMTXDisplay_classes.hpp"
#include "SimpleMTXDisplay_parameters.hpp"

namespace SDK
{

void USimpleMTXDisplay_C::OnUpdateAvailableMTX(int32 AvailableBalance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleMTXDisplay_C", "OnUpdateAvailableMTX");

	Params::SimpleMTXDisplay_C_OnUpdateAvailableMTX Parms{};

	Parms.AvailableBalance = AvailableBalance;

	UObject::ProcessEvent(Func, &Parms);
}

void USimpleMTXDisplay_C::ExecuteUbergraph_SimpleMTXDisplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleMTXDisplay_C", "ExecuteUbergraph_SimpleMTXDisplay");

	Params::SimpleMTXDisplay_C_ExecuteUbergraph_SimpleMTXDisplay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
