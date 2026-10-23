#pragma once

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"

namespace SDK
{

class UBP_CameraShake_PortalWarp_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CameraShake_PortalWarp_C">();
	}
	static class UBP_CameraShake_PortalWarp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CameraShake_PortalWarp_C>();
	}
};
static_assert(alignof(UBP_CameraShake_PortalWarp_C) == 0x000010, "Wrong alignment on UBP_CameraShake_PortalWarp_C");
static_assert(sizeof(UBP_CameraShake_PortalWarp_C) == 0x000210, "Wrong size on UBP_CameraShake_PortalWarp_C");

}
