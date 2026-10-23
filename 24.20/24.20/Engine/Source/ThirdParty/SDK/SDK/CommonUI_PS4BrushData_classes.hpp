#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UCommonUI_PS4BrushData_C final : public UFortInputControllerData
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonUI_PS4BrushData_C">();
	}
	static class UCommonUI_PS4BrushData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonUI_PS4BrushData_C>();
	}
};
static_assert(alignof(UCommonUI_PS4BrushData_C) == 0x000008, "Wrong alignment on UCommonUI_PS4BrushData_C");
static_assert(sizeof(UCommonUI_PS4BrushData_C) == 0x0000F8, "Wrong size on UCommonUI_PS4BrushData_C");

}
