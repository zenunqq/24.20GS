#pragma once

#include "Basic.hpp"

#include "BP_BattleMapBaseNode_classes.hpp"

namespace SDK
{

class ABP_BattleMapWeaponGotKillNode_C final : public ABP_BattleMapBaseNode_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleMapWeaponGotKillNode_C">();
	}
	static class ABP_BattleMapWeaponGotKillNode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattleMapWeaponGotKillNode_C>();
	}
};
static_assert(alignof(ABP_BattleMapWeaponGotKillNode_C) == 0x000008, "Wrong alignment on ABP_BattleMapWeaponGotKillNode_C");
static_assert(sizeof(ABP_BattleMapWeaponGotKillNode_C) == 0x0003C8, "Wrong size on ABP_BattleMapWeaponGotKillNode_C");

}
