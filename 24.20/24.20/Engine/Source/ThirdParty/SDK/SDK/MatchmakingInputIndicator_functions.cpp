#pragma once

#include "Basic.hpp"

#include "MatchmakingInputIndicator_classes.hpp"
#include "MatchmakingInputIndicator_parameters.hpp"

namespace SDK
{

void UMatchmakingInputIndicator_C::OnInputSourceTypeChanged(ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatchmakingInputIndicator_C", "OnInputSourceTypeChanged");

	Params::MatchmakingInputIndicator_C_OnInputSourceTypeChanged Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UMatchmakingInputIndicator_C::ExecuteUbergraph_MatchmakingInputIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatchmakingInputIndicator_C", "ExecuteUbergraph_MatchmakingInputIndicator");

	Params::MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
