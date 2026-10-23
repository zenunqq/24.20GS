#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "DeveloperSettings_structs.hpp"

namespace SDK
{

class UDeveloperSettings : public UObject
{
public:
	uint8                                         Pad_28[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DeveloperSettings">();
	}
	static class UDeveloperSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDeveloperSettings>();
	}
};
static_assert(alignof(UDeveloperSettings) == 0x000008, "Wrong alignment on UDeveloperSettings");
static_assert(sizeof(UDeveloperSettings) == 0x000030, "Wrong size on UDeveloperSettings");

class UDeveloperSettingsBackedByCVars : public UDeveloperSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DeveloperSettingsBackedByCVars">();
	}
	static class UDeveloperSettingsBackedByCVars* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDeveloperSettingsBackedByCVars>();
	}
};
static_assert(alignof(UDeveloperSettingsBackedByCVars) == 0x000008, "Wrong alignment on UDeveloperSettingsBackedByCVars");
static_assert(sizeof(UDeveloperSettingsBackedByCVars) == 0x000030, "Wrong size on UDeveloperSettingsBackedByCVars");

class UPlatformSettings : public UObject
{
public:
	uint8                                         Pad_28[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlatformSettings">();
	}
	static class UPlatformSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlatformSettings>();
	}
};
static_assert(alignof(UPlatformSettings) == 0x000008, "Wrong alignment on UPlatformSettings");
static_assert(sizeof(UPlatformSettings) == 0x000040, "Wrong size on UPlatformSettings");

class UPlatformSettingsManager final : public UObject
{
public:
	TMap<TSubclassOf<class UPlatformSettings>, struct FPlatformSettingsInstances> SettingsMap;
	uint8                                         Pad_78[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlatformSettingsManager">();
	}
	static class UPlatformSettingsManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlatformSettingsManager>();
	}
};
static_assert(alignof(UPlatformSettingsManager) == 0x000008, "Wrong alignment on UPlatformSettingsManager");
static_assert(sizeof(UPlatformSettingsManager) == 0x000080, "Wrong size on UPlatformSettingsManager");
static_assert(offsetof(UPlatformSettingsManager, SettingsMap) == 0x000028, "Member 'UPlatformSettingsManager::SettingsMap' has a wrong offset!");

}
