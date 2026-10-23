#pragma once

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"

namespace SDK
{

class USkydiveCamShake_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkydiveCamShake_C">();
	}
	static class USkydiveCamShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkydiveCamShake_C>();
	}
};
static_assert(alignof(USkydiveCamShake_C) == 0x000010, "Wrong alignment on USkydiveCamShake_C");
static_assert(sizeof(USkydiveCamShake_C) == 0x000210, "Wrong size on USkydiveCamShake_C");

}
