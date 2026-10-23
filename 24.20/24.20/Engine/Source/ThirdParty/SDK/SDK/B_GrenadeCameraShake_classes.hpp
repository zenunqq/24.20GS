#pragma once

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"

namespace SDK
{

class UB_GrenadeCameraShake_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_GrenadeCameraShake_C">();
	}
	static class UB_GrenadeCameraShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_GrenadeCameraShake_C>();
	}
};
static_assert(alignof(UB_GrenadeCameraShake_C) == 0x000010, "Wrong alignment on UB_GrenadeCameraShake_C");
static_assert(sizeof(UB_GrenadeCameraShake_C) == 0x000210, "Wrong size on UB_GrenadeCameraShake_C");

}
