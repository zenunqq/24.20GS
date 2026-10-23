#pragma once

#include "Basic.hpp"

#include "BattlePassBase_classes.hpp"

namespace SDK
{

class UBPS24_BattlePassPrerequisiteHeader_C final : public UFortBattlePassPrerequisiteHeader
{
public:
	class UBorder*                                Border_Locked;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPS24_BattlePassPrerequisiteHeader_C">();
	}
	static class UBPS24_BattlePassPrerequisiteHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPS24_BattlePassPrerequisiteHeader_C>();
	}
};
static_assert(alignof(UBPS24_BattlePassPrerequisiteHeader_C) == 0x000008, "Wrong alignment on UBPS24_BattlePassPrerequisiteHeader_C");
static_assert(sizeof(UBPS24_BattlePassPrerequisiteHeader_C) == 0x000278, "Wrong size on UBPS24_BattlePassPrerequisiteHeader_C");
static_assert(offsetof(UBPS24_BattlePassPrerequisiteHeader_C, Border_Locked) == 0x000270, "Member 'UBPS24_BattlePassPrerequisiteHeader_C::Border_Locked' has a wrong offset!");

}
