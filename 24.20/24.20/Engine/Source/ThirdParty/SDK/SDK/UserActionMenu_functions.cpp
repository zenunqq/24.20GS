#pragma once

#include "Basic.hpp"

#include "UserActionMenu_classes.hpp"
#include "UserActionMenu_parameters.hpp"

namespace SDK
{

void UUserActionMenu_C::ExecuteUbergraph_UserActionMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserActionMenu_C", "ExecuteUbergraph_UserActionMenu");

	Params::UserActionMenu_C_ExecuteUbergraph_UserActionMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UUserActionMenu_C::OnOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserActionMenu_C", "OnOpened");

	UObject::ProcessEvent(Func, nullptr);
}

void UUserActionMenu_C::OnToggleConfirmation(bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserActionMenu_C", "OnToggleConfirmation");

	Params::UserActionMenu_C_OnToggleConfirmation Parms{};

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}
