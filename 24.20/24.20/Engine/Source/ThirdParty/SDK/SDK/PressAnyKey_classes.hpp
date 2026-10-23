#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UPressAnyKey_C final : public UFortSettingsPressAnyKey
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PressAnyKey_C">();
	}
	static class UPressAnyKey_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPressAnyKey_C>();
	}
};
static_assert(alignof(UPressAnyKey_C) == 0x000008, "Wrong alignment on UPressAnyKey_C");
static_assert(sizeof(UPressAnyKey_C) == 0x000560, "Wrong size on UPressAnyKey_C");

}
