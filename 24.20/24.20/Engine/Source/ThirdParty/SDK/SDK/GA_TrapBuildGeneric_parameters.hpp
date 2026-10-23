#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GA_TrapBuildGeneric_C_ExecuteUbergraph_GA_TrapBuildGeneric final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyGameplayEffectContainer_ReturnValue;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
};
static_assert(alignof(GA_TrapBuildGeneric_C_ExecuteUbergraph_GA_TrapBuildGeneric) == 0x000008, "Wrong alignment on GA_TrapBuildGeneric_C_ExecuteUbergraph_GA_TrapBuildGeneric");
static_assert(sizeof(GA_TrapBuildGeneric_C_ExecuteUbergraph_GA_TrapBuildGeneric) == 0x0000E8, "Wrong size on GA_TrapBuildGeneric_C_ExecuteUbergraph_GA_TrapBuildGeneric");
static_assert(offsetof(GA_TrapBuildGeneric_C_ExecuteUbergraph_GA_TrapBuildGeneric, EntryPoint) == 0x000000, "Member 'GA_TrapBuildGeneric_C_ExecuteUbergraph_GA_TrapBuildGeneric::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_TrapBuildGeneric_C_ExecuteUbergraph_GA_TrapBuildGeneric, CallFunc_ApplyGameplayEffectContainer_ReturnValue) == 0x000008, "Member 'GA_TrapBuildGeneric_C_ExecuteUbergraph_GA_TrapBuildGeneric::CallFunc_ApplyGameplayEffectContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TrapBuildGeneric_C_ExecuteUbergraph_GA_TrapBuildGeneric, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000018, "Member 'GA_TrapBuildGeneric_C_ExecuteUbergraph_GA_TrapBuildGeneric::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");

}
