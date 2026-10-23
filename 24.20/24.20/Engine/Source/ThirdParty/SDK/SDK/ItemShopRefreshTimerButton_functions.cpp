#pragma once

#include "Basic.hpp"

#include "ItemShopRefreshTimerButton_classes.hpp"
#include "ItemShopRefreshTimerButton_parameters.hpp"

namespace SDK
{

void UItemShopRefreshTimerButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopRefreshTimerButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UItemShopRefreshTimerButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopRefreshTimerButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UItemShopRefreshTimerButton_C::ExecuteUbergraph_ItemShopRefreshTimerButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopRefreshTimerButton_C", "ExecuteUbergraph_ItemShopRefreshTimerButton");

	Params::ItemShopRefreshTimerButton_C_ExecuteUbergraph_ItemShopRefreshTimerButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
