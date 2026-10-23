#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class II_FrontendBackplateMatchmakingInteraction_C final : public IInterface
{
public:
	void MatchmakingEnded(bool bWasSuccess);
	void HasMatcmakingInteraction(bool* HasInteraction);
	void EnteringMatchmaking();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"I_FrontendBackplateMatchmakingInteraction_C">();
	}
	static class II_FrontendBackplateMatchmakingInteraction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<II_FrontendBackplateMatchmakingInteraction_C>();
	}
};
static_assert(alignof(II_FrontendBackplateMatchmakingInteraction_C) == 0x000008, "Wrong alignment on II_FrontendBackplateMatchmakingInteraction_C");
static_assert(sizeof(II_FrontendBackplateMatchmakingInteraction_C) == 0x000028, "Wrong size on II_FrontendBackplateMatchmakingInteraction_C");

}
