#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBB_AugmentsList_C final : public UFortMobileActionButtonBehavior
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BB_AugmentsList_C">();
	}
	static class UBB_AugmentsList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBB_AugmentsList_C>();
	}
};
static_assert(alignof(UBB_AugmentsList_C) == 0x000008, "Wrong alignment on UBB_AugmentsList_C");
static_assert(sizeof(UBB_AugmentsList_C) == 0x000110, "Wrong size on UBB_AugmentsList_C");

}
