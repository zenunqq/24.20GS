#pragma once

#include "Basic.hpp"

#include "TextStyle_BaseParent_classes.hpp"

namespace SDK
{

class UTextStyle_BurbankSmall_M_Black_C final : public UTextStyle_BaseParent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextStyle-BurbankSmall-M-Black_C">();
	}
	static class UTextStyle_BurbankSmall_M_Black_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextStyle_BurbankSmall_M_Black_C>();
	}
};
static_assert(alignof(UTextStyle_BurbankSmall_M_Black_C) == 0x000010, "Wrong alignment on UTextStyle_BurbankSmall_M_Black_C");
static_assert(sizeof(UTextStyle_BurbankSmall_M_Black_C) == 0x0001A0, "Wrong size on UTextStyle_BurbankSmall_M_Black_C");

}
