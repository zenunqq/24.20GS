#pragma once

#include "Basic.hpp"

#include "SocketSubsystemEOS_classes.hpp"
#include "Engine_classes.hpp"
#include "OnlineSubsystemEOS_structs.hpp"

namespace SDK
{

class UNetDriverEOS final : public UNetDriverEOSBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetDriverEOS">();
	}
	static class UNetDriverEOS* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetDriverEOS>();
	}
};
static_assert(alignof(UNetDriverEOS) == 0x000008, "Wrong alignment on UNetDriverEOS");
static_assert(sizeof(UNetDriverEOS) == 0x000850, "Wrong size on UNetDriverEOS");

class UEOSArtifactSettings final : public UDataAsset
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EOSArtifactSettings">();
	}
	static class UEOSArtifactSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEOSArtifactSettings>();
	}
};
static_assert(alignof(UEOSArtifactSettings) == 0x000008, "Wrong alignment on UEOSArtifactSettings");
static_assert(sizeof(UEOSArtifactSettings) == 0x000030, "Wrong size on UEOSArtifactSettings");

class UEOSSettings final : public URuntimeOptionsBase
{
public:
	class FString                                 CacheDir;
	class FString                                 DefaultArtifactName;
	int32                                         TickBudgetInMilliseconds;
	bool                                          bEnableOverlay;
	bool                                          bEnableSocialOverlay;
	bool                                          bEnableEditorOverlay;
	bool                                          bShouldEnforceBeingLaunchedByEGS;
	TArray<class FString>                         TitleStorageTags;
	int32                                         TitleStorageReadChunkLength;
	uint8                                         Pad_74[0x4];
	TArray<struct FArtifactSettings>              Artifacts;
	TArray<class FString>                         AuthScopeFlags;
	bool                                          bUseEAS;
	bool                                          bUseEOSConnect;
	bool                                          bMirrorStatsToEOS;
	bool                                          bMirrorAchievementsToEOS;
	bool                                          bUseEOSSessions;
	bool                                          bMirrorPresenceToEAS;
	uint8                                         Pad_9E[0x2];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EOSSettings">();
	}
	static class UEOSSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEOSSettings>();
	}
};
static_assert(alignof(UEOSSettings) == 0x000008, "Wrong alignment on UEOSSettings");
static_assert(sizeof(UEOSSettings) == 0x0000A0, "Wrong size on UEOSSettings");
static_assert(offsetof(UEOSSettings, CacheDir) == 0x000038, "Member 'UEOSSettings::CacheDir' has a wrong offset!");
static_assert(offsetof(UEOSSettings, DefaultArtifactName) == 0x000048, "Member 'UEOSSettings::DefaultArtifactName' has a wrong offset!");
static_assert(offsetof(UEOSSettings, TickBudgetInMilliseconds) == 0x000058, "Member 'UEOSSettings::TickBudgetInMilliseconds' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bEnableOverlay) == 0x00005C, "Member 'UEOSSettings::bEnableOverlay' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bEnableSocialOverlay) == 0x00005D, "Member 'UEOSSettings::bEnableSocialOverlay' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bEnableEditorOverlay) == 0x00005E, "Member 'UEOSSettings::bEnableEditorOverlay' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bShouldEnforceBeingLaunchedByEGS) == 0x00005F, "Member 'UEOSSettings::bShouldEnforceBeingLaunchedByEGS' has a wrong offset!");
static_assert(offsetof(UEOSSettings, TitleStorageTags) == 0x000060, "Member 'UEOSSettings::TitleStorageTags' has a wrong offset!");
static_assert(offsetof(UEOSSettings, TitleStorageReadChunkLength) == 0x000070, "Member 'UEOSSettings::TitleStorageReadChunkLength' has a wrong offset!");
static_assert(offsetof(UEOSSettings, Artifacts) == 0x000078, "Member 'UEOSSettings::Artifacts' has a wrong offset!");
static_assert(offsetof(UEOSSettings, AuthScopeFlags) == 0x000088, "Member 'UEOSSettings::AuthScopeFlags' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bUseEAS) == 0x000098, "Member 'UEOSSettings::bUseEAS' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bUseEOSConnect) == 0x000099, "Member 'UEOSSettings::bUseEOSConnect' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bMirrorStatsToEOS) == 0x00009A, "Member 'UEOSSettings::bMirrorStatsToEOS' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bMirrorAchievementsToEOS) == 0x00009B, "Member 'UEOSSettings::bMirrorAchievementsToEOS' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bUseEOSSessions) == 0x00009C, "Member 'UEOSSettings::bUseEOSSessions' has a wrong offset!");
static_assert(offsetof(UEOSSettings, bMirrorPresenceToEAS) == 0x00009D, "Member 'UEOSSettings::bMirrorPresenceToEAS' has a wrong offset!");

}
