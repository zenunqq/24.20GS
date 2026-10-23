#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UTextScrollStyle_Base_Ticker_C final : public UCommonTextScrollStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextScrollStyle-Base-Ticker_C">();
	}
	static class UTextScrollStyle_Base_Ticker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextScrollStyle_Base_Ticker_C>();
	}
};
static_assert(alignof(UTextScrollStyle_Base_Ticker_C) == 0x000008, "Wrong alignment on UTextScrollStyle_Base_Ticker_C");
static_assert(sizeof(UTextScrollStyle_Base_Ticker_C) == 0x000040, "Wrong size on UTextScrollStyle_Base_Ticker_C");

}
