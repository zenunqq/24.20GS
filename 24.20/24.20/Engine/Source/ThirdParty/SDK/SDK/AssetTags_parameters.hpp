#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct AssetTagsSubsystem_CollectionExists final
{
public:
	class FName                                   Name_0;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(AssetTagsSubsystem_CollectionExists) == 0x000004, "Wrong alignment on AssetTagsSubsystem_CollectionExists");
static_assert(sizeof(AssetTagsSubsystem_CollectionExists) == 0x000008, "Wrong size on AssetTagsSubsystem_CollectionExists");
static_assert(offsetof(AssetTagsSubsystem_CollectionExists, Name_0) == 0x000000, "Member 'AssetTagsSubsystem_CollectionExists::Name_0' has a wrong offset!");
static_assert(offsetof(AssetTagsSubsystem_CollectionExists, ReturnValue) == 0x000004, "Member 'AssetTagsSubsystem_CollectionExists::ReturnValue' has a wrong offset!");

struct AssetTagsSubsystem_GetAssetsInCollection final
{
public:
	class FName                                   Name_0;
	uint8                                         Pad_4[0x4];
	TArray<struct FAssetData>                     ReturnValue;
};
static_assert(alignof(AssetTagsSubsystem_GetAssetsInCollection) == 0x000008, "Wrong alignment on AssetTagsSubsystem_GetAssetsInCollection");
static_assert(sizeof(AssetTagsSubsystem_GetAssetsInCollection) == 0x000018, "Wrong size on AssetTagsSubsystem_GetAssetsInCollection");
static_assert(offsetof(AssetTagsSubsystem_GetAssetsInCollection, Name_0) == 0x000000, "Member 'AssetTagsSubsystem_GetAssetsInCollection::Name_0' has a wrong offset!");
static_assert(offsetof(AssetTagsSubsystem_GetAssetsInCollection, ReturnValue) == 0x000008, "Member 'AssetTagsSubsystem_GetAssetsInCollection::ReturnValue' has a wrong offset!");

struct AssetTagsSubsystem_GetCollections final
{
public:
	TArray<class FName>                           ReturnValue;
};
static_assert(alignof(AssetTagsSubsystem_GetCollections) == 0x000008, "Wrong alignment on AssetTagsSubsystem_GetCollections");
static_assert(sizeof(AssetTagsSubsystem_GetCollections) == 0x000010, "Wrong size on AssetTagsSubsystem_GetCollections");
static_assert(offsetof(AssetTagsSubsystem_GetCollections, ReturnValue) == 0x000000, "Member 'AssetTagsSubsystem_GetCollections::ReturnValue' has a wrong offset!");

struct AssetTagsSubsystem_GetCollectionsContainingAsset final
{
public:
	class FName                                   AssetPathName;
	uint8                                         Pad_4[0x4];
	TArray<class FName>                           ReturnValue;
};
static_assert(alignof(AssetTagsSubsystem_GetCollectionsContainingAsset) == 0x000008, "Wrong alignment on AssetTagsSubsystem_GetCollectionsContainingAsset");
static_assert(sizeof(AssetTagsSubsystem_GetCollectionsContainingAsset) == 0x000018, "Wrong size on AssetTagsSubsystem_GetCollectionsContainingAsset");
static_assert(offsetof(AssetTagsSubsystem_GetCollectionsContainingAsset, AssetPathName) == 0x000000, "Member 'AssetTagsSubsystem_GetCollectionsContainingAsset::AssetPathName' has a wrong offset!");
static_assert(offsetof(AssetTagsSubsystem_GetCollectionsContainingAsset, ReturnValue) == 0x000008, "Member 'AssetTagsSubsystem_GetCollectionsContainingAsset::ReturnValue' has a wrong offset!");

struct AssetTagsSubsystem_GetCollectionsContainingAssetData final
{
public:
	struct FAssetData                             AssetData;
	TArray<class FName>                           ReturnValue;
};
static_assert(alignof(AssetTagsSubsystem_GetCollectionsContainingAssetData) == 0x000008, "Wrong alignment on AssetTagsSubsystem_GetCollectionsContainingAssetData");
static_assert(sizeof(AssetTagsSubsystem_GetCollectionsContainingAssetData) == 0x000048, "Wrong size on AssetTagsSubsystem_GetCollectionsContainingAssetData");
static_assert(offsetof(AssetTagsSubsystem_GetCollectionsContainingAssetData, AssetData) == 0x000000, "Member 'AssetTagsSubsystem_GetCollectionsContainingAssetData::AssetData' has a wrong offset!");
static_assert(offsetof(AssetTagsSubsystem_GetCollectionsContainingAssetData, ReturnValue) == 0x000038, "Member 'AssetTagsSubsystem_GetCollectionsContainingAssetData::ReturnValue' has a wrong offset!");

struct AssetTagsSubsystem_GetCollectionsContainingAssetPtr final
{
public:
	const class UObject*                          AssetPtr;
	TArray<class FName>                           ReturnValue;
};
static_assert(alignof(AssetTagsSubsystem_GetCollectionsContainingAssetPtr) == 0x000008, "Wrong alignment on AssetTagsSubsystem_GetCollectionsContainingAssetPtr");
static_assert(sizeof(AssetTagsSubsystem_GetCollectionsContainingAssetPtr) == 0x000018, "Wrong size on AssetTagsSubsystem_GetCollectionsContainingAssetPtr");
static_assert(offsetof(AssetTagsSubsystem_GetCollectionsContainingAssetPtr, AssetPtr) == 0x000000, "Member 'AssetTagsSubsystem_GetCollectionsContainingAssetPtr::AssetPtr' has a wrong offset!");
static_assert(offsetof(AssetTagsSubsystem_GetCollectionsContainingAssetPtr, ReturnValue) == 0x000008, "Member 'AssetTagsSubsystem_GetCollectionsContainingAssetPtr::ReturnValue' has a wrong offset!");

struct AssetTagsSubsystem_K2_GetCollectionsContainingAsset final
{
public:
	struct FSoftObjectPath                        AssetPath;
	TArray<class FName>                           ReturnValue;
};
static_assert(alignof(AssetTagsSubsystem_K2_GetCollectionsContainingAsset) == 0x000008, "Wrong alignment on AssetTagsSubsystem_K2_GetCollectionsContainingAsset");
static_assert(sizeof(AssetTagsSubsystem_K2_GetCollectionsContainingAsset) == 0x000028, "Wrong size on AssetTagsSubsystem_K2_GetCollectionsContainingAsset");
static_assert(offsetof(AssetTagsSubsystem_K2_GetCollectionsContainingAsset, AssetPath) == 0x000000, "Member 'AssetTagsSubsystem_K2_GetCollectionsContainingAsset::AssetPath' has a wrong offset!");
static_assert(offsetof(AssetTagsSubsystem_K2_GetCollectionsContainingAsset, ReturnValue) == 0x000018, "Member 'AssetTagsSubsystem_K2_GetCollectionsContainingAsset::ReturnValue' has a wrong offset!");

}
