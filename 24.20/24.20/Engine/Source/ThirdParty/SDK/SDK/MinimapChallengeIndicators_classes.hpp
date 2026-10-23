#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UMinimapChallengeIndicators_C final : public UFortMiniMapChallengeIndicators
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MinimapChallengeIndicators_C">();
	}
	static class UMinimapChallengeIndicators_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMinimapChallengeIndicators_C>();
	}
};
static_assert(alignof(UMinimapChallengeIndicators_C) == 0x000010, "Wrong alignment on UMinimapChallengeIndicators_C");
static_assert(sizeof(UMinimapChallengeIndicators_C) == 0x000220, "Wrong size on UMinimapChallengeIndicators_C");

}
