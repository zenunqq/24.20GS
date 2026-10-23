#pragma once

#include "Basic.hpp"

#include "PlusMinusButton_classes.hpp"
#include "PlusMinusButton_parameters.hpp"

namespace SDK
{

void UPlusMinusButton_C::BP_OnDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlusMinusButton_C", "BP_OnDisabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlusMinusButton_C::BP_OnEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlusMinusButton_C", "BP_OnEnabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlusMinusButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlusMinusButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlusMinusButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlusMinusButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlusMinusButton_C::ExecuteUbergraph_PlusMinusButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlusMinusButton_C", "ExecuteUbergraph_PlusMinusButton");

	Params::PlusMinusButton_C_ExecuteUbergraph_PlusMinusButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlusMinusButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlusMinusButton_C", "PreConstruct");

	Params::PlusMinusButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
