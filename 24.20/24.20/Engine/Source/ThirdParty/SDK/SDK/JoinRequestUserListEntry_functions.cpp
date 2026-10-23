#pragma once

#include "Basic.hpp"

#include "JoinRequestUserListEntry_classes.hpp"
#include "JoinRequestUserListEntry_parameters.hpp"

namespace SDK
{

void UJoinRequestUserListEntry_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinRequestUserListEntry_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::JoinRequestUserListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void UJoinRequestUserListEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinRequestUserListEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UJoinRequestUserListEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinRequestUserListEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UJoinRequestUserListEntry_C::ExecuteUbergraph_JoinRequestUserListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinRequestUserListEntry_C", "ExecuteUbergraph_JoinRequestUserListEntry");

	Params::JoinRequestUserListEntry_C_ExecuteUbergraph_JoinRequestUserListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UJoinRequestUserListEntry_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinRequestUserListEntry_C", "OnFocusLost");

	Params::JoinRequestUserListEntry_C_OnFocusLost Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}

}
