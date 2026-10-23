#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class AB_FortGlobalAbilityTargetingActor_C final : public AFortGlobalAbilityTargetingActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_FortGlobalAbilityTargetingActor_C">();
	}
	static class AB_FortGlobalAbilityTargetingActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_FortGlobalAbilityTargetingActor_C>();
	}
};
static_assert(alignof(AB_FortGlobalAbilityTargetingActor_C) == 0x000008, "Wrong alignment on AB_FortGlobalAbilityTargetingActor_C");
static_assert(sizeof(AB_FortGlobalAbilityTargetingActor_C) == 0x000288, "Wrong size on AB_FortGlobalAbilityTargetingActor_C");

}
