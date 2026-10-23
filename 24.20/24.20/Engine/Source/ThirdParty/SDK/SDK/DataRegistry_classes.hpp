#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "DeveloperSettings_classes.hpp"
#include "DataRegistry_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UDataRegistrySettings final : public UDeveloperSettings
{
public:
	TArray<struct FDirectoryPath>                 DirectoriesToScan;
	bool                                          bInitializeAllLoadedRegistries;
	bool                                          bIgnoreMissingCookedAssetRegistryData;
	uint8                                         Pad_42[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataRegistrySettings">();
	}
	static class UDataRegistrySettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataRegistrySettings>();
	}
};
static_assert(alignof(UDataRegistrySettings) == 0x000008, "Wrong alignment on UDataRegistrySettings");
static_assert(sizeof(UDataRegistrySettings) == 0x000048, "Wrong size on UDataRegistrySettings");
static_assert(offsetof(UDataRegistrySettings, DirectoriesToScan) == 0x000030, "Member 'UDataRegistrySettings::DirectoriesToScan' has a wrong offset!");
static_assert(offsetof(UDataRegistrySettings, bInitializeAllLoadedRegistries) == 0x000040, "Member 'UDataRegistrySettings::bInitializeAllLoadedRegistries' has a wrong offset!");
static_assert(offsetof(UDataRegistrySettings, bIgnoreMissingCookedAssetRegistryData) == 0x000041, "Member 'UDataRegistrySettings::bIgnoreMissingCookedAssetRegistryData' has a wrong offset!");

class UDataRegistry : public UObject
{
public:
	class FName                                   RegistryType;
	struct FDataRegistryIdFormat                  IdFormat;
	class UScriptStruct*                          ItemStruct;
	TArray<class UDataRegistrySource*>            DataSources;
	TArray<class UDataRegistrySource*>            RuntimeSources;
	float                                         TimerUpdateFrequency;
	struct FDataRegistryCachePolicy               DefaultCachePolicy;
	uint8                                         Pad_70[0x48];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataRegistry">();
	}
	static class UDataRegistry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataRegistry>();
	}
};
static_assert(alignof(UDataRegistry) == 0x000008, "Wrong alignment on UDataRegistry");
static_assert(sizeof(UDataRegistry) == 0x0000B8, "Wrong size on UDataRegistry");
static_assert(offsetof(UDataRegistry, RegistryType) == 0x000028, "Member 'UDataRegistry::RegistryType' has a wrong offset!");
static_assert(offsetof(UDataRegistry, IdFormat) == 0x00002C, "Member 'UDataRegistry::IdFormat' has a wrong offset!");
static_assert(offsetof(UDataRegistry, ItemStruct) == 0x000030, "Member 'UDataRegistry::ItemStruct' has a wrong offset!");
static_assert(offsetof(UDataRegistry, DataSources) == 0x000038, "Member 'UDataRegistry::DataSources' has a wrong offset!");
static_assert(offsetof(UDataRegistry, RuntimeSources) == 0x000048, "Member 'UDataRegistry::RuntimeSources' has a wrong offset!");
static_assert(offsetof(UDataRegistry, TimerUpdateFrequency) == 0x000058, "Member 'UDataRegistry::TimerUpdateFrequency' has a wrong offset!");
static_assert(offsetof(UDataRegistry, DefaultCachePolicy) == 0x00005C, "Member 'UDataRegistry::DefaultCachePolicy' has a wrong offset!");

class UDataRegistrySource : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	class UDataRegistrySource*                    ParentSource;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataRegistrySource">();
	}
	static class UDataRegistrySource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataRegistrySource>();
	}
};
static_assert(alignof(UDataRegistrySource) == 0x000008, "Wrong alignment on UDataRegistrySource");
static_assert(sizeof(UDataRegistrySource) == 0x000038, "Wrong size on UDataRegistrySource");
static_assert(offsetof(UDataRegistrySource, ParentSource) == 0x000030, "Member 'UDataRegistrySource::ParentSource' has a wrong offset!");

