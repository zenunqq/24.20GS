#pragma once

#include "Basic.hpp"

#include "LeavePartyConfirmationMenu_classes.hpp"
#include "LeavePartyConfirmationMenu_parameters.hpp"

namespace SDK
{

void ULeavePartyConfirmationMenu_C::ExecuteUbergraph_LeavePartyConfirmationMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeavePartyConfirmationMenu_C", "ExecuteUbergraph_LeavePartyConfirmationMenu");

	Params::LeavePartyConfirmationMenu_C_ExecuteUbergraph_LeavePartyConfirmationMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ULeavePartyConfirmationMenu_C::OnOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeavePartyConfirmationMenu_C", "OnOpened");

	UObject::ProcessEvent(Func, nullptr);
}

}
