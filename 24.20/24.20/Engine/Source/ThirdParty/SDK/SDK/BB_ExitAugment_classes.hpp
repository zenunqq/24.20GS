#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBB_ExitAugment_C final : public UFortMobileActionButtonBehavior
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BB_ExitAugment_C">();
	}
	static class UBB_ExitAugment_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBB_ExitAugment_C>();
	}
};
static_assert(alignof(UBB_ExitAugment_C) == 0x000008, "Wrong alignment on UBB_ExitAugment_C");
static_assert(sizeof(UBB_ExitAugment_C) == 0x000110, "Wrong size on UBB_ExitAugment_C");

}
