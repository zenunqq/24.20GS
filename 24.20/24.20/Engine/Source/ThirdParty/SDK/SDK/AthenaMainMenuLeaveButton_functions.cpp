#pragma once

#include "Basic.hpp"

#include "AthenaMainMenuLeaveButton_classes.hpp"
#include "AthenaMainMenuLeaveButton_parameters.hpp"

namespace SDK
{

void UAthenaMainMenuLeaveButton_C::ExecuteUbergraph_AthenaMainMenuLeaveButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMainMenuLeaveButton_C", "ExecuteUbergraph_AthenaMainMenuLeaveButton");

	Params::AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMainMenuLeaveButton_C::OnTextChanged(const class FText& Text_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMainMenuLeaveButton_C", "OnTextChanged");

	Params::AthenaMainMenuLeaveButton_C_OnTextChanged Parms{};

	Parms.Text_0 = std::move(Text_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMainMenuLeaveButton_C::OnTimerTextChanged(const class FText& Text_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMainMenuLeaveButton_C", "OnTimerTextChanged");

	Params::AthenaMainMenuLeaveButton_C_OnTimerTextChanged Parms{};

	Parms.Text_0 = std::move(Text_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMainMenuLeaveButton_C::OnTimerVisibilityChanged(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMainMenuLeaveButton_C", "OnTimerVisibilityChanged");

	Params::AthenaMainMenuLeaveButton_C_OnTimerVisibilityChanged Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMainMenuLeaveButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMainMenuLeaveButton_C", "PreConstruct");

	Params::AthenaMainMenuLeaveButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
