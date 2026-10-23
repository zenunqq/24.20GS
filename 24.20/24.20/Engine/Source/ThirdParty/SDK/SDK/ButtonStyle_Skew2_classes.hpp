#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_Skew2_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-Skew2_C">();
	}
	static class UButtonStyle_Skew2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_Skew2_C>();
	}
};
static_assert(alignof(UButtonStyle_Skew2_C) == 0x000010, "Wrong alignment on UButtonStyle_Skew2_C");
static_assert(sizeof(UButtonStyle_Skew2_C) == 0x000730, "Wrong size on UButtonStyle_Skew2_C");

}
