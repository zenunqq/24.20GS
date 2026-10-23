#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class ABP_BattleMapAirMoveNode_C final : public ABattleMapGroundMoveNode
{
public:
	class UStaticMeshComponent*                   StaticMesh;
	class USceneComponent*                        DefaultSceneRoot;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleMapAirMoveNode_C">();
	}
	static class ABP_BattleMapAirMoveNode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattleMapAirMoveNode_C>();
	}
};
static_assert(alignof(ABP_BattleMapAirMoveNode_C) == 0x000008, "Wrong alignment on ABP_BattleMapAirMoveNode_C");
static_assert(sizeof(ABP_BattleMapAirMoveNode_C) == 0x0003D8, "Wrong size on ABP_BattleMapAirMoveNode_C");
static_assert(offsetof(ABP_BattleMapAirMoveNode_C, StaticMesh) == 0x0003C8, "Member 'ABP_BattleMapAirMoveNode_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_BattleMapAirMoveNode_C, DefaultSceneRoot) == 0x0003D0, "Member 'ABP_BattleMapAirMoveNode_C::DefaultSceneRoot' has a wrong offset!");

}
