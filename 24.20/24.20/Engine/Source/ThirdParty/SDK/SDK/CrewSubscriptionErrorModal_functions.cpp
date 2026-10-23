#pragma once

#include "Basic.hpp"

#include "CrewSubscriptionErrorModal_classes.hpp"
#include "CrewSubscriptionErrorModal_parameters.hpp"

namespace SDK
{

void UCrewSubscriptionErrorModal_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewSubscriptionErrorModal_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UCrewSubscriptionErrorModal_C::ExecuteUbergraph_CrewSubscriptionErrorModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewSubscriptionErrorModal_C", "ExecuteUbergraph_CrewSubscriptionErrorModal");

	Params::CrewSubscriptionErrorModal_C_ExecuteUbergraph_CrewSubscriptionErrorModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
