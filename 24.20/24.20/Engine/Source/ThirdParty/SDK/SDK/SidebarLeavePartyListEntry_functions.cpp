#pragma once

#include "Basic.hpp"

#include "SidebarLeavePartyListEntry_classes.hpp"
#include "SidebarLeavePartyListEntry_parameters.hpp"

namespace SDK
{

void USidebarLeavePartyListEntry_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLeavePartyListEntry_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::SidebarLeavePartyListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarLeavePartyListEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLeavePartyListEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarLeavePartyListEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLeavePartyListEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarLeavePartyListEntry_C::ExecuteUbergraph_SidebarLeavePartyListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLeavePartyListEntry_C", "ExecuteUbergraph_SidebarLeavePartyListEntry");

	Params::SidebarLeavePartyListEntry_C_ExecuteUbergraph_SidebarLeavePartyListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
