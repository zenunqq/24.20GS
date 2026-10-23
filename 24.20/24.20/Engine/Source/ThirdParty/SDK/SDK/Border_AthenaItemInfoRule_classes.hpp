#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UBorder_AthenaItemInfoRule_C final : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border-AthenaItemInfoRule_C">();
	}
	static class UBorder_AthenaItemInfoRule_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_AthenaItemInfoRule_C>();
	}
};
static_assert(alignof(UBorder_AthenaItemInfoRule_C) == 0x000010, "Wrong alignment on UBorder_AthenaItemInfoRule_C");
static_assert(sizeof(UBorder_AthenaItemInfoRule_C) == 0x0000F0, "Wrong size on UBorder_AthenaItemInfoRule_C");

}
