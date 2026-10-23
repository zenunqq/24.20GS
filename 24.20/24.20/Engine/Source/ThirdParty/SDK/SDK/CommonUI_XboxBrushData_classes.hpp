#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UCommonUI_XboxBrushData_C final : public UFortInputControllerData
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonUI_XboxBrushData_C">();
	}
	static class UCommonUI_XboxBrushData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonUI_XboxBrushData_C>();
	}
};
static_assert(alignof(UCommonUI_XboxBrushData_C) == 0x000008, "Wrong alignment on UCommonUI_XboxBrushData_C");
static_assert(sizeof(UCommonUI_XboxBrushData_C) == 0x0000F8, "Wrong size on UCommonUI_XboxBrushData_C");

}
