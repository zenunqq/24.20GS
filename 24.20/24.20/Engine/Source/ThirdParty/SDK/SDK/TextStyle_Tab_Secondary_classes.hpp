#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UTextStyle_Tab_Secondary_C final : public UCommonTextStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextStyle-Tab-Secondary_C">();
	}
	static class UTextStyle_Tab_Secondary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextStyle_Tab_Secondary_C>();
	}
};
static_assert(alignof(UTextStyle_Tab_Secondary_C) == 0x000010, "Wrong alignment on UTextStyle_Tab_Secondary_C");
static_assert(sizeof(UTextStyle_Tab_Secondary_C) == 0x0001A0, "Wrong size on UTextStyle_Tab_Secondary_C");

}
