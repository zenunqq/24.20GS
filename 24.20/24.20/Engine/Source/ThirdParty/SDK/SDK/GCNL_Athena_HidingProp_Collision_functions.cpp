#pragma once

#include "Basic.hpp"

#include "GCNL_Athena_HidingProp_Collision_classes.hpp"
#include "GCNL_Athena_HidingProp_Collision_parameters.hpp"

namespace SDK
{

void AGCNL_Athena_HidingProp_Collision_C::ExecuteUbergraph_GCNL_Athena_HidingProp_Collision(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_HidingProp_Collision_C", "ExecuteUbergraph_GCNL_Athena_HidingProp_Collision");

	Params::GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Athena_HidingProp_Collision_C::OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_HidingProp_Collision_C", "OnLoopingStart");

	Params::GCNL_Athena_HidingProp_Collision_C_OnLoopingStart Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_Athena_HidingProp_Collision_C::OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_HidingProp_Collision_C", "OnRemoval");

	Params::GCNL_Athena_HidingProp_Collision_C_OnRemoval Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

}
