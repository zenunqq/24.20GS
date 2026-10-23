#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;
	uint8                                         Pad_5A[0x2];
	float                                         CallFunc_GetHealth_ReturnValue;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_61[0x7];
	class AActor*                                 CallFunc_GetVehicleActor_ReturnValue;
	class AFortAthenaVehicle*                     CallFunc_ServerOnExitVehicle_ReturnValue;
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	uint8                                         Pad_8C[0x4];
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_CA[0x6];
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle) == 0x000008, "Wrong alignment on GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle");
static_assert(sizeof(GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle) == 0x0000D8, "Wrong size on GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle");
static_assert(offsetof(GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle, EntryPoint) == 0x000000, "Member 'GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle, CallFunc_GetActorInfo_ReturnValue) == 0x000008, "Member 'GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000050, "Member 'GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle, CallFunc_K2_CommitAbility_ReturnValue) == 0x000059, "Member 'GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle, CallFunc_GetHealth_ReturnValue) == 0x00005C, "Member 'GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle::CallFunc_GetHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000060, "Member 'GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle, CallFunc_GetVehicleActor_ReturnValue) == 0x000068, "Member 'GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle::CallFunc_GetVehicleActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle, CallFunc_ServerOnExitVehicle_ReturnValue) == 0x000070, "Member 'GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle::CallFunc_ServerOnExitVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x000078, "Member 'GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle, CallFunc_IsValid_ReturnValue) == 0x000089, "Member 'GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x00008A, "Member 'GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle, CallFunc_HasAuthority_ReturnValue) == 0x00008B, "Member 'GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000090, "Member 'GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x0000B8, "Member 'GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle, Temp_bool_Variable) == 0x0000C8, "Member 'GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle, CallFunc_BooleanAND_ReturnValue) == 0x0000C9, "Member 'GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x0000D0, "Member 'GA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}
