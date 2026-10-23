#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UItemCardPowerRatingTextStyle_XS_C final : public UCommonTextStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemCardPowerRatingTextStyle_XS_C">();
	}
	static class UItemCardPowerRatingTextStyle_XS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemCardPowerRatingTextStyle_XS_C>();
	}
};
static_assert(alignof(UItemCardPowerRatingTextStyle_XS_C) == 0x000010, "Wrong alignment on UItemCardPowerRatingTextStyle_XS_C");
static_assert(sizeof(UItemCardPowerRatingTextStyle_XS_C) == 0x0001A0, "Wrong size on UItemCardPowerRatingTextStyle_XS_C");

}
