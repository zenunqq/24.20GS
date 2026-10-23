#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UTargeting3PCamera_VeryShortRange_C final : public UFort3PCam_Targeting
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Targeting3PCamera_VeryShortRange_C">();
	}
	static class UTargeting3PCamera_VeryShortRange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTargeting3PCamera_VeryShortRange_C>();
	}
};
static_assert(alignof(UTargeting3PCamera_VeryShortRange_C) == 0x000008, "Wrong alignment on UTargeting3PCamera_VeryShortRange_C");
static_assert(sizeof(UTargeting3PCamera_VeryShortRange_C) == 0x0001E8, "Wrong size on UTargeting3PCamera_VeryShortRange_C");

}
