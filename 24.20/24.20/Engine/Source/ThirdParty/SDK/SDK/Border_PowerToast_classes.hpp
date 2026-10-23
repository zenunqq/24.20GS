#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UBorder_PowerToast_C final : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border-PowerToast_C">();
	}
	static class UBorder_PowerToast_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_PowerToast_C>();
	}
};
static_assert(alignof(UBorder_PowerToast_C) == 0x000010, "Wrong alignment on UBorder_PowerToast_C");
static_assert(sizeof(UBorder_PowerToast_C) == 0x0000F0, "Wrong size on UBorder_PowerToast_C");

}
