#pragma once

#include "Basic.hpp"

#include "FortniteAI_classes.hpp"

namespace SDK
{

class UAI_skill_phoebe_bot_rangeAttack_C final : public UFortAthenaAIBotRangeAttackSkillSet
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AI_skill_phoebe_bot_rangeAttack_C">();
	}
	static class UAI_skill_phoebe_bot_rangeAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAI_skill_phoebe_bot_rangeAttack_C>();
	}
};
static_assert(alignof(UAI_skill_phoebe_bot_rangeAttack_C) == 0x000008, "Wrong alignment on UAI_skill_phoebe_bot_rangeAttack_C");
static_assert(sizeof(UAI_skill_phoebe_bot_rangeAttack_C) == 0x0003E0, "Wrong size on UAI_skill_phoebe_bot_rangeAttack_C");

}
