#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "DataAssetDirectory_structs.hpp"

namespace SDK
{

class IDataAssetDirectoryPatchableAsset final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataAssetDirectoryPatchableAsset">();
	}
	static class IDataAssetDirectoryPatchableAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<IDataAssetDirectoryPatchableAsset>();
	}
};
static_assert(alignof(IDataAssetDirectoryPatchableAsset) == 0x000008, "Wrong alignment on IDataAssetDirectoryPatchableAsset");
static_assert(sizeof(IDataAssetDirectoryPatchableAsset) == 0x000028, "Wrong size on IDataAssetDirectoryPatchableAsset");

class UDataAssetDirectorySimpleObject final : public UObject
{
public:
	int32                                         IntProperty;
	uint8                                         Pad_2C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataAssetDirectorySimpleObject">();
	}
	static class UDataAssetDirectorySimpleObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataAssetDirectorySimpleObject>();
	}
};
static_assert(alignof(UDataAssetDirectorySimpleObject) == 0x000008, "Wrong alignment on UDataAssetDirectorySimpleObject");
static_assert(sizeof(UDataAssetDirectorySimpleObject) == 0x000030, "Wrong size on UDataAssetDirectorySimpleObject");
static_assert(offsetof(UDataAssetDirectorySimpleObject, IntProperty) == 0x000028, "Member 'UDataAssetDirectorySimpleObject::IntProperty' has a wrong offset!");

class UDataAssetDirectoryTestPODAsset final : public UObject
{
public:
	class FString                                 AssetName;
	EDataAssetDirectoryTestEnum                   EnumProperty;
	uint8                                         Pad_39[0x3];
	int32                                         IntProperty;
	float                                         FloatProperty;
	bool                                          BoolProperty;
	uint8                                         Pad_45[0x3];
	class FString                                 StringProperty;
	class FName                                   NameProperty;
	uint8                                         Pad_5C[0x4];
	class FText                                   TextProperty;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataAssetDirectoryTestPODAsset">();
	}
	static class UDataAssetDirectoryTestPODAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataAssetDirectoryTestPODAsset>();
	}
};
static_assert(alignof(UDataAssetDirectoryTestPODAsset) == 0x000008, "Wrong alignment on UDataAssetDirectoryTestPODAsset");
static_assert(sizeof(UDataAssetDirectoryTestPODAsset) == 0x000078, "Wrong size on UDataAssetDirectoryTestPODAsset");
static_assert(offsetof(UDataAssetDirectoryTestPODAsset, AssetName) == 0x000028, "Member 'UDataAssetDirectoryTestPODAsset::AssetName' has a wrong offset!");
static_assert(offsetof(UDataAssetDirectoryTestPODAsset, EnumProperty) == 0x000038, "Member 'UDataAssetDirectoryTestPODAsset::EnumProperty' has a wrong offset!");
static_assert(offsetof(UDataAssetDirectoryTestPODAsset, IntProperty) == 0x00003C, "Member 'UDataAssetDirectoryTestPODAsset::IntProperty' has a wrong offset!");
static_assert(offsetof(UDataAssetDirectoryTestPODAsset, FloatProperty) == 0x000040, "Member 'UDataAssetDirectoryTestPODAsset::FloatProperty' has a wrong offset!");
static_assert(offsetof(UDataAssetDirectoryTestPODAsset, BoolProperty) == 0x000044, "Member 'UDataAssetDirectoryTestPODAsset::BoolProperty' has a wrong offset!");
static_assert(offsetof(UDataAssetDirectoryTestPODAsset, StringProperty) == 0x000048, "Member 'UDataAssetDirectoryTestPODAsset::StringProperty' has a wrong offset!");
static_assert(offsetof(UDataAssetDirectoryTestPODAsset, NameProperty) == 0x000058, "Member 'UDataAssetDirectoryTestPODAsset::NameProperty' has a wrong offset!");
static_assert(offsetof(UDataAssetDirectoryTestPODAsset, TextProperty) == 0x000060, "Member 'UDataAssetDirectoryTestPODAsset::TextProperty' has a wrong offset!");

class UDataAssetDirectoryTestStructAsset final : public UObject
{
public:
	struct FDataAssetDirectoryTestPODStruct       TestStruct;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataAssetDirectoryTestStructAsset">();
	}
	static class UDataAssetDirectoryTestStructAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataAssetDirectoryTestStructAsset>();
	}
};
static_assert(alignof(UDataAssetDirectoryTestStructAsset) == 0x000008, "Wrong alignment on UDataAssetDirectoryTestStructAsset");
static_assert(sizeof(UDataAssetDirectoryTestStructAsset) == 0x000068, "Wrong size on UDataAssetDirectoryTestStructAsset");
static_assert(offsetof(UDataAssetDirectoryTestStructAsset, TestStruct) == 0x000028, "Member 'UDataAssetDirectoryTestStructAsset::TestStruct' has a wrong offset!");

class UDataAssetDirectoryTestArrayAsset final : public UObject
{
public:
	TArray<int32>                                 IntArray;
	TArray<struct FDataAssetDirectoryTestSimpleStruct> SimpleStructArray;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataAssetDirectoryTestArrayAsset">();
	}
	static class UDataAssetDirectoryTestArrayAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataAssetDirectoryTestArrayAsset>();
	}
};
static_assert(alignof(UDataAssetDirectoryTestArrayAsset) == 0x000008, "Wrong alignment on UDataAssetDirectoryTestArrayAsset");
static_assert(sizeof(UDataAssetDirectoryTestArrayAsset) == 0x000048, "Wrong size on UDataAssetDirectoryTestArrayAsset");
static_assert(offsetof(UDataAssetDirectoryTestArrayAsset, IntArray) == 0x000028, "Member 'UDataAssetDirectoryTestArrayAsset::IntArray' has a wrong offset!");
static_assert(offsetof(UDataAssetDirectoryTestArrayAsset, SimpleStructArray) == 0x000038, "Member 'UDataAssetDirectoryTestArrayAsset::SimpleStructArray' has a wrong offset!");

