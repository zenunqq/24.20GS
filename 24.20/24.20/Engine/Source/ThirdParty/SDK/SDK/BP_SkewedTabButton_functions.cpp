#pragma once

#include "Basic.hpp"

#include "BP_SkewedTabButton_classes.hpp"
#include "BP_SkewedTabButton_parameters.hpp"

namespace SDK
{

void UBP_SkewedTabButton_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkewedTabButton_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_SkewedTabButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkewedTabButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_SkewedTabButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkewedTabButton_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_SkewedTabButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkewedTabButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_SkewedTabButton_C::ExecuteUbergraph_BP_SkewedTabButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkewedTabButton_C", "ExecuteUbergraph_BP_SkewedTabButton");

	Params::BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_SkewedTabButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkewedTabButton_C", "PreConstruct");

	Params::BP_SkewedTabButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_SkewedTabButton_C::SetTextColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkewedTabButton_C", "SetTextColor");

	Params::BP_SkewedTabButton_C_SetTextColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}

}
