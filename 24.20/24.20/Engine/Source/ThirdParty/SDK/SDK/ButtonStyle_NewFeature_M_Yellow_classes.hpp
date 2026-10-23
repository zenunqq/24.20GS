#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_NewFeature_M_Yellow_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle_NewFeature_M_Yellow_C">();
	}
	static class UButtonStyle_NewFeature_M_Yellow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_NewFeature_M_Yellow_C>();
	}
};
static_assert(alignof(UButtonStyle_NewFeature_M_Yellow_C) == 0x000010, "Wrong alignment on UButtonStyle_NewFeature_M_Yellow_C");
static_assert(sizeof(UButtonStyle_NewFeature_M_Yellow_C) == 0x000730, "Wrong size on UButtonStyle_NewFeature_M_Yellow_C");

}
