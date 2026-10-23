#pragma once

#include "Basic.hpp"

#include "DualBladeMenu_classes.hpp"
#include "DualBladeMenu_parameters.hpp"

namespace SDK
{

void UDualBladeMenu_C::ExecuteUbergraph_DualBladeMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DualBladeMenu_C", "ExecuteUbergraph_DualBladeMenu");

	Params::DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UDualBladeMenu_C::OnFullScreenWidgetCreated(class UWidget* NewWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DualBladeMenu_C", "OnFullScreenWidgetCreated");

	Params::DualBladeMenu_C_OnFullScreenWidgetCreated Parms{};

	Parms.NewWidget = NewWidget;

	UObject::ProcessEvent(Func, &Parms);
}

void UDualBladeMenu_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DualBladeMenu_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

}
