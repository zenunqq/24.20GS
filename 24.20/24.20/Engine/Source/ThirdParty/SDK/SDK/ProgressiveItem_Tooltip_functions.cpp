#pragma once

#include "Basic.hpp"

#include "ProgressiveItem_Tooltip_classes.hpp"
#include "ProgressiveItem_Tooltip_parameters.hpp"

namespace SDK
{

void UProgressiveItem_Tooltip_C::Update_Text(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tooltip_C", "Update Text");

	Params::ProgressiveItem_Tooltip_C_Update_Text Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItem_Tooltip_C::ToggleTooltip(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tooltip_C", "ToggleTooltip");

	Params::ProgressiveItem_Tooltip_C_ToggleTooltip Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItem_Tooltip_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tooltip_C", "PreConstruct");

	Params::ProgressiveItem_Tooltip_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItem_Tooltip_C::Finished_BFEB1DDE42F9DC9A32C103B86238359F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tooltip_C", "Finished_BFEB1DDE42F9DC9A32C103B86238359F");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressiveItem_Tooltip_C::ExecuteUbergraph_ProgressiveItem_Tooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tooltip_C", "ExecuteUbergraph_ProgressiveItem_Tooltip");

	Params::ProgressiveItem_Tooltip_C_ExecuteUbergraph_ProgressiveItem_Tooltip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItem_Tooltip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tooltip_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
