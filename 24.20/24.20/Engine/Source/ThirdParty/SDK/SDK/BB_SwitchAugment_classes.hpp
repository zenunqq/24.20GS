#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBB_SwitchAugment_C final : public UFortMobileActionButtonBehavior
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BB_SwitchAugment_C">();
	}
	static class UBB_SwitchAugment_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBB_SwitchAugment_C>();
	}
};
static_assert(alignof(UBB_SwitchAugment_C) == 0x000008, "Wrong alignment on UBB_SwitchAugment_C");
static_assert(sizeof(UBB_SwitchAugment_C) == 0x000110, "Wrong size on UBB_SwitchAugment_C");

}
