#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "GameFeatures_classes.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UFortBRVKLoadingData final : public UPrimaryDataAsset
{
public:
	uint8                                         Pad_30[0x8];
	class FString                                 VKProjectGUID;
	bool                                          bReplacesPlaceHolderContent;
	uint8                                         Pad_49[0x3];
	class FName                                   FoundationToReplaceTag;
	bool                                          bReplaceWithCalendarEventInstead;
	uint8                                         Pad_51[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBRVKLoadingData">();
	}
	static class UFortBRVKLoadingData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBRVKLoadingData>();
	}
};
static_assert(alignof(UFortBRVKLoadingData) == 0x000008, "Wrong alignment on UFortBRVKLoadingData");
static_assert(sizeof(UFortBRVKLoadingData) == 0x000058, "Wrong size on UFortBRVKLoadingData");
static_assert(offsetof(UFortBRVKLoadingData, VKProjectGUID) == 0x000038, "Member 'UFortBRVKLoadingData::VKProjectGUID' has a wrong offset!");
static_assert(offsetof(UFortBRVKLoadingData, bReplacesPlaceHolderContent) == 0x000048, "Member 'UFortBRVKLoadingData::bReplacesPlaceHolderContent' has a wrong offset!");
static_assert(offsetof(UFortBRVKLoadingData, FoundationToReplaceTag) == 0x00004C, "Member 'UFortBRVKLoadingData::FoundationToReplaceTag' has a wrong offset!");
static_assert(offsetof(UFortBRVKLoadingData, bReplaceWithCalendarEventInstead) == 0x000050, "Member 'UFortBRVKLoadingData::bReplaceWithCalendarEventInstead' has a wrong offset!");

class UFortBRVKDADAssetManager final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	TArray<class UObject*>                        BRVKAssetDataInstances;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBRVKDADAssetManager">();
	}
	static class UFortBRVKDADAssetManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBRVKDADAssetManager>();
	}
};
static_assert(alignof(UFortBRVKDADAssetManager) == 0x000008, "Wrong alignment on UFortBRVKDADAssetManager");
static_assert(sizeof(UFortBRVKDADAssetManager) == 0x000040, "Wrong size on UFortBRVKDADAssetManager");
static_assert(offsetof(UFortBRVKDADAssetManager, BRVKAssetDataInstances) == 0x000030, "Member 'UFortBRVKDADAssetManager::BRVKAssetDataInstances' has a wrong offset!");

class UFortBRVKGameFeatureAction_HotfixableAddToPlaylist final : public UGameFeatureAction
{
public:
	struct FGameplayTagContainer                  BRPlaylistTags;
	struct FGameplayTagContainer                  BRPlaylistTagsToExclude;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBRVKGameFeatureAction_HotfixableAddToPlaylist">();
	}
	static class UFortBRVKGameFeatureAction_HotfixableAddToPlaylist* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBRVKGameFeatureAction_HotfixableAddToPlaylist>();
	}
};
static_assert(alignof(UFortBRVKGameFeatureAction_HotfixableAddToPlaylist) == 0x000008, "Wrong alignment on UFortBRVKGameFeatureAction_HotfixableAddToPlaylist");
static_assert(sizeof(UFortBRVKGameFeatureAction_HotfixableAddToPlaylist) == 0x000068, "Wrong size on UFortBRVKGameFeatureAction_HotfixableAddToPlaylist");
static_assert(offsetof(UFortBRVKGameFeatureAction_HotfixableAddToPlaylist, BRPlaylistTags) == 0x000028, "Member 'UFortBRVKGameFeatureAction_HotfixableAddToPlaylist::BRPlaylistTags' has a wrong offset!");
static_assert(offsetof(UFortBRVKGameFeatureAction_HotfixableAddToPlaylist, BRPlaylistTagsToExclude) == 0x000048, "Member 'UFortBRVKGameFeatureAction_HotfixableAddToPlaylist::BRPlaylistTagsToExclude' has a wrong offset!");

