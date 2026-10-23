#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_5[0x3];
	struct FGameplayEventData                     K2Node_Event_EventData;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_B9[0x7];
	class UFortGameplayAbility*                   K2Node_DynamicCast_AsFort_Gameplay_Ability;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	uint8                                         Pad_CA[0x6];
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	class AFortAIPawn*                            K2Node_DynamicCast_AsFort_AIPawn;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_E2[0x6];
	class UControllableRidableComponent*          CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_F2[0x2];
	float                                         CallFunc_BreakRotator_Roll;
	float                                         CallFunc_BreakRotator_Pitch;
	float                                         CallFunc_BreakRotator_Yaw;
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;
	class AActor*                                 K2Node_CustomEvent_PlayerTarget;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	uint8                                         Pad_122[0x6];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	bool                                          CallFunc_K2_HasAuthority_ReturnValue;
	uint8                                         Pad_132[0x6];
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_8;
	uint8                                         Pad_209[0x7];
	double                                        K2Node_VariableSet_InitialMaxAcceleration_ImplicitCast;
	float                                         K2Node_VariableSet_MaxAcceleration_ImplicitCast;
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;
};
static_assert(alignof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper) == 0x000008, "Wrong alignment on GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper");
static_assert(sizeof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper) == 0x000220, "Wrong size on GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, EntryPoint) == 0x000000, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, K2Node_Event_EventData) == 0x000008, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, CallFunc_IsValid_ReturnValue_1) == 0x0000B8, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, K2Node_DynamicCast_AsFort_Gameplay_Ability) == 0x0000C0, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::K2Node_DynamicCast_AsFort_Gameplay_Ability' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x0000C9, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0000D0, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, K2Node_DynamicCast_AsFort_AIPawn) == 0x0000D8, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::K2Node_DynamicCast_AsFort_AIPawn' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, K2Node_DynamicCast_bSuccess_1) == 0x0000E0, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, CallFunc_IsValid_ReturnValue_2) == 0x0000E1, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, CallFunc_GetComponentByClass_ReturnValue) == 0x0000E8, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, CallFunc_IsValid_ReturnValue_3) == 0x0000F0, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, CallFunc_IsValid_ReturnValue_4) == 0x0000F1, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, CallFunc_BreakRotator_Roll) == 0x0000F4, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, CallFunc_BreakRotator_Pitch) == 0x0000F8, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, CallFunc_BreakRotator_Yaw) == 0x0000FC, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, CallFunc_MakeRotator_ReturnValue) == 0x000100, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, K2Node_CustomEvent_PlayerTarget) == 0x000118, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::K2Node_CustomEvent_PlayerTarget' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, CallFunc_IsValid_ReturnValue_5) == 0x000120, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, CallFunc_IsValid_ReturnValue_6) == 0x000121, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, CallFunc_GetOwner_ReturnValue) == 0x000128, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, CallFunc_IsValid_ReturnValue_7) == 0x000130, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, CallFunc_K2_HasAuthority_ReturnValue) == 0x000131, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::CallFunc_K2_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000138, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, CallFunc_IsValid_ReturnValue_8) == 0x000208, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, K2Node_VariableSet_InitialMaxAcceleration_ImplicitCast) == 0x000210, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::K2Node_VariableSet_InitialMaxAcceleration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, K2Node_VariableSet_MaxAcceleration_ImplicitCast) == 0x000218, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::K2Node_VariableSet_MaxAcceleration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x00021C, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

struct GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_FireBoostEffectsOnPlayerMulti final
{
public:
	class AActor*                                 PlayerTarget;
};
static_assert(alignof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_FireBoostEffectsOnPlayerMulti) == 0x000008, "Wrong alignment on GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_FireBoostEffectsOnPlayerMulti");
static_assert(sizeof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_FireBoostEffectsOnPlayerMulti) == 0x000008, "Wrong size on GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_FireBoostEffectsOnPlayerMulti");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_FireBoostEffectsOnPlayerMulti, PlayerTarget) == 0x000000, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_FireBoostEffectsOnPlayerMulti::PlayerTarget' has a wrong offset!");

struct GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;
};
static_assert(alignof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}
