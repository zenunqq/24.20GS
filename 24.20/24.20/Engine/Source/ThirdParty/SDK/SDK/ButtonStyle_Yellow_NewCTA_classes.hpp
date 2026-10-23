#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_Yellow_NewCTA_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-Yellow-NewCTA_C">();
	}
	static class UButtonStyle_Yellow_NewCTA_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_Yellow_NewCTA_C>();
	}
};
static_assert(alignof(UButtonStyle_Yellow_NewCTA_C) == 0x000010, "Wrong alignment on UButtonStyle_Yellow_NewCTA_C");
static_assert(sizeof(UButtonStyle_Yellow_NewCTA_C) == 0x000730, "Wrong size on UButtonStyle_Yellow_NewCTA_C");

}