class UDataAssetDirectoryTestObjectAsset final : public UObject
{
public:
	class UDataAssetDirectorySimpleObject*        SimpleObject;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataAssetDirectoryTestObjectAsset">();
	}
	static class UDataAssetDirectoryTestObjectAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataAssetDirectoryTestObjectAsset>();
	}
};
static_assert(alignof(UDataAssetDirectoryTestObjectAsset) == 0x000008, "Wrong alignment on UDataAssetDirectoryTestObjectAsset");
static_assert(sizeof(UDataAssetDirectoryTestObjectAsset) == 0x000030, "Wrong size on UDataAssetDirectoryTestObjectAsset");
static_assert(offsetof(UDataAssetDirectoryTestObjectAsset, SimpleObject) == 0x000028, "Member 'UDataAssetDirectoryTestObjectAsset::SimpleObject' has a wrong offset!");

class UDataAssetDirectoryTestMapAsset final : public UObject
{
public:
	TMap<class FString, int32>                    StringIntMap;
	TMap<class FString, int32>                    ShrinkStringIntMap;
	TMap<class FString, int32>                    GrowStringIntMap;
	TMap<int32, struct FDataAssetDirectoryTestSimpleStruct> IntStructMap;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataAssetDirectoryTestMapAsset">();
	}
	static class UDataAssetDirectoryTestMapAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataAssetDirectoryTestMapAsset>();
	}
};
static_assert(alignof(UDataAssetDirectoryTestMapAsset) == 0x000008, "Wrong alignment on UDataAssetDirectoryTestMapAsset");
static_assert(sizeof(UDataAssetDirectoryTestMapAsset) == 0x000168, "Wrong size on UDataAssetDirectoryTestMapAsset");
static_assert(offsetof(UDataAssetDirectoryTestMapAsset, StringIntMap) == 0x000028, "Member 'UDataAssetDirectoryTestMapAsset::StringIntMap' has a wrong offset!");
static_assert(offsetof(UDataAssetDirectoryTestMapAsset, ShrinkStringIntMap) == 0x000078, "Member 'UDataAssetDirectoryTestMapAsset::ShrinkStringIntMap' has a wrong offset!");
static_assert(offsetof(UDataAssetDirectoryTestMapAsset, GrowStringIntMap) == 0x0000C8, "Member 'UDataAssetDirectoryTestMapAsset::GrowStringIntMap' has a wrong offset!");
static_assert(offsetof(UDataAssetDirectoryTestMapAsset, IntStructMap) == 0x000118, "Member 'UDataAssetDirectoryTestMapAsset::IntStructMap' has a wrong offset!");

class UDataAssetDirectoryManager final : public UObject
{
public:
	uint8                                         Pad_28[0x178];
	TArray<class UObject*>                        PatchedAssets;
	struct FDateTime                              LastUpdateCheck;
	uint32                                        UpdateCheckLimitSeconds;
	bool                                          bEnabled;
	bool                                          bFailOnError;
	bool                                          bAnalyticsEnabled;
	uint8                                         Pad_1BF[0x11];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataAssetDirectoryManager">();
	}
	static class UDataAssetDirectoryManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataAssetDirectoryManager>();
	}
};
static_assert(alignof(UDataAssetDirectoryManager) == 0x000008, "Wrong alignment on UDataAssetDirectoryManager");
static_assert(sizeof(UDataAssetDirectoryManager) == 0x0001D0, "Wrong size on UDataAssetDirectoryManager");
static_assert(offsetof(UDataAssetDirectoryManager, PatchedAssets) == 0x0001A0, "Member 'UDataAssetDirectoryManager::PatchedAssets' has a wrong offset!");
static_assert(offsetof(UDataAssetDirectoryManager, LastUpdateCheck) == 0x0001B0, "Member 'UDataAssetDirectoryManager::LastUpdateCheck' has a wrong offset!");
static_assert(offsetof(UDataAssetDirectoryManager, UpdateCheckLimitSeconds) == 0x0001B8, "Member 'UDataAssetDirectoryManager::UpdateCheckLimitSeconds' has a wrong offset!");
static_assert(offsetof(UDataAssetDirectoryManager, bEnabled) == 0x0001BC, "Member 'UDataAssetDirectoryManager::bEnabled' has a wrong offset!");
static_assert(offsetof(UDataAssetDirectoryManager, bFailOnError) == 0x0001BD, "Member 'UDataAssetDirectoryManager::bFailOnError' has a wrong offset!");
static_assert(offsetof(UDataAssetDirectoryManager, bAnalyticsEnabled) == 0x0001BE, "Member 'UDataAssetDirectoryManager::bAnalyticsEnabled' has a wrong offset!");

class UDataAssetDirectoryPatcher final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataAssetDirectoryPatcher">();
	}
	static class UDataAssetDirectoryPatcher* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataAssetDirectoryPatcher>();
	}
};
static_assert(alignof(UDataAssetDirectoryPatcher) == 0x000008, "Wrong alignment on UDataAssetDirectoryPatcher");
static_assert(sizeof(UDataAssetDirectoryPatcher) == 0x000028, "Wrong size on UDataAssetDirectoryPatcher");

}
