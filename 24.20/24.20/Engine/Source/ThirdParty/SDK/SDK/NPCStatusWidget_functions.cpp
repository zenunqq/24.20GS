#pragma once

#include "Basic.hpp"

#include "NPCStatusWidget_classes.hpp"
#include "NPCStatusWidget_parameters.hpp"

namespace SDK
{

void UNPCStatusWidget_C::BP_HandlePlaylistExtensionWidgetCreated(class UUserWidget* Widget, EUIExtensionSlot SlotType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCStatusWidget_C", "BP_HandlePlaylistExtensionWidgetCreated");

	Params::NPCStatusWidget_C_BP_HandlePlaylistExtensionWidgetCreated Parms{};

	Parms.Widget = Widget;
	Parms.SlotType = SlotType;

	UObject::ProcessEvent(Func, &Parms);
}

void UNPCStatusWidget_C::ChangeWidgetVisibleDuration(double StatusWidgetVisibleDuration_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCStatusWidget_C", "ChangeWidgetVisibleDuration");

	Params::NPCStatusWidget_C_ChangeWidgetVisibleDuration Parms{};

	Parms.StatusWidgetVisibleDuration_0 = StatusWidgetVisibleDuration_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UNPCStatusWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCStatusWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UNPCStatusWidget_C::EventHideStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCStatusWidget_C", "EventHideStatus");

	UObject::ProcessEvent(Func, nullptr);
}

void UNPCStatusWidget_C::EventUpdateStatus(double Health, double Shield, bool ShowShield)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCStatusWidget_C", "EventUpdateStatus");

	Params::NPCStatusWidget_C_EventUpdateStatus Parms{};

	Parms.Health = Health;
	Parms.Shield = Shield;
	Parms.ShowShield = ShowShield;

	UObject::ProcessEvent(Func, &Parms);
}

void UNPCStatusWidget_C::ExecuteUbergraph_NPCStatusWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCStatusWidget_C", "ExecuteUbergraph_NPCStatusWidget");

	Params::NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UNPCStatusWidget_C::OnPawnFocused()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCStatusWidget_C", "OnPawnFocused");

	UObject::ProcessEvent(Func, nullptr);
}

void UNPCStatusWidget_C::SetKeepVisibilityOn(bool KeepVisibilityOn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCStatusWidget_C", "SetKeepVisibilityOn");

	Params::NPCStatusWidget_C_SetKeepVisibilityOn Parms{};

	Parms.KeepVisibilityOn_0 = KeepVisibilityOn_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UNPCStatusWidget_C::TryCallEventHideByTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCStatusWidget_C", "TryCallEventHideByTimer");

	UObject::ProcessEvent(Func, nullptr);
}

}
