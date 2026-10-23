#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UAthenaSeasonItemRewardIcon_C final : public UAthenaSeasonItemRewardIcon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       AdjustRewardFillSize;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       HoverState;
	class UImage*                                 Image_BattlePassIcon;
	class UOverlay*                               Image_RewardContainer;
	class USizeBox*                               RewardContainer_Size;
	class UFortLazyImage*                         RewardTile;
	class USizeBox*                               SizeBox_BattlePassIcon;
	class USizeBox*                               SizeBox_Styles;
	class UOverlay*                               Styles_Count;
	class UImage*                                 Styles_Backing;
	class UCommonTextBlock*                       StylesLabel;
	class UBorder*                                StylesWrapper;
	class UCommonTextBlock*                       Text_Count;
	double                                        Width;
	double                                        Height;
	bool                                          ShowStyle;
	bool                                          ShowCount;
	uint8                                         Pad_2F2[0x6];
	double                                        BattlePassIconSize;
	bool                                          BattlePassIconEnabled;
	uint8                                         Pad_301[0x7];
	double                                        BattlePassIconPositionOffsetMultiplier;
	double                                        FillSize;
	double                                        DesiredPixelSize;
	bool                                          bIsEmoji;

public:
	void DeselectedAnim();
	void ExecuteUbergraph_AthenaSeasonItemRewardIcon(int32 EntryPoint);
	void HandleMultipleRewardSelctedAnim(bool bLeftRewardSelected);
	void Hover();
	void OnInitializeReward(const class UFortItem* RewardItem, const TSoftObjectPtr<class UTexture2D>& RewardTexture, bool bHasAdditionalStylesToDisplay, int32 RewardLevel, bool bRequiresBattlePass);
	void OnInitializeSeriesReward(const class UFortItemSeriesDefinition* SeriesData);
	void PreConstruct(bool IsDesignTime);
	void SelectedAnim();
	void SetRarityColors(const struct FLinearColor& Color1, const struct FLinearColor& Color2, const struct FLinearColor& Color3, const struct FLinearColor& Color4, const struct FLinearColor& Color5);
	void SetupItemCardStyle(class UFortItem* RewardItem);
	void Unhover();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaSeasonItemRewardIcon_C">();
	}
	static class UAthenaSeasonItemRewardIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaSeasonItemRewardIcon_C>();
	}
};
static_assert(alignof(UAthenaSeasonItemRewardIcon_C) == 0x000008, "Wrong alignment on UAthenaSeasonItemRewardIcon_C");
static_assert(sizeof(UAthenaSeasonItemRewardIcon_C) == 0x000328, "Wrong size on UAthenaSeasonItemRewardIcon_C");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, UberGraphFrame) == 0x000268, "Member 'UAthenaSeasonItemRewardIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, AdjustRewardFillSize) == 0x000270, "Member 'UAthenaSeasonItemRewardIcon_C::AdjustRewardFillSize' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, Selected) == 0x000278, "Member 'UAthenaSeasonItemRewardIcon_C::Selected' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, HoverState) == 0x000280, "Member 'UAthenaSeasonItemRewardIcon_C::HoverState' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, Image_BattlePassIcon) == 0x000288, "Member 'UAthenaSeasonItemRewardIcon_C::Image_BattlePassIcon' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, Image_RewardContainer) == 0x000290, "Member 'UAthenaSeasonItemRewardIcon_C::Image_RewardContainer' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, RewardContainer_Size) == 0x000298, "Member 'UAthenaSeasonItemRewardIcon_C::RewardContainer_Size' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, RewardTile) == 0x0002A0, "Member 'UAthenaSeasonItemRewardIcon_C::RewardTile' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, SizeBox_BattlePassIcon) == 0x0002A8, "Member 'UAthenaSeasonItemRewardIcon_C::SizeBox_BattlePassIcon' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, SizeBox_Styles) == 0x0002B0, "Member 'UAthenaSeasonItemRewardIcon_C::SizeBox_Styles' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, Styles_Count) == 0x0002B8, "Member 'UAthenaSeasonItemRewardIcon_C::Styles_Count' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, Styles_Backing) == 0x0002C0, "Member 'UAthenaSeasonItemRewardIcon_C::Styles_Backing' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, StylesLabel) == 0x0002C8, "Member 'UAthenaSeasonItemRewardIcon_C::StylesLabel' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, StylesWrapper) == 0x0002D0, "Member 'UAthenaSeasonItemRewardIcon_C::StylesWrapper' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, Text_Count) == 0x0002D8, "Member 'UAthenaSeasonItemRewardIcon_C::Text_Count' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, Width) == 0x0002E0, "Member 'UAthenaSeasonItemRewardIcon_C::Width' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, Height) == 0x0002E8, "Member 'UAthenaSeasonItemRewardIcon_C::Height' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, ShowStyle) == 0x0002F0, "Member 'UAthenaSeasonItemRewardIcon_C::ShowStyle' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, ShowCount) == 0x0002F1, "Member 'UAthenaSeasonItemRewardIcon_C::ShowCount' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, BattlePassIconSize) == 0x0002F8, "Member 'UAthenaSeasonItemRewardIcon_C::BattlePassIconSize' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, BattlePassIconEnabled) == 0x000300, "Member 'UAthenaSeasonItemRewardIcon_C::BattlePassIconEnabled' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, BattlePassIconPositionOffsetMultiplier) == 0x000308, "Member 'UAthenaSeasonItemRewardIcon_C::BattlePassIconPositionOffsetMultiplier' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, FillSize) == 0x000310, "Member 'UAthenaSeasonItemRewardIcon_C::FillSize' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, DesiredPixelSize) == 0x000318, "Member 'UAthenaSeasonItemRewardIcon_C::DesiredPixelSize' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonItemRewardIcon_C, bIsEmoji) == 0x000320, "Member 'UAthenaSeasonItemRewardIcon_C::bIsEmoji' has a wrong offset!");

}
