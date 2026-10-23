#pragma once

#include "Basic.hpp"

#include "PlayerSurveyOrthogonalIndicator_classes.hpp"
#include "PlayerSurveyOrthogonalIndicator_parameters.hpp"

namespace SDK
{

void UPlayerSurveyOrthogonalIndicator_C::BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyOrthogonalIndicator_C", "BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::PlayerSurveyOrthogonalIndicator_C_BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerSurveyOrthogonalIndicator_C::ExecuteUbergraph_PlayerSurveyOrthogonalIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyOrthogonalIndicator_C", "ExecuteUbergraph_PlayerSurveyOrthogonalIndicator");

	Params::PlayerSurveyOrthogonalIndicator_C_ExecuteUbergraph_PlayerSurveyOrthogonalIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerSurveyOrthogonalIndicator_C::UpdateGamepadControlsVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyOrthogonalIndicator_C", "UpdateGamepadControlsVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

}
