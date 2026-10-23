#pragma once

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"

namespace SDK
{

class UHarvest_CameraShake_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Harvest_CameraShake_C">();
	}
	static class UHarvest_CameraShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarvest_CameraShake_C>();
	}
};
static_assert(alignof(UHarvest_CameraShake_C) == 0x000010, "Wrong alignment on UHarvest_CameraShake_C");
static_assert(sizeof(UHarvest_CameraShake_C) == 0x000210, "Wrong size on UHarvest_CameraShake_C");

}