class UMetaDataRegistrySource : public UDataRegistrySource
{
public:
	EMetaDataRegistrySourceAssetUsage             AssetUsage;
	uint8                                         Pad_39[0x7];
	struct FAssetManagerSearchRules               SearchRules;
	TMap<class FName, class UDataRegistrySource*> RuntimeChildren;
	uint8                                         Pad_E0[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaDataRegistrySource">();
	}
	static class UMetaDataRegistrySource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaDataRegistrySource>();
	}
};
static_assert(alignof(UMetaDataRegistrySource) == 0x000008, "Wrong alignment on UMetaDataRegistrySource");
static_assert(sizeof(UMetaDataRegistrySource) == 0x000108, "Wrong size on UMetaDataRegistrySource");
static_assert(offsetof(UMetaDataRegistrySource, AssetUsage) == 0x000038, "Member 'UMetaDataRegistrySource::AssetUsage' has a wrong offset!");
static_assert(offsetof(UMetaDataRegistrySource, SearchRules) == 0x000040, "Member 'UMetaDataRegistrySource::SearchRules' has a wrong offset!");
static_assert(offsetof(UMetaDataRegistrySource, RuntimeChildren) == 0x000090, "Member 'UMetaDataRegistrySource::RuntimeChildren' has a wrong offset!");

class UDataRegistrySource_CurveTable : public UDataRegistrySource
{
public:
	TSoftObjectPtr<class UCurveTable>             SourceTable;
	struct FDataRegistrySource_DataTableRules     TableRules;
	class UCurveTable*                            CachedTable;
	class UCurveTable*                            PreloadTable;
	uint8                                         Pad_78[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataRegistrySource_CurveTable">();
	}
	static class UDataRegistrySource_CurveTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataRegistrySource_CurveTable>();
	}
};
static_assert(alignof(UDataRegistrySource_CurveTable) == 0x000008, "Wrong alignment on UDataRegistrySource_CurveTable");
static_assert(sizeof(UDataRegistrySource_CurveTable) == 0x0000A0, "Wrong size on UDataRegistrySource_CurveTable");
static_assert(offsetof(UDataRegistrySource_CurveTable, SourceTable) == 0x000038, "Member 'UDataRegistrySource_CurveTable::SourceTable' has a wrong offset!");
static_assert(offsetof(UDataRegistrySource_CurveTable, TableRules) == 0x000060, "Member 'UDataRegistrySource_CurveTable::TableRules' has a wrong offset!");
static_assert(offsetof(UDataRegistrySource_CurveTable, CachedTable) == 0x000068, "Member 'UDataRegistrySource_CurveTable::CachedTable' has a wrong offset!");
static_assert(offsetof(UDataRegistrySource_CurveTable, PreloadTable) == 0x000070, "Member 'UDataRegistrySource_CurveTable::PreloadTable' has a wrong offset!");

class UMetaDataRegistrySource_CurveTable final : public UMetaDataRegistrySource
{
public:
	TSubclassOf<class UDataRegistrySource_CurveTable> CreatedSource;
	struct FDataRegistrySource_DataTableRules     TableRules;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaDataRegistrySource_CurveTable">();
	}
	static class UMetaDataRegistrySource_CurveTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaDataRegistrySource_CurveTable>();
	}
};
static_assert(alignof(UMetaDataRegistrySource_CurveTable) == 0x000008, "Wrong alignment on UMetaDataRegistrySource_CurveTable");
static_assert(sizeof(UMetaDataRegistrySource_CurveTable) == 0x000118, "Wrong size on UMetaDataRegistrySource_CurveTable");
static_assert(offsetof(UMetaDataRegistrySource_CurveTable, CreatedSource) == 0x000108, "Member 'UMetaDataRegistrySource_CurveTable::CreatedSource' has a wrong offset!");
static_assert(offsetof(UMetaDataRegistrySource_CurveTable, TableRules) == 0x000110, "Member 'UMetaDataRegistrySource_CurveTable::TableRules' has a wrong offset!");

