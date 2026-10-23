#pragma once

#include "Basic.hpp"

#include "SidebarLFGToggleListEntry_classes.hpp"
#include "SidebarLFGToggleListEntry_parameters.hpp"

namespace SDK
{

void USidebarLFGToggleListEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLFGToggleListEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarLFGToggleListEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLFGToggleListEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarLFGToggleListEntry_C::ExecuteUbergraph_SidebarLFGToggleListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLFGToggleListEntry_C", "ExecuteUbergraph_SidebarLFGToggleListEntry");

	Params::SidebarLFGToggleListEntry_C_ExecuteUbergraph_SidebarLFGToggleListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarLFGToggleListEntry_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLFGToggleListEntry_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarLFGToggleListEntry_C::OnLfgSettingChanged(const bool bIsLfgEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLFGToggleListEntry_C", "OnLfgSettingChanged");

	Params::SidebarLFGToggleListEntry_C_OnLfgSettingChanged Parms{};

	Parms.bIsLfgEnabled = bIsLfgEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

}
