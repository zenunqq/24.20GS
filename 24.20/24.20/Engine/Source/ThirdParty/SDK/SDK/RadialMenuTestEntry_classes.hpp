#pragma once

#include "Basic.hpp"

#include "CommonUILegacy_classes.hpp"

namespace SDK
{

class URadialMenuTestEntry_C final : public UCommonButtonLegacy
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RadialMenuTestEntry_C">();
	}
	static class URadialMenuTestEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URadialMenuTestEntry_C>();
	}
};
static_assert(alignof(URadialMenuTestEntry_C) == 0x000010, "Wrong alignment on URadialMenuTestEntry_C");
static_assert(sizeof(URadialMenuTestEntry_C) == 0x001430, "Wrong size on URadialMenuTestEntry_C");

}
