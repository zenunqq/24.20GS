#pragma once

#include "Basic.hpp"

#include "VaultCamera_Blueprint_classes.hpp"
#include "VaultCamera_Blueprint_parameters.hpp"

namespace SDK
{

void AVaultCamera_Blueprint_C::ExecuteUbergraph_VaultCamera_Blueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultCamera_Blueprint_C", "ExecuteUbergraph_VaultCamera_Blueprint");

	Params::VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AVaultCamera_Blueprint_C::BP_OnDeactivated(class AFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultCamera_Blueprint_C", "BP_OnDeactivated");

	Params::VaultCamera_Blueprint_C_BP_OnDeactivated Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}

void AVaultCamera_Blueprint_C::BP_OnActivated(class AFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultCamera_Blueprint_C", "BP_OnActivated");

	Params::VaultCamera_Blueprint_C_BP_OnActivated Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}

}
