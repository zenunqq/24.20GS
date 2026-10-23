#pragma once

#include "Basic.hpp"

#include "SidebarEmptyPanelButton_classes.hpp"
#include "SidebarEmptyPanelButton_parameters.hpp"

namespace SDK
{

void USidebarEmptyPanelButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarEmptyPanelButton_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarEmptyPanelButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarEmptyPanelButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarEmptyPanelButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarEmptyPanelButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarEmptyPanelButton_C::ExecuteUbergraph_SidebarEmptyPanelButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarEmptyPanelButton_C", "ExecuteUbergraph_SidebarEmptyPanelButton");

	Params::SidebarEmptyPanelButton_C_ExecuteUbergraph_SidebarEmptyPanelButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
