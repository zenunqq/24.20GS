#pragma once

#include "Basic.hpp"

#include "PlayerAugmentsUI_classes.hpp"

namespace SDK
{

class UBP_Augments_PickupOverrideComponent_C final : public UFortPickupInteractOverrideComponent_Augments
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Augments_PickupOverrideComponent_C">();
	}
	static class UBP_Augments_PickupOverrideComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Augments_PickupOverrideComponent_C>();
	}
};
static_assert(alignof(UBP_Augments_PickupOverrideComponent_C) == 0x000008, "Wrong alignment on UBP_Augments_PickupOverrideComponent_C");
static_assert(sizeof(UBP_Augments_PickupOverrideComponent_C) == 0x0000C0, "Wrong size on UBP_Augments_PickupOverrideComponent_C");

}
