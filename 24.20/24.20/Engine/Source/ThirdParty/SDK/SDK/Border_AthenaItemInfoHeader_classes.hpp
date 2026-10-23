#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UBorder_AthenaItemInfoHeader_C final : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border-AthenaItemInfoHeader_C">();
	}
	static class UBorder_AthenaItemInfoHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_AthenaItemInfoHeader_C>();
	}
};
static_assert(alignof(UBorder_AthenaItemInfoHeader_C) == 0x000010, "Wrong alignment on UBorder_AthenaItemInfoHeader_C");
static_assert(sizeof(UBorder_AthenaItemInfoHeader_C) == 0x0000F0, "Wrong size on UBorder_AthenaItemInfoHeader_C");

}
