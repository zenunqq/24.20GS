#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct GCNL_EdgeOfStorm_C_Activated final
{
public:
	struct FVector                                EdgeOfStorm;
};
static_assert(alignof(GCNL_EdgeOfStorm_C_Activated) == 0x000008, "Wrong alignment on GCNL_EdgeOfStorm_C_Activated");
static_assert(sizeof(GCNL_EdgeOfStorm_C_Activated) == 0x000018, "Wrong size on GCNL_EdgeOfStorm_C_Activated");
static_assert(offsetof(GCNL_EdgeOfStorm_C_Activated, EdgeOfStorm) == 0x000000, "Member 'GCNL_EdgeOfStorm_C_Activated::EdgeOfStorm' has a wrong offset!");

struct GCNL_EdgeOfStorm_C_ExecuteUbergraph_GCNL_EdgeOfStorm final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	uint8                                         Pad_5[0x3];
	struct FVector                                K2Node_CustomEvent_EdgeOfStorm;
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;
	bool                                          Temp_bool_IsClosed_Variable;
};
static_assert(alignof(GCNL_EdgeOfStorm_C_ExecuteUbergraph_GCNL_EdgeOfStorm) == 0x000008, "Wrong alignment on GCNL_EdgeOfStorm_C_ExecuteUbergraph_GCNL_EdgeOfStorm");
static_assert(sizeof(GCNL_EdgeOfStorm_C_ExecuteUbergraph_GCNL_EdgeOfStorm) == 0x000108, "Wrong size on GCNL_EdgeOfStorm_C_ExecuteUbergraph_GCNL_EdgeOfStorm");
static_assert(offsetof(GCNL_EdgeOfStorm_C_ExecuteUbergraph_GCNL_EdgeOfStorm, EntryPoint) == 0x000000, "Member 'GCNL_EdgeOfStorm_C_ExecuteUbergraph_GCNL_EdgeOfStorm::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_ExecuteUbergraph_GCNL_EdgeOfStorm, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'GCNL_EdgeOfStorm_C_ExecuteUbergraph_GCNL_EdgeOfStorm::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_ExecuteUbergraph_GCNL_EdgeOfStorm, K2Node_CustomEvent_EdgeOfStorm) == 0x000008, "Member 'GCNL_EdgeOfStorm_C_ExecuteUbergraph_GCNL_EdgeOfStorm::K2Node_CustomEvent_EdgeOfStorm' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_ExecuteUbergraph_GCNL_EdgeOfStorm, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000020, "Member 'GCNL_EdgeOfStorm_C_ExecuteUbergraph_GCNL_EdgeOfStorm::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_ExecuteUbergraph_GCNL_EdgeOfStorm, Temp_bool_IsClosed_Variable) == 0x000100, "Member 'GCNL_EdgeOfStorm_C_ExecuteUbergraph_GCNL_EdgeOfStorm::Temp_bool_IsClosed_Variable' has a wrong offset!");

struct GCNL_EdgeOfStorm_C_OnActive final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
	uint8                                         Pad_D9[0x3];
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude;
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;
	uint8                                         Pad_E4[0x4];
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
};
static_assert(alignof(GCNL_EdgeOfStorm_C_OnActive) == 0x000008, "Wrong alignment on GCNL_EdgeOfStorm_C_OnActive");
static_assert(sizeof(GCNL_EdgeOfStorm_C_OnActive) == 0x0001B0, "Wrong size on GCNL_EdgeOfStorm_C_OnActive");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnActive, MyTarget) == 0x000000, "Member 'GCNL_EdgeOfStorm_C_OnActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnActive, Parameters) == 0x000008, "Member 'GCNL_EdgeOfStorm_C_OnActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnActive, ReturnValue) == 0x0000D8, "Member 'GCNL_EdgeOfStorm_C_OnActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnActive, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x0000DC, "Member 'GCNL_EdgeOfStorm_C_OnActive::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnActive, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x0000E0, "Member 'GCNL_EdgeOfStorm_C_OnActive::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnActive, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x0000E8, "Member 'GCNL_EdgeOfStorm_C_OnActive::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnActive, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000100, "Member 'GCNL_EdgeOfStorm_C_OnActive::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnActive, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000104, "Member 'GCNL_EdgeOfStorm_C_OnActive::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnActive, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000108, "Member 'GCNL_EdgeOfStorm_C_OnActive::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnActive, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000128, "Member 'GCNL_EdgeOfStorm_C_OnActive::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnActive, CallFunc_BreakGameplayCueParameters_Location) == 0x000148, "Member 'GCNL_EdgeOfStorm_C_OnActive::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnActive, CallFunc_BreakGameplayCueParameters_Normal) == 0x000160, "Member 'GCNL_EdgeOfStorm_C_OnActive::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnActive, CallFunc_BreakGameplayCueParameters_Instigator) == 0x000178, "Member 'GCNL_EdgeOfStorm_C_OnActive::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnActive, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x000180, "Member 'GCNL_EdgeOfStorm_C_OnActive::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnActive, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x000188, "Member 'GCNL_EdgeOfStorm_C_OnActive::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnActive, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x000190, "Member 'GCNL_EdgeOfStorm_C_OnActive::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnActive, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x000198, "Member 'GCNL_EdgeOfStorm_C_OnActive::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnActive, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x00019C, "Member 'GCNL_EdgeOfStorm_C_OnActive::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnActive, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0001A0, "Member 'GCNL_EdgeOfStorm_C_OnActive::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnActive, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0001A8, "Member 'GCNL_EdgeOfStorm_C_OnActive::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");

