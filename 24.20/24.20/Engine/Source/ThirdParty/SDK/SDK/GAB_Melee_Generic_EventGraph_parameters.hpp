#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct GAB_Melee_Generic_EventGraph_C_Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GAB_Melee_Generic_EventGraph_C_Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE) == 0x000008, "Wrong alignment on GAB_Melee_Generic_EventGraph_C_Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE");
static_assert(sizeof(GAB_Melee_Generic_EventGraph_C_Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE) == 0x000030, "Wrong size on GAB_Melee_Generic_EventGraph_C_Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE, TargetData) == 0x000000, "Member 'GAB_Melee_Generic_EventGraph_C_Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE, ApplicationTag) == 0x000028, "Member 'GAB_Melee_Generic_EventGraph_C_Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE::ApplicationTag' has a wrong offset!");

struct GAB_Melee_Generic_EventGraph_C_Completed_8C20D6D3411A3D7E54D6049F69DF10BE final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GAB_Melee_Generic_EventGraph_C_Completed_8C20D6D3411A3D7E54D6049F69DF10BE) == 0x000008, "Wrong alignment on GAB_Melee_Generic_EventGraph_C_Completed_8C20D6D3411A3D7E54D6049F69DF10BE");
static_assert(sizeof(GAB_Melee_Generic_EventGraph_C_Completed_8C20D6D3411A3D7E54D6049F69DF10BE) == 0x000030, "Wrong size on GAB_Melee_Generic_EventGraph_C_Completed_8C20D6D3411A3D7E54D6049F69DF10BE");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Completed_8C20D6D3411A3D7E54D6049F69DF10BE, TargetData) == 0x000000, "Member 'GAB_Melee_Generic_EventGraph_C_Completed_8C20D6D3411A3D7E54D6049F69DF10BE::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Completed_8C20D6D3411A3D7E54D6049F69DF10BE, ApplicationTag) == 0x000028, "Member 'GAB_Melee_Generic_EventGraph_C_Completed_8C20D6D3411A3D7E54D6049F69DF10BE::ApplicationTag' has a wrong offset!");

struct GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_1;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_1;
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;
	struct FGameplayTag                           Temp_struct_Variable;
	uint8                                         Pad_44[0x4];
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable_1;
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_2;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_2;
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_1;
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_2;
	int32                                         Temp_int_Variable;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_109[0x7];
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_3;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_3;
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;
	uint8                                         Pad_175[0x3];
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_K2_CommitAbility_ReturnValue_1;
	uint8                                         Pad_182[0x2];
	float                                         CallFunc_GetCurrentAbilitySourceLevel_OutSourceLevel;
	int32                                         CallFunc_FTrunc_ReturnValue;
	uint8                                         Pad_18C[0x4];
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyGameplayEffectContainer_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_1A1[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_1A9[0x7];
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;
	uint8                                         Pad_28C[0x4];
	double                                        CallFunc_FTrunc_A_ImplicitCast;
};
static_assert(alignof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph) == 0x000008, "Wrong alignment on GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph");
static_assert(sizeof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph) == 0x000298, "Wrong size on GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, EntryPoint) == 0x000000, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, K2Node_CustomEvent_TargetData_1) == 0x000008, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::K2Node_CustomEvent_TargetData_1' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, K2Node_CustomEvent_ApplicationTag_1) == 0x000030, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::K2Node_CustomEvent_ApplicationTag_1' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, Temp_struct_Variable) == 0x000040, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, Temp_struct_Variable_1) == 0x000048, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, K2Node_CustomEvent_TargetData_2) == 0x000070, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::K2Node_CustomEvent_TargetData_2' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, K2Node_CustomEvent_ApplicationTag_2) == 0x000098, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::K2Node_CustomEvent_ApplicationTag_2' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, K2Node_CreateDelegate_OutputDelegate_1) == 0x00009C, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, CallFunc_GetActorInfo_ReturnValue) == 0x0000A8, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000F0, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, Temp_int_Variable) == 0x0000FC, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000100, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, K2Node_DynamicCast_bSuccess) == 0x000108, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000110, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000138, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, K2Node_CustomEvent_TargetData_3) == 0x000148, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::K2Node_CustomEvent_TargetData_3' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, K2Node_CustomEvent_ApplicationTag_3) == 0x000170, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::K2Node_CustomEvent_ApplicationTag_3' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, CallFunc_K2_CommitAbility_ReturnValue) == 0x000174, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue) == 0x000178, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, CallFunc_IsValid_ReturnValue) == 0x000180, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, CallFunc_K2_CommitAbility_ReturnValue_1) == 0x000181, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::CallFunc_K2_CommitAbility_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, CallFunc_GetCurrentAbilitySourceLevel_OutSourceLevel) == 0x000184, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::CallFunc_GetCurrentAbilitySourceLevel_OutSourceLevel' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, CallFunc_FTrunc_ReturnValue) == 0x000188, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, CallFunc_ApplyGameplayEffectContainer_ReturnValue) == 0x000190, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::CallFunc_ApplyGameplayEffectContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, CallFunc_Greater_IntInt_ReturnValue) == 0x0001A0, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, CallFunc_Add_IntInt_ReturnValue) == 0x0001A4, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001A8, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, K2Node_MakeStruct_GameplayEventData) == 0x0001B0, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, K2Node_CustomEvent_TargetData) == 0x000260, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, K2Node_CustomEvent_ApplicationTag) == 0x000288, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph, CallFunc_FTrunc_A_ImplicitCast) == 0x000290, "Member 'GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph::CallFunc_FTrunc_A_ImplicitCast' has a wrong offset!");

