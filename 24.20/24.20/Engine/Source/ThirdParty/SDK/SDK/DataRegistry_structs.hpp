#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"

namespace SDK
{

enum class EDataRegistryAcquireStatus : uint8
{
	NotStarted                               = 0,
	WaitingForInitialAcquire                 = 1,
	InitialAcquireFinished                   = 2,
	WaitingForResources                      = 3,
	AcquireFinished                          = 4,
	AcquireError                             = 5,
	DoesNotExist                             = 6,
	EDataRegistryAcquireStatus_MAX           = 7,
};

enum class EMetaDataRegistrySourceAssetUsage : uint8
{
	NoAssets                                 = 0,
	SearchAssets                             = 1,
	RegisterAssets                           = 2,
	SearchAndRegisterAssets                  = 3,
	EMetaDataRegistrySourceAssetUsage_MAX    = 4,
};

enum class EDataRegistrySubsystemGetItemResult : uint8
{
	Found                                    = 0,
	NotFound                                 = 1,
	EDataRegistrySubsystemGetItemResult_MAX  = 2,
};

enum class EDataRegistryAvailability : uint8
{
	DoesNotExist                             = 0,
	Unknown                                  = 1,
	Remote                                   = 2,
	OnDisk                                   = 3,
	LocalAsset                               = 4,
	PreCached                                = 5,
	EDataRegistryAvailability_MAX            = 6,
};

struct alignas(0x08) FDataRegistryLookup final
{
public:
	uint8                                         Pad_0[0x18];
};
static_assert(alignof(FDataRegistryLookup) == 0x000008, "Wrong alignment on FDataRegistryLookup");
static_assert(sizeof(FDataRegistryLookup) == 0x000018, "Wrong size on FDataRegistryLookup");

struct FDataRegistryType final
{
public:
	class FName                                   Name;
};
static_assert(alignof(FDataRegistryType) == 0x000004, "Wrong alignment on FDataRegistryType");
static_assert(sizeof(FDataRegistryType) == 0x000004, "Wrong size on FDataRegistryType");
static_assert(offsetof(FDataRegistryType, Name) == 0x000000, "Member 'FDataRegistryType::Name' has a wrong offset!");

struct FDataRegistryId final
{
public:
	struct FDataRegistryType                      RegistryType;
	class FName                                   ItemName;
};
static_assert(alignof(FDataRegistryId) == 0x000004, "Wrong alignment on FDataRegistryId");
static_assert(sizeof(FDataRegistryId) == 0x000008, "Wrong size on FDataRegistryId");
static_assert(offsetof(FDataRegistryId, RegistryType) == 0x000000, "Member 'FDataRegistryId::RegistryType' has a wrong offset!");
static_assert(offsetof(FDataRegistryId, ItemName) == 0x000004, "Member 'FDataRegistryId::ItemName' has a wrong offset!");

struct FDataRegistrySource_DataTableRules final
{
public:
	bool                                          bPrecacheTable;
	uint8                                         Pad_1[0x3];
	float                                         CachedTableKeepSeconds;
};
static_assert(alignof(FDataRegistrySource_DataTableRules) == 0x000004, "Wrong alignment on FDataRegistrySource_DataTableRules");
static_assert(sizeof(FDataRegistrySource_DataTableRules) == 0x000008, "Wrong size on FDataRegistrySource_DataTableRules");
static_assert(offsetof(FDataRegistrySource_DataTableRules, bPrecacheTable) == 0x000000, "Member 'FDataRegistrySource_DataTableRules::bPrecacheTable' has a wrong offset!");
static_assert(offsetof(FDataRegistrySource_DataTableRules, CachedTableKeepSeconds) == 0x000004, "Member 'FDataRegistrySource_DataTableRules::CachedTableKeepSeconds' has a wrong offset!");

struct FDataRegistryIdFormat final
{
public:
	struct FGameplayTag                           BaseGameplayTag;
};
static_assert(alignof(FDataRegistryIdFormat) == 0x000004, "Wrong alignment on FDataRegistryIdFormat");
static_assert(sizeof(FDataRegistryIdFormat) == 0x000004, "Wrong size on FDataRegistryIdFormat");
static_assert(offsetof(FDataRegistryIdFormat, BaseGameplayTag) == 0x000000, "Member 'FDataRegistryIdFormat::BaseGameplayTag' has a wrong offset!");

struct FDataRegistryCachePolicy final
{
public:
	bool                                          bCacheIsAlwaysVolatile;
	bool                                          bUseCurveTableCacheVersion;
	uint8                                         Pad_2[0x2];
	int32                                         MinNumberKept;
	int32                                         MaxNumberKept;
	float                                         ForceKeepSeconds;
	float                                         ForceReleaseSeconds;
};
static_assert(alignof(FDataRegistryCachePolicy) == 0x000004, "Wrong alignment on FDataRegistryCachePolicy");
static_assert(sizeof(FDataRegistryCachePolicy) == 0x000014, "Wrong size on FDataRegistryCachePolicy");
static_assert(offsetof(FDataRegistryCachePolicy, bCacheIsAlwaysVolatile) == 0x000000, "Member 'FDataRegistryCachePolicy::bCacheIsAlwaysVolatile' has a wrong offset!");
static_assert(offsetof(FDataRegistryCachePolicy, bUseCurveTableCacheVersion) == 0x000001, "Member 'FDataRegistryCachePolicy::bUseCurveTableCacheVersion' has a wrong offset!");
static_assert(offsetof(FDataRegistryCachePolicy, MinNumberKept) == 0x000004, "Member 'FDataRegistryCachePolicy::MinNumberKept' has a wrong offset!");
static_assert(offsetof(FDataRegistryCachePolicy, MaxNumberKept) == 0x000008, "Member 'FDataRegistryCachePolicy::MaxNumberKept' has a wrong offset!");
static_assert(offsetof(FDataRegistryCachePolicy, ForceKeepSeconds) == 0x00000C, "Member 'FDataRegistryCachePolicy::ForceKeepSeconds' has a wrong offset!");
static_assert(offsetof(FDataRegistryCachePolicy, ForceReleaseSeconds) == 0x000010, "Member 'FDataRegistryCachePolicy::ForceReleaseSeconds' has a wrong offset!");

struct alignas(0x08) FDataRegistrySourceItemId final
{
public:
	uint8                                         Pad_0[0x30];
};
static_assert(alignof(FDataRegistrySourceItemId) == 0x000008, "Wrong alignment on FDataRegistrySourceItemId");
static_assert(sizeof(FDataRegistrySourceItemId) == 0x000030, "Wrong size on FDataRegistrySourceItemId");

}
