#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct GAB_DropPlayer_C_Cancelled_89F288114D44792D5568298354B7216C final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GAB_DropPlayer_C_Cancelled_89F288114D44792D5568298354B7216C) == 0x000008, "Wrong alignment on GAB_DropPlayer_C_Cancelled_89F288114D44792D5568298354B7216C");
static_assert(sizeof(GAB_DropPlayer_C_Cancelled_89F288114D44792D5568298354B7216C) == 0x000030, "Wrong size on GAB_DropPlayer_C_Cancelled_89F288114D44792D5568298354B7216C");
static_assert(offsetof(GAB_DropPlayer_C_Cancelled_89F288114D44792D5568298354B7216C, TargetData) == 0x000000, "Member 'GAB_DropPlayer_C_Cancelled_89F288114D44792D5568298354B7216C::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_DropPlayer_C_Cancelled_89F288114D44792D5568298354B7216C, ApplicationTag) == 0x000028, "Member 'GAB_DropPlayer_C_Cancelled_89F288114D44792D5568298354B7216C::ApplicationTag' has a wrong offset!");

struct GAB_DropPlayer_C_Completed_89F288114D44792D5568298354B7216C final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GAB_DropPlayer_C_Completed_89F288114D44792D5568298354B7216C) == 0x000008, "Wrong alignment on GAB_DropPlayer_C_Completed_89F288114D44792D5568298354B7216C");
static_assert(sizeof(GAB_DropPlayer_C_Completed_89F288114D44792D5568298354B7216C) == 0x000030, "Wrong size on GAB_DropPlayer_C_Completed_89F288114D44792D5568298354B7216C");
static_assert(offsetof(GAB_DropPlayer_C_Completed_89F288114D44792D5568298354B7216C, TargetData) == 0x000000, "Member 'GAB_DropPlayer_C_Completed_89F288114D44792D5568298354B7216C::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_DropPlayer_C_Completed_89F288114D44792D5568298354B7216C, ApplicationTag) == 0x000028, "Member 'GAB_DropPlayer_C_Completed_89F288114D44792D5568298354B7216C::ApplicationTag' has a wrong offset!");

struct GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer final
{
public:
	int32                                         EntryPoint;
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_1;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_1;
	uint8                                         Pad_3C[0x4];
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_1;
	struct FGameplayTag                           Temp_struct_Variable;
	uint8                                         Pad_7C[0x4];
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable_1;
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;
	uint8                                         Pad_FA[0x6];
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_2;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_2;
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_2;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_171[0x7];
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer) == 0x000008, "Wrong alignment on GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer");
static_assert(sizeof(GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer) == 0x000188, "Wrong size on GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer");
static_assert(offsetof(GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer, EntryPoint) == 0x000000, "Member 'GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer, K2Node_CustomEvent_TargetData_1) == 0x000010, "Member 'GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer::K2Node_CustomEvent_TargetData_1' has a wrong offset!");
static_assert(offsetof(GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer, K2Node_CustomEvent_ApplicationTag_1) == 0x000038, "Member 'GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer::K2Node_CustomEvent_ApplicationTag_1' has a wrong offset!");
static_assert(offsetof(GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer, K2Node_CustomEvent_TargetData) == 0x000040, "Member 'GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer, K2Node_CustomEvent_ApplicationTag) == 0x000068, "Member 'GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer, K2Node_CreateDelegate_OutputDelegate_1) == 0x00006C, "Member 'GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer, Temp_struct_Variable) == 0x000078, "Member 'GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer, Temp_struct_Variable_1) == 0x000080, "Member 'GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer, CallFunc_GetActorInfo_ReturnValue) == 0x0000A8, "Member 'GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0000F0, "Member 'GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer, K2Node_DynamicCast_bSuccess) == 0x0000F8, "Member 'GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer, CallFunc_K2_CommitAbility_ReturnValue) == 0x0000F9, "Member 'GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000100, "Member 'GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000128, "Member 'GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer, K2Node_CustomEvent_TargetData_2) == 0x000138, "Member 'GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer::K2Node_CustomEvent_TargetData_2' has a wrong offset!");
static_assert(offsetof(GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer, K2Node_CustomEvent_ApplicationTag_2) == 0x000160, "Member 'GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer::K2Node_CustomEvent_ApplicationTag_2' has a wrong offset!");
static_assert(offsetof(GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer, K2Node_CreateDelegate_OutputDelegate_2) == 0x000164, "Member 'GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer, K2Node_Event_bWasCancelled) == 0x000170, "Member 'GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer, CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue) == 0x000178, "Member 'GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer::CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer, CallFunc_IsValid_ReturnValue) == 0x000180, "Member 'GAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct GAB_DropPlayer_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GAB_DropPlayer_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GAB_DropPlayer_C_K2_OnEndAbility");
static_assert(sizeof(GAB_DropPlayer_C_K2_OnEndAbility) == 0x000001, "Wrong size on GAB_DropPlayer_C_K2_OnEndAbility");
static_assert(offsetof(GAB_DropPlayer_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GAB_DropPlayer_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

struct GAB_DropPlayer_C_Triggered_89F288114D44792D5568298354B7216C final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GAB_DropPlayer_C_Triggered_89F288114D44792D5568298354B7216C) == 0x000008, "Wrong alignment on GAB_DropPlayer_C_Triggered_89F288114D44792D5568298354B7216C");
static_assert(sizeof(GAB_DropPlayer_C_Triggered_89F288114D44792D5568298354B7216C) == 0x000030, "Wrong size on GAB_DropPlayer_C_Triggered_89F288114D44792D5568298354B7216C");
static_assert(offsetof(GAB_DropPlayer_C_Triggered_89F288114D44792D5568298354B7216C, TargetData) == 0x000000, "Member 'GAB_DropPlayer_C_Triggered_89F288114D44792D5568298354B7216C::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_DropPlayer_C_Triggered_89F288114D44792D5568298354B7216C, ApplicationTag) == 0x000028, "Member 'GAB_DropPlayer_C_Triggered_89F288114D44792D5568298354B7216C::ApplicationTag' has a wrong offset!");

}
