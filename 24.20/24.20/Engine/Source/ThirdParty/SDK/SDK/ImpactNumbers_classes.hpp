#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class AImpactNumbers_C final : public AFortDamageNumbersActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImpactNumbers_C">();
	}
	static class AImpactNumbers_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AImpactNumbers_C>();
	}
};
static_assert(alignof(AImpactNumbers_C) == 0x000008, "Wrong alignment on AImpactNumbers_C");
static_assert(sizeof(AImpactNumbers_C) == 0x000620, "Wrong size on AImpactNumbers_C");
static_assert(offsetof(AImpactNumbers_C, DefaultSceneRoot) == 0x000618, "Member 'AImpactNumbers_C::DefaultSceneRoot' has a wrong offset!");

}