class UDataRegistrySource_DataTable : public UDataRegistrySource
{
public:
	TSoftObjectPtr<class UDataTable>              SourceTable;
	struct FDataRegistrySource_DataTableRules     TableRules;
	class UDataTable*                             CachedTable;
	class UDataTable*                             PreloadTable;
	uint8                                         Pad_78[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataRegistrySource_DataTable">();
	}
	static class UDataRegistrySource_DataTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataRegistrySource_DataTable>();
	}
};
static_assert(alignof(UDataRegistrySource_DataTable) == 0x000008, "Wrong alignment on UDataRegistrySource_DataTable");
static_assert(sizeof(UDataRegistrySource_DataTable) == 0x0000A0, "Wrong size on UDataRegistrySource_DataTable");
static_assert(offsetof(UDataRegistrySource_DataTable, SourceTable) == 0x000038, "Member 'UDataRegistrySource_DataTable::SourceTable' has a wrong offset!");
static_assert(offsetof(UDataRegistrySource_DataTable, TableRules) == 0x000060, "Member 'UDataRegistrySource_DataTable::TableRules' has a wrong offset!");
static_assert(offsetof(UDataRegistrySource_DataTable, CachedTable) == 0x000068, "Member 'UDataRegistrySource_DataTable::CachedTable' has a wrong offset!");
static_assert(offsetof(UDataRegistrySource_DataTable, PreloadTable) == 0x000070, "Member 'UDataRegistrySource_DataTable::PreloadTable' has a wrong offset!");

class UMetaDataRegistrySource_DataTable final : public UMetaDataRegistrySource
{
public:
	TSubclassOf<class UDataRegistrySource_DataTable> CreatedSource;
	struct FDataRegistrySource_DataTableRules     TableRules;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaDataRegistrySource_DataTable">();
	}
	static class UMetaDataRegistrySource_DataTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaDataRegistrySource_DataTable>();
	}
};
static_assert(alignof(UMetaDataRegistrySource_DataTable) == 0x000008, "Wrong alignment on UMetaDataRegistrySource_DataTable");
static_assert(sizeof(UMetaDataRegistrySource_DataTable) == 0x000118, "Wrong size on UMetaDataRegistrySource_DataTable");
static_assert(offsetof(UMetaDataRegistrySource_DataTable, CreatedSource) == 0x000108, "Member 'UMetaDataRegistrySource_DataTable::CreatedSource' has a wrong offset!");
static_assert(offsetof(UMetaDataRegistrySource_DataTable, TableRules) == 0x000110, "Member 'UMetaDataRegistrySource_DataTable::TableRules' has a wrong offset!");

class UDataRegistrySubsystem final : public UEngineSubsystem
{
public:
	uint8                                         Pad_30[0x98];

public:
	static bool AcquireItemBP(const struct FDataRegistryId& ItemId, TDelegate<void(const struct FDataRegistryId& ItemId, const struct FDataRegistryLookup& ResolvedLookup, EDataRegistryAcquireStatus Status)> AcquireCallback);
	static class FString Conv_DataRegistryIdToString(const struct FDataRegistryId& DataRegistryId);
	static class FString Conv_DataRegistryTypeToString(const struct FDataRegistryType& DataRegistryType);
	static bool EqualEqual_DataRegistryId(const struct FDataRegistryId& A, const struct FDataRegistryId& B);
	static bool EqualEqual_DataRegistryType(const struct FDataRegistryType& A, const struct FDataRegistryType& B);
	static void EvaluateDataRegistryCurve(const struct FDataRegistryId& ItemId, float InputValue, float DefaultValue, EDataRegistrySubsystemGetItemResult* outResult, float* OutValue);
	static void FindCachedItemBP(const struct FDataRegistryId& ItemId, EDataRegistrySubsystemGetItemResult* outResult, struct FTableRowBase* OutItem);
	static bool GetCachedItemBP(const struct FDataRegistryId& ItemId, struct FTableRowBase& OutItem);
	static bool GetCachedItemFromLookupBP(const struct FDataRegistryId& ItemId, const struct FDataRegistryLookup& ResolvedLookup, struct FTableRowBase* OutItem);
	static bool IsValidDataRegistryId(const struct FDataRegistryId& DataRegistryId);
	static bool IsValidDataRegistryType(const struct FDataRegistryType& DataRegistryType);
	static bool NotEqual_DataRegistryId(const struct FDataRegistryId& A, const struct FDataRegistryId& B);
	static bool NotEqual_DataRegistryType(const struct FDataRegistryType& A, const struct FDataRegistryType& B);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataRegistrySubsystem">();
	}
	static class UDataRegistrySubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataRegistrySubsystem>();
	}
};
static_assert(alignof(UDataRegistrySubsystem) == 0x000008, "Wrong alignment on UDataRegistrySubsystem");
static_assert(sizeof(UDataRegistrySubsystem) == 0x0000C8, "Wrong size on UDataRegistrySubsystem");

}
