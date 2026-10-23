#pragma once

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"

namespace SDK
{

class UCameraShake_ZipLineAttach_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CameraShake_ZipLineAttach_C">();
	}
	static class UCameraShake_ZipLineAttach_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraShake_ZipLineAttach_C>();
	}
};
static_assert(alignof(UCameraShake_ZipLineAttach_C) == 0x000010, "Wrong alignment on UCameraShake_ZipLineAttach_C");
static_assert(sizeof(UCameraShake_ZipLineAttach_C) == 0x000210, "Wrong size on UCameraShake_ZipLineAttach_C");

}
