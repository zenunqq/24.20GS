#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct GAB_Melee_ImpactCombo_Athena_C_K2_CommitExecute final
{
public:
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(GAB_Melee_ImpactCombo_Athena_C_K2_CommitExecute) == 0x000008, "Wrong alignment on GAB_Melee_ImpactCombo_Athena_C_K2_CommitExecute");
static_assert(sizeof(GAB_Melee_ImpactCombo_Athena_C_K2_CommitExecute) == 0x000018, "Wrong size on GAB_Melee_ImpactCombo_Athena_C_K2_CommitExecute");
static_assert(offsetof(GAB_Melee_ImpactCombo_Athena_C_K2_CommitExecute, CallFunc_GetActivatingPawn_ReturnValue) == 0x000000, "Member 'GAB_Melee_ImpactCombo_Athena_C_K2_CommitExecute::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_ImpactCombo_Athena_C_K2_CommitExecute, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000008, "Member 'GAB_Melee_ImpactCombo_Athena_C_K2_CommitExecute::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GAB_Melee_ImpactCombo_Athena_C_K2_CommitExecute, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'GAB_Melee_ImpactCombo_Athena_C_K2_CommitExecute::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
