#pragma once

#include "Basic.hpp"

#include "SidebarRecentPlayerListEntry_classes.hpp"
#include "SidebarRecentPlayerListEntry_parameters.hpp"

namespace SDK
{

void USidebarRecentPlayerListEntry_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarRecentPlayerListEntry_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::SidebarRecentPlayerListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarRecentPlayerListEntry_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarRecentPlayerListEntry_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarRecentPlayerListEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarRecentPlayerListEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarRecentPlayerListEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarRecentPlayerListEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarRecentPlayerListEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarRecentPlayerListEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarRecentPlayerListEntry_C::ExecuteUbergraph_SidebarRecentPlayerListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarRecentPlayerListEntry_C", "ExecuteUbergraph_SidebarRecentPlayerListEntry");

	Params::SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarRecentPlayerListEntry_C::HandleInputMethodChanged(ECommonInputType NewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarRecentPlayerListEntry_C", "HandleInputMethodChanged");

	Params::SidebarRecentPlayerListEntry_C_HandleInputMethodChanged Parms{};

	Parms.NewInputType = NewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarRecentPlayerListEntry_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarRecentPlayerListEntry_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarRecentPlayerListEntry_C::OnNewAvatarsEnabledChanged(bool bUsingNewAvatars)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarRecentPlayerListEntry_C", "OnNewAvatarsEnabledChanged");

	Params::SidebarRecentPlayerListEntry_C_OnNewAvatarsEnabledChanged Parms{};

	Parms.bUsingNewAvatars = bUsingNewAvatars;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarRecentPlayerListEntry_C::SetUnhoverState(bool bPlayAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarRecentPlayerListEntry_C", "SetUnhoverState");

	Params::SidebarRecentPlayerListEntry_C_SetUnhoverState Parms{};

	Parms.bPlayAnimation = bPlayAnimation;

	UObject::ProcessEvent(Func, &Parms);
}

}
