#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GA_Riding_Player_IsRiding_C_ExecuteUbergraph_GA_Riding_Player_IsRiding final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_6[0x2];
	struct FGameplayAbilityActorInfo              K2Node_Event_ActorInfo;
};
static_assert(alignof(GA_Riding_Player_IsRiding_C_ExecuteUbergraph_GA_Riding_Player_IsRiding) == 0x000008, "Wrong alignment on GA_Riding_Player_IsRiding_C_ExecuteUbergraph_GA_Riding_Player_IsRiding");
static_assert(sizeof(GA_Riding_Player_IsRiding_C_ExecuteUbergraph_GA_Riding_Player_IsRiding) == 0x000050, "Wrong size on GA_Riding_Player_IsRiding_C_ExecuteUbergraph_GA_Riding_Player_IsRiding");
static_assert(offsetof(GA_Riding_Player_IsRiding_C_ExecuteUbergraph_GA_Riding_Player_IsRiding, EntryPoint) == 0x000000, "Member 'GA_Riding_Player_IsRiding_C_ExecuteUbergraph_GA_Riding_Player_IsRiding::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_IsRiding_C_ExecuteUbergraph_GA_Riding_Player_IsRiding, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'GA_Riding_Player_IsRiding_C_ExecuteUbergraph_GA_Riding_Player_IsRiding::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_IsRiding_C_ExecuteUbergraph_GA_Riding_Player_IsRiding, K2Node_Event_bWasCancelled) == 0x000005, "Member 'GA_Riding_Player_IsRiding_C_ExecuteUbergraph_GA_Riding_Player_IsRiding::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_IsRiding_C_ExecuteUbergraph_GA_Riding_Player_IsRiding, K2Node_Event_ActorInfo) == 0x000008, "Member 'GA_Riding_Player_IsRiding_C_ExecuteUbergraph_GA_Riding_Player_IsRiding::K2Node_Event_ActorInfo' has a wrong offset!");

struct GA_Riding_Player_IsRiding_C_FailedToActivatePassiveAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;
};
static_assert(alignof(GA_Riding_Player_IsRiding_C_FailedToActivatePassiveAbility) == 0x000008, "Wrong alignment on GA_Riding_Player_IsRiding_C_FailedToActivatePassiveAbility");
static_assert(sizeof(GA_Riding_Player_IsRiding_C_FailedToActivatePassiveAbility) == 0x000048, "Wrong size on GA_Riding_Player_IsRiding_C_FailedToActivatePassiveAbility");
static_assert(offsetof(GA_Riding_Player_IsRiding_C_FailedToActivatePassiveAbility, ActorInfo) == 0x000000, "Member 'GA_Riding_Player_IsRiding_C_FailedToActivatePassiveAbility::ActorInfo' has a wrong offset!");

struct GA_Riding_Player_IsRiding_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GA_Riding_Player_IsRiding_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Riding_Player_IsRiding_C_K2_OnEndAbility");
static_assert(sizeof(GA_Riding_Player_IsRiding_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Riding_Player_IsRiding_C_K2_OnEndAbility");
static_assert(offsetof(GA_Riding_Player_IsRiding_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Riding_Player_IsRiding_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}
