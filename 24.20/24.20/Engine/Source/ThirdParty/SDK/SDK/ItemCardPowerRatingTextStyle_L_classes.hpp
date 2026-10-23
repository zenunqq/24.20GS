#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UItemCardPowerRatingTextStyle_L_C final : public UCommonTextStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemCardPowerRatingTextStyle_L_C">();
	}
	static class UItemCardPowerRatingTextStyle_L_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemCardPowerRatingTextStyle_L_C>();
	}
};
static_assert(alignof(UItemCardPowerRatingTextStyle_L_C) == 0x000010, "Wrong alignment on UItemCardPowerRatingTextStyle_L_C");
static_assert(sizeof(UItemCardPowerRatingTextStyle_L_C) == 0x0001A0, "Wrong size on UItemCardPowerRatingTextStyle_L_C");

}
