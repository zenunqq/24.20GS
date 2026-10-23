#pragma once

#include "Basic.hpp"

#include "BP_TeleportationDrone_classes.hpp"
#include "BP_TeleportationDrone_parameters.hpp"

namespace SDK
{

void ABP_TeleportationDrone_C::ExecuteUbergraph_BP_TeleportationDrone(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TeleportationDrone_C", "ExecuteUbergraph_BP_TeleportationDrone");

	Params::BP_TeleportationDrone_C_ExecuteUbergraph_BP_TeleportationDrone Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_TeleportationDrone_C::OnSpawnOutAnimEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TeleportationDrone_C", "OnSpawnOutAnimEnded");

	Params::BP_TeleportationDrone_C_OnSpawnOutAnimEnded Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_TeleportationDrone_C::PlaySpawnAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TeleportationDrone_C", "PlaySpawnAnim");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_TeleportationDrone_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TeleportationDrone_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_TeleportationDrone_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TeleportationDrone_C", "ReceiveEndPlay");

	Params::BP_TeleportationDrone_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_TeleportationDrone_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TeleportationDrone_C", "ReceiveTick");

	Params::BP_TeleportationDrone_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

class UAnimationAsset* ABP_TeleportationDrone_C::Get_Spawn_Animation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TeleportationDrone_C", "Get Spawn Animation");

	Params::BP_TeleportationDrone_C_Get_Spawn_Animation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
