#pragma once

#include "Basic.hpp"

#include "LoginCamera_Blueprint_classes.hpp"
#include "LoginCamera_Blueprint_parameters.hpp"

namespace SDK
{

void ALoginCamera_Blueprint_C::ExecuteUbergraph_LoginCamera_Blueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginCamera_Blueprint_C", "ExecuteUbergraph_LoginCamera_Blueprint");

	Params::LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ALoginCamera_Blueprint_C::BP_OnActivated(class AFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginCamera_Blueprint_C", "BP_OnActivated");

	Params::LoginCamera_Blueprint_C_BP_OnActivated Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}

}
