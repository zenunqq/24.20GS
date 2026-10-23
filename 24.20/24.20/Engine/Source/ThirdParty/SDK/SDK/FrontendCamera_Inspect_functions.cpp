#pragma once

#include "Basic.hpp"

#include "FrontendCamera_Inspect_classes.hpp"
#include "FrontendCamera_Inspect_parameters.hpp"

namespace SDK
{

void AFrontendCamera_Inspect_C::ExecuteUbergraph_FrontendCamera_Inspect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontendCamera_Inspect_C", "ExecuteUbergraph_FrontendCamera_Inspect");

	Params::FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AFrontendCamera_Inspect_C::BP_OnDeactivated(class AFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontendCamera_Inspect_C", "BP_OnDeactivated");

	Params::FrontendCamera_Inspect_C_BP_OnDeactivated Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}

void AFrontendCamera_Inspect_C::BP_OnActivated(class AFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontendCamera_Inspect_C", "BP_OnActivated");

	Params::FrontendCamera_Inspect_C_BP_OnActivated Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}

}
