#pragma once

#include "Basic.hpp"

#include "FrontendCamera_Main_classes.hpp"
#include "FrontendCamera_Main_parameters.hpp"

namespace SDK
{

void AFrontendCamera_Main_C::ExecuteUbergraph_FrontendCamera_Main(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontendCamera_Main_C", "ExecuteUbergraph_FrontendCamera_Main");

	Params::FrontendCamera_Main_C_ExecuteUbergraph_FrontendCamera_Main Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AFrontendCamera_Main_C::BP_OnActivated(class AFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontendCamera_Main_C", "BP_OnActivated");

	Params::FrontendCamera_Main_C_BP_OnActivated Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}

}
