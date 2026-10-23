#pragma once

#include "Basic.hpp"

#include "PlayerSurveyMultipleChoiceResponse_classes.hpp"
#include "PlayerSurveyMultipleChoiceResponse_parameters.hpp"

namespace SDK
{

void UPlayerSurveyMultipleChoiceResponse_C::ExecuteUbergraph_PlayerSurveyMultipleChoiceResponse(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyMultipleChoiceResponse_C", "ExecuteUbergraph_PlayerSurveyMultipleChoiceResponse");

	Params::PlayerSurveyMultipleChoiceResponse_C_ExecuteUbergraph_PlayerSurveyMultipleChoiceResponse Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerSurveyMultipleChoiceResponse_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyMultipleChoiceResponse_C", "OnAddedToFocusPath");

	Params::PlayerSurveyMultipleChoiceResponse_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerSurveyMultipleChoiceResponse_C::SetNumberOfResponses(int32 NumberOfResponses)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyMultipleChoiceResponse_C", "SetNumberOfResponses");

	Params::PlayerSurveyMultipleChoiceResponse_C_SetNumberOfResponses Parms{};

	Parms.NumberOfResponses = NumberOfResponses;

	UObject::ProcessEvent(Func, &Parms);
}

}
