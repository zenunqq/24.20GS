#pragma once

#include "Basic.hpp"

#include "CurrencyListViewItem_classes.hpp"
#include "CurrencyListViewItem_parameters.hpp"

namespace SDK
{

void UCurrencyListViewItem_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurrencyListViewItem_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}

void UCurrencyListViewItem_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurrencyListViewItem_C", "BP_OnItemExpansionChanged");

	Params::CurrencyListViewItem_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}

void UCurrencyListViewItem_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurrencyListViewItem_C", "BP_OnItemSelectionChanged");

	Params::CurrencyListViewItem_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UCurrencyListViewItem_C::ExecuteUbergraph_CurrencyListViewItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurrencyListViewItem_C", "ExecuteUbergraph_CurrencyListViewItem");

	Params::CurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UCurrencyListViewItem_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurrencyListViewItem_C", "OnListItemObjectSet");

	Params::CurrencyListViewItem_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}

void UCurrencyListViewItem_C::SetQuantityAndType(int32 inInt, const class FText& To)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CurrencyListViewItem_C", "SetQuantityAndType");

	Params::CurrencyListViewItem_C_SetQuantityAndType Parms{};

	Parms.inInt = inInt;
	Parms.To = std::move(To);

	UObject::ProcessEvent(Func, &Parms);
}

}
