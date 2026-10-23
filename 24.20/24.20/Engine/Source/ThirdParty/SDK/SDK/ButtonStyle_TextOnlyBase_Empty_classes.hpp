#pragma once

#include "Basic.hpp"

#include "ButtonStyle_Base_classes.hpp"

namespace SDK
{

class UButtonStyle_TextOnlyBase_Empty_C final : public UButtonStyle_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-TextOnlyBase_Empty_C">();
	}
	static class UButtonStyle_TextOnlyBase_Empty_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_TextOnlyBase_Empty_C>();
	}
};
static_assert(alignof(UButtonStyle_TextOnlyBase_Empty_C) == 0x000010, "Wrong alignment on UButtonStyle_TextOnlyBase_Empty_C");
static_assert(sizeof(UButtonStyle_TextOnlyBase_Empty_C) == 0x000730, "Wrong size on UButtonStyle_TextOnlyBase_Empty_C");

}
