#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class AB_CameraLens_Victory_Ally_C final : public AEmitterCameraLensEffectBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_CameraLens_Victory_Ally_C">();
	}
	static class AB_CameraLens_Victory_Ally_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_CameraLens_Victory_Ally_C>();
	}
};
static_assert(alignof(AB_CameraLens_Victory_Ally_C) == 0x000010, "Wrong alignment on AB_CameraLens_Victory_Ally_C");
static_assert(sizeof(AB_CameraLens_Victory_Ally_C) == 0x000370, "Wrong size on AB_CameraLens_Victory_Ally_C");

}
