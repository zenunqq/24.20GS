#pragma once

#include "Basic.hpp"

#include "SidebarInviteListEntry_FriendInvite_XS_classes.hpp"
#include "SidebarInviteListEntry_FriendInvite_XS_parameters.hpp"

namespace SDK
{

void USidebarInviteListEntry_FriendInvite_XS_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarInviteListEntry_FriendInvite_XS_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::SidebarInviteListEntry_FriendInvite_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarInviteListEntry_FriendInvite_XS_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarInviteListEntry_FriendInvite_XS_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarInviteListEntry_FriendInvite_XS_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarInviteListEntry_FriendInvite_XS_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarInviteListEntry_FriendInvite_XS_C::ExecuteUbergraph_SidebarInviteListEntry_FriendInvite_XS(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarInviteListEntry_FriendInvite_XS_C", "ExecuteUbergraph_SidebarInviteListEntry_FriendInvite_XS");

	Params::SidebarInviteListEntry_FriendInvite_XS_C_ExecuteUbergraph_SidebarInviteListEntry_FriendInvite_XS Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarInviteListEntry_FriendInvite_XS_C::HandleOnlineIndicatorView(uint8 OnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarInviteListEntry_FriendInvite_XS_C", "HandleOnlineIndicatorView");

	Params::SidebarInviteListEntry_FriendInvite_XS_C_HandleOnlineIndicatorView Parms{};

	Parms.OnlineStatus = OnlineStatus;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarInviteListEntry_FriendInvite_XS_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarInviteListEntry_FriendInvite_XS_C", "OnFocusLost");

	Params::SidebarInviteListEntry_FriendInvite_XS_C_OnFocusLost Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarInviteListEntry_FriendInvite_XS_C::OnNewAvatarsEnabledChanged(bool bUsingNewAvatars)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarInviteListEntry_FriendInvite_XS_C", "OnNewAvatarsEnabledChanged");

	Params::SidebarInviteListEntry_FriendInvite_XS_C_OnNewAvatarsEnabledChanged Parms{};

	Parms.bUsingNewAvatars = bUsingNewAvatars;

	UObject::ProcessEvent(Func, &Parms);
}

}
