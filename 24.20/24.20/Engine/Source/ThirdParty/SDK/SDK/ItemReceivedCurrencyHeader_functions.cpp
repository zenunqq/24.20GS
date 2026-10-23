#pragma once

#include "Basic.hpp"

#include "ItemReceivedCurrencyHeader_classes.hpp"
#include "ItemReceivedCurrencyHeader_parameters.hpp"

namespace SDK
{

void UItemReceivedCurrencyHeader_C::ActiveFromPresentation(const struct FCurrencyDataWithGiftBox& CurrencyDataArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceivedCurrencyHeader_C", "ActiveFromPresentation");

	Params::ItemReceivedCurrencyHeader_C_ActiveFromPresentation Parms{};

	Parms.CurrencyDataArray = std::move(CurrencyDataArray);

	UObject::ProcessEvent(Func, &Parms);
}

void UItemReceivedCurrencyHeader_C::ExecuteUbergraph_ItemReceivedCurrencyHeader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceivedCurrencyHeader_C", "ExecuteUbergraph_ItemReceivedCurrencyHeader");

	Params::ItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
