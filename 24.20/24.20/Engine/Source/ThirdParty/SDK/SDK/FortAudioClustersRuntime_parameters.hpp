#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct GameFeatureAction_AddAudioCluster_HandleRegisteredActorDeath final
{
public:
	float                                         Damage;
	uint8                                         Pad_4[0x4];
	struct FGameplayTagContainer                  DamageTags;
	struct FVector                                Momentum;
	struct FHitResult                             HitInfo;
	class AFortPawn*                              InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FGameplayEffectContextHandle           EffectContext;
};
static_assert(alignof(GameFeatureAction_AddAudioCluster_HandleRegisteredActorDeath) == 0x000008, "Wrong alignment on GameFeatureAction_AddAudioCluster_HandleRegisteredActorDeath");
static_assert(sizeof(GameFeatureAction_AddAudioCluster_HandleRegisteredActorDeath) == 0x000148, "Wrong size on GameFeatureAction_AddAudioCluster_HandleRegisteredActorDeath");
static_assert(offsetof(GameFeatureAction_AddAudioCluster_HandleRegisteredActorDeath, Damage) == 0x000000, "Member 'GameFeatureAction_AddAudioCluster_HandleRegisteredActorDeath::Damage' has a wrong offset!");
static_assert(offsetof(GameFeatureAction_AddAudioCluster_HandleRegisteredActorDeath, DamageTags) == 0x000008, "Member 'GameFeatureAction_AddAudioCluster_HandleRegisteredActorDeath::DamageTags' has a wrong offset!");
static_assert(offsetof(GameFeatureAction_AddAudioCluster_HandleRegisteredActorDeath, Momentum) == 0x000028, "Member 'GameFeatureAction_AddAudioCluster_HandleRegisteredActorDeath::Momentum' has a wrong offset!");
static_assert(offsetof(GameFeatureAction_AddAudioCluster_HandleRegisteredActorDeath, HitInfo) == 0x000040, "Member 'GameFeatureAction_AddAudioCluster_HandleRegisteredActorDeath::HitInfo' has a wrong offset!");
static_assert(offsetof(GameFeatureAction_AddAudioCluster_HandleRegisteredActorDeath, InstigatedBy) == 0x000120, "Member 'GameFeatureAction_AddAudioCluster_HandleRegisteredActorDeath::InstigatedBy' has a wrong offset!");
static_assert(offsetof(GameFeatureAction_AddAudioCluster_HandleRegisteredActorDeath, DamageCauser) == 0x000128, "Member 'GameFeatureAction_AddAudioCluster_HandleRegisteredActorDeath::DamageCauser' has a wrong offset!");
static_assert(offsetof(GameFeatureAction_AddAudioCluster_HandleRegisteredActorDeath, EffectContext) == 0x000130, "Member 'GameFeatureAction_AddAudioCluster_HandleRegisteredActorDeath::EffectContext' has a wrong offset!");

}
