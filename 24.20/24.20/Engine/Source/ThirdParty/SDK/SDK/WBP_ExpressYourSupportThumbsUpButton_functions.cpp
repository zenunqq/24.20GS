#pragma once

#include "Basic.hpp"

#include "WBP_ExpressYourSupportThumbsUpButton_classes.hpp"
#include "WBP_ExpressYourSupportThumbsUpButton_parameters.hpp"

namespace SDK
{

void UWBP_ExpressYourSupportThumbsUpButton_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpressYourSupportThumbsUpButton_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_ExpressYourSupportThumbsUpButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpressYourSupportThumbsUpButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_ExpressYourSupportThumbsUpButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpressYourSupportThumbsUpButton_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_ExpressYourSupportThumbsUpButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpressYourSupportThumbsUpButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_ExpressYourSupportThumbsUpButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpressYourSupportThumbsUpButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_ExpressYourSupportThumbsUpButton_C::ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpressYourSupportThumbsUpButton_C", "ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton");

	Params::WBP_ExpressYourSupportThumbsUpButton_C_ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_ExpressYourSupportThumbsUpButton_C::SetButtonHeight(bool IsTouch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpressYourSupportThumbsUpButton_C", "SetButtonHeight");

	Params::WBP_ExpressYourSupportThumbsUpButton_C_SetButtonHeight Parms{};

	Parms.IsTouch = IsTouch;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_ExpressYourSupportThumbsUpButton_C::StopHoveringAnimations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpressYourSupportThumbsUpButton_C", "StopHoveringAnimations");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_ExpressYourSupportThumbsUpButton_C::StopTogglingAnimations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpressYourSupportThumbsUpButton_C", "StopTogglingAnimations");

	UObject::ProcessEvent(Func, nullptr);
}

}
