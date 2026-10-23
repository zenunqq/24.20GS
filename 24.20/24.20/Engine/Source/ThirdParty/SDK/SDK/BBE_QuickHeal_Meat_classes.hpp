#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBBE_QuickHeal_Meat_C final : public UFortMobileActionButtonBehaviorExtension
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BBE_QuickHeal_Meat_C">();
	}
	static class UBBE_QuickHeal_Meat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBBE_QuickHeal_Meat_C>();
	}
};
static_assert(alignof(UBBE_QuickHeal_Meat_C) == 0x000008, "Wrong alignment on UBBE_QuickHeal_Meat_C");
static_assert(sizeof(UBBE_QuickHeal_Meat_C) == 0x000070, "Wrong size on UBBE_QuickHeal_Meat_C");

}
