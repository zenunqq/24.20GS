#pragma once

#include "Basic.hpp"

#include "ItemShopNavigationButton_classes.hpp"
#include "ItemShopNavigationButton_parameters.hpp"

namespace SDK
{

void UItemShopNavigationButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopNavigationButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UItemShopNavigationButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopNavigationButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UItemShopNavigationButton_C::ExecuteUbergraph_ItemShopNavigationButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopNavigationButton_C", "ExecuteUbergraph_ItemShopNavigationButton");

	Params::ItemShopNavigationButton_C_ExecuteUbergraph_ItemShopNavigationButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UItemShopNavigationButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopNavigationButton_C", "PreConstruct");

	Params::ItemShopNavigationButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
