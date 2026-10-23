#pragma once

#include "Basic.hpp"

#include "UserListEntry_XS_classes.hpp"
#include "UserListEntry_XS_parameters.hpp"

namespace SDK
{

void UUserListEntry_XS_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserListEntry_XS_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::UserListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void UUserListEntry_XS_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserListEntry_XS_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UUserListEntry_XS_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserListEntry_XS_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UUserListEntry_XS_C::ExecuteUbergraph_UserListEntry_XS(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserListEntry_XS_C", "ExecuteUbergraph_UserListEntry_XS");

	Params::UserListEntry_XS_C_ExecuteUbergraph_UserListEntry_XS Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UUserListEntry_XS_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserListEntry_XS_C", "OnFocusLost");

	Params::UserListEntry_XS_C_OnFocusLost Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}

}
