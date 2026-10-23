#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UChallengeTile_EmptyButton_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChallengeTile_EmptyButton_C">();
	}
	static class UChallengeTile_EmptyButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChallengeTile_EmptyButton_C>();
	}
};
static_assert(alignof(UChallengeTile_EmptyButton_C) == 0x000010, "Wrong alignment on UChallengeTile_EmptyButton_C");
static_assert(sizeof(UChallengeTile_EmptyButton_C) == 0x000730, "Wrong size on UChallengeTile_EmptyButton_C");

}
