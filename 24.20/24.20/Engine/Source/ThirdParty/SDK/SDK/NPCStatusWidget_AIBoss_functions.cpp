#pragma once

#include "Basic.hpp"

#include "NPCStatusWidget_AIBoss_classes.hpp"
#include "NPCStatusWidget_AIBoss_parameters.hpp"

namespace SDK
{

void UNPCStatusWidget_AIBoss_C::ChangeWidgetVisibleDuration(double StatusWidgetVisibleDuration_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCStatusWidget_AIBoss_C", "ChangeWidgetVisibleDuration");

	Params::NPCStatusWidget_AIBoss_C_ChangeWidgetVisibleDuration Parms{};

	Parms.StatusWidgetVisibleDuration_0 = StatusWidgetVisibleDuration_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UNPCStatusWidget_AIBoss_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCStatusWidget_AIBoss_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UNPCStatusWidget_AIBoss_C::EventHideStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCStatusWidget_AIBoss_C", "EventHideStatus");

	UObject::ProcessEvent(Func, nullptr);
}

void UNPCStatusWidget_AIBoss_C::EventUpdateStatus(double Health, double Shield, double MaxHealth, double MaxShield_0, bool ShowShield)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCStatusWidget_AIBoss_C", "EventUpdateStatus");

	Params::NPCStatusWidget_AIBoss_C_EventUpdateStatus Parms{};

	Parms.Health = Health;
	Parms.Shield = Shield;
	Parms.MaxHealth = MaxHealth;
	Parms.MaxShield_0 = MaxShield_0;
	Parms.ShowShield = ShowShield;

	UObject::ProcessEvent(Func, &Parms);
}

void UNPCStatusWidget_AIBoss_C::ExecuteUbergraph_NPCStatusWidget_AIBoss(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCStatusWidget_AIBoss_C", "ExecuteUbergraph_NPCStatusWidget_AIBoss");

	Params::NPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UNPCStatusWidget_AIBoss_C::SetMaxHealth(double MaxHealth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCStatusWidget_AIBoss_C", "SetMaxHealth");

	Params::NPCStatusWidget_AIBoss_C_SetMaxHealth Parms{};

	Parms.MaxHealth = MaxHealth;

	UObject::ProcessEvent(Func, &Parms);
}

void UNPCStatusWidget_AIBoss_C::SetMaxShield(double MaxShield_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCStatusWidget_AIBoss_C", "SetMaxShield");

	Params::NPCStatusWidget_AIBoss_C_SetMaxShield Parms{};

	Parms.MaxShield_0 = MaxShield_0;

	UObject::ProcessEvent(Func, &Parms);
}

}
