#pragma once

#include "Basic.hpp"

#include "ReferAFriendEntry_classes.hpp"
#include "ReferAFriendEntry_parameters.hpp"

namespace SDK
{

void UReferAFriendEntry_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReferAFriendEntry_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::ReferAFriendEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void UReferAFriendEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReferAFriendEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UReferAFriendEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReferAFriendEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UReferAFriendEntry_C::ExecuteUbergraph_ReferAFriendEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReferAFriendEntry_C", "ExecuteUbergraph_ReferAFriendEntry");

	Params::ReferAFriendEntry_C_ExecuteUbergraph_ReferAFriendEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
