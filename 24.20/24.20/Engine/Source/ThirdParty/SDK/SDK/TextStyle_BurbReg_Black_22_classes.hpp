#pragma once

#include "Basic.hpp"

#include "TextStyle_Base_M_B_classes.hpp"

namespace SDK
{

class UTextStyle_BurbReg_Black_22_C final : public UTextStyle_Base_M_B_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextStyle-BurbReg-Black-22_C">();
	}
	static class UTextStyle_BurbReg_Black_22_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextStyle_BurbReg_Black_22_C>();
	}
};
static_assert(alignof(UTextStyle_BurbReg_Black_22_C) == 0x000010, "Wrong alignment on UTextStyle_BurbReg_Black_22_C");
static_assert(sizeof(UTextStyle_BurbReg_Black_22_C) == 0x0001A0, "Wrong size on UTextStyle_BurbReg_Black_22_C");

}
