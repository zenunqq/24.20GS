#pragma once

#include "Basic.hpp"

#include "GCN_Athena_HidingProp_WilliePete_WhileEntering_classes.hpp"
#include "GCN_Athena_HidingProp_WilliePete_WhileEntering_parameters.hpp"

namespace SDK
{

void UGCN_Athena_HidingProp_WilliePete_WhileEntering_C::OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Athena_HidingProp_WilliePete_WhileEntering_C", "OnBurst");

	Params::GCN_Athena_HidingProp_WilliePete_WhileEntering_C_OnBurst Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

}
