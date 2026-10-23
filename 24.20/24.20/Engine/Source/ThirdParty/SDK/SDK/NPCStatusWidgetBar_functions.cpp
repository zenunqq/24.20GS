#pragma once

#include "Basic.hpp"

#include "NPCStatusWidgetBar_classes.hpp"
#include "NPCStatusWidgetBar_parameters.hpp"

namespace SDK
{

void UNPCStatusWidgetBar_C::ExecuteUbergraph_NPCStatusWidgetBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCStatusWidgetBar_C", "ExecuteUbergraph_NPCStatusWidgetBar");

	Params::NPCStatusWidgetBar_C_ExecuteUbergraph_NPCStatusWidgetBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UNPCStatusWidgetBar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCStatusWidgetBar_C", "PreConstruct");

	Params::NPCStatusWidgetBar_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UNPCStatusWidgetBar_C::SetHealthBarColorDependingHealth(double CurrentPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCStatusWidgetBar_C", "SetHealthBarColorDependingHealth");

	Params::NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth Parms{};

	Parms.CurrentPercentage = CurrentPercentage;

	UObject::ProcessEvent(Func, &Parms);
}

void UNPCStatusWidgetBar_C::SetNumPips(int32 NumPips)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCStatusWidgetBar_C", "SetNumPips");

	Params::NPCStatusWidgetBar_C_SetNumPips Parms{};

	Parms.NumPips = NumPips;

	UObject::ProcessEvent(Func, &Parms);
}

void UNPCStatusWidgetBar_C::SetPercent(double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCStatusWidgetBar_C", "SetPercent");

	Params::NPCStatusWidgetBar_C_SetPercent Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}
