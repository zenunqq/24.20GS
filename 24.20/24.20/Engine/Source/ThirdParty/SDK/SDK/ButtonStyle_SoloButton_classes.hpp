#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_SoloButton_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-SoloButton_C">();
	}
	static class UButtonStyle_SoloButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_SoloButton_C>();
	}
};
static_assert(alignof(UButtonStyle_SoloButton_C) == 0x000010, "Wrong alignment on UButtonStyle_SoloButton_C");
static_assert(sizeof(UButtonStyle_SoloButton_C) == 0x000730, "Wrong size on UButtonStyle_SoloButton_C");

}
