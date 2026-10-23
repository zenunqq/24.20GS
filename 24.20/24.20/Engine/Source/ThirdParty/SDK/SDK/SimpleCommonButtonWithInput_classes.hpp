#pragma once

#include "Basic.hpp"

#include "CommonUILegacy_classes.hpp"

namespace SDK
{

class USimpleCommonButtonWithInput_C final : public UCommonButtonLegacy
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SimpleCommonButtonWithInput_C">();
	}
	static class USimpleCommonButtonWithInput_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimpleCommonButtonWithInput_C>();
	}
};
static_assert(alignof(USimpleCommonButtonWithInput_C) == 0x000010, "Wrong alignment on USimpleCommonButtonWithInput_C");
static_assert(sizeof(USimpleCommonButtonWithInput_C) == 0x001430, "Wrong size on USimpleCommonButtonWithInput_C");

}
