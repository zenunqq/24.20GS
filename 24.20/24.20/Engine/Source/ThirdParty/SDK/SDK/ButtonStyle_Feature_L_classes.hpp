#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_Feature_L_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle_Feature_L_C">();
	}
	static class UButtonStyle_Feature_L_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_Feature_L_C>();
	}
};
static_assert(alignof(UButtonStyle_Feature_L_C) == 0x000010, "Wrong alignment on UButtonStyle_Feature_L_C");
static_assert(sizeof(UButtonStyle_Feature_L_C) == 0x000730, "Wrong size on UButtonStyle_Feature_L_C");

}
