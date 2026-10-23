#pragma once

#include "Basic.hpp"

#include "PinDot_classes.hpp"
#include "PinDot_parameters.hpp"

namespace SDK
{

void UPinDot_C::ExecuteUbergraph_PinDot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PinDot_C", "ExecuteUbergraph_PinDot");

	Params::PinDot_C_ExecuteUbergraph_PinDot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPinDot_C::OnSetFilled(const bool bFilled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PinDot_C", "OnSetFilled");

	Params::PinDot_C_OnSetFilled Parms{};

	Parms.bFilled = bFilled;

	UObject::ProcessEvent(Func, &Parms);
}

}
