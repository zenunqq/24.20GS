#pragma once

#include "Basic.hpp"

#include "PlayerSurveyRatingResponse_classes.hpp"
#include "PlayerSurveyRatingResponse_parameters.hpp"

namespace SDK
{

void UPlayerSurveyRatingResponse_C::ExecuteUbergraph_PlayerSurveyRatingResponse(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyRatingResponse_C", "ExecuteUbergraph_PlayerSurveyRatingResponse");

	Params::PlayerSurveyRatingResponse_C_ExecuteUbergraph_PlayerSurveyRatingResponse Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerSurveyRatingResponse_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyRatingResponse_C", "OnAddedToFocusPath");

	Params::PlayerSurveyRatingResponse_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerSurveyRatingResponse_C::OnResponsesSet_BP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyRatingResponse_C", "OnResponsesSet_BP");

	UObject::ProcessEvent(Func, nullptr);
}

}
