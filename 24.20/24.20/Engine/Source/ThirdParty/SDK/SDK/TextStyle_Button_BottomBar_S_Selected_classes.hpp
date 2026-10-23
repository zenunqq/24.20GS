#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UTextStyle_Button_BottomBar_S_Selected_C final : public UCommonTextStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextStyle-Button-BottomBar-S-Selected_C">();
	}
	static class UTextStyle_Button_BottomBar_S_Selected_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextStyle_Button_BottomBar_S_Selected_C>();
	}
};
static_assert(alignof(UTextStyle_Button_BottomBar_S_Selected_C) == 0x000010, "Wrong alignment on UTextStyle_Button_BottomBar_S_Selected_C");
static_assert(sizeof(UTextStyle_Button_BottomBar_S_Selected_C) == 0x0001A0, "Wrong size on UTextStyle_Button_BottomBar_S_Selected_C");

}
