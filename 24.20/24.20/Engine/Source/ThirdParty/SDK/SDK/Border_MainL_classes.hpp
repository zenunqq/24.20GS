#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UBorder_MainL_C : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border-MainL_C">();
	}
	static class UBorder_MainL_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_MainL_C>();
	}
};
static_assert(alignof(UBorder_MainL_C) == 0x000010, "Wrong alignment on UBorder_MainL_C");
static_assert(sizeof(UBorder_MainL_C) == 0x0000F0, "Wrong size on UBorder_MainL_C");

}