struct GAB_Melee_Generic_EventGraph_C_OnTriggeredFromAnimNotify final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GAB_Melee_Generic_EventGraph_C_OnTriggeredFromAnimNotify) == 0x000008, "Wrong alignment on GAB_Melee_Generic_EventGraph_C_OnTriggeredFromAnimNotify");
static_assert(sizeof(GAB_Melee_Generic_EventGraph_C_OnTriggeredFromAnimNotify) == 0x000030, "Wrong size on GAB_Melee_Generic_EventGraph_C_OnTriggeredFromAnimNotify");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_OnTriggeredFromAnimNotify, TargetData) == 0x000000, "Member 'GAB_Melee_Generic_EventGraph_C_OnTriggeredFromAnimNotify::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_OnTriggeredFromAnimNotify, ApplicationTag) == 0x000028, "Member 'GAB_Melee_Generic_EventGraph_C_OnTriggeredFromAnimNotify::ApplicationTag' has a wrong offset!");

struct GAB_Melee_Generic_EventGraph_C_SetKnockbackImmunity final
{
public:
	bool                                          ImmunityOn;
	uint8                                         Pad_1[0x7];
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;
	struct FActiveGameplayEffectHandle            CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue;
};
static_assert(alignof(GAB_Melee_Generic_EventGraph_C_SetKnockbackImmunity) == 0x000008, "Wrong alignment on GAB_Melee_Generic_EventGraph_C_SetKnockbackImmunity");
static_assert(sizeof(GAB_Melee_Generic_EventGraph_C_SetKnockbackImmunity) == 0x000020, "Wrong size on GAB_Melee_Generic_EventGraph_C_SetKnockbackImmunity");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_SetKnockbackImmunity, ImmunityOn) == 0x000000, "Member 'GAB_Melee_Generic_EventGraph_C_SetKnockbackImmunity::ImmunityOn' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_SetKnockbackImmunity, CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue) == 0x000008, "Member 'GAB_Melee_Generic_EventGraph_C_SetKnockbackImmunity::CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_SetKnockbackImmunity, CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue) == 0x000018, "Member 'GAB_Melee_Generic_EventGraph_C_SetKnockbackImmunity::CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue' has a wrong offset!");

struct GAB_Melee_Generic_EventGraph_C_SetPawnCollision final
{
public:
	class AFortPawn*                              FortPawn;
	bool                                          CollisionOn;
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_B[0x1];
	class FName                                   CallFunc_GetCollisionProfileName_ReturnValue;
};
static_assert(alignof(GAB_Melee_Generic_EventGraph_C_SetPawnCollision) == 0x000008, "Wrong alignment on GAB_Melee_Generic_EventGraph_C_SetPawnCollision");
static_assert(sizeof(GAB_Melee_Generic_EventGraph_C_SetPawnCollision) == 0x000010, "Wrong size on GAB_Melee_Generic_EventGraph_C_SetPawnCollision");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_SetPawnCollision, FortPawn) == 0x000000, "Member 'GAB_Melee_Generic_EventGraph_C_SetPawnCollision::FortPawn' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_SetPawnCollision, CollisionOn) == 0x000008, "Member 'GAB_Melee_Generic_EventGraph_C_SetPawnCollision::CollisionOn' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_SetPawnCollision, CallFunc_NotEqual_NameName_ReturnValue) == 0x000009, "Member 'GAB_Melee_Generic_EventGraph_C_SetPawnCollision::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_SetPawnCollision, CallFunc_IsValid_ReturnValue) == 0x00000A, "Member 'GAB_Melee_Generic_EventGraph_C_SetPawnCollision::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_SetPawnCollision, CallFunc_GetCollisionProfileName_ReturnValue) == 0x00000C, "Member 'GAB_Melee_Generic_EventGraph_C_SetPawnCollision::CallFunc_GetCollisionProfileName_ReturnValue' has a wrong offset!");

