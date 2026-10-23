#pragma once

#include "Basic.hpp"

#include "SettingsListEntry_Action_classes.hpp"
#include "SettingsListEntry_Action_parameters.hpp"

namespace SDK
{

void USettingsListEntry_Action_C::ExecuteUbergraph_SettingsListEntry_Action(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Action_C", "ExecuteUbergraph_SettingsListEntry_Action");

	Params::SettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

class UWidget* USettingsListEntry_Action_C::GetPrimaryGamepadFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Action_C", "GetPrimaryGamepadFocusWidget");

	Params::SettingsListEntry_Action_C_GetPrimaryGamepadFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void USettingsListEntry_Action_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Action_C", "OnMouseEnter");

	Params::SettingsListEntry_Action_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void USettingsListEntry_Action_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Action_C", "OnMouseLeave");

	Params::SettingsListEntry_Action_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void USettingsListEntry_Action_C::OnSettingAssigned(const class FText& ActionText, bool bShowKeybindWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Action_C", "OnSettingAssigned");

	Params::SettingsListEntry_Action_C_OnSettingAssigned Parms{};

	Parms.ActionText = std::move(ActionText);
	Parms.bShowKeybindWidget = bShowKeybindWidget;

	UObject::ProcessEvent(Func, &Parms);
}

}
