#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GAT_CommandoActiveAbility_C_ExecuteUbergraph_GAT_CommandoActiveAbility final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;
	uint8                                         Pad_5[0x3];
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_59[0x7];
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
};
static_assert(alignof(GAT_CommandoActiveAbility_C_ExecuteUbergraph_GAT_CommandoActiveAbility) == 0x000008, "Wrong alignment on GAT_CommandoActiveAbility_C_ExecuteUbergraph_GAT_CommandoActiveAbility");
static_assert(sizeof(GAT_CommandoActiveAbility_C_ExecuteUbergraph_GAT_CommandoActiveAbility) == 0x000148, "Wrong size on GAT_CommandoActiveAbility_C_ExecuteUbergraph_GAT_CommandoActiveAbility");
static_assert(offsetof(GAT_CommandoActiveAbility_C_ExecuteUbergraph_GAT_CommandoActiveAbility, EntryPoint) == 0x000000, "Member 'GAT_CommandoActiveAbility_C_ExecuteUbergraph_GAT_CommandoActiveAbility::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAT_CommandoActiveAbility_C_ExecuteUbergraph_GAT_CommandoActiveAbility, CallFunc_K2_CommitAbility_ReturnValue) == 0x000004, "Member 'GAT_CommandoActiveAbility_C_ExecuteUbergraph_GAT_CommandoActiveAbility::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_CommandoActiveAbility_C_ExecuteUbergraph_GAT_CommandoActiveAbility, CallFunc_GetActorInfo_ReturnValue) == 0x000008, "Member 'GAT_CommandoActiveAbility_C_ExecuteUbergraph_GAT_CommandoActiveAbility::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_CommandoActiveAbility_C_ExecuteUbergraph_GAT_CommandoActiveAbility, K2Node_DynamicCast_AsFort_Pawn) == 0x000050, "Member 'GAT_CommandoActiveAbility_C_ExecuteUbergraph_GAT_CommandoActiveAbility::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(GAT_CommandoActiveAbility_C_ExecuteUbergraph_GAT_CommandoActiveAbility, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'GAT_CommandoActiveAbility_C_ExecuteUbergraph_GAT_CommandoActiveAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAT_CommandoActiveAbility_C_ExecuteUbergraph_GAT_CommandoActiveAbility, K2Node_MakeStruct_GameplayEventData) == 0x000060, "Member 'GAT_CommandoActiveAbility_C_ExecuteUbergraph_GAT_CommandoActiveAbility::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GAT_CommandoActiveAbility_C_ExecuteUbergraph_GAT_CommandoActiveAbility, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000110, "Member 'GAT_CommandoActiveAbility_C_ExecuteUbergraph_GAT_CommandoActiveAbility::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_CommandoActiveAbility_C_ExecuteUbergraph_GAT_CommandoActiveAbility, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000138, "Member 'GAT_CommandoActiveAbility_C_ExecuteUbergraph_GAT_CommandoActiveAbility::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");

}
