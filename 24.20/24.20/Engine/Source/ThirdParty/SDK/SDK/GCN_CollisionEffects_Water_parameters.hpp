#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct GCN_CollisionEffects_Water_C_GetObjectSizeParam final
{
public:
	class AActor*                                 PhysicsObject;
	int32                                         Size;
	EFortPhysicsSimSize                           Temp_byte_Variable;
	EFortPhysicsSimSize                           CallFunc_GetPhysicsObjectSimSize_ReturnValue;
	uint8                                         Pad_E[0x2];
	int32                                         Temp_int_Variable;
	int32                                         Temp_int_Variable_1;
	int32                                         Temp_int_Variable_2;
	int32                                         Temp_int_Variable_3;
	int32                                         Temp_int_Variable_4;
	int32                                         Temp_int_Variable_5;
	int32                                         Temp_int_Variable_6;
	int32                                         Temp_int_Variable_7;
	int32                                         K2Node_Select_Default;
};
static_assert(alignof(GCN_CollisionEffects_Water_C_GetObjectSizeParam) == 0x000008, "Wrong alignment on GCN_CollisionEffects_Water_C_GetObjectSizeParam");
static_assert(sizeof(GCN_CollisionEffects_Water_C_GetObjectSizeParam) == 0x000038, "Wrong size on GCN_CollisionEffects_Water_C_GetObjectSizeParam");
static_assert(offsetof(GCN_CollisionEffects_Water_C_GetObjectSizeParam, PhysicsObject) == 0x000000, "Member 'GCN_CollisionEffects_Water_C_GetObjectSizeParam::PhysicsObject' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_GetObjectSizeParam, Size) == 0x000008, "Member 'GCN_CollisionEffects_Water_C_GetObjectSizeParam::Size' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_GetObjectSizeParam, Temp_byte_Variable) == 0x00000C, "Member 'GCN_CollisionEffects_Water_C_GetObjectSizeParam::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_GetObjectSizeParam, CallFunc_GetPhysicsObjectSimSize_ReturnValue) == 0x00000D, "Member 'GCN_CollisionEffects_Water_C_GetObjectSizeParam::CallFunc_GetPhysicsObjectSimSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_GetObjectSizeParam, Temp_int_Variable) == 0x000010, "Member 'GCN_CollisionEffects_Water_C_GetObjectSizeParam::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_GetObjectSizeParam, Temp_int_Variable_1) == 0x000014, "Member 'GCN_CollisionEffects_Water_C_GetObjectSizeParam::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_GetObjectSizeParam, Temp_int_Variable_2) == 0x000018, "Member 'GCN_CollisionEffects_Water_C_GetObjectSizeParam::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_GetObjectSizeParam, Temp_int_Variable_3) == 0x00001C, "Member 'GCN_CollisionEffects_Water_C_GetObjectSizeParam::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_GetObjectSizeParam, Temp_int_Variable_4) == 0x000020, "Member 'GCN_CollisionEffects_Water_C_GetObjectSizeParam::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_GetObjectSizeParam, Temp_int_Variable_5) == 0x000024, "Member 'GCN_CollisionEffects_Water_C_GetObjectSizeParam::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_GetObjectSizeParam, Temp_int_Variable_6) == 0x000028, "Member 'GCN_CollisionEffects_Water_C_GetObjectSizeParam::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_GetObjectSizeParam, Temp_int_Variable_7) == 0x00002C, "Member 'GCN_CollisionEffects_Water_C_GetObjectSizeParam::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_GetObjectSizeParam, K2Node_Select_Default) == 0x000030, "Member 'GCN_CollisionEffects_Water_C_GetObjectSizeParam::K2Node_Select_Default' has a wrong offset!");

struct GCN_CollisionEffects_Water_C_OnBurst final
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
	uint8                                         Pad_1D1[0x3];
	int32                                         CallFunc_GetObjectSizeParam_Size;
	class UNiagaraSystem*                         CallFunc_Array_Get_Item;
	class UFXSystemComponent*                     CallFunc_SpawnFXAtLocation_ReturnValue;
};
static_assert(alignof(GCN_CollisionEffects_Water_C_OnBurst) == 0x000008, "Wrong alignment on GCN_CollisionEffects_Water_C_OnBurst");
static_assert(sizeof(GCN_CollisionEffects_Water_C_OnBurst) == 0x0001E8, "Wrong size on GCN_CollisionEffects_Water_C_OnBurst");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, MyTarget) == 0x000000, "Member 'GCN_CollisionEffects_Water_C_OnBurst::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, Parameters) == 0x000008, "Member 'GCN_CollisionEffects_Water_C_OnBurst::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, ParticleComponents) == 0x0000D8, "Member 'GCN_CollisionEffects_Water_C_OnBurst::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, AudioComponents) == 0x0000E8, "Member 'GCN_CollisionEffects_Water_C_OnBurst::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCN_CollisionEffects_Water_C_OnBurst::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, BurstDecalInstance) == 0x000100, "Member 'GCN_CollisionEffects_Water_C_OnBurst::BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000108, "Member 'GCN_CollisionEffects_Water_C_OnBurst::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x00010C, "Member 'GCN_CollisionEffects_Water_C_OnBurst::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000110, "Member 'GCN_CollisionEffects_Water_C_OnBurst::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000128, "Member 'GCN_CollisionEffects_Water_C_OnBurst::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x00012C, "Member 'GCN_CollisionEffects_Water_C_OnBurst::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000130, "Member 'GCN_CollisionEffects_Water_C_OnBurst::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000150, "Member 'GCN_CollisionEffects_Water_C_OnBurst::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, CallFunc_BreakGameplayCueParameters_Location) == 0x000170, "Member 'GCN_CollisionEffects_Water_C_OnBurst::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, CallFunc_BreakGameplayCueParameters_Normal) == 0x000188, "Member 'GCN_CollisionEffects_Water_C_OnBurst::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0001A0, "Member 'GCN_CollisionEffects_Water_C_OnBurst::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0001A8, "Member 'GCN_CollisionEffects_Water_C_OnBurst::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0001B0, "Member 'GCN_CollisionEffects_Water_C_OnBurst::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0001B8, "Member 'GCN_CollisionEffects_Water_C_OnBurst::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0001C0, "Member 'GCN_CollisionEffects_Water_C_OnBurst::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0001C4, "Member 'GCN_CollisionEffects_Water_C_OnBurst::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0001C8, "Member 'GCN_CollisionEffects_Water_C_OnBurst::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0001D0, "Member 'GCN_CollisionEffects_Water_C_OnBurst::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, CallFunc_GetObjectSizeParam_Size) == 0x0001D4, "Member 'GCN_CollisionEffects_Water_C_OnBurst::CallFunc_GetObjectSizeParam_Size' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, CallFunc_Array_Get_Item) == 0x0001D8, "Member 'GCN_CollisionEffects_Water_C_OnBurst::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_Water_C_OnBurst, CallFunc_SpawnFXAtLocation_ReturnValue) == 0x0001E0, "Member 'GCN_CollisionEffects_Water_C_OnBurst::CallFunc_SpawnFXAtLocation_ReturnValue' has a wrong offset!");

}
