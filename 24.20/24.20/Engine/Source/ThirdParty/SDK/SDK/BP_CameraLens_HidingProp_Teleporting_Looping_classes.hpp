#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class ABP_CameraLens_HidingProp_Teleporting_Looping_C final : public AEmitterCameraLensEffectBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CameraLens_HidingProp_Teleporting_Looping_C">();
	}
	static class ABP_CameraLens_HidingProp_Teleporting_Looping_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CameraLens_HidingProp_Teleporting_Looping_C>();
	}
};
static_assert(alignof(ABP_CameraLens_HidingProp_Teleporting_Looping_C) == 0x000010, "Wrong alignment on ABP_CameraLens_HidingProp_Teleporting_Looping_C");
static_assert(sizeof(ABP_CameraLens_HidingProp_Teleporting_Looping_C) == 0x000370, "Wrong size on ABP_CameraLens_HidingProp_Teleporting_Looping_C");

}
