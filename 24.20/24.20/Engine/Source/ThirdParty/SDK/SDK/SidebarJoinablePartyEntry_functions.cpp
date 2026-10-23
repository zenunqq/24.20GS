#pragma once

#include "Basic.hpp"

#include "SidebarJoinablePartyEntry_classes.hpp"
#include "SidebarJoinablePartyEntry_parameters.hpp"

namespace SDK
{

void USidebarJoinablePartyEntry_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarJoinablePartyEntry_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::SidebarJoinablePartyEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarJoinablePartyEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarJoinablePartyEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarJoinablePartyEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarJoinablePartyEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarJoinablePartyEntry_C::ExecuteUbergraph_SidebarJoinablePartyEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarJoinablePartyEntry_C", "ExecuteUbergraph_SidebarJoinablePartyEntry");

	Params::SidebarJoinablePartyEntry_C_ExecuteUbergraph_SidebarJoinablePartyEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarJoinablePartyEntry_C::OnPartyPresenceTextUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarJoinablePartyEntry_C", "OnPartyPresenceTextUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

}
