#pragma once

#include "Basic.hpp"

#include "SidebarTeamMemberListEntry_classes.hpp"
#include "SidebarTeamMemberListEntry_parameters.hpp"

namespace SDK
{

void USidebarTeamMemberListEntry_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarTeamMemberListEntry_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::SidebarTeamMemberListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarTeamMemberListEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarTeamMemberListEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarTeamMemberListEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarTeamMemberListEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarTeamMemberListEntry_C::ExecuteUbergraph_SidebarTeamMemberListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarTeamMemberListEntry_C", "ExecuteUbergraph_SidebarTeamMemberListEntry");

	Params::SidebarTeamMemberListEntry_C_ExecuteUbergraph_SidebarTeamMemberListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarTeamMemberListEntry_C::OnNewAvatarsEnabledChanged(bool bUsingNewAvatars)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarTeamMemberListEntry_C", "OnNewAvatarsEnabledChanged");

	Params::SidebarTeamMemberListEntry_C_OnNewAvatarsEnabledChanged Parms{};

	Parms.bUsingNewAvatars = bUsingNewAvatars;

	UObject::ProcessEvent(Func, &Parms);
}

}
