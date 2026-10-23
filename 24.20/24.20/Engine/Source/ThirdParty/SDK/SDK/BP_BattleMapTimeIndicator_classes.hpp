#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class ABP_BattleMapTimeIndicator_C final : public ABattleMapTimeIndicator
{
public:
	class UStaticMeshComponent*                   Arrow;
	class USceneComponent*                        DefaultSceneRoot;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleMapTimeIndicator_C">();
	}
	static class ABP_BattleMapTimeIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattleMapTimeIndicator_C>();
	}
};
static_assert(alignof(ABP_BattleMapTimeIndicator_C) == 0x000008, "Wrong alignment on ABP_BattleMapTimeIndicator_C");
static_assert(sizeof(ABP_BattleMapTimeIndicator_C) == 0x000310, "Wrong size on ABP_BattleMapTimeIndicator_C");
static_assert(offsetof(ABP_BattleMapTimeIndicator_C, Arrow) == 0x000300, "Member 'ABP_BattleMapTimeIndicator_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_BattleMapTimeIndicator_C, DefaultSceneRoot) == 0x000308, "Member 'ABP_BattleMapTimeIndicator_C::DefaultSceneRoot' has a wrong offset!");

}
