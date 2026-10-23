#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UCommonUI_KeyboardBrushData_C final : public UFortInputControllerData
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonUI_KeyboardBrushData_C">();
	}
	static class UCommonUI_KeyboardBrushData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonUI_KeyboardBrushData_C>();
	}
};
static_assert(alignof(UCommonUI_KeyboardBrushData_C) == 0x000008, "Wrong alignment on UCommonUI_KeyboardBrushData_C");
static_assert(sizeof(UCommonUI_KeyboardBrushData_C) == 0x0000F8, "Wrong size on UCommonUI_KeyboardBrushData_C");

}
