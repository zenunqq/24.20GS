#pragma once

#include "Basic.hpp"

#include "v2_PlayerCameraModeRanged_classes.hpp"

namespace SDK
{

class Uv2_PlayerCameraModeTargetingVeryShortRange_C final : public Uv2_PlayerCameraModeRanged_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"v2_PlayerCameraModeTargetingVeryShortRange_C">();
	}
	static class Uv2_PlayerCameraModeTargetingVeryShortRange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Uv2_PlayerCameraModeTargetingVeryShortRange_C>();
	}
};
static_assert(alignof(Uv2_PlayerCameraModeTargetingVeryShortRange_C) == 0x000010, "Wrong alignment on Uv2_PlayerCameraModeTargetingVeryShortRange_C");
static_assert(sizeof(Uv2_PlayerCameraModeTargetingVeryShortRange_C) == 0x001B20, "Wrong size on Uv2_PlayerCameraModeTargetingVeryShortRange_C");

}
