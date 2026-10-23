#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UBorder_ItemInfo_Unlocked_C : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border-ItemInfo-Unlocked_C">();
	}
	static class UBorder_ItemInfo_Unlocked_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_ItemInfo_Unlocked_C>();
	}
};
static_assert(alignof(UBorder_ItemInfo_Unlocked_C) == 0x000010, "Wrong alignment on UBorder_ItemInfo_Unlocked_C");
static_assert(sizeof(UBorder_ItemInfo_Unlocked_C) == 0x0000F0, "Wrong size on UBorder_ItemInfo_Unlocked_C");

}
