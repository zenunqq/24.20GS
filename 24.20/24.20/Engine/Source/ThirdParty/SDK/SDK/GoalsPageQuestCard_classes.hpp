#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UGoalsPageQuestCard_C final : public UAthenaGoalsPageQuestCard
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Unselectable;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UImage*                                 CardBackground;
	class UImage*                                 Image_Fade;
	class UImage*                                 Image_header_Bg;
	class UFortLazyImage*                         LazyImage_Icon;
	class UCommonBorder*                          NewBang;
	class UOverlay*                               Overlay_Icon;
	class UBorder*                                Panel_BP;
	class USizeBox*                               Panel_Root;
	class UCommonTextBlock*                       Text_Header;
	class UCommonTextBlock*                       Text_Icon;
	class UCommonTextBlock*                       Text_SubText;
	class UImage*                                 TimerIcon;
	int32                                         Current_Tier;
	uint8                                         Pad_344[0x4];
	class UTexture2D*                             Tier_Medal;
	class UObject*                                Font_Material;
	class UObject*                                Outline_Material;
	bool                                          Card_Is_Selectable;
	bool                                          bNeedsReset;

public:
	void ExecuteUbergraph_GoalsPageQuestCard(int32 EntryPoint);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnTimerSet(const EAthenaChallengeTimerState TimerState);
	void PopulateBattlePassRequirement(const bool bBattlePassRequired);
	void PopulateHeader(const struct FBundleGoalCardDisplayData& GoalCardDisplayData);
	void PopulateHeaderText(const class FText& Text, const struct FLinearColor& Color);
	void PopulateIcon(TSoftObjectPtr<class UObject> Icon, int32 MilestoneTier);
	void PopulateIsSelectable(const bool bCardIsSelectable);
	void PopulateSubHeaderText(const class FText& Text, int32 MilestoneTier, const struct FLinearColor& Color);
	void Reset();
	void SetIsSelected(bool IsSelected);
	void SetTimerStyling(EAthenaChallengeTimerState TimerState);
	void ShowNewBang(bool bEnabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GoalsPageQuestCard_C">();
	}
	static class UGoalsPageQuestCard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGoalsPageQuestCard_C>();
	}
};
static_assert(alignof(UGoalsPageQuestCard_C) == 0x000008, "Wrong alignment on UGoalsPageQuestCard_C");
static_assert(sizeof(UGoalsPageQuestCard_C) == 0x000368, "Wrong size on UGoalsPageQuestCard_C");
static_assert(offsetof(UGoalsPageQuestCard_C, UberGraphFrame) == 0x0002C0, "Member 'UGoalsPageQuestCard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCard_C, Unselectable) == 0x0002C8, "Member 'UGoalsPageQuestCard_C::Unselectable' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCard_C, Selected) == 0x0002D0, "Member 'UGoalsPageQuestCard_C::Selected' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCard_C, Hovered) == 0x0002D8, "Member 'UGoalsPageQuestCard_C::Hovered' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCard_C, CardBackground) == 0x0002E0, "Member 'UGoalsPageQuestCard_C::CardBackground' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCard_C, Image_Fade) == 0x0002E8, "Member 'UGoalsPageQuestCard_C::Image_Fade' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCard_C, Image_header_Bg) == 0x0002F0, "Member 'UGoalsPageQuestCard_C::Image_header_Bg' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCard_C, LazyImage_Icon) == 0x0002F8, "Member 'UGoalsPageQuestCard_C::LazyImage_Icon' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCard_C, NewBang) == 0x000300, "Member 'UGoalsPageQuestCard_C::NewBang' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCard_C, Overlay_Icon) == 0x000308, "Member 'UGoalsPageQuestCard_C::Overlay_Icon' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCard_C, Panel_BP) == 0x000310, "Member 'UGoalsPageQuestCard_C::Panel_BP' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCard_C, Panel_Root) == 0x000318, "Member 'UGoalsPageQuestCard_C::Panel_Root' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCard_C, Text_Header) == 0x000320, "Member 'UGoalsPageQuestCard_C::Text_Header' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCard_C, Text_Icon) == 0x000328, "Member 'UGoalsPageQuestCard_C::Text_Icon' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCard_C, Text_SubText) == 0x000330, "Member 'UGoalsPageQuestCard_C::Text_SubText' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCard_C, TimerIcon) == 0x000338, "Member 'UGoalsPageQuestCard_C::TimerIcon' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCard_C, Current_Tier) == 0x000340, "Member 'UGoalsPageQuestCard_C::Current_Tier' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCard_C, Tier_Medal) == 0x000348, "Member 'UGoalsPageQuestCard_C::Tier_Medal' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCard_C, Font_Material) == 0x000350, "Member 'UGoalsPageQuestCard_C::Font_Material' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCard_C, Outline_Material) == 0x000358, "Member 'UGoalsPageQuestCard_C::Outline_Material' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCard_C, Card_Is_Selectable) == 0x000360, "Member 'UGoalsPageQuestCard_C::Card_Is_Selectable' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCard_C, bNeedsReset) == 0x000361, "Member 'UGoalsPageQuestCard_C::bNeedsReset' has a wrong offset!");

}
