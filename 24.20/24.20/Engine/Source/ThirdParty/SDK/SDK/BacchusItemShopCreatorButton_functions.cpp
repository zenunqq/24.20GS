#pragma once

#include "Basic.hpp"

#include "BacchusItemShopCreatorButton_classes.hpp"
#include "BacchusItemShopCreatorButton_parameters.hpp"

namespace SDK
{

void UBacchusItemShopCreatorButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusItemShopCreatorButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBacchusItemShopCreatorButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusItemShopCreatorButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBacchusItemShopCreatorButton_C::ExecuteUbergraph_BacchusItemShopCreatorButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BacchusItemShopCreatorButton_C", "ExecuteUbergraph_BacchusItemShopCreatorButton");

	Params::BacchusItemShopCreatorButton_C_ExecuteUbergraph_BacchusItemShopCreatorButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
