#pragma once

#include "Basic.hpp"

#include "MissedInvitesEntry_classes.hpp"
#include "MissedInvitesEntry_parameters.hpp"

namespace SDK
{

void UMissedInvitesEntry_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissedInvitesEntry_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::MissedInvitesEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void UMissedInvitesEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissedInvitesEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UMissedInvitesEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissedInvitesEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UMissedInvitesEntry_C::ExecuteUbergraph_MissedInvitesEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissedInvitesEntry_C", "ExecuteUbergraph_MissedInvitesEntry");

	Params::MissedInvitesEntry_C_ExecuteUbergraph_MissedInvitesEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
