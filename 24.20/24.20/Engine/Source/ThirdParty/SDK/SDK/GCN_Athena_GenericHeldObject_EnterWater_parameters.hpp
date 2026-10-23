#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst final
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
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetIntParameter_self_CastInput;
};
static_assert(alignof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst) == 0x000008, "Wrong alignment on GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst");
static_assert(sizeof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst) == 0x0001F8, "Wrong size on GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, MyTarget) == 0x000000, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, Parameters) == 0x000008, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, ParticleComponents) == 0x0000D8, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, AudioComponents) == 0x0000E8, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, BurstDecalInstance) == 0x000100, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, CallFunc_Array_Get_Item) == 0x000108, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000110, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x000114, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000118, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000130, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000134, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000138, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000158, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, CallFunc_BreakGameplayCueParameters_Location) == 0x000178, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, CallFunc_BreakGameplayCueParameters_Normal) == 0x000190, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0001A8, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0001B0, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0001B8, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0001C0, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0001C8, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0001CC, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0001D0, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0001D8, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x0001E0, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst, CallFunc_SetIntParameter_self_CastInput) == 0x0001E8, "Member 'GCN_Athena_GenericHeldObject_EnterWater_C_OnBurst::CallFunc_SetIntParameter_self_CastInput' has a wrong offset!");

}
