#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned final
{
public:
	class UParticleSystemComponent*               SpawnedParticleSysComponent;
	struct FGameplayCueParameters                 Parameters;
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude;
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;
	struct FGameplayEffectContextHandle           CallFunc_BreakGameplayCueParameters_EffectContext;
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_MatchedTagName;
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_OriginalTag;
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedSourceTags;
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedTargetTags;
	struct FVector                                CallFunc_BreakGameplayCueParameters_Location;
	struct FVector                                CallFunc_BreakGameplayCueParameters_Normal;
	class AActor*                                 CallFunc_BreakGameplayCueParameters_Instigator;
	class AActor*                                 CallFunc_BreakGameplayCueParameters_EffectCauser;
	class UObject*                                CallFunc_BreakGameplayCueParameters_SourceObject;
	class UPhysicalMaterial*                      CallFunc_BreakGameplayCueParameters_PhysicalMaterial;
	int32                                         CallFunc_BreakGameplayCueParameters_GameplayEffectLevel;
	int32                                         CallFunc_BreakGameplayCueParameters_AbilityLevel;
	class USceneComponent*                        CallFunc_BreakGameplayCueParameters_TargetAttachComponent;
	bool                                          CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy;
	uint8                                         Pad_1A1[0x7];
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_1B1[0x7];
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	bool                                          CallFunc_DoesSocketExist_ReturnValue;
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned) == 0x000008, "Wrong alignment on GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned");
static_assert(sizeof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned) == 0x0001C8, "Wrong size on GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, SpawnedParticleSysComponent) == 0x000000, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::SpawnedParticleSysComponent' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, Parameters) == 0x000008, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x0000D8, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x0000DC, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x0000E0, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x0000F8, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x0000FC, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000100, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000120, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_Location) == 0x000140, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_Normal) == 0x000158, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_Instigator) == 0x000170, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x000178, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x000180, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x000188, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x000190, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x000194, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x000198, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0001A0, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x0001A8, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_bSuccess) == 0x0001B0, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, CallFunc_GetSkeletalMeshForPartType_ReturnValue) == 0x0001B8, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::CallFunc_GetSkeletalMeshForPartType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, CallFunc_DoesSocketExist_ReturnValue) == 0x0001C0, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::CallFunc_DoesSocketExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, CallFunc_K2_AttachToComponent_ReturnValue) == 0x0001C1, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned, CallFunc_IsValid_ReturnValue) == 0x0001C2, "Member 'GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
