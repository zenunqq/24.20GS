#pragma once

#include "Basic.hpp"

#include "UserListHeaderEntry_classes.hpp"
#include "UserListHeaderEntry_parameters.hpp"

namespace SDK
{

void UUserListHeaderEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserListHeaderEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UUserListHeaderEntry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserListHeaderEntry_C", "BP_OnItemExpansionChanged");

	Params::UserListHeaderEntry_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}

void UUserListHeaderEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserListHeaderEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UUserListHeaderEntry_C::ExecuteUbergraph_UserListHeaderEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserListHeaderEntry_C", "ExecuteUbergraph_UserListHeaderEntry");

	Params::UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UUserListHeaderEntry_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserListHeaderEntry_C", "OnFocusLost");

	Params::UserListHeaderEntry_C_OnFocusLost Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UUserListHeaderEntry_C::OnListItemObjectSet_1(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserListHeaderEntry_C", "OnListItemObjectSet_1");

	Params::UserListHeaderEntry_C_OnListItemObjectSet_1 Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}

}
