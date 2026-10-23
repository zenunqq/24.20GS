#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_ShowdownRegionPopup_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle_ShowdownRegionPopup_C">();
	}
	static class UButtonStyle_ShowdownRegionPopup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_ShowdownRegionPopup_C>();
	}
};
static_assert(alignof(UButtonStyle_ShowdownRegionPopup_C) == 0x000010, "Wrong alignment on UButtonStyle_ShowdownRegionPopup_C");
static_assert(sizeof(UButtonStyle_ShowdownRegionPopup_C) == 0x000730, "Wrong size on UButtonStyle_ShowdownRegionPopup_C");

}
