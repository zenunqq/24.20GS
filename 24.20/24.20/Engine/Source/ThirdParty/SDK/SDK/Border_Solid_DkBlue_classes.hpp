#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UBorder_Solid_DkBlue_C final : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border_Solid_DkBlue_C">();
	}
	static class UBorder_Solid_DkBlue_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_Solid_DkBlue_C>();
	}
};
static_assert(alignof(UBorder_Solid_DkBlue_C) == 0x000010, "Wrong alignment on UBorder_Solid_DkBlue_C");
static_assert(sizeof(UBorder_Solid_DkBlue_C) == 0x0000F0, "Wrong size on UBorder_Solid_DkBlue_C");

}
