#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class ULetoHudOverlay_C final : public ULetoHudOverlay
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LetoHudOverlay_C">();
	}
	static class ULetoHudOverlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULetoHudOverlay_C>();
	}
};
static_assert(alignof(ULetoHudOverlay_C) == 0x000008, "Wrong alignment on ULetoHudOverlay_C");
static_assert(sizeof(ULetoHudOverlay_C) == 0x0002C8, "Wrong size on ULetoHudOverlay_C");

}
