#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_Base_C : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-Base_C">();
	}
	static class UButtonStyle_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_Base_C>();
	}
};
static_assert(alignof(UButtonStyle_Base_C) == 0x000010, "Wrong alignment on UButtonStyle_Base_C");
static_assert(sizeof(UButtonStyle_Base_C) == 0x000730, "Wrong size on UButtonStyle_Base_C");

}
