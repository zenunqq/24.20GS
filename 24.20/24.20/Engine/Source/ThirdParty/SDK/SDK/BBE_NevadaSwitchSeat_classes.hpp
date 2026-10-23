#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBBE_NevadaSwitchSeat_C final : public UFortMobileActionButtonBehaviorExtension
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BBE_NevadaSwitchSeat_C">();
	}
	static class UBBE_NevadaSwitchSeat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBBE_NevadaSwitchSeat_C>();
	}
};
static_assert(alignof(UBBE_NevadaSwitchSeat_C) == 0x000008, "Wrong alignment on UBBE_NevadaSwitchSeat_C");
static_assert(sizeof(UBBE_NevadaSwitchSeat_C) == 0x000070, "Wrong size on UBBE_NevadaSwitchSeat_C");

}
