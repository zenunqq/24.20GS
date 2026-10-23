#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_Primary_M_Skew_Yellow_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-Primary-M_Skew_Yellow_C">();
	}
	static class UButtonStyle_Primary_M_Skew_Yellow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_Primary_M_Skew_Yellow_C>();
	}
};
static_assert(alignof(UButtonStyle_Primary_M_Skew_Yellow_C) == 0x000010, "Wrong alignment on UButtonStyle_Primary_M_Skew_Yellow_C");
static_assert(sizeof(UButtonStyle_Primary_M_Skew_Yellow_C) == 0x000730, "Wrong size on UButtonStyle_Primary_M_Skew_Yellow_C");

}
