#pragma once

#include "Basic.hpp"

#include "StoreMain_OfferDetailsAttribute_classes.hpp"
#include "StoreMain_OfferDetailsAttribute_parameters.hpp"

namespace SDK
{

void UStoreMain_OfferDetailsAttribute_C::ExecuteUbergraph_StoreMain_OfferDetailsAttribute(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetailsAttribute_C", "ExecuteUbergraph_StoreMain_OfferDetailsAttribute");

	Params::StoreMain_OfferDetailsAttribute_C_ExecuteUbergraph_StoreMain_OfferDetailsAttribute Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UStoreMain_OfferDetailsAttribute_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetailsAttribute_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
