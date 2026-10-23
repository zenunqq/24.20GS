#pragma once

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"

namespace SDK
{

class USpeed_CameraShakeLocationPerlin_Sliding_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Speed_CameraShakeLocationPerlin_Sliding_C">();
	}
	static class USpeed_CameraShakeLocationPerlin_Sliding_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpeed_CameraShakeLocationPerlin_Sliding_C>();
	}
};
static_assert(alignof(USpeed_CameraShakeLocationPerlin_Sliding_C) == 0x000010, "Wrong alignment on USpeed_CameraShakeLocationPerlin_Sliding_C");
static_assert(sizeof(USpeed_CameraShakeLocationPerlin_Sliding_C) == 0x000210, "Wrong size on USpeed_CameraShakeLocationPerlin_Sliding_C");

}
