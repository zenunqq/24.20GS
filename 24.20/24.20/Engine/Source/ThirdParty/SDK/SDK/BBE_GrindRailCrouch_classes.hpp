#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBBE_GrindRailCrouch_C final : public UFortMobileActionButtonBehaviorExtension
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BBE_GrindRailCrouch_C">();
	}
	static class UBBE_GrindRailCrouch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBBE_GrindRailCrouch_C>();
	}
};
static_assert(alignof(UBBE_GrindRailCrouch_C) == 0x000008, "Wrong alignment on UBBE_GrindRailCrouch_C");
static_assert(sizeof(UBBE_GrindRailCrouch_C) == 0x000070, "Wrong size on UBBE_GrindRailCrouch_C");

}
