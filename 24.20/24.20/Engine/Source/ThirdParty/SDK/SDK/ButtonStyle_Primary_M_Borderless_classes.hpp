#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_Primary_M_Borderless_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-Primary-M-Borderless_C">();
	}
	static class UButtonStyle_Primary_M_Borderless_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_Primary_M_Borderless_C>();
	}
};
static_assert(alignof(UButtonStyle_Primary_M_Borderless_C) == 0x000010, "Wrong alignment on UButtonStyle_Primary_M_Borderless_C");
static_assert(sizeof(UButtonStyle_Primary_M_Borderless_C) == 0x000730, "Wrong size on UButtonStyle_Primary_M_Borderless_C");

}
