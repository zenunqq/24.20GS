#pragma once

#include "Basic.hpp"

#include "SettingsListEntry_SubCollection_classes.hpp"
#include "SettingsListEntry_SubCollection_parameters.hpp"

namespace SDK
{

void USettingsListEntry_SubCollection_C::ExecuteUbergraph_SettingsListEntry_SubCollection(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_SubCollection_C", "ExecuteUbergraph_SettingsListEntry_SubCollection");

	Params::SettingsListEntry_SubCollection_C_ExecuteUbergraph_SettingsListEntry_SubCollection Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

class UWidget* USettingsListEntry_SubCollection_C::GetPrimaryGamepadFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_SubCollection_C", "GetPrimaryGamepadFocusWidget");

	Params::SettingsListEntry_SubCollection_C_GetPrimaryGamepadFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void USettingsListEntry_SubCollection_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_SubCollection_C", "OnMouseEnter");

	Params::SettingsListEntry_SubCollection_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void USettingsListEntry_SubCollection_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_SubCollection_C", "OnMouseLeave");

	Params::SettingsListEntry_SubCollection_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void USettingsListEntry_SubCollection_C::OnSettingAssigned(const class FText& ActionText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_SubCollection_C", "OnSettingAssigned");

	Params::SettingsListEntry_SubCollection_C_OnSettingAssigned Parms{};

	Parms.ActionText = std::move(ActionText);

	UObject::ProcessEvent(Func, &Parms);
}

}
