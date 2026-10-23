#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class ABP_ZipLine_Camera_LensEffect_C final : public AEmitterCameraLensEffectBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ZipLine_Camera_LensEffect_C">();
	}
	static class ABP_ZipLine_Camera_LensEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ZipLine_Camera_LensEffect_C>();
	}
};
static_assert(alignof(ABP_ZipLine_Camera_LensEffect_C) == 0x000010, "Wrong alignment on ABP_ZipLine_Camera_LensEffect_C");
static_assert(sizeof(ABP_ZipLine_Camera_LensEffect_C) == 0x000370, "Wrong size on ABP_ZipLine_Camera_LensEffect_C");

}
