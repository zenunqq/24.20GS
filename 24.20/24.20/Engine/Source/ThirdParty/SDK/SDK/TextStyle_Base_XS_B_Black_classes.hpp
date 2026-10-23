#pragma once

#include "Basic.hpp"

#include "TextStyle_Base_S_B_classes.hpp"

namespace SDK
{

class UTextStyle_Base_XS_B_Black_C final : public UTextStyle_Base_S_B_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextStyle-Base-XS-B-Black_C">();
	}
	static class UTextStyle_Base_XS_B_Black_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextStyle_Base_XS_B_Black_C>();
	}
};
static_assert(alignof(UTextStyle_Base_XS_B_Black_C) == 0x000010, "Wrong alignment on UTextStyle_Base_XS_B_Black_C");
static_assert(sizeof(UTextStyle_Base_XS_B_Black_C) == 0x0001A0, "Wrong size on UTextStyle_Base_XS_B_Black_C");

}
