#pragma once

#include "Basic.hpp"

#include "GCN_Irwin_SprintImpact_classes.hpp"
#include "GCN_Irwin_SprintImpact_parameters.hpp"

namespace SDK
{

void UGCN_Irwin_SprintImpact_C::OnBurstGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Irwin_SprintImpact_C", "OnBurstGeneric");

	Params::GCN_Irwin_SprintImpact_C_OnBurstGeneric Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}

}
