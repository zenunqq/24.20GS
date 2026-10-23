#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UItemSeriesOrRarity_C final : public UUserWidget
{
public:
	class UWidgetSwitcher*                        RarityOrSeriesSwitcher;
	class UCommonTextBlock*                       RarityTextBlock;
	class UBorder*                                SeriesBorder;
	class UCommonTextBlock*                       SeriesTextBlock;
	bool                                          OnlyShowSeries;

public:
	void UpdateItemDefinition(class UFortItemDefinition* ItemDefinition);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemSeriesOrRarity_C">();
	}
	static class UItemSeriesOrRarity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemSeriesOrRarity_C>();
	}
};
static_assert(alignof(UItemSeriesOrRarity_C) == 0x000008, "Wrong alignment on UItemSeriesOrRarity_C");
static_assert(sizeof(UItemSeriesOrRarity_C) == 0x000290, "Wrong size on UItemSeriesOrRarity_C");
static_assert(offsetof(UItemSeriesOrRarity_C, RarityOrSeriesSwitcher) == 0x000268, "Member 'UItemSeriesOrRarity_C::RarityOrSeriesSwitcher' has a wrong offset!");
static_assert(offsetof(UItemSeriesOrRarity_C, RarityTextBlock) == 0x000270, "Member 'UItemSeriesOrRarity_C::RarityTextBlock' has a wrong offset!");
static_assert(offsetof(UItemSeriesOrRarity_C, SeriesBorder) == 0x000278, "Member 'UItemSeriesOrRarity_C::SeriesBorder' has a wrong offset!");
static_assert(offsetof(UItemSeriesOrRarity_C, SeriesTextBlock) == 0x000280, "Member 'UItemSeriesOrRarity_C::SeriesTextBlock' has a wrong offset!");
static_assert(offsetof(UItemSeriesOrRarity_C, OnlyShowSeries) == 0x000288, "Member 'UItemSeriesOrRarity_C::OnlyShowSeries' has a wrong offset!");

}
