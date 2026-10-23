#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UBorder_PowerBar_C final : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border-PowerBar_C">();
	}
	static class UBorder_PowerBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_PowerBar_C>();
	}
};
static_assert(alignof(UBorder_PowerBar_C) == 0x000010, "Wrong alignment on UBorder_PowerBar_C");
static_assert(sizeof(UBorder_PowerBar_C) == 0x0000F0, "Wrong size on UBorder_PowerBar_C");

}
