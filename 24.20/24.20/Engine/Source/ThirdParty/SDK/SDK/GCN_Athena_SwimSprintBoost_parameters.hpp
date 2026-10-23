#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GCN_Athena_SwimSprintBoost_C_OnBurst final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCN_Athena_SwimSprintBoost_C_OnBurst) == 0x000008, "Wrong alignment on GCN_Athena_SwimSprintBoost_C_OnBurst");
static_assert(sizeof(GCN_Athena_SwimSprintBoost_C_OnBurst) == 0x000108, "Wrong size on GCN_Athena_SwimSprintBoost_C_OnBurst");
static_assert(offsetof(GCN_Athena_SwimSprintBoost_C_OnBurst, MyTarget) == 0x000000, "Member 'GCN_Athena_SwimSprintBoost_C_OnBurst::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SwimSprintBoost_C_OnBurst, Parameters) == 0x000008, "Member 'GCN_Athena_SwimSprintBoost_C_OnBurst::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SwimSprintBoost_C_OnBurst, ParticleComponents) == 0x0000D8, "Member 'GCN_Athena_SwimSprintBoost_C_OnBurst::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SwimSprintBoost_C_OnBurst, AudioComponents) == 0x0000E8, "Member 'GCN_Athena_SwimSprintBoost_C_OnBurst::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SwimSprintBoost_C_OnBurst, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCN_Athena_SwimSprintBoost_C_OnBurst::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Athena_SwimSprintBoost_C_OnBurst, BurstDecalInstance) == 0x000100, "Member 'GCN_Athena_SwimSprintBoost_C_OnBurst::BurstDecalInstance' has a wrong offset!");

}
