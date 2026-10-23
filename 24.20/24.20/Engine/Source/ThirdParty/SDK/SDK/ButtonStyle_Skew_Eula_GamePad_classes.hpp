#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_Skew_Eula_GamePad_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-Skew_Eula_GamePad_C">();
	}
	static class UButtonStyle_Skew_Eula_GamePad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_Skew_Eula_GamePad_C>();
	}
};
static_assert(alignof(UButtonStyle_Skew_Eula_GamePad_C) == 0x000010, "Wrong alignment on UButtonStyle_Skew_Eula_GamePad_C");
static_assert(sizeof(UButtonStyle_Skew_Eula_GamePad_C) == 0x000730, "Wrong size on UButtonStyle_Skew_Eula_GamePad_C");

}
