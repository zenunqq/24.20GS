#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GA_AthenaEnterVehicle_C_ExecuteUbergraph_GA_AthenaEnterVehicle final
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
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
};
static_assert(alignof(GA_AthenaEnterVehicle_C_ExecuteUbergraph_GA_AthenaEnterVehicle) == 0x000008, "Wrong alignment on GA_AthenaEnterVehicle_C_ExecuteUbergraph_GA_AthenaEnterVehicle");
static_assert(sizeof(GA_AthenaEnterVehicle_C_ExecuteUbergraph_GA_AthenaEnterVehicle) == 0x0000A0, "Wrong size on GA_AthenaEnterVehicle_C_ExecuteUbergraph_GA_AthenaEnterVehicle");
static_assert(offsetof(GA_AthenaEnterVehicle_C_ExecuteUbergraph_GA_AthenaEnterVehicle, EntryPoint) == 0x000000, "Member 'GA_AthenaEnterVehicle_C_ExecuteUbergraph_GA_AthenaEnterVehicle::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_AthenaEnterVehicle_C_ExecuteUbergraph_GA_AthenaEnterVehicle, CallFunc_K2_CommitAbility_ReturnValue) == 0x000004, "Member 'GA_AthenaEnterVehicle_C_ExecuteUbergraph_GA_AthenaEnterVehicle::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_AthenaEnterVehicle_C_ExecuteUbergraph_GA_AthenaEnterVehicle, CallFunc_GetActorInfo_ReturnValue) == 0x000008, "Member 'GA_AthenaEnterVehicle_C_ExecuteUbergraph_GA_AthenaEnterVehicle::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_AthenaEnterVehicle_C_ExecuteUbergraph_GA_AthenaEnterVehicle, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000050, "Member 'GA_AthenaEnterVehicle_C_ExecuteUbergraph_GA_AthenaEnterVehicle::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_AthenaEnterVehicle_C_ExecuteUbergraph_GA_AthenaEnterVehicle, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'GA_AthenaEnterVehicle_C_ExecuteUbergraph_GA_AthenaEnterVehicle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_AthenaEnterVehicle_C_ExecuteUbergraph_GA_AthenaEnterVehicle, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000060, "Member 'GA_AthenaEnterVehicle_C_ExecuteUbergraph_GA_AthenaEnterVehicle::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_AthenaEnterVehicle_C_ExecuteUbergraph_GA_AthenaEnterVehicle, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000088, "Member 'GA_AthenaEnterVehicle_C_ExecuteUbergraph_GA_AthenaEnterVehicle::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_AthenaEnterVehicle_C_ExecuteUbergraph_GA_AthenaEnterVehicle, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000090, "Member 'GA_AthenaEnterVehicle_C_ExecuteUbergraph_GA_AthenaEnterVehicle::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");

}
