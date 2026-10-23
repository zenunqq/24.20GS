#pragma once

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"

namespace SDK
{

class USpeed_CameraShakePerlin_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Speed_CameraShakePerlin_C">();
	}
	static class USpeed_CameraShakePerlin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpeed_CameraShakePerlin_C>();
	}
};
static_assert(alignof(USpeed_CameraShakePerlin_C) == 0x000010, "Wrong alignment on USpeed_CameraShakePerlin_C");
static_assert(sizeof(USpeed_CameraShakePerlin_C) == 0x000210, "Wrong size on USpeed_CameraShakePerlin_C");

}
