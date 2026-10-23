#pragma once

#include "Basic.hpp"

#include "FortniteAI_classes.hpp"

namespace SDK
{

class UAI_skill_phoebe_bot_DBNO_C final : public UFortAthenaAIBotDBNOSkillSet
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AI_skill_phoebe_bot_DBNO_C">();
	}
	static class UAI_skill_phoebe_bot_DBNO_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAI_skill_phoebe_bot_DBNO_C>();
	}
};
static_assert(alignof(UAI_skill_phoebe_bot_DBNO_C) == 0x000008, "Wrong alignment on UAI_skill_phoebe_bot_DBNO_C");
static_assert(sizeof(UAI_skill_phoebe_bot_DBNO_C) == 0x000170, "Wrong size on UAI_skill_phoebe_bot_DBNO_C");

}
