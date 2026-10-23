#pragma once

#include "Basic.hpp"

#include "PurchaseUnavailable_classes.hpp"
#include "PurchaseUnavailable_parameters.hpp"

namespace SDK
{

void UPurchaseUnavailable_C::OnUpdateTextStyle(const class FText& OfferDisplayName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseUnavailable_C", "OnUpdateTextStyle");

	Params::PurchaseUnavailable_C_OnUpdateTextStyle Parms{};

	Parms.OfferDisplayName = std::move(OfferDisplayName);

	UObject::ProcessEvent(Func, &Parms);
}

void UPurchaseUnavailable_C::ExecuteUbergraph_PurchaseUnavailable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseUnavailable_C", "ExecuteUbergraph_PurchaseUnavailable");

	Params::PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