struct GAB_Melee_Generic_EventGraph_C_Triggered_8C20D6D3411A3D7E54D6049F69DF10BE final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GAB_Melee_Generic_EventGraph_C_Triggered_8C20D6D3411A3D7E54D6049F69DF10BE) == 0x000008, "Wrong alignment on GAB_Melee_Generic_EventGraph_C_Triggered_8C20D6D3411A3D7E54D6049F69DF10BE");
static_assert(sizeof(GAB_Melee_Generic_EventGraph_C_Triggered_8C20D6D3411A3D7E54D6049F69DF10BE) == 0x000030, "Wrong size on GAB_Melee_Generic_EventGraph_C_Triggered_8C20D6D3411A3D7E54D6049F69DF10BE");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Triggered_8C20D6D3411A3D7E54D6049F69DF10BE, TargetData) == 0x000000, "Member 'GAB_Melee_Generic_EventGraph_C_Triggered_8C20D6D3411A3D7E54D6049F69DF10BE::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Triggered_8C20D6D3411A3D7E54D6049F69DF10BE, ApplicationTag) == 0x000028, "Member 'GAB_Melee_Generic_EventGraph_C_Triggered_8C20D6D3411A3D7E54D6049F69DF10BE::ApplicationTag' has a wrong offset!");

struct GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing final
{
public:
	class AActor*                                 Actor_A;
	class AActor*                                 Actor_B;
	double                                        Half_Angle_Of_Actor_A_Facing;
	bool                                          IsWithinHalfAngle;
	uint8                                         Pad_19[0x7];
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;
	double                                        CallFunc_DegCos_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	struct FVector                                CallFunc_Normal_ReturnValue;
	double                                        CallFunc_Dot_VectorVector_ReturnValue;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
};
static_assert(alignof(GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing) == 0x000008, "Wrong alignment on GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing");
static_assert(sizeof(GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing) == 0x0000B0, "Wrong size on GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing, Actor_A) == 0x000000, "Member 'GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing::Actor_A' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing, Actor_B) == 0x000008, "Member 'GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing::Actor_B' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing, Half_Angle_Of_Actor_A_Facing) == 0x000010, "Member 'GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing::Half_Angle_Of_Actor_A_Facing' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing, IsWithinHalfAngle) == 0x000018, "Member 'GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing::IsWithinHalfAngle' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing, CallFunc_GetActorForwardVector_ReturnValue) == 0x000020, "Member 'GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing, CallFunc_DegCos_ReturnValue) == 0x000038, "Member 'GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing::CallFunc_DegCos_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000040, "Member 'GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000058, "Member 'GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000070, "Member 'GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing, CallFunc_Normal_ReturnValue) == 0x000088, "Member 'GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing, CallFunc_Dot_VectorVector_ReturnValue) == 0x0000A0, "Member 'GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x0000A8, "Member 'GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");

struct GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors final
{
public:
	struct FVector                                vector1;
	struct FVector                                vector2;
	double                                        X_Y_Distance;
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	double                                        CallFunc_Square_ReturnValue;
	double                                        CallFunc_Square_ReturnValue_1;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	double                                        CallFunc_Sqrt_ReturnValue;
};
static_assert(alignof(GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors) == 0x000008, "Wrong alignment on GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors");
static_assert(sizeof(GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors) == 0x000088, "Wrong size on GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors, vector1) == 0x000000, "Member 'GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors::vector1' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors, vector2) == 0x000018, "Member 'GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors::vector2' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors, X_Y_Distance) == 0x000030, "Member 'GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors::X_Y_Distance' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000038, "Member 'GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors, CallFunc_BreakVector_X) == 0x000050, "Member 'GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors, CallFunc_BreakVector_Y) == 0x000058, "Member 'GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors, CallFunc_BreakVector_Z) == 0x000060, "Member 'GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors, CallFunc_Square_ReturnValue) == 0x000068, "Member 'GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors::CallFunc_Square_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors, CallFunc_Square_ReturnValue_1) == 0x000070, "Member 'GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors::CallFunc_Square_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000078, "Member 'GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors, CallFunc_Sqrt_ReturnValue) == 0x000080, "Member 'GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors::CallFunc_Sqrt_ReturnValue' has a wrong offset!");

struct GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing final
{
public:
	class AActor*                                 Actor;
	double                                        Distance;
	double                                        Rotation_Pitch_;
	double                                        Rotation_Yaw_;
	struct FVector                                Location;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;
};
static_assert(alignof(GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing) == 0x000008, "Wrong alignment on GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing");
static_assert(sizeof(GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing) == 0x0000D0, "Wrong size on GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing, Actor) == 0x000000, "Member 'GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing::Actor' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing, Distance) == 0x000008, "Member 'GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing::Distance' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing, Rotation_Pitch_) == 0x000010, "Member 'GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing::Rotation_Pitch_' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing, Rotation_Yaw_) == 0x000018, "Member 'GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing::Rotation_Yaw_' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing, Location) == 0x000020, "Member 'GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing::Location' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing, CallFunc_MakeRotator_ReturnValue) == 0x000050, "Member 'GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing, CallFunc_GetActorForwardVector_ReturnValue) == 0x000068, "Member 'GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x000080, "Member 'GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000098, "Member 'GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing, CallFunc_Add_VectorVector_ReturnValue) == 0x0000B0, "Member 'GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing, CallFunc_MakeRotator_Pitch_ImplicitCast) == 0x0000C8, "Member 'GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing::CallFunc_MakeRotator_Pitch_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x0000CC, "Member 'GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

}
