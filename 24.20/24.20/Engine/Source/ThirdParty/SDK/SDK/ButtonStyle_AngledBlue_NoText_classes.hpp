#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_AngledBlue_NoText_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-AngledBlue-NoText_C">();
	}
	static class UButtonStyle_AngledBlue_NoText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_AngledBlue_NoText_C>();
	}
};
static_assert(alignof(UButtonStyle_AngledBlue_NoText_C) == 0x000010, "Wrong alignment on UButtonStyle_AngledBlue_NoText_C");
static_assert(sizeof(UButtonStyle_AngledBlue_NoText_C) == 0x000730, "Wrong size on UButtonStyle_AngledBlue_NoText_C");

}
