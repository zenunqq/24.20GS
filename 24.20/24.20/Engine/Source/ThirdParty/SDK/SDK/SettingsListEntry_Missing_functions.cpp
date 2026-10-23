#pragma once

#include "Basic.hpp"

#include "SettingsListEntry_Missing_classes.hpp"
#include "SettingsListEntry_Missing_parameters.hpp"

namespace SDK
{

void USettingsListEntry_Missing_C::ExecuteUbergraph_SettingsListEntry_Missing(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Missing_C", "ExecuteUbergraph_SettingsListEntry_Missing");

	Params::SettingsListEntry_Missing_C_ExecuteUbergraph_SettingsListEntry_Missing Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USettingsListEntry_Missing_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Missing_C", "OnMouseEnter");

	Params::SettingsListEntry_Missing_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void USettingsListEntry_Missing_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Missing_C", "OnMouseLeave");

	Params::SettingsListEntry_Missing_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

}
