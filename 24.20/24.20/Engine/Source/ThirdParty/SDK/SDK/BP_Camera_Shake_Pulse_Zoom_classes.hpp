#pragma once

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"

namespace SDK
{

class UBP_Camera_Shake_Pulse_Zoom_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Camera_Shake_Pulse_Zoom_C">();
	}
	static class UBP_Camera_Shake_Pulse_Zoom_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Camera_Shake_Pulse_Zoom_C>();
	}
};
static_assert(alignof(UBP_Camera_Shake_Pulse_Zoom_C) == 0x000010, "Wrong alignment on UBP_Camera_Shake_Pulse_Zoom_C");
static_assert(sizeof(UBP_Camera_Shake_Pulse_Zoom_C) == 0x000210, "Wrong size on UBP_Camera_Shake_Pulse_Zoom_C");

}
