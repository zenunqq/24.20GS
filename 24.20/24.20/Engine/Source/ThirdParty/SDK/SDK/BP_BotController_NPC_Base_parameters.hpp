#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct BP_BotController_NPC_Base_C_ExecuteUbergraph_BP_BotController_NPC_Base final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue;
	uint8                                         Pad_13[0x1];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
};
static_assert(alignof(BP_BotController_NPC_Base_C_ExecuteUbergraph_BP_BotController_NPC_Base) == 0x000008, "Wrong alignment on BP_BotController_NPC_Base_C_ExecuteUbergraph_BP_BotController_NPC_Base");
static_assert(sizeof(BP_BotController_NPC_Base_C_ExecuteUbergraph_BP_BotController_NPC_Base) == 0x000020, "Wrong size on BP_BotController_NPC_Base_C_ExecuteUbergraph_BP_BotController_NPC_Base");
static_assert(offsetof(BP_BotController_NPC_Base_C_ExecuteUbergraph_BP_BotController_NPC_Base, EntryPoint) == 0x000000, "Member 'BP_BotController_NPC_Base_C_ExecuteUbergraph_BP_BotController_NPC_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BotController_NPC_Base_C_ExecuteUbergraph_BP_BotController_NPC_Base, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000008, "Member 'BP_BotController_NPC_Base_C_ExecuteUbergraph_BP_BotController_NPC_Base::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BotController_NPC_Base_C_ExecuteUbergraph_BP_BotController_NPC_Base, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_BotController_NPC_Base_C_ExecuteUbergraph_BP_BotController_NPC_Base::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BotController_NPC_Base_C_ExecuteUbergraph_BP_BotController_NPC_Base, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'BP_BotController_NPC_Base_C_ExecuteUbergraph_BP_BotController_NPC_Base::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BotController_NPC_Base_C_ExecuteUbergraph_BP_BotController_NPC_Base, CallFunc_RemoveActiveGameplayEffect_ReturnValue) == 0x000012, "Member 'BP_BotController_NPC_Base_C_ExecuteUbergraph_BP_BotController_NPC_Base::CallFunc_RemoveActiveGameplayEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BotController_NPC_Base_C_ExecuteUbergraph_BP_BotController_NPC_Base, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000014, "Member 'BP_BotController_NPC_Base_C_ExecuteUbergraph_BP_BotController_NPC_Base::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");

}
