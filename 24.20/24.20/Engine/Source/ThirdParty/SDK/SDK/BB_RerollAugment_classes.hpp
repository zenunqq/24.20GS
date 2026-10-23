#pragma once

#include "Basic.hpp"

#include "PlayerAugmentsUI_classes.hpp"

namespace SDK
{

class UBB_RerollAugment_C final : public UFortMobileActionButtonBehavior_RerollAugments
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BB_RerollAugment_C">();
	}
	static class UBB_RerollAugment_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBB_RerollAugment_C>();
	}
};
static_assert(alignof(UBB_RerollAugment_C) == 0x000008, "Wrong alignment on UBB_RerollAugment_C");
static_assert(sizeof(UBB_RerollAugment_C) == 0x000118, "Wrong size on UBB_RerollAugment_C");

}
