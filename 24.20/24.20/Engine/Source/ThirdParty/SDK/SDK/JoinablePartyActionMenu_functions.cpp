#pragma once

#include "Basic.hpp"

#include "JoinablePartyActionMenu_classes.hpp"
#include "JoinablePartyActionMenu_parameters.hpp"

namespace SDK
{

void UJoinablePartyActionMenu_C::ExecuteUbergraph_JoinablePartyActionMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinablePartyActionMenu_C", "ExecuteUbergraph_JoinablePartyActionMenu");

	Params::JoinablePartyActionMenu_C_ExecuteUbergraph_JoinablePartyActionMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UJoinablePartyActionMenu_C::OnOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinablePartyActionMenu_C", "OnOpened");

	UObject::ProcessEvent(Func, nullptr);
}

void UJoinablePartyActionMenu_C::OnToggleConfirmation(bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinablePartyActionMenu_C", "OnToggleConfirmation");

	Params::JoinablePartyActionMenu_C_OnToggleConfirmation Parms{};

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}
