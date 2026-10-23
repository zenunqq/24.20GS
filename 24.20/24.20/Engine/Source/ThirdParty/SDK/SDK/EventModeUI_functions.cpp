#pragma once

#include "Basic.hpp"

#include "EventModeUI_classes.hpp"
#include "EventModeUI_parameters.hpp"

namespace SDK
{

void UFocusButton::HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FocusButton", "HandleCanUseEventModeFocusChanged");

	Params::FocusButton_HandleCanUseEventModeFocusChanged Parms{};

	Parms.bCanUseEventModeFocus = bCanUseEventModeFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFocusButton::HandleEventModeFocusingChanged(bool bIsEventModeFocusing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FocusButton", "HandleEventModeFocusingChanged");

	Params::FocusButton_HandleEventModeFocusingChanged Parms{};

	Parms.bIsEventModeFocusing = bIsEventModeFocusing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortEventModeEmotesWidget::OnFocusAvailableChanged(bool bIsFocusAvailable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventModeEmotesWidget", "OnFocusAvailableChanged");

	Params::FortEventModeEmotesWidget_OnFocusAvailableChanged Parms{};

	Parms.bIsFocusAvailable = bIsFocusAvailable;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventModeEmotesWidget::OnFocusStateChanged(bool bIsFocusing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventModeEmotesWidget", "OnFocusStateChanged");

	Params::FortEventModeEmotesWidget_OnFocusStateChanged Parms{};

	Parms.bIsFocusing = bIsFocusing;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortMobileActionButtonBehavior_Focus::HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMobileActionButtonBehavior_Focus", "HandleCanUseEventModeFocusChanged");

	Params::FortMobileActionButtonBehavior_Focus_HandleCanUseEventModeFocusChanged Parms{};

	Parms.bCanUseEventModeFocus = bCanUseEventModeFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMobileActionButtonBehavior_Focus::HandleEventModeFocusingChanged(bool bIsEventModeFocusing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMobileActionButtonBehavior_Focus", "HandleEventModeFocusingChanged");

	Params::FortMobileActionButtonBehavior_Focus_HandleEventModeFocusingChanged Parms{};

	Parms.bIsEventModeFocusing = bIsEventModeFocusing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
