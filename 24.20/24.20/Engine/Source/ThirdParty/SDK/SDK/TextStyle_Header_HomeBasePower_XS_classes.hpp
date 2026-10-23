#pragma once

#include "Basic.hpp"

#include "TextStyle_Header_L_classes.hpp"

namespace SDK
{

class UTextStyle_Header_HomeBasePower_XS_C final : public UTextStyle_Header_L_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextStyle-Header-HomeBasePower-XS_C">();
	}
	static class UTextStyle_Header_HomeBasePower_XS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextStyle_Header_HomeBasePower_XS_C>();
	}
};
static_assert(alignof(UTextStyle_Header_HomeBasePower_XS_C) == 0x000010, "Wrong alignment on UTextStyle_Header_HomeBasePower_XS_C");
static_assert(sizeof(UTextStyle_Header_HomeBasePower_XS_C) == 0x0001A0, "Wrong size on UTextStyle_Header_HomeBasePower_XS_C");

}
