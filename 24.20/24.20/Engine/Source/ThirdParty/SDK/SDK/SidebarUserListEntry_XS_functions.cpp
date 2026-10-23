#pragma once

#include "Basic.hpp"

#include "SidebarUserListEntry_XS_classes.hpp"
#include "SidebarUserListEntry_XS_parameters.hpp"

namespace SDK
{

void USidebarUserListEntry_XS_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserListEntry_XS_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::SidebarUserListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarUserListEntry_XS_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserListEntry_XS_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarUserListEntry_XS_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserListEntry_XS_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarUserListEntry_XS_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserListEntry_XS_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarUserListEntry_XS_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserListEntry_XS_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarUserListEntry_XS_C::ExecuteUbergraph_SidebarUserListEntry_XS(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserListEntry_XS_C", "ExecuteUbergraph_SidebarUserListEntry_XS");

	Params::SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarUserListEntry_XS_C::HandleInputMethodChanged(ECommonInputType NewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserListEntry_XS_C", "HandleInputMethodChanged");

	Params::SidebarUserListEntry_XS_C_HandleInputMethodChanged Parms{};

	Parms.NewInputType = NewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarUserListEntry_XS_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserListEntry_XS_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarUserListEntry_XS_C::OnNewAvatarsEnabledChanged(bool bUsingNewAvatars)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserListEntry_XS_C", "OnNewAvatarsEnabledChanged");

	Params::SidebarUserListEntry_XS_C_OnNewAvatarsEnabledChanged Parms{};

	Parms.bUsingNewAvatars = bUsingNewAvatars;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarUserListEntry_XS_C::SetUnhoverState(bool PlayAnimation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserListEntry_XS_C", "SetUnhoverState");

	Params::SidebarUserListEntry_XS_C_SetUnhoverState Parms{};

	Parms.PlayAnimation_0 = PlayAnimation_0;

	UObject::ProcessEvent(Func, &Parms);
}

}
