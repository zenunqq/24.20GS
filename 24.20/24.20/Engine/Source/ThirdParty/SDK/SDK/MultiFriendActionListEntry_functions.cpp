#pragma once

#include "Basic.hpp"

#include "MultiFriendActionListEntry_classes.hpp"
#include "MultiFriendActionListEntry_parameters.hpp"

namespace SDK
{

void UMultiFriendActionListEntry_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiFriendActionListEntry_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::MultiFriendActionListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void UMultiFriendActionListEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiFriendActionListEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UMultiFriendActionListEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiFriendActionListEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UMultiFriendActionListEntry_C::ExecuteUbergraph_MultiFriendActionListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiFriendActionListEntry_C", "ExecuteUbergraph_MultiFriendActionListEntry");

	Params::MultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UMultiFriendActionListEntry_C::GetText(EMultiFriendAction InAction, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiFriendActionListEntry_C", "GetText");

	Params::MultiFriendActionListEntry_C_GetText Parms{};

	Parms.InAction = InAction;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}

void UMultiFriendActionListEntry_C::OnActionUpdated(EMultiFriendAction InAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiFriendActionListEntry_C", "OnActionUpdated");

	Params::MultiFriendActionListEntry_C_OnActionUpdated Parms{};

	Parms.InAction = InAction;

	UObject::ProcessEvent(Func, &Parms);
}

}
