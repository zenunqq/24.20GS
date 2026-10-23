#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class ABP_Hook_Camera_LensEffect_C final : public AEmitterCameraLensEffectBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Hook_Camera_LensEffect_C">();
	}
	static class ABP_Hook_Camera_LensEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Hook_Camera_LensEffect_C>();
	}
};
static_assert(alignof(ABP_Hook_Camera_LensEffect_C) == 0x000010, "Wrong alignment on ABP_Hook_Camera_LensEffect_C");
static_assert(sizeof(ABP_Hook_Camera_LensEffect_C) == 0x000370, "Wrong size on ABP_Hook_Camera_LensEffect_C");

}
