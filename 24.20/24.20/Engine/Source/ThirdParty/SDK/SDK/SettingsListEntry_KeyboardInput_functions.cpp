#pragma once

#include "Basic.hpp"

#include "SettingsListEntry_KeyboardInput_classes.hpp"
#include "SettingsListEntry_KeyboardInput_parameters.hpp"

namespace SDK
{

void USettingsListEntry_KeyboardInput_C::ExecuteUbergraph_SettingsListEntry_KeyboardInput(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_KeyboardInput_C", "ExecuteUbergraph_SettingsListEntry_KeyboardInput");

	Params::SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USettingsListEntry_KeyboardInput_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_KeyboardInput_C", "OnMouseEnter");

	Params::SettingsListEntry_KeyboardInput_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void USettingsListEntry_KeyboardInput_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_KeyboardInput_C", "OnMouseLeave");

	Params::SettingsListEntry_KeyboardInput_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void USettingsListEntry_KeyboardInput_C::OnUpdateKeyText(const class FText& PrimaryKeyText, const class FText& SecondaryKeyText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_KeyboardInput_C", "OnUpdateKeyText");

	Params::SettingsListEntry_KeyboardInput_C_OnUpdateKeyText Parms{};

	Parms.PrimaryKeyText = std::move(PrimaryKeyText);
	Parms.SecondaryKeyText = std::move(SecondaryKeyText);

	UObject::ProcessEvent(Func, &Parms);
}

}
