#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UBorder_SolidBG_Yellow_C final : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border-SolidBG-Yellow_C">();
	}
	static class UBorder_SolidBG_Yellow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_SolidBG_Yellow_C>();
	}
};
static_assert(alignof(UBorder_SolidBG_Yellow_C) == 0x000010, "Wrong alignment on UBorder_SolidBG_Yellow_C");
static_assert(sizeof(UBorder_SolidBG_Yellow_C) == 0x0000F0, "Wrong size on UBorder_SolidBG_Yellow_C");

}
