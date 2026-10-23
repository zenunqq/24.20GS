#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UBorder_StatRow_WhiteMidOpacity_C final : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border_StatRow_WhiteMidOpacity_C">();
	}
	static class UBorder_StatRow_WhiteMidOpacity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_StatRow_WhiteMidOpacity_C>();
	}
};
static_assert(alignof(UBorder_StatRow_WhiteMidOpacity_C) == 0x000010, "Wrong alignment on UBorder_StatRow_WhiteMidOpacity_C");
static_assert(sizeof(UBorder_StatRow_WhiteMidOpacity_C) == 0x0000F0, "Wrong size on UBorder_StatRow_WhiteMidOpacity_C");

}
