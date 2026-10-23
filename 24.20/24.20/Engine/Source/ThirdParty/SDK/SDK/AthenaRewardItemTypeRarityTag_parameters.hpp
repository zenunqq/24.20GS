#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct AthenaRewardItemTypeRarityTag_C_ExecuteUbergraph_AthenaRewardItemTypeRarityTag final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	const class UFortItemSeriesDefinition*        K2Node_Event_SeriesData;
	struct FFortRarityItemData                    K2Node_Event_RarityData;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
};
static_assert(alignof(AthenaRewardItemTypeRarityTag_C_ExecuteUbergraph_AthenaRewardItemTypeRarityTag) == 0x000008, "Wrong alignment on AthenaRewardItemTypeRarityTag_C_ExecuteUbergraph_AthenaRewardItemTypeRarityTag");
static_assert(sizeof(AthenaRewardItemTypeRarityTag_C_ExecuteUbergraph_AthenaRewardItemTypeRarityTag) == 0x0000A0, "Wrong size on AthenaRewardItemTypeRarityTag_C_ExecuteUbergraph_AthenaRewardItemTypeRarityTag");
static_assert(offsetof(AthenaRewardItemTypeRarityTag_C_ExecuteUbergraph_AthenaRewardItemTypeRarityTag, EntryPoint) == 0x000000, "Member 'AthenaRewardItemTypeRarityTag_C_ExecuteUbergraph_AthenaRewardItemTypeRarityTag::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaRewardItemTypeRarityTag_C_ExecuteUbergraph_AthenaRewardItemTypeRarityTag, K2Node_Event_SeriesData) == 0x000008, "Member 'AthenaRewardItemTypeRarityTag_C_ExecuteUbergraph_AthenaRewardItemTypeRarityTag::K2Node_Event_SeriesData' has a wrong offset!");
static_assert(offsetof(AthenaRewardItemTypeRarityTag_C_ExecuteUbergraph_AthenaRewardItemTypeRarityTag, K2Node_Event_RarityData) == 0x000010, "Member 'AthenaRewardItemTypeRarityTag_C_ExecuteUbergraph_AthenaRewardItemTypeRarityTag::K2Node_Event_RarityData' has a wrong offset!");
static_assert(offsetof(AthenaRewardItemTypeRarityTag_C_ExecuteUbergraph_AthenaRewardItemTypeRarityTag, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000090, "Member 'AthenaRewardItemTypeRarityTag_C_ExecuteUbergraph_AthenaRewardItemTypeRarityTag::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaRewardItemTypeRarityTag_C_ExecuteUbergraph_AthenaRewardItemTypeRarityTag, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000098, "Member 'AthenaRewardItemTypeRarityTag_C_ExecuteUbergraph_AthenaRewardItemTypeRarityTag::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");

struct AthenaRewardItemTypeRarityTag_C_OnInitializeRarityWithoutSeries final
{
public:
	struct FFortRarityItemData                    RarityData;
};
static_assert(alignof(AthenaRewardItemTypeRarityTag_C_OnInitializeRarityWithoutSeries) == 0x000008, "Wrong alignment on AthenaRewardItemTypeRarityTag_C_OnInitializeRarityWithoutSeries");
static_assert(sizeof(AthenaRewardItemTypeRarityTag_C_OnInitializeRarityWithoutSeries) == 0x000080, "Wrong size on AthenaRewardItemTypeRarityTag_C_OnInitializeRarityWithoutSeries");
static_assert(offsetof(AthenaRewardItemTypeRarityTag_C_OnInitializeRarityWithoutSeries, RarityData) == 0x000000, "Member 'AthenaRewardItemTypeRarityTag_C_OnInitializeRarityWithoutSeries::RarityData' has a wrong offset!");

struct AthenaRewardItemTypeRarityTag_C_OnInitializeRarityWithSeries final
{
public:
	const class UFortItemSeriesDefinition*        SeriesData;
};
static_assert(alignof(AthenaRewardItemTypeRarityTag_C_OnInitializeRarityWithSeries) == 0x000008, "Wrong alignment on AthenaRewardItemTypeRarityTag_C_OnInitializeRarityWithSeries");
static_assert(sizeof(AthenaRewardItemTypeRarityTag_C_OnInitializeRarityWithSeries) == 0x000008, "Wrong size on AthenaRewardItemTypeRarityTag_C_OnInitializeRarityWithSeries");
static_assert(offsetof(AthenaRewardItemTypeRarityTag_C_OnInitializeRarityWithSeries, SeriesData) == 0x000000, "Member 'AthenaRewardItemTypeRarityTag_C_OnInitializeRarityWithSeries::SeriesData' has a wrong offset!");

struct AthenaRewardItemTypeRarityTag_C_OverrideTypeTextColor final
{
public:
	struct FSlateColor                            InColorAndOpacity;
};
static_assert(alignof(AthenaRewardItemTypeRarityTag_C_OverrideTypeTextColor) == 0x000004, "Wrong alignment on AthenaRewardItemTypeRarityTag_C_OverrideTypeTextColor");
static_assert(sizeof(AthenaRewardItemTypeRarityTag_C_OverrideTypeTextColor) == 0x000014, "Wrong size on AthenaRewardItemTypeRarityTag_C_OverrideTypeTextColor");
static_assert(offsetof(AthenaRewardItemTypeRarityTag_C_OverrideTypeTextColor, InColorAndOpacity) == 0x000000, "Member 'AthenaRewardItemTypeRarityTag_C_OverrideTypeTextColor::InColorAndOpacity' has a wrong offset!");

}
