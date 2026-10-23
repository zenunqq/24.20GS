#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class ABP_SpeedLines_Looping_Camera_Lens_Riding_C final : public AEmitterCameraLensEffectBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SpeedLines_Looping_Camera_Lens_Riding_C">();
	}
	static class ABP_SpeedLines_Looping_Camera_Lens_Riding_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SpeedLines_Looping_Camera_Lens_Riding_C>();
	}
};
static_assert(alignof(ABP_SpeedLines_Looping_Camera_Lens_Riding_C) == 0x000010, "Wrong alignment on ABP_SpeedLines_Looping_Camera_Lens_Riding_C");
static_assert(sizeof(ABP_SpeedLines_Looping_Camera_Lens_Riding_C) == 0x000370, "Wrong size on ABP_SpeedLines_Looping_Camera_Lens_Riding_C");

}
