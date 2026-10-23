#pragma once

#include "Basic.hpp"

#include "TextStyle_BaseParent_classes.hpp"

namespace SDK
{

class UTextStyle_BurbSmBk_18_White25_C final : public UTextStyle_BaseParent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextStyle_BurbSmBk_18_White25_C">();
	}
	static class UTextStyle_BurbSmBk_18_White25_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextStyle_BurbSmBk_18_White25_C>();
	}
};
static_assert(alignof(UTextStyle_BurbSmBk_18_White25_C) == 0x000010, "Wrong alignment on UTextStyle_BurbSmBk_18_White25_C");
static_assert(sizeof(UTextStyle_BurbSmBk_18_White25_C) == 0x0001A0, "Wrong size on UTextStyle_BurbSmBk_18_White25_C");

}
