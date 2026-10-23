#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UBorder_Bang_C final : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border-Bang_C">();
	}
	static class UBorder_Bang_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_Bang_C>();
	}
};
static_assert(alignof(UBorder_Bang_C) == 0x000010, "Wrong alignment on UBorder_Bang_C");
static_assert(sizeof(UBorder_Bang_C) == 0x0000F0, "Wrong size on UBorder_Bang_C");

}
