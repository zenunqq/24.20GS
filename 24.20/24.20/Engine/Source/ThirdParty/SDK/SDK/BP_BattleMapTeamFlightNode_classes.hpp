#pragma once

#include "Basic.hpp"

#include "BP_BattleMapBaseNode_classes.hpp"

namespace SDK
{

class ABP_BattleMapTeamFlightNode_C final : public ABP_BattleMapBaseNode_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleMapTeamFlightNode_C">();
	}
	static class ABP_BattleMapTeamFlightNode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattleMapTeamFlightNode_C>();
	}
};
static_assert(alignof(ABP_BattleMapTeamFlightNode_C) == 0x000008, "Wrong alignment on ABP_BattleMapTeamFlightNode_C");
static_assert(sizeof(ABP_BattleMapTeamFlightNode_C) == 0x0003C8, "Wrong size on ABP_BattleMapTeamFlightNode_C");

}
