#pragma once

#include "Basic.hpp"

#include "ItemShopPipButton_classes.hpp"
#include "ItemShopPipButton_parameters.hpp"

namespace SDK
{

void UItemShopPipButton_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopPipButton_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UItemShopPipButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopPipButton_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UItemShopPipButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopPipButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UItemShopPipButton_C::ExecuteUbergraph_ItemShopPipButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopPipButton_C", "ExecuteUbergraph_ItemShopPipButton");

	Params::ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UItemShopPipButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemShopPipButton_C", "PreConstruct");

	Params::ItemShopPipButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
