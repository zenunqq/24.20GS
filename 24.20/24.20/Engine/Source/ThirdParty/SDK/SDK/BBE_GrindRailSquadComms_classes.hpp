#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBBE_GrindRailSquadComms_C final : public UFortMobileActionButtonBehaviorExtension
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BBE_GrindRailSquadComms_C">();
	}
	static class UBBE_GrindRailSquadComms_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBBE_GrindRailSquadComms_C>();
	}
};
static_assert(alignof(UBBE_GrindRailSquadComms_C) == 0x000008, "Wrong alignment on UBBE_GrindRailSquadComms_C");
static_assert(sizeof(UBBE_GrindRailSquadComms_C) == 0x000070, "Wrong size on UBBE_GrindRailSquadComms_C");

}
