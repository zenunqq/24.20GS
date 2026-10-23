#pragma once

#include "Basic.hpp"

#include "LockerBuiltInEmoteWidget_classes.hpp"
#include "LockerBuiltInEmoteWidget_parameters.hpp"

namespace SDK
{

void ULockerBuiltInEmoteWidget_C::ExecuteUbergraph_LockerBuiltInEmoteWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LockerBuiltInEmoteWidget_C", "ExecuteUbergraph_LockerBuiltInEmoteWidget");

	Params::LockerBuiltInEmoteWidget_C_ExecuteUbergraph_LockerBuiltInEmoteWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ULockerBuiltInEmoteWidget_C::OnUpdateAccessRestrictionWarning(bool bShouldShow, EAthenaLockerInfoRestrictionWarning WarningType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LockerBuiltInEmoteWidget_C", "OnUpdateAccessRestrictionWarning");

	Params::LockerBuiltInEmoteWidget_C_OnUpdateAccessRestrictionWarning Parms{};

	Parms.bShouldShow = bShouldShow;
	Parms.WarningType = WarningType;

	UObject::ProcessEvent(Func, &Parms);
}

}
