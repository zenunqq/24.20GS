#pragma once

#include "Basic.hpp"

#include "TextStyle_BaseParent_classes.hpp"

namespace SDK
{

class UTextStyle_BurbankSmall_XS_Teal_C final : public UTextStyle_BaseParent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextStyle-BurbankSmall-XS-Teal_C">();
	}
	static class UTextStyle_BurbankSmall_XS_Teal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextStyle_BurbankSmall_XS_Teal_C>();
	}
};
static_assert(alignof(UTextStyle_BurbankSmall_XS_Teal_C) == 0x000010, "Wrong alignment on UTextStyle_BurbankSmall_XS_Teal_C");
static_assert(sizeof(UTextStyle_BurbankSmall_XS_Teal_C) == 0x0001A0, "Wrong size on UTextStyle_BurbankSmall_XS_Teal_C");

}
