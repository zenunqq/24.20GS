#pragma once

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"

namespace SDK
{

class UCamShake_Spooky_Dive_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CamShake_Spooky_Dive_C">();
	}
	static class UCamShake_Spooky_Dive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCamShake_Spooky_Dive_C>();
	}
};
static_assert(alignof(UCamShake_Spooky_Dive_C) == 0x000010, "Wrong alignment on UCamShake_Spooky_Dive_C");
static_assert(sizeof(UCamShake_Spooky_Dive_C) == 0x000210, "Wrong size on UCamShake_Spooky_Dive_C");

}
