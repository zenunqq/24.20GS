#pragma once

#include "Basic.hpp"

#include "Border_ItemInfo_Unlocked_classes.hpp"

namespace SDK
{

class UBorder_ItemInfo_Blank_C final : public UBorder_ItemInfo_Unlocked_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border-ItemInfo-Blank_C">();
	}
	static class UBorder_ItemInfo_Blank_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_ItemInfo_Blank_C>();
	}
};
static_assert(alignof(UBorder_ItemInfo_Blank_C) == 0x000010, "Wrong alignment on UBorder_ItemInfo_Blank_C");
static_assert(sizeof(UBorder_ItemInfo_Blank_C) == 0x0000F0, "Wrong size on UBorder_ItemInfo_Blank_C");

}
