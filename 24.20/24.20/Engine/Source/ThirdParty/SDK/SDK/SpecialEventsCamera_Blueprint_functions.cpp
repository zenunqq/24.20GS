#pragma once

#include "Basic.hpp"

#include "SpecialEventsCamera_Blueprint_classes.hpp"
#include "SpecialEventsCamera_Blueprint_parameters.hpp"

namespace SDK
{

void ASpecialEventsCamera_Blueprint_C::ExecuteUbergraph_SpecialEventsCamera_Blueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventsCamera_Blueprint_C", "ExecuteUbergraph_SpecialEventsCamera_Blueprint");

	Params::SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ASpecialEventsCamera_Blueprint_C::BP_OnDeactivated(class AFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventsCamera_Blueprint_C", "BP_OnDeactivated");

	Params::SpecialEventsCamera_Blueprint_C_BP_OnDeactivated Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}

void ASpecialEventsCamera_Blueprint_C::BP_OnActivated(class AFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialEventsCamera_Blueprint_C", "BP_OnActivated");

	Params::SpecialEventsCamera_Blueprint_C_BP_OnActivated Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}

}
