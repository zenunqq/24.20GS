#pragma once

#include "Basic.hpp"

#include "FortnitePartyBackdrop_Camera_classes.hpp"
#include "FortnitePartyBackdrop_Camera_parameters.hpp"

namespace SDK
{

void AFortnitePartyBackdrop_Camera_C::Reset_Location()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortnitePartyBackdrop_Camera_C", "Reset Location");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortnitePartyBackdrop_Camera_C::BP_OnDeactivated(class AFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortnitePartyBackdrop_Camera_C", "BP_OnDeactivated");

	Params::FortnitePartyBackdrop_Camera_C_BP_OnDeactivated Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortnitePartyBackdrop_Camera_C::ManualActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortnitePartyBackdrop_Camera_C", "ManualActivate");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortnitePartyBackdrop_Camera_C::BP_OnActivated(class AFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortnitePartyBackdrop_Camera_C", "BP_OnActivated");

	Params::FortnitePartyBackdrop_Camera_C_BP_OnActivated Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortnitePartyBackdrop_Camera_C::ExecuteUbergraph_FortnitePartyBackdrop_Camera(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortnitePartyBackdrop_Camera_C", "ExecuteUbergraph_FortnitePartyBackdrop_Camera");

	Params::FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
