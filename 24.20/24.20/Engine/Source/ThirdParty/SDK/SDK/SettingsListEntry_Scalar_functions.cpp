#pragma once

#include "Basic.hpp"

#include "SettingsListEntry_Scalar_classes.hpp"
#include "SettingsListEntry_Scalar_parameters.hpp"

namespace SDK
{

void USettingsListEntry_Scalar_C::ExecuteUbergraph_SettingsListEntry_Scalar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Scalar_C", "ExecuteUbergraph_SettingsListEntry_Scalar");

	Params::SettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

class UWidget* USettingsListEntry_Scalar_C::GetPrimaryGamepadFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Scalar_C", "GetPrimaryGamepadFocusWidget");

	Params::SettingsListEntry_Scalar_C_GetPrimaryGamepadFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void USettingsListEntry_Scalar_C::OnDefaultValueChanged(float DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Scalar_C", "OnDefaultValueChanged");

	Params::SettingsListEntry_Scalar_C_OnDefaultValueChanged Parms{};

	Parms.DefaultValue = DefaultValue;

	UObject::ProcessEvent(Func, &Parms);
}

void USettingsListEntry_Scalar_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Scalar_C", "OnMouseEnter");

	Params::SettingsListEntry_Scalar_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void USettingsListEntry_Scalar_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Scalar_C", "OnMouseLeave");

	Params::SettingsListEntry_Scalar_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void USettingsListEntry_Scalar_C::OnValueChanged(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Scalar_C", "OnValueChanged");

	Params::SettingsListEntry_Scalar_C_OnValueChanged Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}
