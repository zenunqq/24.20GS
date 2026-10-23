#pragma once

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"

namespace SDK
{

class UCameraShake_ZipLine_DownhillSpeed_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CameraShake_ZipLine_DownhillSpeed_C">();
	}
	static class UCameraShake_ZipLine_DownhillSpeed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraShake_ZipLine_DownhillSpeed_C>();
	}
};
static_assert(alignof(UCameraShake_ZipLine_DownhillSpeed_C) == 0x000010, "Wrong alignment on UCameraShake_ZipLine_DownhillSpeed_C");
static_assert(sizeof(UCameraShake_ZipLine_DownhillSpeed_C) == 0x000210, "Wrong size on UCameraShake_ZipLine_DownhillSpeed_C");

}
