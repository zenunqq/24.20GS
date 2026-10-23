#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class ABP_BattleMapPawnLive_C final : public ABattleMapPawnLive
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleMapPawnLive_C">();
	}
	static class ABP_BattleMapPawnLive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattleMapPawnLive_C>();
	}
};
static_assert(alignof(ABP_BattleMapPawnLive_C) == 0x000010, "Wrong alignment on ABP_BattleMapPawnLive_C");
static_assert(sizeof(ABP_BattleMapPawnLive_C) == 0x0006A0, "Wrong size on ABP_BattleMapPawnLive_C");

}
