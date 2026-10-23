#pragma once

#include "Basic.hpp"

#include "BP_BattleMapBaseEdge_classes.hpp"

namespace SDK
{

class ABP_BattleMapWeaponGotKillInstigatorEdge_C final : public ABP_BattleMapBaseEdge_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleMapWeaponGotKillInstigatorEdge_C">();
	}
	static class ABP_BattleMapWeaponGotKillInstigatorEdge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattleMapWeaponGotKillInstigatorEdge_C>();
	}
};
static_assert(alignof(ABP_BattleMapWeaponGotKillInstigatorEdge_C) == 0x000008, "Wrong alignment on ABP_BattleMapWeaponGotKillInstigatorEdge_C");
static_assert(sizeof(ABP_BattleMapWeaponGotKillInstigatorEdge_C) == 0x000300, "Wrong size on ABP_BattleMapWeaponGotKillInstigatorEdge_C");

}
