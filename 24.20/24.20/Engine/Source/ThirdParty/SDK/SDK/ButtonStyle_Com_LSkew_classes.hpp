#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_Com_LSkew_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-Com-LSkew_C">();
	}
	static class UButtonStyle_Com_LSkew_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_Com_LSkew_C>();
	}
};
static_assert(alignof(UButtonStyle_Com_LSkew_C) == 0x000010, "Wrong alignment on UButtonStyle_Com_LSkew_C");
static_assert(sizeof(UButtonStyle_Com_LSkew_C) == 0x000730, "Wrong size on UButtonStyle_Com_LSkew_C");

}
