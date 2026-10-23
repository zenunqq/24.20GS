#pragma once

#include "Basic.hpp"

#include "TextStyle_MediumButton_classes.hpp"

namespace SDK
{

class UTextStyle_MediumButton_Disabled_C final : public UTextStyle_MediumButton_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextStyle-MediumButton-Disabled_C">();
	}
	static class UTextStyle_MediumButton_Disabled_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextStyle_MediumButton_Disabled_C>();
	}
};
static_assert(alignof(UTextStyle_MediumButton_Disabled_C) == 0x000010, "Wrong alignment on UTextStyle_MediumButton_Disabled_C");
static_assert(sizeof(UTextStyle_MediumButton_Disabled_C) == 0x0001A0, "Wrong size on UTextStyle_MediumButton_Disabled_C");

}
