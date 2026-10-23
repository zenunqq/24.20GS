#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FGameplayAbilityActorInfo              K2Node_Event_ActorInfo;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_51[0x7];
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_62[0x6];
	class UFortAthenaCollisionReactionComponent*  CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_Run_ReturnValue;
	uint8                                         Pad_72[0x6];
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1;
	class UFortAthenaCollisionReactionComponent*  CallFunc_GetComponentByClass_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_3;
};
static_assert(alignof(GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge) == 0x000008, "Wrong alignment on GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge");
static_assert(sizeof(GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge) == 0x000090, "Wrong size on GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge");
static_assert(offsetof(GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge, EntryPoint) == 0x000000, "Member 'GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge, K2Node_Event_ActorInfo) == 0x000008, "Member 'GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge::K2Node_Event_ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge, K2Node_Event_bWasCancelled) == 0x000050, "Member 'GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000058, "Member 'GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge, CallFunc_K2_CommitAbility_ReturnValue) == 0x000060, "Member 'GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge, CallFunc_IsValid_ReturnValue) == 0x000061, "Member 'GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge, CallFunc_GetComponentByClass_ReturnValue) == 0x000068, "Member 'GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge, CallFunc_IsValid_ReturnValue_1) == 0x000070, "Member 'GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge, CallFunc_Run_ReturnValue) == 0x000071, "Member 'GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge::CallFunc_Run_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000078, "Member 'GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000080, "Member 'GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge, CallFunc_IsValid_ReturnValue_2) == 0x000088, "Member 'GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge, CallFunc_IsValid_ReturnValue_3) == 0x000089, "Member 'GA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

struct GA_Riding_Creature_Burt_SprintCharge_C_FailedToActivatePassiveAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;
};
static_assert(alignof(GA_Riding_Creature_Burt_SprintCharge_C_FailedToActivatePassiveAbility) == 0x000008, "Wrong alignment on GA_Riding_Creature_Burt_SprintCharge_C_FailedToActivatePassiveAbility");
static_assert(sizeof(GA_Riding_Creature_Burt_SprintCharge_C_FailedToActivatePassiveAbility) == 0x000048, "Wrong size on GA_Riding_Creature_Burt_SprintCharge_C_FailedToActivatePassiveAbility");
static_assert(offsetof(GA_Riding_Creature_Burt_SprintCharge_C_FailedToActivatePassiveAbility, ActorInfo) == 0x000000, "Member 'GA_Riding_Creature_Burt_SprintCharge_C_FailedToActivatePassiveAbility::ActorInfo' has a wrong offset!");

struct GA_Riding_Creature_Burt_SprintCharge_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GA_Riding_Creature_Burt_SprintCharge_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Riding_Creature_Burt_SprintCharge_C_K2_OnEndAbility");
static_assert(sizeof(GA_Riding_Creature_Burt_SprintCharge_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Riding_Creature_Burt_SprintCharge_C_K2_OnEndAbility");
static_assert(offsetof(GA_Riding_Creature_Burt_SprintCharge_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Riding_Creature_Burt_SprintCharge_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}
