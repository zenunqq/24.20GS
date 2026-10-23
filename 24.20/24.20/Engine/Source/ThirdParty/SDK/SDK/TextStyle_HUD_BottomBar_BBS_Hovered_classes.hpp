#pragma once

#include "Basic.hpp"

#include "TextStyle_BaseParent_classes.hpp"

namespace SDK
{

class UTextStyle_HUD_BottomBar_BBS_Hovered_C final : public UTextStyle_BaseParent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextStyle-HUD-BottomBar-BBS-Hovered_C">();
	}
	static class UTextStyle_HUD_BottomBar_BBS_Hovered_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextStyle_HUD_BottomBar_BBS_Hovered_C>();
	}
};
static_assert(alignof(UTextStyle_HUD_BottomBar_BBS_Hovered_C) == 0x000010, "Wrong alignment on UTextStyle_HUD_BottomBar_BBS_Hovered_C");
static_assert(sizeof(UTextStyle_HUD_BottomBar_BBS_Hovered_C) == 0x0001A0, "Wrong size on UTextStyle_HUD_BottomBar_BBS_Hovered_C");

}
