#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct GCN_Athena_HidingProp_Wobble_C_OnBurst final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
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
	uint8                                         Pad_1D1[0xF];
	struct FTransform                             CallFunc_GetTransform_ReturnValue;
	class ABuildingSMActor*                       K2Node_DynamicCast_AsBuilding_Static_Mesh;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_249[0x7];
	struct FVector                                CallFunc_TransformLocation_ReturnValue;
	double                                        CallFunc_GetTimeSeconds_ReturnValue;
	float                                         CallFunc_StartBounceAnimation_StartTime_ImplicitCast;
};
static_assert(alignof(GCN_Athena_HidingProp_Wobble_C_OnBurst) == 0x000010, "Wrong alignment on GCN_Athena_HidingProp_Wobble_C_OnBurst");
static_assert(sizeof(GCN_Athena_HidingProp_Wobble_C_OnBurst) == 0x000280, "Wrong size on GCN_Athena_HidingProp_Wobble_C_OnBurst");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, MyTarget) == 0x000000, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, Parameters) == 0x000008, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, ParticleComponents) == 0x0000D8, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, AudioComponents) == 0x0000E8, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, BurstDecalInstance) == 0x000100, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000108, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x00010C, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000110, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000128, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x00012C, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000130, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000150, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, CallFunc_BreakGameplayCueParameters_Location) == 0x000170, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, CallFunc_BreakGameplayCueParameters_Normal) == 0x000188, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0001A0, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0001A8, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0001B0, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0001B8, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0001C0, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0001C4, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0001C8, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0001D0, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, CallFunc_GetTransform_ReturnValue) == 0x0001E0, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, K2Node_DynamicCast_AsBuilding_Static_Mesh) == 0x000240, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::K2Node_DynamicCast_AsBuilding_Static_Mesh' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, K2Node_DynamicCast_bSuccess) == 0x000248, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, CallFunc_TransformLocation_ReturnValue) == 0x000250, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::CallFunc_TransformLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, CallFunc_GetTimeSeconds_ReturnValue) == 0x000268, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_HidingProp_Wobble_C_OnBurst, CallFunc_StartBounceAnimation_StartTime_ImplicitCast) == 0x000270, "Member 'GCN_Athena_HidingProp_Wobble_C_OnBurst::CallFunc_StartBounceAnimation_StartTime_ImplicitCast' has a wrong offset!");

}
