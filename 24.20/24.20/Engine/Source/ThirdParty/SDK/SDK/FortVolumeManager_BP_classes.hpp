#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class AFortVolumeManager_BP_C final : public AFortVolumeManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortVolumeManager_BP_C">();
	}
	static class AFortVolumeManager_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortVolumeManager_BP_C>();
	}
};
static_assert(alignof(AFortVolumeManager_BP_C) == 0x000010, "Wrong alignment on AFortVolumeManager_BP_C");
static_assert(sizeof(AFortVolumeManager_BP_C) == 0x0005F0, "Wrong size on AFortVolumeManager_BP_C");

}
