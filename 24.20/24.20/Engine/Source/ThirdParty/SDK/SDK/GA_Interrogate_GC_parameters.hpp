#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GA_Interrogate_GC_C_ExecuteUbergraph_GA_Interrogate_GC final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsServer_ReturnValue;
	uint8                                         Pad_5[0x3];
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	struct FGameplayEffectContextHandle           CallFunc_GetGrantedByEffectContext_ReturnValue;
	class UObject*                                CallFunc_EffectContextGetSourceObject_ReturnValue;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	struct FGameplayAbilityActorInfo              K2Node_Event_ActorInfo;
};
static_assert(alignof(GA_Interrogate_GC_C_ExecuteUbergraph_GA_Interrogate_GC) == 0x000008, "Wrong alignment on GA_Interrogate_GC_C_ExecuteUbergraph_GA_Interrogate_GC");
static_assert(sizeof(GA_Interrogate_GC_C_ExecuteUbergraph_GA_Interrogate_GC) == 0x000148, "Wrong size on GA_Interrogate_GC_C_ExecuteUbergraph_GA_Interrogate_GC");
static_assert(offsetof(GA_Interrogate_GC_C_ExecuteUbergraph_GA_Interrogate_GC, EntryPoint) == 0x000000, "Member 'GA_Interrogate_GC_C_ExecuteUbergraph_GA_Interrogate_GC::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Interrogate_GC_C_ExecuteUbergraph_GA_Interrogate_GC, CallFunc_IsServer_ReturnValue) == 0x000004, "Member 'GA_Interrogate_GC_C_ExecuteUbergraph_GA_Interrogate_GC::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Interrogate_GC_C_ExecuteUbergraph_GA_Interrogate_GC, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_Interrogate_GC_C_ExecuteUbergraph_GA_Interrogate_GC::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Interrogate_GC_C_ExecuteUbergraph_GA_Interrogate_GC, CallFunc_GetGrantedByEffectContext_ReturnValue) == 0x000010, "Member 'GA_Interrogate_GC_C_ExecuteUbergraph_GA_Interrogate_GC::CallFunc_GetGrantedByEffectContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Interrogate_GC_C_ExecuteUbergraph_GA_Interrogate_GC, CallFunc_EffectContextGetSourceObject_ReturnValue) == 0x000028, "Member 'GA_Interrogate_GC_C_ExecuteUbergraph_GA_Interrogate_GC::CallFunc_EffectContextGetSourceObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Interrogate_GC_C_ExecuteUbergraph_GA_Interrogate_GC, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000030, "Member 'GA_Interrogate_GC_C_ExecuteUbergraph_GA_Interrogate_GC::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Interrogate_GC_C_ExecuteUbergraph_GA_Interrogate_GC, K2Node_Event_ActorInfo) == 0x000100, "Member 'GA_Interrogate_GC_C_ExecuteUbergraph_GA_Interrogate_GC::K2Node_Event_ActorInfo' has a wrong offset!");

struct GA_Interrogate_GC_C_FailedToActivatePassiveAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;
};
static_assert(alignof(GA_Interrogate_GC_C_FailedToActivatePassiveAbility) == 0x000008, "Wrong alignment on GA_Interrogate_GC_C_FailedToActivatePassiveAbility");
static_assert(sizeof(GA_Interrogate_GC_C_FailedToActivatePassiveAbility) == 0x000048, "Wrong size on GA_Interrogate_GC_C_FailedToActivatePassiveAbility");
static_assert(offsetof(GA_Interrogate_GC_C_FailedToActivatePassiveAbility, ActorInfo) == 0x000000, "Member 'GA_Interrogate_GC_C_FailedToActivatePassiveAbility::ActorInfo' has a wrong offset!");

}
