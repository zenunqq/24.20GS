#pragma once

#include "Basic.hpp"

#include "Border_MainL_classes.hpp"

namespace SDK
{

class UBorder_MainL_Black_C final : public UBorder_MainL_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border-MainL-Black_C">();
	}
	static class UBorder_MainL_Black_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_MainL_Black_C>();
	}
};
static_assert(alignof(UBorder_MainL_Black_C) == 0x000010, "Wrong alignment on UBorder_MainL_Black_C");
static_assert(sizeof(UBorder_MainL_Black_C) == 0x0000F0, "Wrong size on UBorder_MainL_Black_C");

}
