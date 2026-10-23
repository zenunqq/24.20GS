#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UBorder_PowerToastGlow_C final : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border-PowerToastGlow_C">();
	}
	static class UBorder_PowerToastGlow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_PowerToastGlow_C>();
	}
};
static_assert(alignof(UBorder_PowerToastGlow_C) == 0x000010, "Wrong alignment on UBorder_PowerToastGlow_C");
static_assert(sizeof(UBorder_PowerToastGlow_C) == 0x0000F0, "Wrong size on UBorder_PowerToastGlow_C");

}
