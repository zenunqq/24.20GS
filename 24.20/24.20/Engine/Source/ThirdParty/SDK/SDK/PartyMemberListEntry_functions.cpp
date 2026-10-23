#pragma once

#include "Basic.hpp"

#include "PartyMemberListEntry_classes.hpp"
#include "PartyMemberListEntry_parameters.hpp"

namespace SDK
{

void UPartyMemberListEntry_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberListEntry_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::PartyMemberListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void UPartyMemberListEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberListEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UPartyMemberListEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberListEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UPartyMemberListEntry_C::ExecuteUbergraph_PartyMemberListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberListEntry_C", "ExecuteUbergraph_PartyMemberListEntry");

	Params::PartyMemberListEntry_C_ExecuteUbergraph_PartyMemberListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
