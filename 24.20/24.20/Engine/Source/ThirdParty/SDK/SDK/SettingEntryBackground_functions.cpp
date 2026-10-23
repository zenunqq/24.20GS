#pragma once

#include "Basic.hpp"

#include "SettingEntryBackground_classes.hpp"
#include "SettingEntryBackground_parameters.hpp"

namespace SDK
{

void USettingEntryBackground_C::ExecuteUbergraph_SettingEntryBackground(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingEntryBackground_C", "ExecuteUbergraph_SettingEntryBackground");

	Params::SettingEntryBackground_C_ExecuteUbergraph_SettingEntryBackground Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USettingEntryBackground_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingEntryBackground_C", "OnMouseEnter");

	Params::SettingEntryBackground_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void USettingEntryBackground_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingEntryBackground_C", "OnMouseLeave");

	Params::SettingEntryBackground_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

}
