#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_5[0x3];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1;
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;
	bool                                          CallFunc_IsDBNO_ReturnValue;
	uint8                                         Pad_1A[0x2];
	float                                         CallFunc_GetHealth_ReturnValue;
	float                                         CallFunc_GetMaxHealth_ReturnValue;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	uint8                                         Pad_25[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_2C[0x4];
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_84[0x4];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_91[0x7];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult;
	uint8                                         Pad_D9[0x3];
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult_1;
	uint8                                         Pad_E1[0x3];
	float                                         CallFunc_EvaluateCurveTableRow_OutXY_1;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;
	uint8                                         Pad_EA[0x2];
	int32                                         Temp_int_Variable;
	int32                                         CallFunc_FTrunc_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_F6[0x2];
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Less_DoubleDouble_B_ImplicitCast;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	uint8                                         Pad_10C[0x4];
	double                                        K2Node_VariableSet_TickRate_ImplicitCast;
	double                                        K2Node_VariableSet_MaxTicks_ImplicitCast;
};
static_assert(alignof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD) == 0x000008, "Wrong alignment on GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD");
static_assert(sizeof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD) == 0x000120, "Wrong size on GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, EntryPoint) == 0x000000, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, K2Node_Event_bWasCancelled) == 0x000004, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000008, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1) == 0x000010, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, CallFunc_K2_CommitAbility_ReturnValue) == 0x000018, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, CallFunc_IsDBNO_ReturnValue) == 0x000019, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::CallFunc_IsDBNO_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, CallFunc_GetHealth_ReturnValue) == 0x00001C, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::CallFunc_GetHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, CallFunc_GetMaxHealth_ReturnValue) == 0x000020, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::CallFunc_GetMaxHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000024, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, CallFunc_GetActorInfo_ReturnValue) == 0x000030, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, K2Node_CreateDelegate_OutputDelegate) == 0x000078, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000088, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000098, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x0000A0, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x0000C8, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, CallFunc_EvaluateCurveTableRow_OutResult) == 0x0000D8, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::CallFunc_EvaluateCurveTableRow_OutResult' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, CallFunc_EvaluateCurveTableRow_OutXY) == 0x0000DC, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, CallFunc_EvaluateCurveTableRow_OutResult_1) == 0x0000E0, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::CallFunc_EvaluateCurveTableRow_OutResult_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, CallFunc_EvaluateCurveTableRow_OutXY_1) == 0x0000E4, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::CallFunc_EvaluateCurveTableRow_OutXY_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, K2Node_SwitchEnum_CmpSuccess) == 0x0000E8, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, K2Node_SwitchEnum_CmpSuccess_1) == 0x0000E9, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, Temp_int_Variable) == 0x0000EC, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, CallFunc_FTrunc_ReturnValue) == 0x0000F0, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, CallFunc_Greater_IntInt_ReturnValue) == 0x0000F4, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, CallFunc_Less_IntInt_ReturnValue) == 0x0000F5, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x0000F8, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, CallFunc_Less_DoubleDouble_B_ImplicitCast) == 0x000100, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::CallFunc_Less_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000108, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, K2Node_VariableSet_TickRate_ImplicitCast) == 0x000110, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::K2Node_VariableSet_TickRate_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD, K2Node_VariableSet_MaxTicks_ImplicitCast) == 0x000118, "Member 'GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD::K2Node_VariableSet_MaxTicks_ImplicitCast' has a wrong offset!");

struct GA_Athena_Slurp_OLD_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GA_Athena_Slurp_OLD_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Athena_Slurp_OLD_C_K2_OnEndAbility");
static_assert(sizeof(GA_Athena_Slurp_OLD_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Athena_Slurp_OLD_C_K2_OnEndAbility");
static_assert(offsetof(GA_Athena_Slurp_OLD_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Athena_Slurp_OLD_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}
