#pragma once

#include "Basic.hpp"

#include "JoinablePartyEntry_classes.hpp"
#include "JoinablePartyEntry_parameters.hpp"

namespace SDK
{

void UJoinablePartyEntry_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinablePartyEntry_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::JoinablePartyEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void UJoinablePartyEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinablePartyEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UJoinablePartyEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinablePartyEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UJoinablePartyEntry_C::ExecuteUbergraph_JoinablePartyEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinablePartyEntry_C", "ExecuteUbergraph_JoinablePartyEntry");

	Params::JoinablePartyEntry_C_ExecuteUbergraph_JoinablePartyEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UJoinablePartyEntry_C::OnInviteStatusUpdated(bool bIsInvited)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinablePartyEntry_C", "OnInviteStatusUpdated");

	Params::JoinablePartyEntry_C_OnInviteStatusUpdated Parms{};

	Parms.bIsInvited = bIsInvited;

	UObject::ProcessEvent(Func, &Parms);
}

}
