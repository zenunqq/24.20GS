#pragma once

#include "Basic.hpp"

#include "PlayerSurveyHorizontalIndicator_classes.hpp"
#include "PlayerSurveyHorizontalIndicator_parameters.hpp"

namespace SDK
{

void UPlayerSurveyHorizontalIndicator_C::BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyHorizontalIndicator_C", "BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::PlayerSurveyHorizontalIndicator_C_BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerSurveyHorizontalIndicator_C::ExecuteUbergraph_PlayerSurveyHorizontalIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyHorizontalIndicator_C", "ExecuteUbergraph_PlayerSurveyHorizontalIndicator");

	Params::PlayerSurveyHorizontalIndicator_C_ExecuteUbergraph_PlayerSurveyHorizontalIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerSurveyHorizontalIndicator_C::UpdateGamepadControlsVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyHorizontalIndicator_C", "UpdateGamepadControlsVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

}
