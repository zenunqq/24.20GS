#pragma once

#include "Basic.hpp"

#include "SettingsListEntry_Discrete_Narrow_classes.hpp"
#include "SettingsListEntry_Discrete_Narrow_parameters.hpp"

namespace SDK
{

void USettingsListEntry_Discrete_Narrow_C::ExecuteUbergraph_SettingsListEntry_Discrete_Narrow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Discrete_Narrow_C", "ExecuteUbergraph_SettingsListEntry_Discrete_Narrow");

	Params::SettingsListEntry_Discrete_Narrow_C_ExecuteUbergraph_SettingsListEntry_Discrete_Narrow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

class UWidget* USettingsListEntry_Discrete_Narrow_C::GetPrimaryGamepadFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Discrete_Narrow_C", "GetPrimaryGamepadFocusWidget");

	Params::SettingsListEntry_Discrete_Narrow_C_GetPrimaryGamepadFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void USettingsListEntry_Discrete_Narrow_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Discrete_Narrow_C", "OnMouseEnter");

	Params::SettingsListEntry_Discrete_Narrow_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void USettingsListEntry_Discrete_Narrow_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Discrete_Narrow_C", "OnMouseLeave");

	Params::SettingsListEntry_Discrete_Narrow_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

}
