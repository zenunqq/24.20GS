#pragma once

#include "Basic.hpp"

#include "CurrencyListView_classes.hpp"
#include "CurrencyListView_parameters.hpp"

namespace SDK
{

void UCurrencyListView_C::AddDataToList(const struct FCurrencyData& CurrencyData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurrencyListView_C", "AddDataToList");

	Params::CurrencyListView_C_AddDataToList Parms{};

	Parms.CurrencyData = std::move(CurrencyData);

	UObject::ProcessEvent(Func, &Parms);
}

void UCurrencyListView_C::ExecuteUbergraph_CurrencyListView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurrencyListView_C", "ExecuteUbergraph_CurrencyListView");

	Params::CurrencyListView_C_ExecuteUbergraph_CurrencyListView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UCurrencyListView_C::RunClearListView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurrencyListView_C", "RunClearListView");

	UObject::ProcessEvent(Func, nullptr);
}

}
