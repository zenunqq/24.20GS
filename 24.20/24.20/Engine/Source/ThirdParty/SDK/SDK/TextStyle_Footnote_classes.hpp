#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UTextStyle_Footnote_C final : public UCommonTextStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextStyle-Footnote_C">();
	}
	static class UTextStyle_Footnote_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextStyle_Footnote_C>();
	}
};
static_assert(alignof(UTextStyle_Footnote_C) == 0x000010, "Wrong alignment on UTextStyle_Footnote_C");
static_assert(sizeof(UTextStyle_Footnote_C) == 0x0001A0, "Wrong size on UTextStyle_Footnote_C");

}
