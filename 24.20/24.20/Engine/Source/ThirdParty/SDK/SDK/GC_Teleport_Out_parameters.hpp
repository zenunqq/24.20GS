#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct GC_Teleport_Out_C_OnExecute final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_DA[0x2];
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
	bool                                          CallFunc_OnExecute_ReturnValue;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_1AB[0x5];
	class APlayerPawn_Generic_Parent_C*           K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_1B9[0x7];
	double                                        K2Node_Select_Default;
	uint8                                         Pad_1C8[0x8];
	struct FTransform                             CallFunc_GetTransform_ReturnValue;
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	class ADuplicateResOutMesh_C*                 CallFunc_FinishSpawningActor_ReturnValue;
	double                                        K2Node_Select_Option_0_ImplicitCast;
	double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(GC_Teleport_Out_C_OnExecute) == 0x000010, "Wrong alignment on GC_Teleport_Out_C_OnExecute");
static_assert(sizeof(GC_Teleport_Out_C_OnExecute) == 0x000250, "Wrong size on GC_Teleport_Out_C_OnExecute");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, MyTarget) == 0x000000, "Member 'GC_Teleport_Out_C_OnExecute::MyTarget' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, Parameters) == 0x000008, "Member 'GC_Teleport_Out_C_OnExecute::Parameters' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, ReturnValue) == 0x0000D8, "Member 'GC_Teleport_Out_C_OnExecute::ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, Temp_bool_Variable) == 0x0000D9, "Member 'GC_Teleport_Out_C_OnExecute::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x0000DC, "Member 'GC_Teleport_Out_C_OnExecute::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x0000E0, "Member 'GC_Teleport_Out_C_OnExecute::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x0000E8, "Member 'GC_Teleport_Out_C_OnExecute::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000100, "Member 'GC_Teleport_Out_C_OnExecute::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000104, "Member 'GC_Teleport_Out_C_OnExecute::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000108, "Member 'GC_Teleport_Out_C_OnExecute::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000128, "Member 'GC_Teleport_Out_C_OnExecute::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, CallFunc_BreakGameplayCueParameters_Location) == 0x000148, "Member 'GC_Teleport_Out_C_OnExecute::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, CallFunc_BreakGameplayCueParameters_Normal) == 0x000160, "Member 'GC_Teleport_Out_C_OnExecute::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, CallFunc_BreakGameplayCueParameters_Instigator) == 0x000178, "Member 'GC_Teleport_Out_C_OnExecute::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x000180, "Member 'GC_Teleport_Out_C_OnExecute::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x000188, "Member 'GC_Teleport_Out_C_OnExecute::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x000190, "Member 'GC_Teleport_Out_C_OnExecute::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x000198, "Member 'GC_Teleport_Out_C_OnExecute::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x00019C, "Member 'GC_Teleport_Out_C_OnExecute::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0001A0, "Member 'GC_Teleport_Out_C_OnExecute::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0001A8, "Member 'GC_Teleport_Out_C_OnExecute::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, CallFunc_OnExecute_ReturnValue) == 0x0001A9, "Member 'GC_Teleport_Out_C_OnExecute::CallFunc_OnExecute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x0001AA, "Member 'GC_Teleport_Out_C_OnExecute::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent) == 0x0001B0, "Member 'GC_Teleport_Out_C_OnExecute::K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, K2Node_DynamicCast_bSuccess) == 0x0001B8, "Member 'GC_Teleport_Out_C_OnExecute::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, K2Node_Select_Default) == 0x0001C0, "Member 'GC_Teleport_Out_C_OnExecute::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, CallFunc_GetTransform_ReturnValue) == 0x0001D0, "Member 'GC_Teleport_Out_C_OnExecute::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000230, "Member 'GC_Teleport_Out_C_OnExecute::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, CallFunc_FinishSpawningActor_ReturnValue) == 0x000238, "Member 'GC_Teleport_Out_C_OnExecute::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, K2Node_Select_Option_0_ImplicitCast) == 0x000240, "Member 'GC_Teleport_Out_C_OnExecute::K2Node_Select_Option_0_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GC_Teleport_Out_C_OnExecute, CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast) == 0x000248, "Member 'GC_Teleport_Out_C_OnExecute::CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}
