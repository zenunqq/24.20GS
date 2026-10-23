#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBBE_QuickHealRejuvenationPotion_C final : public UFortMobileActionButtonBehaviorExtension
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BBE_QuickHealRejuvenationPotion_C">();
	}
	static class UBBE_QuickHealRejuvenationPotion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBBE_QuickHealRejuvenationPotion_C>();
	}
};
static_assert(alignof(UBBE_QuickHealRejuvenationPotion_C) == 0x000008, "Wrong alignment on UBBE_QuickHealRejuvenationPotion_C");
static_assert(sizeof(UBBE_QuickHealRejuvenationPotion_C) == 0x000070, "Wrong size on UBBE_QuickHealRejuvenationPotion_C");

}
