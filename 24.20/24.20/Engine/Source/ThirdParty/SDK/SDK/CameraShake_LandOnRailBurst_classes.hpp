#pragma once

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"

namespace SDK
{

class UCameraShake_LandOnRailBurst_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CameraShake_LandOnRailBurst_C">();
	}
	static class UCameraShake_LandOnRailBurst_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraShake_LandOnRailBurst_C>();
	}
};
static_assert(alignof(UCameraShake_LandOnRailBurst_C) == 0x000010, "Wrong alignment on UCameraShake_LandOnRailBurst_C");
static_assert(sizeof(UCameraShake_LandOnRailBurst_C) == 0x000210, "Wrong size on UCameraShake_LandOnRailBurst_C");

}
