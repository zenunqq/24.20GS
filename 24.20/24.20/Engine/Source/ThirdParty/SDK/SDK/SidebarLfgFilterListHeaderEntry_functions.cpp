#pragma once

#include "Basic.hpp"

#include "SidebarLfgFilterListHeaderEntry_classes.hpp"
#include "SidebarLfgFilterListHeaderEntry_parameters.hpp"

namespace SDK
{

void USidebarLfgFilterListHeaderEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgFilterListHeaderEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarLfgFilterListHeaderEntry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgFilterListHeaderEntry_C", "BP_OnItemExpansionChanged");

	Params::SidebarLfgFilterListHeaderEntry_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarLfgFilterListHeaderEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgFilterListHeaderEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarLfgFilterListHeaderEntry_C::ExecuteUbergraph_SidebarLfgFilterListHeaderEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgFilterListHeaderEntry_C", "ExecuteUbergraph_SidebarLfgFilterListHeaderEntry");

	Params::SidebarLfgFilterListHeaderEntry_C_ExecuteUbergraph_SidebarLfgFilterListHeaderEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarLfgFilterListHeaderEntry_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgFilterListHeaderEntry_C", "OnFocusLost");

	Params::SidebarLfgFilterListHeaderEntry_C_OnFocusLost Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarLfgFilterListHeaderEntry_C::OnListItemObjectSet_1(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgFilterListHeaderEntry_C", "OnListItemObjectSet_1");

	Params::SidebarLfgFilterListHeaderEntry_C_OnListItemObjectSet_1 Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}

}
