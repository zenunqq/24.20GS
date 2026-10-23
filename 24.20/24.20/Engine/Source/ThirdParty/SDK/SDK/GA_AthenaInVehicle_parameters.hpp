#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_59[0x7];
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_91[0x7];
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	bool                                          K2Node_Event_bWasCancelled;
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;
	bool                                          CallFunc_TryActivateAbilitiesByTag_ReturnValue;
};
static_assert(alignof(GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle) == 0x000008, "Wrong alignment on GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle");
static_assert(sizeof(GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle) == 0x0000B0, "Wrong size on GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle");
static_assert(offsetof(GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle, EntryPoint) == 0x000000, "Member 'GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle, CallFunc_GetActorInfo_ReturnValue) == 0x000008, "Member 'GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000050, "Member 'GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000060, "Member 'GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000068, "Member 'GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000098, "Member 'GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle, K2Node_Event_bWasCancelled) == 0x0000A8, "Member 'GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle, CallFunc_K2_CommitAbility_ReturnValue) == 0x0000A9, "Member 'GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle, CallFunc_TryActivateAbilitiesByTag_ReturnValue) == 0x0000AA, "Member 'GA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle::CallFunc_TryActivateAbilitiesByTag_ReturnValue' has a wrong offset!");

struct GA_AthenaInVehicle_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GA_AthenaInVehicle_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_AthenaInVehicle_C_K2_OnEndAbility");
static_assert(sizeof(GA_AthenaInVehicle_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_AthenaInVehicle_C_K2_OnEndAbility");
static_assert(offsetof(GA_AthenaInVehicle_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_AthenaInVehicle_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}
