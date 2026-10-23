#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult;
	uint8                                         Pad_6[0x2];
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_D[0x3];
	struct FGameplayEventData                     K2Node_Event_EventData;
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	class UControllableRidableComponent*          CallFunc_GetComponentByClass_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_D9[0x7];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	class UCreatureBaseRidableComponent_C*        K2Node_DynamicCast_AsCreature_Base_Ridable_Component;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_F1[0x7];
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;
	bool                                          CallFunc_HasAllTags_ReturnValue;
	uint8                                         Pad_101[0x7];
	class ANPC_Pawn_Wildlife_Parent_C*            K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_111[0x3];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	uint8                                         Pad_11C[0x4];
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel) == 0x000008, "Wrong alignment on GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel");
static_assert(sizeof(GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel) == 0x000130, "Wrong size on GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel");
static_assert(offsetof(GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel, EntryPoint) == 0x000000, "Member 'GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel, CallFunc_K2_CommitAbility_ReturnValue) == 0x000004, "Member 'GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel, CallFunc_EvaluateCurveTableRow_OutResult) == 0x000005, "Member 'GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel::CallFunc_EvaluateCurveTableRow_OutResult' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel, CallFunc_EvaluateCurveTableRow_OutXY) == 0x000008, "Member 'GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel, K2Node_SwitchEnum_CmpSuccess) == 0x00000C, "Member 'GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel, K2Node_Event_EventData) == 0x000010, "Member 'GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0000C0, "Member 'GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel, CallFunc_GetComponentByClass_ReturnValue) == 0x0000C8, "Member 'GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000D0, "Member 'GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel, CallFunc_IsValid_ReturnValue) == 0x0000D8, "Member 'GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0000E0, "Member 'GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel, K2Node_DynamicCast_AsCreature_Base_Ridable_Component) == 0x0000E8, "Member 'GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel::K2Node_DynamicCast_AsCreature_Base_Ridable_Component' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel, K2Node_DynamicCast_bSuccess) == 0x0000F0, "Member 'GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel, CallFunc_GetActivatingPawn_ReturnValue) == 0x0000F8, "Member 'GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel, CallFunc_HasAllTags_ReturnValue) == 0x000100, "Member 'GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel::CallFunc_HasAllTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel, K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent) == 0x000108, "Member 'GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel::K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel, K2Node_DynamicCast_bSuccess_1) == 0x000110, "Member 'GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue) == 0x000114, "Member 'GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x000120, "Member 'GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000128, "Member 'GA_Riding_Creature_EatToRefuel_C_ExecuteUbergraph_GA_Riding_Creature_EatToRefuel::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct GA_Riding_Creature_EatToRefuel_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;
};
static_assert(alignof(GA_Riding_Creature_EatToRefuel_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_Riding_Creature_EatToRefuel_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Riding_Creature_EatToRefuel_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_Riding_Creature_EatToRefuel_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Riding_Creature_EatToRefuel_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_Riding_Creature_EatToRefuel_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}
