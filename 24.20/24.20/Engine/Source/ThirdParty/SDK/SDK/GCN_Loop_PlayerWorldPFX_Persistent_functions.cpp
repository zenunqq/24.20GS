#pragma once

#include "Basic.hpp"

#include "GCN_Loop_PlayerWorldPFX_Persistent_classes.hpp"
#include "GCN_Loop_PlayerWorldPFX_Persistent_parameters.hpp"

namespace SDK
{

void AGCN_Loop_PlayerWorldPFX_Persistent_C::ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_PlayerWorldPFX_Persistent_C", "ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent");

	Params::GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_PlayerWorldPFX_Persistent_C::OnApplicationGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_PlayerWorldPFX_Persistent_C", "OnApplicationGeneric");

	Params::GCN_Loop_PlayerWorldPFX_Persistent_C_OnApplicationGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_PlayerWorldPFX_Persistent_C::OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_PlayerWorldPFX_Persistent_C", "OnLoopingStartGeneric");

	Params::GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_PlayerWorldPFX_Persistent_C::OnLoopingStartNiagara(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UNiagaraComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_PlayerWorldPFX_Persistent_C", "OnLoopingStartNiagara");

	Params::GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartNiagara Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_PlayerWorldPFX_Persistent_C::OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_PlayerWorldPFX_Persistent_C", "OnRemovalGeneric");

	Params::GCN_Loop_PlayerWorldPFX_Persistent_C_OnRemovalGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCN_Loop_PlayerWorldPFX_Persistent_C::SpawnNiagara()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Loop_PlayerWorldPFX_Persistent_C", "SpawnNiagara");

	UObject::ProcessEvent(Func, nullptr);
}

}
