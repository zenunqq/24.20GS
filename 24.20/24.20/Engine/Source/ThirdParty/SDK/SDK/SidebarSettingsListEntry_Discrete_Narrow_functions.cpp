#pragma once

#include "Basic.hpp"

#include "SidebarSettingsListEntry_Discrete_Narrow_classes.hpp"
#include "SidebarSettingsListEntry_Discrete_Narrow_parameters.hpp"

namespace SDK
{

void USidebarSettingsListEntry_Discrete_Narrow_C::ExecuteUbergraph_SidebarSettingsListEntry_Discrete_Narrow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSettingsListEntry_Discrete_Narrow_C", "ExecuteUbergraph_SidebarSettingsListEntry_Discrete_Narrow");

	Params::SidebarSettingsListEntry_Discrete_Narrow_C_ExecuteUbergraph_SidebarSettingsListEntry_Discrete_Narrow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

class UWidget* USidebarSettingsListEntry_Discrete_Narrow_C::GetPrimaryGamepadFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSettingsListEntry_Discrete_Narrow_C", "GetPrimaryGamepadFocusWidget");

	Params::SidebarSettingsListEntry_Discrete_Narrow_C_GetPrimaryGamepadFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void USidebarSettingsListEntry_Discrete_Narrow_C::OnEditableStateChanged(const bool bIsEditable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSettingsListEntry_Discrete_Narrow_C", "OnEditableStateChanged");

	Params::SidebarSettingsListEntry_Discrete_Narrow_C_OnEditableStateChanged Parms{};

	Parms.bIsEditable = bIsEditable;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarSettingsListEntry_Discrete_Narrow_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSettingsListEntry_Discrete_Narrow_C", "OnMouseEnter");

	Params::SidebarSettingsListEntry_Discrete_Narrow_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarSettingsListEntry_Discrete_Narrow_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSettingsListEntry_Discrete_Narrow_C", "OnMouseLeave");

	Params::SidebarSettingsListEntry_Discrete_Narrow_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

}
