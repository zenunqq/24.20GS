#pragma once

#include "Basic.hpp"

#include "ButtonStyle_MediumTransparentNoCues_classes.hpp"

namespace SDK
{

class UButtonStyle_ClearSocialSearch_C final : public UButtonStyle_MediumTransparentNoCues_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle_ClearSocialSearch_C">();
	}
	static class UButtonStyle_ClearSocialSearch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_ClearSocialSearch_C>();
	}
};
static_assert(alignof(UButtonStyle_ClearSocialSearch_C) == 0x000010, "Wrong alignment on UButtonStyle_ClearSocialSearch_C");
static_assert(sizeof(UButtonStyle_ClearSocialSearch_C) == 0x000730, "Wrong size on UButtonStyle_ClearSocialSearch_C");

}
