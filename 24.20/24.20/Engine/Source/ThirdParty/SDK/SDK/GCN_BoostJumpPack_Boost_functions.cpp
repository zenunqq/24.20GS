#pragma once

#include "Basic.hpp"

#include "GCN_BoostJumpPack_Boost_classes.hpp"
#include "GCN_BoostJumpPack_Boost_parameters.hpp"

namespace SDK
{

void UGCN_BoostJumpPack_Boost_C::OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_BoostJumpPack_Boost_C", "OnStartParticleSystemSpawned");

	Params::GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned Parms{};

	Parms.SpawnedParticleSysComponent = SpawnedParticleSysComponent;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

}
