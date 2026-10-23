#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UTextStyle_Base_C : public UCommonTextStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextStyle-Base_C">();
	}
	static class UTextStyle_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextStyle_Base_C>();
	}
};
static_assert(alignof(UTextStyle_Base_C) == 0x000010, "Wrong alignment on UTextStyle_Base_C");
static_assert(sizeof(UTextStyle_Base_C) == 0x0001A0, "Wrong size on UTextStyle_Base_C");

}
