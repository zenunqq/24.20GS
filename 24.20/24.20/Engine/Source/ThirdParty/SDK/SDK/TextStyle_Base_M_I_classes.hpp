#pragma once

#include "Basic.hpp"

#include "TextStyle_Base_M_classes.hpp"

namespace SDK
{

class UTextStyle_Base_M_I_C final : public UTextStyle_Base_M_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextStyle-Base-M-I_C">();
	}
	static class UTextStyle_Base_M_I_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextStyle_Base_M_I_C>();
	}
};
static_assert(alignof(UTextStyle_Base_M_I_C) == 0x000010, "Wrong alignment on UTextStyle_Base_M_I_C");
static_assert(sizeof(UTextStyle_Base_M_I_C) == 0x0001A0, "Wrong size on UTextStyle_Base_M_I_C");

}
