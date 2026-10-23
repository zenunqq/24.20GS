#pragma once

#include "Basic.hpp"

#include "FrontendCamera_Manage_classes.hpp"
#include "FrontendCamera_Manage_parameters.hpp"

namespace SDK
{

void AFrontendCamera_Manage_C::ExecuteUbergraph_FrontendCamera_Manage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontendCamera_Manage_C", "ExecuteUbergraph_FrontendCamera_Manage");

	Params::FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AFrontendCamera_Manage_C::BP_OnDeactivated(class AFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontendCamera_Manage_C", "BP_OnDeactivated");

	Params::FrontendCamera_Manage_C_BP_OnDeactivated Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}

void AFrontendCamera_Manage_C::BP_OnActivated(class AFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontendCamera_Manage_C", "BP_OnActivated");

	Params::FrontendCamera_Manage_C_BP_OnActivated Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}

}
