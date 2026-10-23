#pragma once

#include "Basic.hpp"

#include "TopBar_classes.hpp"
#include "TopBar_parameters.hpp"

namespace SDK
{

void UTopBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBar_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UTopBar_C::ExecuteUbergraph_TopBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBar_C", "ExecuteUbergraph_TopBar");

	Params::TopBar_C_ExecuteUbergraph_TopBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UTopBar_C::OnMobileTabLabelChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBar_C", "OnMobileTabLabelChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UTopBar_C::SetMainNavVisibility(ESlateVisibility NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBar_C", "SetMainNavVisibility");

	Params::TopBar_C_SetMainNavVisibility Parms{};

	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);
}

void UTopBar_C::SetTopTabsVisibility(ESlateVisibility NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBar_C", "SetTopTabsVisibility");

	Params::TopBar_C_SetTopTabsVisibility Parms{};

	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);
}

void UTopBar_C::UpdateMTXButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBar_C", "UpdateMTXButton");

	UObject::ProcessEvent(Func, nullptr);
}

}
