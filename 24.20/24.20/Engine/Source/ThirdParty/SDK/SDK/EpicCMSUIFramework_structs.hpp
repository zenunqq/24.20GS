#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EDateType : uint8
{
	None                                     = 0,
	Coming                                   = 1,
	Ending                                   = 2,
	EDateType_MAX                            = 3,
};

struct FEpicCMSTileTypeMapping final : public FTableRowBase
{
public:
	TSoftClassPtr<class UClass>                   TileClass;
};
static_assert(alignof(FEpicCMSTileTypeMapping) == 0x000008, "Wrong alignment on FEpicCMSTileTypeMapping");
static_assert(sizeof(FEpicCMSTileTypeMapping) == 0x000030, "Wrong size on FEpicCMSTileTypeMapping");
static_assert(offsetof(FEpicCMSTileTypeMapping, TileClass) == 0x000008, "Member 'FEpicCMSTileTypeMapping::TileClass' has a wrong offset!");

struct FSlotDescription final
{
public:
	class FName                                   SlotName;
	int32                                         ColumnCount;
	int32                                         RowCount;
	bool                                          bUseFeaturedTextStyle;
	bool                                          bEnableAutoScroll;
	uint8                                         Pad_E[0x2];
};
static_assert(alignof(FSlotDescription) == 0x000004, "Wrong alignment on FSlotDescription");
static_assert(sizeof(FSlotDescription) == 0x000010, "Wrong size on FSlotDescription");
static_assert(offsetof(FSlotDescription, SlotName) == 0x000000, "Member 'FSlotDescription::SlotName' has a wrong offset!");
static_assert(offsetof(FSlotDescription, ColumnCount) == 0x000004, "Member 'FSlotDescription::ColumnCount' has a wrong offset!");
static_assert(offsetof(FSlotDescription, RowCount) == 0x000008, "Member 'FSlotDescription::RowCount' has a wrong offset!");
static_assert(offsetof(FSlotDescription, bUseFeaturedTextStyle) == 0x00000C, "Member 'FSlotDescription::bUseFeaturedTextStyle' has a wrong offset!");
static_assert(offsetof(FSlotDescription, bEnableAutoScroll) == 0x00000D, "Member 'FSlotDescription::bEnableAutoScroll' has a wrong offset!");

struct alignas(0x08) FEpicCMSPage final
{
public:
	uint8                                         Pad_0[0x70];
};
static_assert(alignof(FEpicCMSPage) == 0x000008, "Wrong alignment on FEpicCMSPage");
static_assert(sizeof(FEpicCMSPage) == 0x000070, "Wrong size on FEpicCMSPage");

struct FEpicCMSLayoutTypeMapping final : public FTableRowBase
{
public:
	TSoftClassPtr<class UClass>                   LayoutType;
};
static_assert(alignof(FEpicCMSLayoutTypeMapping) == 0x000008, "Wrong alignment on FEpicCMSLayoutTypeMapping");
static_assert(sizeof(FEpicCMSLayoutTypeMapping) == 0x000030, "Wrong size on FEpicCMSLayoutTypeMapping");
static_assert(offsetof(FEpicCMSLayoutTypeMapping, LayoutType) == 0x000008, "Member 'FEpicCMSLayoutTypeMapping::LayoutType' has a wrong offset!");

struct FTileDefinition final
{
public:
	class FString                                 TypeString;
	class FString                                 Title;
	class FString                                 Subtitle;
	class FString                                 Eyebrow;
	class FString                                 Link;
	class FString                                 GroupId;
	struct FDateTime                              Countdown;
	EDateType                                     CountdownType;
	uint8                                         Pad_69[0x7];
	class FString                                 MediaUrl;
	bool                                          IsVisible;
	uint8                                         Pad_81[0x7];
};
static_assert(alignof(FTileDefinition) == 0x000008, "Wrong alignment on FTileDefinition");
static_assert(sizeof(FTileDefinition) == 0x000088, "Wrong size on FTileDefinition");
static_assert(offsetof(FTileDefinition, TypeString) == 0x000000, "Member 'FTileDefinition::TypeString' has a wrong offset!");
static_assert(offsetof(FTileDefinition, Title) == 0x000010, "Member 'FTileDefinition::Title' has a wrong offset!");
static_assert(offsetof(FTileDefinition, Subtitle) == 0x000020, "Member 'FTileDefinition::Subtitle' has a wrong offset!");
static_assert(offsetof(FTileDefinition, Eyebrow) == 0x000030, "Member 'FTileDefinition::Eyebrow' has a wrong offset!");
static_assert(offsetof(FTileDefinition, Link) == 0x000040, "Member 'FTileDefinition::Link' has a wrong offset!");
static_assert(offsetof(FTileDefinition, GroupId) == 0x000050, "Member 'FTileDefinition::GroupId' has a wrong offset!");
static_assert(offsetof(FTileDefinition, Countdown) == 0x000060, "Member 'FTileDefinition::Countdown' has a wrong offset!");
static_assert(offsetof(FTileDefinition, CountdownType) == 0x000068, "Member 'FTileDefinition::CountdownType' has a wrong offset!");
static_assert(offsetof(FTileDefinition, MediaUrl) == 0x000070, "Member 'FTileDefinition::MediaUrl' has a wrong offset!");
static_assert(offsetof(FTileDefinition, IsVisible) == 0x000080, "Member 'FTileDefinition::IsVisible' has a wrong offset!");

}
