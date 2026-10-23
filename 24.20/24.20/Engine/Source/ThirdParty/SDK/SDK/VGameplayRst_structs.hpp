#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "NetCore_structs.hpp"

namespace SDK
{

struct FActiveSoundInfo final
{
public:
	bool                                          bActive;
	uint8                                         Pad_1[0x3];
	float                                         StartTime;
};
static_assert(alignof(FActiveSoundInfo) == 0x000004, "Wrong alignment on FActiveSoundInfo");
static_assert(sizeof(FActiveSoundInfo) == 0x000008, "Wrong size on FActiveSoundInfo");
static_assert(offsetof(FActiveSoundInfo, bActive) == 0x000000, "Member 'FActiveSoundInfo::bActive' has a wrong offset!");
static_assert(offsetof(FActiveSoundInfo, StartTime) == 0x000004, "Member 'FActiveSoundInfo::StartTime' has a wrong offset!");

struct FDatastoreEntry final : public FFastArraySerializerItem
{
public:
	class FName                                   KeyName;
	class FString                                 ValueData;
};
static_assert(alignof(FDatastoreEntry) == 0x000008, "Wrong alignment on FDatastoreEntry");
static_assert(sizeof(FDatastoreEntry) == 0x000020, "Wrong size on FDatastoreEntry");
static_assert(offsetof(FDatastoreEntry, KeyName) == 0x00000C, "Member 'FDatastoreEntry::KeyName' has a wrong offset!");
static_assert(offsetof(FDatastoreEntry, ValueData) == 0x000010, "Member 'FDatastoreEntry::ValueData' has a wrong offset!");

struct FDatastoreState final : public FFastArraySerializer
{
public:
	uint8                                         Pad_108[0x8];
	TArray<struct FDatastoreEntry>                EntriesArray;
	class UDatastoreComponentBase*                OwningComponent;
};
static_assert(alignof(FDatastoreState) == 0x000008, "Wrong alignment on FDatastoreState");
static_assert(sizeof(FDatastoreState) == 0x000128, "Wrong size on FDatastoreState");
static_assert(offsetof(FDatastoreState, EntriesArray) == 0x000110, "Member 'FDatastoreState::EntriesArray' has a wrong offset!");
static_assert(offsetof(FDatastoreState, OwningComponent) == 0x000120, "Member 'FDatastoreState::OwningComponent' has a wrong offset!");

struct FVerseLevelStreamingLevelStatus final
{
public:
	uint8                                         Pad_0[0x10];
	class ULevelStreamingDynamic*                 Streamer;
	class UVerseAssetPtr*                         LevelAsset;
	uint8                                         Pad_20[0x8];
};
static_assert(alignof(FVerseLevelStreamingLevelStatus) == 0x000008, "Wrong alignment on FVerseLevelStreamingLevelStatus");
static_assert(sizeof(FVerseLevelStreamingLevelStatus) == 0x000028, "Wrong size on FVerseLevelStreamingLevelStatus");
static_assert(offsetof(FVerseLevelStreamingLevelStatus, Streamer) == 0x000010, "Member 'FVerseLevelStreamingLevelStatus::Streamer' has a wrong offset!");
static_assert(offsetof(FVerseLevelStreamingLevelStatus, LevelAsset) == 0x000018, "Member 'FVerseLevelStreamingLevelStatus::LevelAsset' has a wrong offset!");

struct FVerseLevelStreamingLevelIdentifier final
{
public:
	struct FSoftObjectPath                        LevelPath;
	class FString                                 LevelNameOverride;
};
static_assert(alignof(FVerseLevelStreamingLevelIdentifier) == 0x000008, "Wrong alignment on FVerseLevelStreamingLevelIdentifier");
static_assert(sizeof(FVerseLevelStreamingLevelIdentifier) == 0x000028, "Wrong size on FVerseLevelStreamingLevelIdentifier");
static_assert(offsetof(FVerseLevelStreamingLevelIdentifier, LevelPath) == 0x000000, "Member 'FVerseLevelStreamingLevelIdentifier::LevelPath' has a wrong offset!");
static_assert(offsetof(FVerseLevelStreamingLevelIdentifier, LevelNameOverride) == 0x000018, "Member 'FVerseLevelStreamingLevelIdentifier::LevelNameOverride' has a wrong offset!");

}
