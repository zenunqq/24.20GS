#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct StormCallerComponent_ApplyPOINamesToDataRegistry final
{
public:
	const class UPlaylistUserOptions*             UserOptions;
	struct FGameplayTag                           GameplayTagForPOI;
	uint8                                         Pad_C[0x4];
	class FText                                   MapCenterText;
	class FText                                   RandomText;
};
static_assert(alignof(StormCallerComponent_ApplyPOINamesToDataRegistry) == 0x000008, "Wrong alignment on StormCallerComponent_ApplyPOINamesToDataRegistry");
static_assert(sizeof(StormCallerComponent_ApplyPOINamesToDataRegistry) == 0x000040, "Wrong size on StormCallerComponent_ApplyPOINamesToDataRegistry");
static_assert(offsetof(StormCallerComponent_ApplyPOINamesToDataRegistry, UserOptions) == 0x000000, "Member 'StormCallerComponent_ApplyPOINamesToDataRegistry::UserOptions' has a wrong offset!");
static_assert(offsetof(StormCallerComponent_ApplyPOINamesToDataRegistry, GameplayTagForPOI) == 0x000008, "Member 'StormCallerComponent_ApplyPOINamesToDataRegistry::GameplayTagForPOI' has a wrong offset!");
static_assert(offsetof(StormCallerComponent_ApplyPOINamesToDataRegistry, MapCenterText) == 0x000010, "Member 'StormCallerComponent_ApplyPOINamesToDataRegistry::MapCenterText' has a wrong offset!");
static_assert(offsetof(StormCallerComponent_ApplyPOINamesToDataRegistry, RandomText) == 0x000028, "Member 'StormCallerComponent_ApplyPOINamesToDataRegistry::RandomText' has a wrong offset!");

struct StormCallerComponent_ApplySavedPoiOptions final
{
public:
	TArray<class FString>                         PoiSavedOptionKeys;
	TArray<class FText>                           PoiSavedOptionName;
	class UFortActorOptionsComponent*             ToyOptionsComponent;
};
static_assert(alignof(StormCallerComponent_ApplySavedPoiOptions) == 0x000008, "Wrong alignment on StormCallerComponent_ApplySavedPoiOptions");
static_assert(sizeof(StormCallerComponent_ApplySavedPoiOptions) == 0x000028, "Wrong size on StormCallerComponent_ApplySavedPoiOptions");
static_assert(offsetof(StormCallerComponent_ApplySavedPoiOptions, PoiSavedOptionKeys) == 0x000000, "Member 'StormCallerComponent_ApplySavedPoiOptions::PoiSavedOptionKeys' has a wrong offset!");
static_assert(offsetof(StormCallerComponent_ApplySavedPoiOptions, PoiSavedOptionName) == 0x000010, "Member 'StormCallerComponent_ApplySavedPoiOptions::PoiSavedOptionName' has a wrong offset!");
static_assert(offsetof(StormCallerComponent_ApplySavedPoiOptions, ToyOptionsComponent) == 0x000020, "Member 'StormCallerComponent_ApplySavedPoiOptions::ToyOptionsComponent' has a wrong offset!");

struct StormCallerComponent_GetPoiVolumeFromOptionIndex final
{
public:
	int32                                         OptionIndex;
	uint8                                         Pad_4[0x4];
	class AFortPoiVolume*                         ReturnValue;
};
static_assert(alignof(StormCallerComponent_GetPoiVolumeFromOptionIndex) == 0x000008, "Wrong alignment on StormCallerComponent_GetPoiVolumeFromOptionIndex");
static_assert(sizeof(StormCallerComponent_GetPoiVolumeFromOptionIndex) == 0x000010, "Wrong size on StormCallerComponent_GetPoiVolumeFromOptionIndex");
static_assert(offsetof(StormCallerComponent_GetPoiVolumeFromOptionIndex, OptionIndex) == 0x000000, "Member 'StormCallerComponent_GetPoiVolumeFromOptionIndex::OptionIndex' has a wrong offset!");
static_assert(offsetof(StormCallerComponent_GetPoiVolumeFromOptionIndex, ReturnValue) == 0x000008, "Member 'StormCallerComponent_GetPoiVolumeFromOptionIndex::ReturnValue' has a wrong offset!");

struct StormCallerComponent_UpdatePoiSavedOptions final
{
public:
	TArray<class FString>                         InOutPoiSavedOptionKeys;
	TArray<class FText>                           InOutPoiSavedOptionNames;
	const class UPlaylistUserOptions*             UserOptions;
	struct FGameplayTag                           GameplayTagForPOI;
	uint8                                         Pad_2C[0x4];
};
static_assert(alignof(StormCallerComponent_UpdatePoiSavedOptions) == 0x000008, "Wrong alignment on StormCallerComponent_UpdatePoiSavedOptions");
static_assert(sizeof(StormCallerComponent_UpdatePoiSavedOptions) == 0x000030, "Wrong size on StormCallerComponent_UpdatePoiSavedOptions");
static_assert(offsetof(StormCallerComponent_UpdatePoiSavedOptions, InOutPoiSavedOptionKeys) == 0x000000, "Member 'StormCallerComponent_UpdatePoiSavedOptions::InOutPoiSavedOptionKeys' has a wrong offset!");
static_assert(offsetof(StormCallerComponent_UpdatePoiSavedOptions, InOutPoiSavedOptionNames) == 0x000010, "Member 'StormCallerComponent_UpdatePoiSavedOptions::InOutPoiSavedOptionNames' has a wrong offset!");
static_assert(offsetof(StormCallerComponent_UpdatePoiSavedOptions, UserOptions) == 0x000020, "Member 'StormCallerComponent_UpdatePoiSavedOptions::UserOptions' has a wrong offset!");
static_assert(offsetof(StormCallerComponent_UpdatePoiSavedOptions, GameplayTagForPOI) == 0x000028, "Member 'StormCallerComponent_UpdatePoiSavedOptions::GameplayTagForPOI' has a wrong offset!");

struct StormCallerComponent_GetSafeZoneLocationBlockList final
{
public:
	TArray<struct FVector4>                       ReturnValue;
};
static_assert(alignof(StormCallerComponent_GetSafeZoneLocationBlockList) == 0x000008, "Wrong alignment on StormCallerComponent_GetSafeZoneLocationBlockList");
static_assert(sizeof(StormCallerComponent_GetSafeZoneLocationBlockList) == 0x000010, "Wrong size on StormCallerComponent_GetSafeZoneLocationBlockList");
static_assert(offsetof(StormCallerComponent_GetSafeZoneLocationBlockList, ReturnValue) == 0x000000, "Member 'StormCallerComponent_GetSafeZoneLocationBlockList::ReturnValue' has a wrong offset!");

}
