#pragma once

#include "Basic.hpp"

#include "ButtonStyle_Base_classes.hpp"

namespace SDK
{

class UButtonStyle_UIKit_CTA_C final : public UButtonStyle_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle_UIKit_CTA_C">();
	}
	static class UButtonStyle_UIKit_CTA_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_UIKit_CTA_C>();
	}
};
static_assert(alignof(UButtonStyle_UIKit_CTA_C) == 0x000010, "Wrong alignment on UButtonStyle_UIKit_CTA_C");
static_assert(sizeof(UButtonStyle_UIKit_CTA_C) == 0x000730, "Wrong size on UButtonStyle_UIKit_CTA_C");

}
