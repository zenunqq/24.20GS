#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FPerPlatformSettings final
{
public:
	TArray<class UPlatformSettings*>              Settings;
};
static_assert(alignof(FPerPlatformSettings) == 0x000008, "Wrong alignment on FPerPlatformSettings");
static_assert(sizeof(FPerPlatformSettings) == 0x000010, "Wrong size on FPerPlatformSettings");
static_assert(offsetof(FPerPlatformSettings, Settings) == 0x000000, "Member 'FPerPlatformSettings::Settings' has a wrong offset!");

struct FPlatformSettingsInstances final
{
public:
	class UPlatformSettings*                      PlatformInstance;
	TMap<class FName, class UPlatformSettings*>   OtherPlatforms;
};
static_assert(alignof(FPlatformSettingsInstances) == 0x000008, "Wrong alignment on FPlatformSettingsInstances");
static_assert(sizeof(FPlatformSettingsInstances) == 0x000058, "Wrong size on FPlatformSettingsInstances");
static_assert(offsetof(FPlatformSettingsInstances, PlatformInstance) == 0x000000, "Member 'FPlatformSettingsInstances::PlatformInstance' has a wrong offset!");
static_assert(offsetof(FPlatformSettingsInstances, OtherPlatforms) == 0x000008, "Member 'FPlatformSettingsInstances::OtherPlatforms' has a wrong offset!");

}
