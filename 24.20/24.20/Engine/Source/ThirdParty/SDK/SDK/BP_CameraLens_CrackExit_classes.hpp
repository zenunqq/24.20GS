#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class ABP_CameraLens_CrackExit_C final : public AEmitterCameraLensEffectBase
{
public:
	class UParticleSystemComponent*               Portal;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CameraLens_CrackExit_C">();
	}
	static class ABP_CameraLens_CrackExit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CameraLens_CrackExit_C>();
	}
};
static_assert(alignof(ABP_CameraLens_CrackExit_C) == 0x000010, "Wrong alignment on ABP_CameraLens_CrackExit_C");
static_assert(sizeof(ABP_CameraLens_CrackExit_C) == 0x000380, "Wrong size on ABP_CameraLens_CrackExit_C");
static_assert(offsetof(ABP_CameraLens_CrackExit_C, Portal) == 0x000370, "Member 'ABP_CameraLens_CrackExit_C::Portal' has a wrong offset!");

}