struct GCNL_EdgeOfStorm_C_OnExecute final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
	uint8                                         Pad_D9[0x3];
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude;
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;
	uint8                                         Pad_E4[0x4];
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
};
static_assert(alignof(GCNL_EdgeOfStorm_C_OnExecute) == 0x000008, "Wrong alignment on GCNL_EdgeOfStorm_C_OnExecute");
static_assert(sizeof(GCNL_EdgeOfStorm_C_OnExecute) == 0x0001B0, "Wrong size on GCNL_EdgeOfStorm_C_OnExecute");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnExecute, MyTarget) == 0x000000, "Member 'GCNL_EdgeOfStorm_C_OnExecute::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnExecute, Parameters) == 0x000008, "Member 'GCNL_EdgeOfStorm_C_OnExecute::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnExecute, ReturnValue) == 0x0000D8, "Member 'GCNL_EdgeOfStorm_C_OnExecute::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnExecute, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x0000DC, "Member 'GCNL_EdgeOfStorm_C_OnExecute::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnExecute, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x0000E0, "Member 'GCNL_EdgeOfStorm_C_OnExecute::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnExecute, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x0000E8, "Member 'GCNL_EdgeOfStorm_C_OnExecute::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnExecute, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000100, "Member 'GCNL_EdgeOfStorm_C_OnExecute::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnExecute, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000104, "Member 'GCNL_EdgeOfStorm_C_OnExecute::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnExecute, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000108, "Member 'GCNL_EdgeOfStorm_C_OnExecute::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnExecute, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000128, "Member 'GCNL_EdgeOfStorm_C_OnExecute::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnExecute, CallFunc_BreakGameplayCueParameters_Location) == 0x000148, "Member 'GCNL_EdgeOfStorm_C_OnExecute::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnExecute, CallFunc_BreakGameplayCueParameters_Normal) == 0x000160, "Member 'GCNL_EdgeOfStorm_C_OnExecute::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnExecute, CallFunc_BreakGameplayCueParameters_Instigator) == 0x000178, "Member 'GCNL_EdgeOfStorm_C_OnExecute::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnExecute, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x000180, "Member 'GCNL_EdgeOfStorm_C_OnExecute::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnExecute, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x000188, "Member 'GCNL_EdgeOfStorm_C_OnExecute::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnExecute, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x000190, "Member 'GCNL_EdgeOfStorm_C_OnExecute::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnExecute, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x000198, "Member 'GCNL_EdgeOfStorm_C_OnExecute::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnExecute, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x00019C, "Member 'GCNL_EdgeOfStorm_C_OnExecute::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnExecute, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0001A0, "Member 'GCNL_EdgeOfStorm_C_OnExecute::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnExecute, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0001A8, "Member 'GCNL_EdgeOfStorm_C_OnExecute::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");

struct GCNL_EdgeOfStorm_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
};
static_assert(alignof(GCNL_EdgeOfStorm_C_OnRemove) == 0x000008, "Wrong alignment on GCNL_EdgeOfStorm_C_OnRemove");
static_assert(sizeof(GCNL_EdgeOfStorm_C_OnRemove) == 0x0000E0, "Wrong size on GCNL_EdgeOfStorm_C_OnRemove");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnRemove, MyTarget) == 0x000000, "Member 'GCNL_EdgeOfStorm_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnRemove, Parameters) == 0x000008, "Member 'GCNL_EdgeOfStorm_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_EdgeOfStorm_C_OnRemove, ReturnValue) == 0x0000D8, "Member 'GCNL_EdgeOfStorm_C_OnRemove::ReturnValue' has a wrong offset!");

}
