#pragma once

#include "Basic.hpp"

#include "FortniteAI_classes.hpp"

namespace SDK
{

class UAI_skill_phoebe_bot_revive_C final : public UFortAthenaAIBotReviveSkillSet
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AI_skill_phoebe_bot_revive_C">();
	}
	static class UAI_skill_phoebe_bot_revive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAI_skill_phoebe_bot_revive_C>();
	}
};
static_assert(alignof(UAI_skill_phoebe_bot_revive_C) == 0x000008, "Wrong alignment on UAI_skill_phoebe_bot_revive_C");
static_assert(sizeof(UAI_skill_phoebe_bot_revive_C) == 0x0000A8, "Wrong size on UAI_skill_phoebe_bot_revive_C");

}
