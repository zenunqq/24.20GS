#pragma once

#include "Basic.hpp"

#include "SidebarUserActionMenu_classes.hpp"
#include "SidebarUserActionMenu_parameters.hpp"

namespace SDK
{

void USidebarUserActionMenu_C::ExecuteUbergraph_SidebarUserActionMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserActionMenu_C", "ExecuteUbergraph_SidebarUserActionMenu");

	Params::SidebarUserActionMenu_C_ExecuteUbergraph_SidebarUserActionMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarUserActionMenu_C::OnOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserActionMenu_C", "OnOpened");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarUserActionMenu_C::OnToggleConfirmation(bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserActionMenu_C", "OnToggleConfirmation");

	Params::SidebarUserActionMenu_C_OnToggleConfirmation Parms{};

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}
