#pragma once

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"

namespace SDK
{

class UPlayerTakeDamage_CameraShake_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerTakeDamage_CameraShake_C">();
	}
	static class UPlayerTakeDamage_CameraShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerTakeDamage_CameraShake_C>();
	}
};
static_assert(alignof(UPlayerTakeDamage_CameraShake_C) == 0x000010, "Wrong alignment on UPlayerTakeDamage_CameraShake_C");
static_assert(sizeof(UPlayerTakeDamage_CameraShake_C) == 0x000210, "Wrong size on UPlayerTakeDamage_CameraShake_C");

}
