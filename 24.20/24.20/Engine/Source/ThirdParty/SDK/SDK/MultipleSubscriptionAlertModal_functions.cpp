#pragma once

#include "Basic.hpp"

#include "MultipleSubscriptionAlertModal_classes.hpp"
#include "MultipleSubscriptionAlertModal_parameters.hpp"

namespace SDK
{

void UMultipleSubscriptionAlertModal_C::ExecuteUbergraph_MultipleSubscriptionAlertModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultipleSubscriptionAlertModal_C", "ExecuteUbergraph_MultipleSubscriptionAlertModal");

	Params::MultipleSubscriptionAlertModal_C_ExecuteUbergraph_MultipleSubscriptionAlertModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UMultipleSubscriptionAlertModal_C::OnSetHowToCancelURL(const class FString& MoreInfoUrl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultipleSubscriptionAlertModal_C", "OnSetHowToCancelURL");

	Params::MultipleSubscriptionAlertModal_C_OnSetHowToCancelURL Parms{};

	Parms.MoreInfoUrl = std::move(MoreInfoUrl);

	UObject::ProcessEvent(Func, &Parms);
}

}
