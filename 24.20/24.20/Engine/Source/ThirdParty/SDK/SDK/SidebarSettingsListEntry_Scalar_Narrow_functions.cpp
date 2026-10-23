#pragma once

#include "Basic.hpp"

#include "SidebarSettingsListEntry_Scalar_Narrow_classes.hpp"
#include "SidebarSettingsListEntry_Scalar_Narrow_parameters.hpp"

namespace SDK
{

void USidebarSettingsListEntry_Scalar_Narrow_C::ExecuteUbergraph_SidebarSettingsListEntry_Scalar_Narrow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSettingsListEntry_Scalar_Narrow_C", "ExecuteUbergraph_SidebarSettingsListEntry_Scalar_Narrow");

	Params::SidebarSettingsListEntry_Scalar_Narrow_C_ExecuteUbergraph_SidebarSettingsListEntry_Scalar_Narrow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

class UWidget* USidebarSettingsListEntry_Scalar_Narrow_C::GetPrimaryGamepadFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSettingsListEntry_Scalar_Narrow_C", "GetPrimaryGamepadFocusWidget");

	Params::SidebarSettingsListEntry_Scalar_Narrow_C_GetPrimaryGamepadFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void USidebarSettingsListEntry_Scalar_Narrow_C::OnDefaultValueChanged(float DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSettingsListEntry_Scalar_Narrow_C", "OnDefaultValueChanged");

	Params::SidebarSettingsListEntry_Scalar_Narrow_C_OnDefaultValueChanged Parms{};

	Parms.DefaultValue = DefaultValue;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarSettingsListEntry_Scalar_Narrow_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSettingsListEntry_Scalar_Narrow_C", "OnMouseEnter");

	Params::SidebarSettingsListEntry_Scalar_Narrow_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarSettingsListEntry_Scalar_Narrow_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSettingsListEntry_Scalar_Narrow_C", "OnMouseLeave");

	Params::SidebarSettingsListEntry_Scalar_Narrow_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarSettingsListEntry_Scalar_Narrow_C::OnValueChanged(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSettingsListEntry_Scalar_Narrow_C", "OnValueChanged");

	Params::SidebarSettingsListEntry_Scalar_Narrow_C_OnValueChanged Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}
