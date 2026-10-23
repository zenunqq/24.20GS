#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct GA_Riding_Creature_EnergyDepleted_Base_C_ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base final
{
public:
	int32                                         EntryPoint;
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult;
	uint8                                         Pad_5[0x3];
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_E[0x2];
	struct FGameplayAbilityActorInfo              K2Node_Event_ActorInfo;
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	class UCreatureBaseRidableComponent_C*        CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(GA_Riding_Creature_EnergyDepleted_Base_C_ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base) == 0x000008, "Wrong alignment on GA_Riding_Creature_EnergyDepleted_Base_C_ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base");
static_assert(sizeof(GA_Riding_Creature_EnergyDepleted_Base_C_ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base) == 0x000070, "Wrong size on GA_Riding_Creature_EnergyDepleted_Base_C_ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base");
static_assert(offsetof(GA_Riding_Creature_EnergyDepleted_Base_C_ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base, EntryPoint) == 0x000000, "Member 'GA_Riding_Creature_EnergyDepleted_Base_C_ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EnergyDepleted_Base_C_ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base, CallFunc_EvaluateCurveTableRow_OutResult) == 0x000004, "Member 'GA_Riding_Creature_EnergyDepleted_Base_C_ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base::CallFunc_EvaluateCurveTableRow_OutResult' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EnergyDepleted_Base_C_ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base, CallFunc_EvaluateCurveTableRow_OutXY) == 0x000008, "Member 'GA_Riding_Creature_EnergyDepleted_Base_C_ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EnergyDepleted_Base_C_ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base, K2Node_SwitchEnum_CmpSuccess) == 0x00000C, "Member 'GA_Riding_Creature_EnergyDepleted_Base_C_ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EnergyDepleted_Base_C_ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base, K2Node_Event_bWasCancelled) == 0x00000D, "Member 'GA_Riding_Creature_EnergyDepleted_Base_C_ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EnergyDepleted_Base_C_ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base, K2Node_Event_ActorInfo) == 0x000010, "Member 'GA_Riding_Creature_EnergyDepleted_Base_C_ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base::K2Node_Event_ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EnergyDepleted_Base_C_ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000058, "Member 'GA_Riding_Creature_EnergyDepleted_Base_C_ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EnergyDepleted_Base_C_ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base, CallFunc_GetComponentByClass_ReturnValue) == 0x000060, "Member 'GA_Riding_Creature_EnergyDepleted_Base_C_ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_EnergyDepleted_Base_C_ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'GA_Riding_Creature_EnergyDepleted_Base_C_ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct GA_Riding_Creature_EnergyDepleted_Base_C_FailedToActivatePassiveAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;
};
static_assert(alignof(GA_Riding_Creature_EnergyDepleted_Base_C_FailedToActivatePassiveAbility) == 0x000008, "Wrong alignment on GA_Riding_Creature_EnergyDepleted_Base_C_FailedToActivatePassiveAbility");
static_assert(sizeof(GA_Riding_Creature_EnergyDepleted_Base_C_FailedToActivatePassiveAbility) == 0x000048, "Wrong size on GA_Riding_Creature_EnergyDepleted_Base_C_FailedToActivatePassiveAbility");
static_assert(offsetof(GA_Riding_Creature_EnergyDepleted_Base_C_FailedToActivatePassiveAbility, ActorInfo) == 0x000000, "Member 'GA_Riding_Creature_EnergyDepleted_Base_C_FailedToActivatePassiveAbility::ActorInfo' has a wrong offset!");

struct GA_Riding_Creature_EnergyDepleted_Base_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GA_Riding_Creature_EnergyDepleted_Base_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Riding_Creature_EnergyDepleted_Base_C_K2_OnEndAbility");
static_assert(sizeof(GA_Riding_Creature_EnergyDepleted_Base_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Riding_Creature_EnergyDepleted_Base_C_K2_OnEndAbility");
static_assert(offsetof(GA_Riding_Creature_EnergyDepleted_Base_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Riding_Creature_EnergyDepleted_Base_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}
