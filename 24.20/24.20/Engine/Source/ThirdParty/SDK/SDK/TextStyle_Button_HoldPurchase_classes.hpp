#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UTextStyle_Button_HoldPurchase_C final : public UCommonTextStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextStyle_Button_HoldPurchase_C">();
	}
	static class UTextStyle_Button_HoldPurchase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextStyle_Button_HoldPurchase_C>();
	}
};
static_assert(alignof(UTextStyle_Button_HoldPurchase_C) == 0x000010, "Wrong alignment on UTextStyle_Button_HoldPurchase_C");
static_assert(sizeof(UTextStyle_Button_HoldPurchase_C) == 0x0001A0, "Wrong size on UTextStyle_Button_HoldPurchase_C");

}
