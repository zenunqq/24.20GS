#pragma once

#include "Basic.hpp"

#include "CreativeLowMemoryFallbackRuntime_structs.hpp"
#include "DeveloperSettings_classes.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UCreativeLowMemoryFallbackSettings final : public UDeveloperSettings
{
public:
	TSoftObjectPtr<class UObject>                 WarningToastIcon;
	struct FCreativeLowMemoryFallbackUserFacingText DefaultText;
	TMap<TSoftObjectPtr<class UFortPlaylist>, struct FCreativeLowMemoryFallbackFreeMemoryThresholds> PlaylistOverrideThresholds;
	TMap<TSoftObjectPtr<class UFortPlaylist>, struct FCreativeLowMemoryFallbackUserFacingText> PlaylistOverrideText;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeLowMemoryFallbackSettings">();
	}
	static class UCreativeLowMemoryFallbackSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeLowMemoryFallbackSettings>();
	}
};
static_assert(alignof(UCreativeLowMemoryFallbackSettings) == 0x000008, "Wrong alignment on UCreativeLowMemoryFallbackSettings");
static_assert(sizeof(UCreativeLowMemoryFallbackSettings) == 0x000140, "Wrong size on UCreativeLowMemoryFallbackSettings");
static_assert(offsetof(UCreativeLowMemoryFallbackSettings, WarningToastIcon) == 0x000030, "Member 'UCreativeLowMemoryFallbackSettings::WarningToastIcon' has a wrong offset!");
static_assert(offsetof(UCreativeLowMemoryFallbackSettings, DefaultText) == 0x000058, "Member 'UCreativeLowMemoryFallbackSettings::DefaultText' has a wrong offset!");
static_assert(offsetof(UCreativeLowMemoryFallbackSettings, PlaylistOverrideThresholds) == 0x0000A0, "Member 'UCreativeLowMemoryFallbackSettings::PlaylistOverrideThresholds' has a wrong offset!");
static_assert(offsetof(UCreativeLowMemoryFallbackSettings, PlaylistOverrideText) == 0x0000F0, "Member 'UCreativeLowMemoryFallbackSettings::PlaylistOverrideText' has a wrong offset!");

class UCreativeLowMemoryFallbackWorldSubsystem final : public UWorldSubsystem
{
public:
	struct FCreativeLowMemoryFallbackFreeMemoryThresholds CurrentThresholds;
	uint8                                         Pad_3C[0x2C];

public:
	void OnPlaylistDataChanged(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeLowMemoryFallbackWorldSubsystem">();
	}
	static class UCreativeLowMemoryFallbackWorldSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeLowMemoryFallbackWorldSubsystem>();
	}
};
static_assert(alignof(UCreativeLowMemoryFallbackWorldSubsystem) == 0x000008, "Wrong alignment on UCreativeLowMemoryFallbackWorldSubsystem");
static_assert(sizeof(UCreativeLowMemoryFallbackWorldSubsystem) == 0x000068, "Wrong size on UCreativeLowMemoryFallbackWorldSubsystem");
static_assert(offsetof(UCreativeLowMemoryFallbackWorldSubsystem, CurrentThresholds) == 0x000030, "Member 'UCreativeLowMemoryFallbackWorldSubsystem::CurrentThresholds' has a wrong offset!");

}
