#pragma once

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"

namespace SDK
{

class UB_Ground_CameraShake_Heavy_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Ground_CameraShake_Heavy_C">();
	}
	static class UB_Ground_CameraShake_Heavy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_Ground_CameraShake_Heavy_C>();
	}
};
static_assert(alignof(UB_Ground_CameraShake_Heavy_C) == 0x000010, "Wrong alignment on UB_Ground_CameraShake_Heavy_C");
static_assert(sizeof(UB_Ground_CameraShake_Heavy_C) == 0x000210, "Wrong size on UB_Ground_CameraShake_Heavy_C");

}
