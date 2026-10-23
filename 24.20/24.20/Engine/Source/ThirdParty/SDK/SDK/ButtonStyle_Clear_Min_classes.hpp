#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_Clear_Min_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-Clear-Min_C">();
	}
	static class UButtonStyle_Clear_Min_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_Clear_Min_C>();
	}
};
static_assert(alignof(UButtonStyle_Clear_Min_C) == 0x000010, "Wrong alignment on UButtonStyle_Clear_Min_C");
static_assert(sizeof(UButtonStyle_Clear_Min_C) == 0x000730, "Wrong size on UButtonStyle_Clear_Min_C");

}
