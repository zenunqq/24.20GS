#pragma once

#include "Basic.hpp"

#include "PlayerSurveyVerticalIndicator_classes.hpp"
#include "PlayerSurveyVerticalIndicator_parameters.hpp"

namespace SDK
{

void UPlayerSurveyVerticalIndicator_C::BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyVerticalIndicator_C", "BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::PlayerSurveyVerticalIndicator_C_BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerSurveyVerticalIndicator_C::ExecuteUbergraph_PlayerSurveyVerticalIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyVerticalIndicator_C", "ExecuteUbergraph_PlayerSurveyVerticalIndicator");

	Params::PlayerSurveyVerticalIndicator_C_ExecuteUbergraph_PlayerSurveyVerticalIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerSurveyVerticalIndicator_C::UpdateGamepadControlsVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyVerticalIndicator_C", "UpdateGamepadControlsVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

}
