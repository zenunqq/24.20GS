#pragma once

#include "Basic.hpp"

#include "BP_BattleMapBaseEdge_classes.hpp"

namespace SDK
{

class ABP_BattleMapAIrMoveEdge_C final : public ABP_BattleMapBaseEdge_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleMapAIrMoveEdge_C">();
	}
	static class ABP_BattleMapAIrMoveEdge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattleMapAIrMoveEdge_C>();
	}
};
static_assert(alignof(ABP_BattleMapAIrMoveEdge_C) == 0x000008, "Wrong alignment on ABP_BattleMapAIrMoveEdge_C");
static_assert(sizeof(ABP_BattleMapAIrMoveEdge_C) == 0x000300, "Wrong size on ABP_BattleMapAIrMoveEdge_C");

}
