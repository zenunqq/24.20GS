#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct GC_Abilities_Activation_DBNOResurrect_C_OnBurst final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;
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
	uint8                                         Pad_1D9[0x7];
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;
	double                                        CallFunc_MakeVector_X_ImplicitCast;
	double                                        CallFunc_MakeVector_Y_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst) == 0x000008, "Wrong alignment on GC_Abilities_Activation_DBNOResurrect_C_OnBurst");
static_assert(sizeof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst) == 0x000328, "Wrong size on GC_Abilities_Activation_DBNOResurrect_C_OnBurst");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, MyTarget) == 0x000000, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::MyTarget' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, Parameters) == 0x000008, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::Parameters' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, ParticleComponents) == 0x0000D8, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, AudioComponents) == 0x0000E8, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::AudioComponents' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, BurstCameraShakeInstance) == 0x0000F8, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, BurstDecalInstance) == 0x000100, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_Array_Get_Item) == 0x000108, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000110, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x000114, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000118, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000130, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000134, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000138, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000158, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_BreakGameplayCueParameters_Location) == 0x000178, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_BreakGameplayCueParameters_Normal) == 0x000190, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0001A8, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0001B0, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0001B8, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0001C0, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0001C8, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0001CC, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0001D0, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0001D8, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_MakeVector_ReturnValue) == 0x0001E0, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_MakeRotFromX_ReturnValue) == 0x0001F8, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult) == 0x000210, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0002F0, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_MakeVector_ReturnValue_1) == 0x0002F8, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_MakeVector_X_ImplicitCast) == 0x000310, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_MakeVector_X_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_MakeVector_Y_ImplicitCast) == 0x000318, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_MakeVector_Y_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GC_Abilities_Activation_DBNOResurrect_C_OnBurst, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000320, "Member 'GC_Abilities_Activation_DBNOResurrect_C_OnBurst::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}
