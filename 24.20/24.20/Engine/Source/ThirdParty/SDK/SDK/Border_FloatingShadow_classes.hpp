#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UBorder_FloatingShadow_C final : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border-FloatingShadow_C">();
	}
	static class UBorder_FloatingShadow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_FloatingShadow_C>();
	}
};
static_assert(alignof(UBorder_FloatingShadow_C) == 0x000010, "Wrong alignment on UBorder_FloatingShadow_C");
static_assert(sizeof(UBorder_FloatingShadow_C) == 0x0000F0, "Wrong size on UBorder_FloatingShadow_C");

}
