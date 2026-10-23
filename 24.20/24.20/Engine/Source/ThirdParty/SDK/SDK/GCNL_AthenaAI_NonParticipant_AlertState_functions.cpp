#pragma once

#include "Basic.hpp"

#include "GCNL_AthenaAI_NonParticipant_AlertState_classes.hpp"
#include "GCNL_AthenaAI_NonParticipant_AlertState_parameters.hpp"

namespace SDK
{

void AGCNL_AthenaAI_NonParticipant_AlertState_C::ExecuteUbergraph_GCNL_AthenaAI_NonParticipant_AlertState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_AthenaAI_NonParticipant_AlertState_C", "ExecuteUbergraph_GCNL_AthenaAI_NonParticipant_AlertState");

	Params::GCNL_AthenaAI_NonParticipant_AlertState_C_ExecuteUbergraph_GCNL_AthenaAI_NonParticipant_AlertState Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_AthenaAI_NonParticipant_AlertState_C::OnApplication(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_AthenaAI_NonParticipant_AlertState_C", "OnApplication");

	Params::GCNL_AthenaAI_NonParticipant_AlertState_C_OnApplication Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_AthenaAI_NonParticipant_AlertState_C::Play_Alert_Sound(class AActor* TargetedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_AthenaAI_NonParticipant_AlertState_C", "Play Alert Sound");

	Params::GCNL_AthenaAI_NonParticipant_AlertState_C_Play_Alert_Sound Parms{};

	Parms.TargetedActor = TargetedActor;

	UObject::ProcessEvent(Func, &Parms);
}

}
