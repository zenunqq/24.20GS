#pragma once

#include "Basic.hpp"

#include "SidebarSettingEntryBackground_classes.hpp"
#include "SidebarSettingEntryBackground_parameters.hpp"

namespace SDK
{

void USidebarSettingEntryBackground_C::ExecuteUbergraph_SidebarSettingEntryBackground(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSettingEntryBackground_C", "ExecuteUbergraph_SidebarSettingEntryBackground");

	Params::SidebarSettingEntryBackground_C_ExecuteUbergraph_SidebarSettingEntryBackground Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarSettingEntryBackground_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSettingEntryBackground_C", "OnMouseEnter");

	Params::SidebarSettingEntryBackground_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarSettingEntryBackground_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSettingEntryBackground_C", "OnMouseLeave");

	Params::SidebarSettingEntryBackground_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

}
