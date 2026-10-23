#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UGoalsRewards_C final : public UAthenaChallengeRewards
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GoalsRewards_C">();
	}
	static class UGoalsRewards_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGoalsRewards_C>();
	}
};
static_assert(alignof(UGoalsRewards_C) == 0x000008, "Wrong alignment on UGoalsRewards_C");
static_assert(sizeof(UGoalsRewards_C) == 0x0002A8, "Wrong size on UGoalsRewards_C");

}
