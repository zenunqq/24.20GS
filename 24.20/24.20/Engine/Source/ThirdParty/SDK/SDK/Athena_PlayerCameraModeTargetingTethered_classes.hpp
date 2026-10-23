#pragma once

#include "Basic.hpp"

#include "Athena_PlayerCameraModeRangedTargeting_classes.hpp"

namespace SDK
{

class UAthena_PlayerCameraModeTargetingTethered_C final : public UAthena_PlayerCameraModeRangedTargeting_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_PlayerCameraModeTargetingTethered_C">();
	}
	static class UAthena_PlayerCameraModeTargetingTethered_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthena_PlayerCameraModeTargetingTethered_C>();
	}
};
static_assert(alignof(UAthena_PlayerCameraModeTargetingTethered_C) == 0x000010, "Wrong alignment on UAthena_PlayerCameraModeTargetingTethered_C");
static_assert(sizeof(UAthena_PlayerCameraModeTargetingTethered_C) == 0x001B20, "Wrong size on UAthena_PlayerCameraModeTargetingTethered_C");

}
