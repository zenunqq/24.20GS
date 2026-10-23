#pragma once

#include "Basic.hpp"

#include "TextStyle_BaseParent_classes.hpp"

namespace SDK
{

class UTextStyle_Base_XS_LowOpacity_C final : public UTextStyle_BaseParent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextStyle-Base-XS-LowOpacity_C">();
	}
	static class UTextStyle_Base_XS_LowOpacity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextStyle_Base_XS_LowOpacity_C>();
	}
};
static_assert(alignof(UTextStyle_Base_XS_LowOpacity_C) == 0x000010, "Wrong alignment on UTextStyle_Base_XS_LowOpacity_C");
static_assert(sizeof(UTextStyle_Base_XS_LowOpacity_C) == 0x0001A0, "Wrong size on UTextStyle_Base_XS_LowOpacity_C");

}
