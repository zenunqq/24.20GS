#pragma once

#include "Basic.hpp"

#include "LeavePartyListEntry_classes.hpp"
#include "LeavePartyListEntry_parameters.hpp"

namespace SDK
{

void ULeavePartyListEntry_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeavePartyListEntry_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::LeavePartyListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void ULeavePartyListEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeavePartyListEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void ULeavePartyListEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeavePartyListEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void ULeavePartyListEntry_C::ExecuteUbergraph_LeavePartyListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeavePartyListEntry_C", "ExecuteUbergraph_LeavePartyListEntry");

	Params::LeavePartyListEntry_C_ExecuteUbergraph_LeavePartyListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
