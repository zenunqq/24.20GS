#pragma once

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"

namespace SDK
{

class UCameraShake_GrindSprinting_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CameraShake_GrindSprinting_C">();
	}
	static class UCameraShake_GrindSprinting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraShake_GrindSprinting_C>();
	}
};
static_assert(alignof(UCameraShake_GrindSprinting_C) == 0x000010, "Wrong alignment on UCameraShake_GrindSprinting_C");
static_assert(sizeof(UCameraShake_GrindSprinting_C) == 0x000210, "Wrong size on UCameraShake_GrindSprinting_C");

}
