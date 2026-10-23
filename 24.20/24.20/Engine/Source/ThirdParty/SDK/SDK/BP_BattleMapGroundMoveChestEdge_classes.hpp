#pragma once

#include "Basic.hpp"

#include "BP_BattleMapBaseEdge_classes.hpp"

namespace SDK
{

class ABP_BattleMapGroundMoveChestEdge_C final : public ABP_BattleMapBaseEdge_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleMapGroundMoveChestEdge_C">();
	}
	static class ABP_BattleMapGroundMoveChestEdge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattleMapGroundMoveChestEdge_C>();
	}
};
static_assert(alignof(ABP_BattleMapGroundMoveChestEdge_C) == 0x000008, "Wrong alignment on ABP_BattleMapGroundMoveChestEdge_C");
static_assert(sizeof(ABP_BattleMapGroundMoveChestEdge_C) == 0x000300, "Wrong size on ABP_BattleMapGroundMoveChestEdge_C");

}