class UFortBRVKGameFeatureAction_LoadVKProject final : public UGameFeatureAction
{
public:
	class UFortBRVKLoadingData*                   VKLoadingData;
	uint8                                         Pad_30[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBRVKGameFeatureAction_LoadVKProject">();
	}
	static class UFortBRVKGameFeatureAction_LoadVKProject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBRVKGameFeatureAction_LoadVKProject>();
	}
};
static_assert(alignof(UFortBRVKGameFeatureAction_LoadVKProject) == 0x000008, "Wrong alignment on UFortBRVKGameFeatureAction_LoadVKProject");
static_assert(sizeof(UFortBRVKGameFeatureAction_LoadVKProject) == 0x000050, "Wrong size on UFortBRVKGameFeatureAction_LoadVKProject");
static_assert(offsetof(UFortBRVKGameFeatureAction_LoadVKProject, VKLoadingData) == 0x000028, "Member 'UFortBRVKGameFeatureAction_LoadVKProject::VKLoadingData' has a wrong offset!");

class UFortBRVKGameFeatureAction_RegisterContentErrorHandler final : public UGameFeatureAction
{
public:
	uint8                                         Pad_28[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBRVKGameFeatureAction_RegisterContentErrorHandler">();
	}
	static class UFortBRVKGameFeatureAction_RegisterContentErrorHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBRVKGameFeatureAction_RegisterContentErrorHandler>();
	}
};
static_assert(alignof(UFortBRVKGameFeatureAction_RegisterContentErrorHandler) == 0x000008, "Wrong alignment on UFortBRVKGameFeatureAction_RegisterContentErrorHandler");
static_assert(sizeof(UFortBRVKGameFeatureAction_RegisterContentErrorHandler) == 0x000030, "Wrong size on UFortBRVKGameFeatureAction_RegisterContentErrorHandler");

class UFortBRVKGameFeatureObserver final : public UGameFeatureAction
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBRVKGameFeatureObserver">();
	}
	static class UFortBRVKGameFeatureObserver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBRVKGameFeatureObserver>();
	}
};
static_assert(alignof(UFortBRVKGameFeatureObserver) == 0x000008, "Wrong alignment on UFortBRVKGameFeatureObserver");
static_assert(sizeof(UFortBRVKGameFeatureObserver) == 0x000028, "Wrong size on UFortBRVKGameFeatureObserver");

class AFortBRVKPlayspace final : public AFortPlayspace
{
public:
	class UFortLevelStreamComponent*              LevelStreamComponent;
	class UFortProjectPlayComponent*              ProjectPlayComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBRVKPlayspace">();
	}
	static class AFortBRVKPlayspace* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortBRVKPlayspace>();
	}
};
static_assert(alignof(AFortBRVKPlayspace) == 0x000008, "Wrong alignment on AFortBRVKPlayspace");
static_assert(sizeof(AFortBRVKPlayspace) == 0x000680, "Wrong size on AFortBRVKPlayspace");
static_assert(offsetof(AFortBRVKPlayspace, LevelStreamComponent) == 0x000670, "Member 'AFortBRVKPlayspace::LevelStreamComponent' has a wrong offset!");
static_assert(offsetof(AFortBRVKPlayspace, ProjectPlayComponent) == 0x000678, "Member 'AFortBRVKPlayspace::ProjectPlayComponent' has a wrong offset!");

class AFortBRVKTheBlockMutator final : public AFortAthenaMutator_GameModeBase
{
public:
	bool                                          bContentIsReadyOrFailed;
	uint8                                         Pad_451[0x27];
	class AFortGameModeAthena*                    CachedGameModeAthena;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBRVKTheBlockMutator">();
	}
	static class AFortBRVKTheBlockMutator* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortBRVKTheBlockMutator>();
	}
};
static_assert(alignof(AFortBRVKTheBlockMutator) == 0x000008, "Wrong alignment on AFortBRVKTheBlockMutator");
static_assert(sizeof(AFortBRVKTheBlockMutator) == 0x000480, "Wrong size on AFortBRVKTheBlockMutator");
static_assert(offsetof(AFortBRVKTheBlockMutator, bContentIsReadyOrFailed) == 0x000450, "Member 'AFortBRVKTheBlockMutator::bContentIsReadyOrFailed' has a wrong offset!");
static_assert(offsetof(AFortBRVKTheBlockMutator, CachedGameModeAthena) == 0x000478, "Member 'AFortBRVKTheBlockMutator::CachedGameModeAthena' has a wrong offset!");

}
