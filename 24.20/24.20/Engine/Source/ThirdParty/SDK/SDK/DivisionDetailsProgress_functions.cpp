#pragma once

#include "Basic.hpp"

#include "DivisionDetailsProgress_classes.hpp"
#include "DivisionDetailsProgress_parameters.hpp"

namespace SDK
{

void UDivisionDetailsProgress_C::ExecuteUbergraph_DivisionDetailsProgress(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DivisionDetailsProgress_C", "ExecuteUbergraph_DivisionDetailsProgress");

	Params::DivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UDivisionDetailsProgress_C::OnSetInProgress(float NewPercent, bool bIsInProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DivisionDetailsProgress_C", "OnSetInProgress");

	Params::DivisionDetailsProgress_C_OnSetInProgress Parms{};

	Parms.NewPercent = NewPercent;
	Parms.bIsInProgress = bIsInProgress;

	UObject::ProcessEvent(Func, &Parms);
}

}
