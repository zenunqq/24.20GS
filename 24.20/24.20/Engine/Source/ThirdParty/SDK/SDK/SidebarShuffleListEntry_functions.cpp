#pragma once

#include "Basic.hpp"

#include "SidebarShuffleListEntry_classes.hpp"
#include "SidebarShuffleListEntry_parameters.hpp"

namespace SDK
{

void USidebarShuffleListEntry_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarShuffleListEntry_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::SidebarShuffleListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarShuffleListEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarShuffleListEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarShuffleListEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarShuffleListEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarShuffleListEntry_C::ExecuteUbergraph_SidebarShuffleListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarShuffleListEntry_C", "ExecuteUbergraph_SidebarShuffleListEntry");

	Params::SidebarShuffleListEntry_C_ExecuteUbergraph_SidebarShuffleListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
