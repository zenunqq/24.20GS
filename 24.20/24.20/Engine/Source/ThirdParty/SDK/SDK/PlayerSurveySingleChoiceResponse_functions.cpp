#pragma once

#include "Basic.hpp"

#include "PlayerSurveySingleChoiceResponse_classes.hpp"
#include "PlayerSurveySingleChoiceResponse_parameters.hpp"

namespace SDK
{

void UPlayerSurveySingleChoiceResponse_C::ExecuteUbergraph_PlayerSurveySingleChoiceResponse(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveySingleChoiceResponse_C", "ExecuteUbergraph_PlayerSurveySingleChoiceResponse");

	Params::PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerSurveySingleChoiceResponse_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveySingleChoiceResponse_C", "OnAddedToFocusPath");

	Params::PlayerSurveySingleChoiceResponse_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerSurveySingleChoiceResponse_C::SetNumberOfResponses(int32 NumberOfResponses)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveySingleChoiceResponse_C", "SetNumberOfResponses");

	Params::PlayerSurveySingleChoiceResponse_C_SetNumberOfResponses Parms{};

	Parms.NumberOfResponses = NumberOfResponses;

	UObject::ProcessEvent(Func, &Parms);
}

}
