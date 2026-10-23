#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UAthenaRewardItemTypeRarityTag_C final : public UAthenaRewardItemTypeRarityTag
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UBorder*                                Border_ItemType;
	struct FLinearColor                           ItemTypeTextColor;

public:
	void ExecuteUbergraph_AthenaRewardItemTypeRarityTag(int32 EntryPoint);
	void OnInitializeRarityWithoutSeries(const struct FFortRarityItemData& RarityData);
	void OnInitializeRarityWithSeries(const class UFortItemSeriesDefinition* SeriesData);
	void OverrideTypeTextColor(const struct FSlateColor& InColorAndOpacity);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaRewardItemTypeRarityTag_C">();
	}
	static class UAthenaRewardItemTypeRarityTag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaRewardItemTypeRarityTag_C>();
	}
};
static_assert(alignof(UAthenaRewardItemTypeRarityTag_C) == 0x000008, "Wrong alignment on UAthenaRewardItemTypeRarityTag_C");
static_assert(sizeof(UAthenaRewardItemTypeRarityTag_C) == 0x0002D8, "Wrong size on UAthenaRewardItemTypeRarityTag_C");
static_assert(offsetof(UAthenaRewardItemTypeRarityTag_C, UberGraphFrame) == 0x0002B8, "Member 'UAthenaRewardItemTypeRarityTag_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaRewardItemTypeRarityTag_C, Border_ItemType) == 0x0002C0, "Member 'UAthenaRewardItemTypeRarityTag_C::Border_ItemType' has a wrong offset!");
static_assert(offsetof(UAthenaRewardItemTypeRarityTag_C, ItemTypeTextColor) == 0x0002C8, "Member 'UAthenaRewardItemTypeRarityTag_C::ItemTypeTextColor' has a wrong offset!");

}
