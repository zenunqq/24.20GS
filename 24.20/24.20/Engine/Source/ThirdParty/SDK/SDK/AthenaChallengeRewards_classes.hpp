#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaChallengeRewards_C final : public UAthenaChallengeRewards
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaChallengeRewards_C">();
	}
	static class UAthenaChallengeRewards_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaChallengeRewards_C>();
	}
};
static_assert(alignof(UAthenaChallengeRewards_C) == 0x000008, "Wrong alignment on UAthenaChallengeRewards_C");
static_assert(sizeof(UAthenaChallengeRewards_C) == 0x0002A8, "Wrong size on UAthenaChallengeRewards_C");

}
