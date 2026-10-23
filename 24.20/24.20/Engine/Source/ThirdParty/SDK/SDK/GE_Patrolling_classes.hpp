#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_Patrolling_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Patrolling_C">();
	}
	static class UGE_Patrolling_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Patrolling_C>();
	}
};
static_assert(alignof(UGE_Patrolling_C) == 0x000008, "Wrong alignment on UGE_Patrolling_C");
static_assert(sizeof(UGE_Patrolling_C) == 0x000858, "Wrong size on UGE_Patrolling_C");

}
