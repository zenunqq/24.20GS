#pragma once

#include "Basic.hpp"

#include "TextStyle_BaseParent_classes.hpp"

namespace SDK
{

class UTextStyle_BurbSmBk_15_DarkBlue_C final : public UTextStyle_BaseParent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextStyle_BurbSmBk_15_DarkBlue_C">();
	}
	static class UTextStyle_BurbSmBk_15_DarkBlue_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextStyle_BurbSmBk_15_DarkBlue_C>();
	}
};
static_assert(alignof(UTextStyle_BurbSmBk_15_DarkBlue_C) == 0x000010, "Wrong alignment on UTextStyle_BurbSmBk_15_DarkBlue_C");
static_assert(sizeof(UTextStyle_BurbSmBk_15_DarkBlue_C) == 0x0001A0, "Wrong size on UTextStyle_BurbSmBk_15_DarkBlue_C");

}
