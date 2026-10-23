#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct GAB_Melee_GenericCombo_C_Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GAB_Melee_GenericCombo_C_Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B) == 0x000008, "Wrong alignment on GAB_Melee_GenericCombo_C_Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B");
static_assert(sizeof(GAB_Melee_GenericCombo_C_Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B) == 0x000030, "Wrong size on GAB_Melee_GenericCombo_C_Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B");
static_assert(offsetof(GAB_Melee_GenericCombo_C_Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B, TargetData) == 0x000000, "Member 'GAB_Melee_GenericCombo_C_Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B, ApplicationTag) == 0x000028, "Member 'GAB_Melee_GenericCombo_C_Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B::ApplicationTag' has a wrong offset!");

struct GAB_Melee_GenericCombo_C_Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GAB_Melee_GenericCombo_C_Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B) == 0x000008, "Wrong alignment on GAB_Melee_GenericCombo_C_Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B");
static_assert(sizeof(GAB_Melee_GenericCombo_C_Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B) == 0x000030, "Wrong size on GAB_Melee_GenericCombo_C_Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B");
static_assert(offsetof(GAB_Melee_GenericCombo_C_Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B, TargetData) == 0x000000, "Member 'GAB_Melee_GenericCombo_C_Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B, ApplicationTag) == 0x000028, "Member 'GAB_Melee_GenericCombo_C_Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B::ApplicationTag' has a wrong offset!");

struct GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_2;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_2;
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_1;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_1;
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_1;
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_2;
	struct FGameplayTag                           Temp_struct_Variable;
	uint8                                         Pad_B4[0x4];
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable_1;
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;
	uint8                                         Pad_E1[0x7];
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_K2_CheckAbilityCost_ReturnValue;
	uint8                                         Pad_F2[0x2];
	float                                         CallFunc_GetCurrentAbilitySourceLevel_OutSourceLevel;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_F9[0x3];
	int32                                         CallFunc_FTrunc_ReturnValue;
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyGameplayEffectContainer_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_121[0x7];
	double                                        CallFunc_FTrunc_A_ImplicitCast;
};
static_assert(alignof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo) == 0x000008, "Wrong alignment on GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo");
static_assert(sizeof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo) == 0x000130, "Wrong size on GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo");
static_assert(offsetof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo, EntryPoint) == 0x000000, "Member 'GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo, K2Node_CustomEvent_TargetData_2) == 0x000008, "Member 'GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo::K2Node_CustomEvent_TargetData_2' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo, K2Node_CustomEvent_ApplicationTag_2) == 0x000030, "Member 'GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo::K2Node_CustomEvent_ApplicationTag_2' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo, K2Node_CustomEvent_TargetData_1) == 0x000040, "Member 'GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo::K2Node_CustomEvent_TargetData_1' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo, K2Node_CustomEvent_ApplicationTag_1) == 0x000068, "Member 'GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo::K2Node_CustomEvent_ApplicationTag_1' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo, K2Node_CreateDelegate_OutputDelegate_1) == 0x00006C, "Member 'GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo, K2Node_CustomEvent_TargetData) == 0x000078, "Member 'GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo, K2Node_CustomEvent_ApplicationTag) == 0x0000A0, "Member 'GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000A4, "Member 'GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo, Temp_struct_Variable) == 0x0000B0, "Member 'GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo, Temp_struct_Variable_1) == 0x0000B8, "Member 'GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo, CallFunc_K2_CommitAbility_ReturnValue) == 0x0000E0, "Member 'GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo, CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue) == 0x0000E8, "Member 'GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo::CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo, CallFunc_IsValid_ReturnValue) == 0x0000F0, "Member 'GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo, CallFunc_K2_CheckAbilityCost_ReturnValue) == 0x0000F1, "Member 'GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo::CallFunc_K2_CheckAbilityCost_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo, CallFunc_GetCurrentAbilitySourceLevel_OutSourceLevel) == 0x0000F4, "Member 'GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo::CallFunc_GetCurrentAbilitySourceLevel_OutSourceLevel' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo, K2Node_Event_bWasCancelled) == 0x0000F8, "Member 'GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo, CallFunc_FTrunc_ReturnValue) == 0x0000FC, "Member 'GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo, CallFunc_GetActivatingPawn_ReturnValue) == 0x000100, "Member 'GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo, CallFunc_ApplyGameplayEffectContainer_ReturnValue) == 0x000108, "Member 'GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo::CallFunc_ApplyGameplayEffectContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000118, "Member 'GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo, K2Node_DynamicCast_bSuccess) == 0x000120, "Member 'GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo, CallFunc_FTrunc_A_ImplicitCast) == 0x000128, "Member 'GAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo::CallFunc_FTrunc_A_ImplicitCast' has a wrong offset!");

struct GAB_Melee_GenericCombo_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GAB_Melee_GenericCombo_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GAB_Melee_GenericCombo_C_K2_OnEndAbility");
static_assert(sizeof(GAB_Melee_GenericCombo_C_K2_OnEndAbility) == 0x000001, "Wrong size on GAB_Melee_GenericCombo_C_K2_OnEndAbility");
static_assert(offsetof(GAB_Melee_GenericCombo_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GAB_Melee_GenericCombo_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

struct GAB_Melee_GenericCombo_C_Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GAB_Melee_GenericCombo_C_Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B) == 0x000008, "Wrong alignment on GAB_Melee_GenericCombo_C_Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B");
static_assert(sizeof(GAB_Melee_GenericCombo_C_Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B) == 0x000030, "Wrong size on GAB_Melee_GenericCombo_C_Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B");
static_assert(offsetof(GAB_Melee_GenericCombo_C_Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B, TargetData) == 0x000000, "Member 'GAB_Melee_GenericCombo_C_Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_Melee_GenericCombo_C_Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B, ApplicationTag) == 0x000028, "Member 'GAB_Melee_GenericCombo_C_Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B::ApplicationTag' has a wrong offset!");

}
