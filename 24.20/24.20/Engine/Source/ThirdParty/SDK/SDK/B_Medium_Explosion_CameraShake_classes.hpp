#pragma once

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"

namespace SDK
{

class UB_Medium_Explosion_CameraShake_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Medium_Explosion_CameraShake_C">();
	}
	static class UB_Medium_Explosion_CameraShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_Medium_Explosion_CameraShake_C>();
	}
};
static_assert(alignof(UB_Medium_Explosion_CameraShake_C) == 0x000010, "Wrong alignment on UB_Medium_Explosion_CameraShake_C");
static_assert(sizeof(UB_Medium_Explosion_CameraShake_C) == 0x000210, "Wrong size on UB_Medium_Explosion_CameraShake_C");

}
