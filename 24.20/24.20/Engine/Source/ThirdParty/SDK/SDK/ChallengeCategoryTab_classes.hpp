#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UChallengeCategoryTab_C final : public UChallengeScreenCategoryTab
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChallengeCategoryTab_C">();
	}
	static class UChallengeCategoryTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChallengeCategoryTab_C>();
	}
};
static_assert(alignof(UChallengeCategoryTab_C) == 0x000010, "Wrong alignment on UChallengeCategoryTab_C");
static_assert(sizeof(UChallengeCategoryTab_C) == 0x001450, "Wrong size on UChallengeCategoryTab_C");

}
