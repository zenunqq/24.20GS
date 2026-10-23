#pragma once

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"

namespace SDK
{

class UMelee_CameraShake_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Melee_CameraShake_C">();
	}
	static class UMelee_CameraShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMelee_CameraShake_C>();
	}
};
static_assert(alignof(UMelee_CameraShake_C) == 0x000010, "Wrong alignment on UMelee_CameraShake_C");
static_assert(sizeof(UMelee_CameraShake_C) == 0x000210, "Wrong size on UMelee_CameraShake_C");

}
