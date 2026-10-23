#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UQuickHealItemPickerBP_C final : public UQuickHealItemPicker
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuickHealItemPickerBP_C">();
	}
	static class UQuickHealItemPickerBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuickHealItemPickerBP_C>();
	}
};
static_assert(alignof(UQuickHealItemPickerBP_C) == 0x000008, "Wrong alignment on UQuickHealItemPickerBP_C");
static_assert(sizeof(UQuickHealItemPickerBP_C) == 0x000078, "Wrong size on UQuickHealItemPickerBP_C");

}
