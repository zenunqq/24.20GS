#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class ABP_BattleMapBaseNode_C : public ABattleMapNode
{
public:
	class UStaticMeshComponent*                   StaticMesh;
	class USceneComponent*                        DefaultSceneRoot;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleMapBaseNode_C">();
	}
	static class ABP_BattleMapBaseNode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattleMapBaseNode_C>();
	}
};
static_assert(alignof(ABP_BattleMapBaseNode_C) == 0x000008, "Wrong alignment on ABP_BattleMapBaseNode_C");
static_assert(sizeof(ABP_BattleMapBaseNode_C) == 0x0003C8, "Wrong size on ABP_BattleMapBaseNode_C");
static_assert(offsetof(ABP_BattleMapBaseNode_C, StaticMesh) == 0x0003B8, "Member 'ABP_BattleMapBaseNode_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_BattleMapBaseNode_C, DefaultSceneRoot) == 0x0003C0, "Member 'ABP_BattleMapBaseNode_C::DefaultSceneRoot' has a wrong offset!");

}
