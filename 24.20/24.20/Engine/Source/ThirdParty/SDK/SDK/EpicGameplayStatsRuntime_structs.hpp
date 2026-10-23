#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

enum class EEpicLeaderboardDataType : uint8
{
	Integer                                  = 0,
	Double                                   = 1,
	EEpicLeaderboardDataType_MAX             = 2,
};

enum class EEpicLeaderboardTimeWindow : uint8
{
	Daily                                    = 0,
	Weekly                                   = 1,
	Monthly                                  = 2,
	AllTime                                  = 3,
	EEpicLeaderboardTimeWindow_MAX           = 4,
};

enum class EEpicLeaderboardUpdateFunction : uint8
{
	Min                                      = 0,
	Max                                      = 1,
	Sum                                      = 2,
	MostRecent                               = 3,
};

struct FTagTableManagerHelper final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FTagTableManagerHelper) == 0x000001, "Wrong alignment on FTagTableManagerHelper");
static_assert(sizeof(FTagTableManagerHelper) == 0x000001, "Wrong size on FTagTableManagerHelper");

struct FGameplayStatMetadataTableRow final : public FTableRowBase
{
public:
	class FString                                 BackendName;
	class FText                                   DisplayName;
	TArray<EEpicLeaderboardTimeWindow>            Windows;
	EEpicLeaderboardUpdateFunction                Metric;
	EEpicLeaderboardDataType                      DataType;
	bool                                          bPublish;
	uint8                                         Pad_43[0x1];
	int32                                         WeeklyRefreshInterval;
	bool                                          bExportToBackEnd;
	bool                                          bShowInFrontEnd;
	uint8                                         Pad_4A[0x6];
};
static_assert(alignof(FGameplayStatMetadataTableRow) == 0x000008, "Wrong alignment on FGameplayStatMetadataTableRow");
static_assert(sizeof(FGameplayStatMetadataTableRow) == 0x000050, "Wrong size on FGameplayStatMetadataTableRow");
static_assert(offsetof(FGameplayStatMetadataTableRow, BackendName) == 0x000008, "Member 'FGameplayStatMetadataTableRow::BackendName' has a wrong offset!");
static_assert(offsetof(FGameplayStatMetadataTableRow, DisplayName) == 0x000018, "Member 'FGameplayStatMetadataTableRow::DisplayName' has a wrong offset!");
static_assert(offsetof(FGameplayStatMetadataTableRow, Windows) == 0x000030, "Member 'FGameplayStatMetadataTableRow::Windows' has a wrong offset!");
static_assert(offsetof(FGameplayStatMetadataTableRow, Metric) == 0x000040, "Member 'FGameplayStatMetadataTableRow::Metric' has a wrong offset!");
static_assert(offsetof(FGameplayStatMetadataTableRow, DataType) == 0x000041, "Member 'FGameplayStatMetadataTableRow::DataType' has a wrong offset!");
static_assert(offsetof(FGameplayStatMetadataTableRow, bPublish) == 0x000042, "Member 'FGameplayStatMetadataTableRow::bPublish' has a wrong offset!");
static_assert(offsetof(FGameplayStatMetadataTableRow, WeeklyRefreshInterval) == 0x000044, "Member 'FGameplayStatMetadataTableRow::WeeklyRefreshInterval' has a wrong offset!");
static_assert(offsetof(FGameplayStatMetadataTableRow, bExportToBackEnd) == 0x000048, "Member 'FGameplayStatMetadataTableRow::bExportToBackEnd' has a wrong offset!");
static_assert(offsetof(FGameplayStatMetadataTableRow, bShowInFrontEnd) == 0x000049, "Member 'FGameplayStatMetadataTableRow::bShowInFrontEnd' has a wrong offset!");

struct FGameplayStatTag final : public FGameplayTag
{
public:
	struct FGameplayTag                           tag;
};
static_assert(alignof(FGameplayStatTag) == 0x000004, "Wrong alignment on FGameplayStatTag");
static_assert(sizeof(FGameplayStatTag) == 0x000008, "Wrong size on FGameplayStatTag");
static_assert(offsetof(FGameplayStatTag, tag) == 0x000004, "Member 'FGameplayStatTag::tag' has a wrong offset!");

struct FManagedGameplayTagDataTableItem final
{
public:
	struct FGameplayTag                           RootTag;
	uint8                                         Pad_4[0x4];
	class UDataTable*                             DataTable;
};
static_assert(alignof(FManagedGameplayTagDataTableItem) == 0x000008, "Wrong alignment on FManagedGameplayTagDataTableItem");
static_assert(sizeof(FManagedGameplayTagDataTableItem) == 0x000010, "Wrong size on FManagedGameplayTagDataTableItem");
static_assert(offsetof(FManagedGameplayTagDataTableItem, RootTag) == 0x000000, "Member 'FManagedGameplayTagDataTableItem::RootTag' has a wrong offset!");
static_assert(offsetof(FManagedGameplayTagDataTableItem, DataTable) == 0x000008, "Member 'FManagedGameplayTagDataTableItem::DataTable' has a wrong offset!");

}
