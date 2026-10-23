#pragma once

#include "Basic.hpp"

#include "SidebarJoinablePartyActionMenu_classes.hpp"
#include "SidebarJoinablePartyActionMenu_parameters.hpp"

namespace SDK
{

void USidebarJoinablePartyActionMenu_C::ExecuteUbergraph_SidebarJoinablePartyActionMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarJoinablePartyActionMenu_C", "ExecuteUbergraph_SidebarJoinablePartyActionMenu");

	Params::SidebarJoinablePartyActionMenu_C_ExecuteUbergraph_SidebarJoinablePartyActionMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarJoinablePartyActionMenu_C::OnOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarJoinablePartyActionMenu_C", "OnOpened");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarJoinablePartyActionMenu_C::OnToggleConfirmation(bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarJoinablePartyActionMenu_C", "OnToggleConfirmation");

	Params::SidebarJoinablePartyActionMenu_C_OnToggleConfirmation Parms{};

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}
