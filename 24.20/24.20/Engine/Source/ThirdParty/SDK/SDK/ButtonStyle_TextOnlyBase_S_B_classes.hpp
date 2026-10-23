#pragma once

#include "Basic.hpp"

#include "ButtonStyle_TextOnlyBase_classes.hpp"

namespace SDK
{

class UButtonStyle_TextOnlyBase_S_B_C final : public UButtonStyle_TextOnlyBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-TextOnlyBase_S-B_C">();
	}
	static class UButtonStyle_TextOnlyBase_S_B_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_TextOnlyBase_S_B_C>();
	}
};
static_assert(alignof(UButtonStyle_TextOnlyBase_S_B_C) == 0x000010, "Wrong alignment on UButtonStyle_TextOnlyBase_S_B_C");
static_assert(sizeof(UButtonStyle_TextOnlyBase_S_B_C) == 0x000730, "Wrong size on UButtonStyle_TextOnlyBase_S_B_C");

}
