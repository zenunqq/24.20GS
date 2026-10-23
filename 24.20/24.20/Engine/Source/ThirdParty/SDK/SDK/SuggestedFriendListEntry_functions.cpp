#pragma once

#include "Basic.hpp"

#include "SuggestedFriendListEntry_classes.hpp"
#include "SuggestedFriendListEntry_parameters.hpp"

namespace SDK
{

void USuggestedFriendListEntry_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SuggestedFriendListEntry_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::SuggestedFriendListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void USuggestedFriendListEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SuggestedFriendListEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USuggestedFriendListEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SuggestedFriendListEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USuggestedFriendListEntry_C::ExecuteUbergraph_SuggestedFriendListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SuggestedFriendListEntry_C", "ExecuteUbergraph_SuggestedFriendListEntry");

	Params::SuggestedFriendListEntry_C_ExecuteUbergraph_SuggestedFriendListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
