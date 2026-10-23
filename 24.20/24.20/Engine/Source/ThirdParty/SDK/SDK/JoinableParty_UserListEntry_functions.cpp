#pragma once

#include "Basic.hpp"

#include "JoinableParty_UserListEntry_classes.hpp"
#include "JoinableParty_UserListEntry_parameters.hpp"

namespace SDK
{

void UJoinableParty_UserListEntry_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinableParty_UserListEntry_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::JoinableParty_UserListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void UJoinableParty_UserListEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinableParty_UserListEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UJoinableParty_UserListEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinableParty_UserListEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UJoinableParty_UserListEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinableParty_UserListEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UJoinableParty_UserListEntry_C::ExecuteUbergraph_JoinableParty_UserListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinableParty_UserListEntry_C", "ExecuteUbergraph_JoinableParty_UserListEntry");

	Params::JoinableParty_UserListEntry_C_ExecuteUbergraph_JoinableParty_UserListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UJoinableParty_UserListEntry_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinableParty_UserListEntry_C", "OnFocusLost");

	Params::JoinableParty_UserListEntry_C_OnFocusLost Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UJoinableParty_UserListEntry_C::OnInviteStatusUpdated(bool bIsInvited)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinableParty_UserListEntry_C", "OnInviteStatusUpdated");

	Params::JoinableParty_UserListEntry_C_OnInviteStatusUpdated Parms{};

	Parms.bIsInvited = bIsInvited;

	UObject::ProcessEvent(Func, &Parms);
}

}
