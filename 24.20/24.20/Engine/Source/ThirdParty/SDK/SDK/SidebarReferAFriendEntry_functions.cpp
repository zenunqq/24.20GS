#pragma once

#include "Basic.hpp"

#include "SidebarReferAFriendEntry_classes.hpp"
#include "SidebarReferAFriendEntry_parameters.hpp"

namespace SDK
{

void USidebarReferAFriendEntry_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarReferAFriendEntry_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::SidebarReferAFriendEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarReferAFriendEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarReferAFriendEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarReferAFriendEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarReferAFriendEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarReferAFriendEntry_C::ExecuteUbergraph_SidebarReferAFriendEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarReferAFriendEntry_C", "ExecuteUbergraph_SidebarReferAFriendEntry");

	Params::SidebarReferAFriendEntry_C_ExecuteUbergraph_SidebarReferAFriendEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
