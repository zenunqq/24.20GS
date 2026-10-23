#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct GCN_Athena_OutsideSafeZoneDamage_C_ExecuteUbergraph_GCN_Athena_OutsideSafeZoneDamage final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(GCN_Athena_OutsideSafeZoneDamage_C_ExecuteUbergraph_GCN_Athena_OutsideSafeZoneDamage) == 0x000004, "Wrong alignment on GCN_Athena_OutsideSafeZoneDamage_C_ExecuteUbergraph_GCN_Athena_OutsideSafeZoneDamage");
static_assert(sizeof(GCN_Athena_OutsideSafeZoneDamage_C_ExecuteUbergraph_GCN_Athena_OutsideSafeZoneDamage) == 0x000004, "Wrong size on GCN_Athena_OutsideSafeZoneDamage_C_ExecuteUbergraph_GCN_Athena_OutsideSafeZoneDamage");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_ExecuteUbergraph_GCN_Athena_OutsideSafeZoneDamage, EntryPoint) == 0x000000, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_ExecuteUbergraph_GCN_Athena_OutsideSafeZoneDamage::EntryPoint' has a wrong offset!");

struct GCN_Athena_OutsideSafeZoneDamage_C_OnBurst final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_109[0x3];
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude;
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;
	uint8                                         Pad_114[0x4];
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
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_1E9[0x7];
	class APlayerController*                      CallFunc_GetLocalViewingPlayerController_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_InWarmup_bInWarmup;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	float                                         CallFunc_PlaySound2D_VolumeMultiplier_ImplicitCast;
};
static_assert(alignof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst) == 0x000008, "Wrong alignment on GCN_Athena_OutsideSafeZoneDamage_C_OnBurst");
static_assert(sizeof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst) == 0x000200, "Wrong size on GCN_Athena_OutsideSafeZoneDamage_C_OnBurst");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, MyTarget) == 0x000000, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, Parameters) == 0x000008, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, ParticleComponents) == 0x0000D8, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, AudioComponents) == 0x0000E8, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, BurstDecalInstance) == 0x000100, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, CallFunc_IsDedicatedServer_ReturnValue) == 0x000108, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x00010C, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x000110, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000118, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000130, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000134, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000138, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000158, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, CallFunc_BreakGameplayCueParameters_Location) == 0x000178, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, CallFunc_BreakGameplayCueParameters_Normal) == 0x000190, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0001A8, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0001B0, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0001B8, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0001C0, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0001C8, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0001CC, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0001D0, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0001D8, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x0001E0, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, K2Node_DynamicCast_bSuccess) == 0x0001E8, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, CallFunc_GetLocalViewingPlayerController_ReturnValue) == 0x0001F0, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::CallFunc_GetLocalViewingPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, CallFunc_IsValid_ReturnValue) == 0x0001F8, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, CallFunc_InWarmup_bInWarmup) == 0x0001F9, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::CallFunc_InWarmup_bInWarmup' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, CallFunc_Not_PreBool_ReturnValue) == 0x0001FA, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, CallFunc_BooleanAND_ReturnValue) == 0x0001FB, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_OnBurst, CallFunc_PlaySound2D_VolumeMultiplier_ImplicitCast) == 0x0001FC, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_OnBurst::CallFunc_PlaySound2D_VolumeMultiplier_ImplicitCast' has a wrong offset!");

struct GCN_Athena_OutsideSafeZoneDamage_C_ZapFX final
{
public:
	int32                                         ZapCount;
	uint8                                         Pad_4[0x4];
	class APlayerPawn_Athena_C*                   PlayerPawnAthena;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	bool                                          CallFunc_IsActive_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(GCN_Athena_OutsideSafeZoneDamage_C_ZapFX) == 0x000008, "Wrong alignment on GCN_Athena_OutsideSafeZoneDamage_C_ZapFX");
static_assert(sizeof(GCN_Athena_OutsideSafeZoneDamage_C_ZapFX) == 0x000018, "Wrong size on GCN_Athena_OutsideSafeZoneDamage_C_ZapFX");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_ZapFX, ZapCount) == 0x000000, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_ZapFX::ZapCount' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_ZapFX, PlayerPawnAthena) == 0x000008, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_ZapFX::PlayerPawnAthena' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_ZapFX, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000010, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_ZapFX::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_ZapFX, CallFunc_IsActive_ReturnValue) == 0x000014, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_ZapFX::CallFunc_IsActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_OutsideSafeZoneDamage_C_ZapFX, CallFunc_IsValid_ReturnValue) == 0x000015, "Member 'GCN_Athena_OutsideSafeZoneDamage_C_ZapFX::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
