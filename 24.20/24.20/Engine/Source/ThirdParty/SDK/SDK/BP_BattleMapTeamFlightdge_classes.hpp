#pragma once

#include "Basic.hpp"

#include "BP_BattleMapBaseEdge_classes.hpp"

namespace SDK
{

class ABP_BattleMapTeamFlightdge_C final : public ABP_BattleMapBaseEdge_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleMapTeamFlightdge_C">();
	}
	static class ABP_BattleMapTeamFlightdge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattleMapTeamFlightdge_C>();
	}
};
static_assert(alignof(ABP_BattleMapTeamFlightdge_C) == 0x000008, "Wrong alignment on ABP_BattleMapTeamFlightdge_C");
static_assert(sizeof(ABP_BattleMapTeamFlightdge_C) == 0x000300, "Wrong size on ABP_BattleMapTeamFlightdge_C");

}
