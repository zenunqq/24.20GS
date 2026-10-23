#pragma once

#include "Basic.hpp"

#include "GC_Abilities_Activation_DBNOResurrect_Athena_classes.hpp"
#include "GC_Abilities_Activation_DBNOResurrect_Athena_parameters.hpp"

namespace SDK
{

void UGC_Abilities_Activation_DBNOResurrect_Athena_C::OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Abilities_Activation_DBNOResurrect_Athena_C", "OnBurst");

	Params::GC_Abilities_Activation_DBNOResurrect_Athena_C_OnBurst Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

}
