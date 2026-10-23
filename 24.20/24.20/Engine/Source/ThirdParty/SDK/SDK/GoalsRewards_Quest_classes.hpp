#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UGoalsRewards_Quest_C final : public UAthenaChallengeRewards
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GoalsRewards_Quest_C">();
	}
	static class UGoalsRewards_Quest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGoalsRewards_Quest_C>();
	}
};
static_assert(alignof(UGoalsRewards_Quest_C) == 0x000008, "Wrong alignment on UGoalsRewards_Quest_C");
static_assert(sizeof(UGoalsRewards_Quest_C) == 0x0002A8, "Wrong size on UGoalsRewards_Quest_C");

}
