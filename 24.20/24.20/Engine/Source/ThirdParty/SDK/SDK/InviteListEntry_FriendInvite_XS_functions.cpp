#pragma once

#include "Basic.hpp"

#include "InviteListEntry_FriendInvite_XS_classes.hpp"
#include "InviteListEntry_FriendInvite_XS_parameters.hpp"

namespace SDK
{

void UInviteListEntry_FriendInvite_XS_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InviteListEntry_FriendInvite_XS_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::InviteListEntry_FriendInvite_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void UInviteListEntry_FriendInvite_XS_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InviteListEntry_FriendInvite_XS_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UInviteListEntry_FriendInvite_XS_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InviteListEntry_FriendInvite_XS_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UInviteListEntry_FriendInvite_XS_C::ExecuteUbergraph_InviteListEntry_FriendInvite_XS(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InviteListEntry_FriendInvite_XS_C", "ExecuteUbergraph_InviteListEntry_FriendInvite_XS");

	Params::InviteListEntry_FriendInvite_XS_C_ExecuteUbergraph_InviteListEntry_FriendInvite_XS Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UInviteListEntry_FriendInvite_XS_C::HandleOnlineIndicatorView(uint8 OnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InviteListEntry_FriendInvite_XS_C", "HandleOnlineIndicatorView");

	Params::InviteListEntry_FriendInvite_XS_C_HandleOnlineIndicatorView Parms{};

	Parms.OnlineStatus = OnlineStatus;

	UObject::ProcessEvent(Func, &Parms);
}

}
