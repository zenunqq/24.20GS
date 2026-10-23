#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GA_Riding_Player_StopRidingOnTriggered_C_ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	class URiderComponent*                        CallFunc_GetComponentByClass_ReturnValue;
	struct FGameplayEventData                     K2Node_Event_EventData;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_StopRidingActor_ReturnValue;
};
static_assert(alignof(GA_Riding_Player_StopRidingOnTriggered_C_ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered) == 0x000008, "Wrong alignment on GA_Riding_Player_StopRidingOnTriggered_C_ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered");
static_assert(sizeof(GA_Riding_Player_StopRidingOnTriggered_C_ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered) == 0x0000D0, "Wrong size on GA_Riding_Player_StopRidingOnTriggered_C_ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered");
static_assert(offsetof(GA_Riding_Player_StopRidingOnTriggered_C_ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered, EntryPoint) == 0x000000, "Member 'GA_Riding_Player_StopRidingOnTriggered_C_ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_StopRidingOnTriggered_C_ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_Riding_Player_StopRidingOnTriggered_C_ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_StopRidingOnTriggered_C_ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'GA_Riding_Player_StopRidingOnTriggered_C_ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_StopRidingOnTriggered_C_ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered, K2Node_Event_EventData) == 0x000018, "Member 'GA_Riding_Player_StopRidingOnTriggered_C_ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_StopRidingOnTriggered_C_ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered, CallFunc_IsValid_ReturnValue) == 0x0000C8, "Member 'GA_Riding_Player_StopRidingOnTriggered_C_ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Player_StopRidingOnTriggered_C_ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered, CallFunc_StopRidingActor_ReturnValue) == 0x0000C9, "Member 'GA_Riding_Player_StopRidingOnTriggered_C_ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered::CallFunc_StopRidingActor_ReturnValue' has a wrong offset!");

struct GA_Riding_Player_StopRidingOnTriggered_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;
};
static_assert(alignof(GA_Riding_Player_StopRidingOnTriggered_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_Riding_Player_StopRidingOnTriggered_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Riding_Player_StopRidingOnTriggered_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_Riding_Player_StopRidingOnTriggered_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Riding_Player_StopRidingOnTriggered_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_Riding_Player_StopRidingOnTriggered_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}
