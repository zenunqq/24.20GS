#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UItemCardPowerRatingTextStyle_M_C final : public UCommonTextStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemCardPowerRatingTextStyle_M_C">();
	}
	static class UItemCardPowerRatingTextStyle_M_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemCardPowerRatingTextStyle_M_C>();
	}
};
static_assert(alignof(UItemCardPowerRatingTextStyle_M_C) == 0x000010, "Wrong alignment on UItemCardPowerRatingTextStyle_M_C");
static_assert(sizeof(UItemCardPowerRatingTextStyle_M_C) == 0x0001A0, "Wrong size on UItemCardPowerRatingTextStyle_M_C");

}
