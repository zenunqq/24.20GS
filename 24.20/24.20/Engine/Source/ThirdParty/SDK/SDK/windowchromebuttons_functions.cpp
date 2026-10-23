#pragma once

#include "Basic.hpp"

#include "windowchromebuttons_classes.hpp"
#include "windowchromebuttons_parameters.hpp"

namespace SDK
{

void Uwindowchromebuttons_C::ExecuteUbergraph_windowchromebuttons(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("windowchromebuttons_C", "ExecuteUbergraph_windowchromebuttons");

	Params::windowchromebuttons_C_ExecuteUbergraph_windowchromebuttons Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void Uwindowchromebuttons_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("windowchromebuttons_C", "OnMouseEnter");

	Params::windowchromebuttons_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void Uwindowchromebuttons_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("windowchromebuttons_C", "OnMouseLeave");

	Params::windowchromebuttons_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

}
