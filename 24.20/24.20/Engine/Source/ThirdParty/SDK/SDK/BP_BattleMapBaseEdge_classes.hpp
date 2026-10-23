#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class ABP_BattleMapBaseEdge_C : public ABattleMapEdge
{
public:
	class USplineMeshComponent*                   SplineMesh;
	class USceneComponent*                        DefaultSceneRoot;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleMapBaseEdge_C">();
	}
	static class ABP_BattleMapBaseEdge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattleMapBaseEdge_C>();
	}
};
static_assert(alignof(ABP_BattleMapBaseEdge_C) == 0x000008, "Wrong alignment on ABP_BattleMapBaseEdge_C");
static_assert(sizeof(ABP_BattleMapBaseEdge_C) == 0x000300, "Wrong size on ABP_BattleMapBaseEdge_C");
static_assert(offsetof(ABP_BattleMapBaseEdge_C, SplineMesh) == 0x0002F0, "Member 'ABP_BattleMapBaseEdge_C::SplineMesh' has a wrong offset!");
static_assert(offsetof(ABP_BattleMapBaseEdge_C, DefaultSceneRoot) == 0x0002F8, "Member 'ABP_BattleMapBaseEdge_C::DefaultSceneRoot' has a wrong offset!");

}
