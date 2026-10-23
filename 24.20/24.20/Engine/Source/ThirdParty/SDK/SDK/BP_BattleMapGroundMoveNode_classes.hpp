#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class ABP_BattleMapGroundMoveNode_C final : public ABattleMapGroundMoveNode
{
public:
	class UStaticMeshComponent*                   StaticMesh;
	class USceneComponent*                        DefaultSceneRoot;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleMapGroundMoveNode_C">();
	}
	static class ABP_BattleMapGroundMoveNode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattleMapGroundMoveNode_C>();
	}
};
static_assert(alignof(ABP_BattleMapGroundMoveNode_C) == 0x000008, "Wrong alignment on ABP_BattleMapGroundMoveNode_C");
static_assert(sizeof(ABP_BattleMapGroundMoveNode_C) == 0x0003D8, "Wrong size on ABP_BattleMapGroundMoveNode_C");
static_assert(offsetof(ABP_BattleMapGroundMoveNode_C, StaticMesh) == 0x0003C8, "Member 'ABP_BattleMapGroundMoveNode_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_BattleMapGroundMoveNode_C, DefaultSceneRoot) == 0x0003D0, "Member 'ABP_BattleMapGroundMoveNode_C::DefaultSceneRoot' has a wrong offset!");

}
