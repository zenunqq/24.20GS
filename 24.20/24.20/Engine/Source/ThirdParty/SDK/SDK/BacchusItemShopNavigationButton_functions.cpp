#pragma once

#include "Basic.hpp"

#include "BacchusItemShopNavigationButton_classes.hpp"
#include "BacchusItemShopNavigationButton_parameters.hpp"

namespace SDK
{

void UBacchusItemShopNavigationButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusItemShopNavigationButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBacchusItemShopNavigationButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusItemShopNavigationButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBacchusItemShopNavigationButton_C::ExecuteUbergraph_BacchusItemShopNavigationButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusItemShopNavigationButton_C", "ExecuteUbergraph_BacchusItemShopNavigationButton");

	Params::BacchusItemShopNavigationButton_C_ExecuteUbergraph_BacchusItemShopNavigationButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBacchusItemShopNavigationButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusItemShopNavigationButton_C", "PreConstruct");

	Params::BacchusItemShopNavigationButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
