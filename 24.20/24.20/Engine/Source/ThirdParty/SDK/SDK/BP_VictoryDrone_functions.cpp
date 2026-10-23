#pragma once

#include "Basic.hpp"

#include "BP_VictoryDrone_classes.hpp"
#include "BP_VictoryDrone_parameters.hpp"

namespace SDK
{

void ABP_VictoryDrone_C::Added_Death_Audio(class USoundBase* Sound_to_Spawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictoryDrone_C", "Added Death Audio");

	Params::BP_VictoryDrone_C_Added_Death_Audio Parms{};

	Parms.Sound_to_Spawn = Sound_to_Spawn;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_VictoryDrone_C::Decoy_FX_Parameters(TArray<struct FParticleSysParam>* Instance_Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictoryDrone_C", "Decoy FX Parameters");

	Params::BP_VictoryDrone_C_Decoy_FX_Parameters Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Instance_Parameters != nullptr)
		*Instance_Parameters = std::move(Parms.Instance_Parameters);
}

void ABP_VictoryDrone_C::ExecuteUbergraph_BP_VictoryDrone(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictoryDrone_C", "ExecuteUbergraph_BP_VictoryDrone");

	Params::BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_VictoryDrone_C::InitDrone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictoryDrone_C", "InitDrone");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_VictoryDrone_C::NotifyTeleportFinishedTriggered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictoryDrone_C", "NotifyTeleportFinishedTriggered");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_VictoryDrone_C::NPC_FX_Parameters(TArray<struct FParticleSysParam>* Instance_Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictoryDrone_C", "NPC FX Parameters");

	Params::BP_VictoryDrone_C_NPC_FX_Parameters Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Instance_Parameters != nullptr)
		*Instance_Parameters = std::move(Parms.Instance_Parameters);
}

void ABP_VictoryDrone_C::OnSpawnOutAnimEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictoryDrone_C", "OnSpawnOutAnimEnded");

	Params::BP_VictoryDrone_C_OnSpawnOutAnimEnded Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_VictoryDrone_C::PlaySpawnAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictoryDrone_C", "PlaySpawnAnim");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_VictoryDrone_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictoryDrone_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_VictoryDrone_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictoryDrone_C", "ReceiveTick");

	Params::BP_VictoryDrone_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}
