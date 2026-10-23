#pragma once

#include "Basic.hpp"

#include "BacchusItemShopRefreshTimerButton_classes.hpp"
#include "BacchusItemShopRefreshTimerButton_parameters.hpp"

namespace SDK
{

void UBacchusItemShopRefreshTimerButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusItemShopRefreshTimerButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBacchusItemShopRefreshTimerButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusItemShopRefreshTimerButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBacchusItemShopRefreshTimerButton_C::ExecuteUbergraph_BacchusItemShopRefreshTimerButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusItemShopRefreshTimerButton_C", "ExecuteUbergraph_BacchusItemShopRefreshTimerButton");

	Params::BacchusItemShopRefreshTimerButton_C_ExecuteUbergraph_BacchusItemShopRefreshTimerButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
