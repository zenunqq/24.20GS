#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_Slot_Gadget_S_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-Slot-Gadget-S_C">();
	}
	static class UButtonStyle_Slot_Gadget_S_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_Slot_Gadget_S_C>();
	}
};
static_assert(alignof(UButtonStyle_Slot_Gadget_S_C) == 0x000010, "Wrong alignment on UButtonStyle_Slot_Gadget_S_C");
static_assert(sizeof(UButtonStyle_Slot_Gadget_S_C) == 0x000730, "Wrong size on UButtonStyle_Slot_Gadget_S_C");

}
