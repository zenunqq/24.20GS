#pragma once

#include "Basic.hpp"

#include "SettingsListEntry_Discrete_classes.hpp"
#include "SettingsListEntry_Discrete_parameters.hpp"

namespace SDK
{

void USettingsListEntry_Discrete_C::ExecuteUbergraph_SettingsListEntry_Discrete(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Discrete_C", "ExecuteUbergraph_SettingsListEntry_Discrete");

	Params::SettingsListEntry_Discrete_C_ExecuteUbergraph_SettingsListEntry_Discrete Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

class UWidget* USettingsListEntry_Discrete_C::GetPrimaryGamepadFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Discrete_C", "GetPrimaryGamepadFocusWidget");

	Params::SettingsListEntry_Discrete_C_GetPrimaryGamepadFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void USettingsListEntry_Discrete_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Discrete_C", "OnMouseEnter");

	Params::SettingsListEntry_Discrete_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void USettingsListEntry_Discrete_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Discrete_C", "OnMouseLeave");

	Params::SettingsListEntry_Discrete_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

}
