#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;
	uint8                                         Pad_5[0x3];
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_59[0x7];
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
};
static_assert(alignof(GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff) == 0x000008, "Wrong alignment on GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff");
static_assert(sizeof(GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff) == 0x000098, "Wrong size on GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff");
static_assert(offsetof(GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff, EntryPoint) == 0x000000, "Member 'GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff, CallFunc_K2_CommitAbility_ReturnValue) == 0x000004, "Member 'GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff, CallFunc_GetActorInfo_ReturnValue) == 0x000008, "Member 'GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000050, "Member 'GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000060, "Member 'GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000088, "Member 'GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");

}
