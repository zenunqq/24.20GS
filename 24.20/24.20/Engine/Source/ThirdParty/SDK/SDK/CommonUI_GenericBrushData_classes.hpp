#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UCommonUI_GenericBrushData_C final : public UFortInputControllerData
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonUI_GenericBrushData_C">();
	}
	static class UCommonUI_GenericBrushData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonUI_GenericBrushData_C>();
	}
};
static_assert(alignof(UCommonUI_GenericBrushData_C) == 0x000008, "Wrong alignment on UCommonUI_GenericBrushData_C");
static_assert(sizeof(UCommonUI_GenericBrushData_C) == 0x0000F8, "Wrong size on UCommonUI_GenericBrushData_C");

}
