#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UTournamentEventWindowDetails_C final : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       PayoutHover;
	class UWidgetAnimation*                       LeaderboardHover;
	class UWidgetAnimation*                       RefreshData;
	class UWidgetAnimation*                       RefreshTime;
	class UWidgetAnimation*                       RefreshDate;
	class UBorder*                                Border_SubheaderBG;
	class UEventsSimpleButton_C*                  Button_Leaderboard;
	class UEventsSimpleButton_C*                  Button_Payout;
	class UCommonBorder*                          CommonBorder_LeaderboardButtonBG;
	class UCommonBorder*                          CommonBorder_PayoutButtonBG;
	class UCommonBorder*                          CommonBorder_StartingScore;
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_isFuture;
	class UEventScoreRow_C*                       EliminationsInfo;
	class UCommonTextBlock*                       EventDateText;
	class UHorizontalBox*                         HorizontalBox_SquadInfoContainer;
	class UEventScoreBigStat_C*                   MatchesPlayedInfo;
	class UCommonTextBlock*                       MatchTypeText;
	class UOverlay*                               Overlay_LeaderboardButton;
	class UOverlay*                               Overlay_PayoutButton;
	class UEventScoreRow_C*                       PlacementInfo;
	class UEventScoreBigStat_C*                   PointsScoredInfo;
	class URichTextBlock*                         RichTextBlock_OtherReason;
	class UCommonTextBlock*                       Text_BusFare;
	class UCommonTextBlock*                       TournamentContextText;
	class UEventScoreRow_C*                       VictoryRoyaleInfo;
	TMulticastInlineDelegate<void(const class FString& TournamentId, const class FString& EventId)> ViewLeaderboard;
	bool                                          AllowLeaderboardAccess;
	uint8                                         Pad_7F9[0x7];
	TMulticastInlineDelegate<void(const class FString& EventWindowId, const class FString& EventId)> ViewPayouts;

public:
	void BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__Button_Payout_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__Button_Payout_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__Button_Payout_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void EventColorize();
	void ExecuteUbergraph_TournamentEventWindowDetails(int32 EntryPoint);
	void RefreshDataBP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TournamentEventWindowDetails_C">();
	}
	static class UTournamentEventWindowDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTournamentEventWindowDetails_C>();
	}
};
static_assert(alignof(UTournamentEventWindowDetails_C) == 0x000008, "Wrong alignment on UTournamentEventWindowDetails_C");
static_assert(sizeof(UTournamentEventWindowDetails_C) == 0x000810, "Wrong size on UTournamentEventWindowDetails_C");
static_assert(offsetof(UTournamentEventWindowDetails_C, UberGraphFrame) == 0x000718, "Member 'UTournamentEventWindowDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, PayoutHover) == 0x000720, "Member 'UTournamentEventWindowDetails_C::PayoutHover' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, LeaderboardHover) == 0x000728, "Member 'UTournamentEventWindowDetails_C::LeaderboardHover' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, RefreshData) == 0x000730, "Member 'UTournamentEventWindowDetails_C::RefreshData' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, RefreshTime) == 0x000738, "Member 'UTournamentEventWindowDetails_C::RefreshTime' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, RefreshDate) == 0x000740, "Member 'UTournamentEventWindowDetails_C::RefreshDate' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, Border_SubheaderBG) == 0x000748, "Member 'UTournamentEventWindowDetails_C::Border_SubheaderBG' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, Button_Leaderboard) == 0x000750, "Member 'UTournamentEventWindowDetails_C::Button_Leaderboard' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, Button_Payout) == 0x000758, "Member 'UTournamentEventWindowDetails_C::Button_Payout' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, CommonBorder_LeaderboardButtonBG) == 0x000760, "Member 'UTournamentEventWindowDetails_C::CommonBorder_LeaderboardButtonBG' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, CommonBorder_PayoutButtonBG) == 0x000768, "Member 'UTournamentEventWindowDetails_C::CommonBorder_PayoutButtonBG' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, CommonBorder_StartingScore) == 0x000770, "Member 'UTournamentEventWindowDetails_C::CommonBorder_StartingScore' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, CommonWidgetSwitcher_isFuture) == 0x000778, "Member 'UTournamentEventWindowDetails_C::CommonWidgetSwitcher_isFuture' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, EliminationsInfo) == 0x000780, "Member 'UTournamentEventWindowDetails_C::EliminationsInfo' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, EventDateText) == 0x000788, "Member 'UTournamentEventWindowDetails_C::EventDateText' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, HorizontalBox_SquadInfoContainer) == 0x000790, "Member 'UTournamentEventWindowDetails_C::HorizontalBox_SquadInfoContainer' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, MatchesPlayedInfo) == 0x000798, "Member 'UTournamentEventWindowDetails_C::MatchesPlayedInfo' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, MatchTypeText) == 0x0007A0, "Member 'UTournamentEventWindowDetails_C::MatchTypeText' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, Overlay_LeaderboardButton) == 0x0007A8, "Member 'UTournamentEventWindowDetails_C::Overlay_LeaderboardButton' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, Overlay_PayoutButton) == 0x0007B0, "Member 'UTournamentEventWindowDetails_C::Overlay_PayoutButton' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, PlacementInfo) == 0x0007B8, "Member 'UTournamentEventWindowDetails_C::PlacementInfo' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, PointsScoredInfo) == 0x0007C0, "Member 'UTournamentEventWindowDetails_C::PointsScoredInfo' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, RichTextBlock_OtherReason) == 0x0007C8, "Member 'UTournamentEventWindowDetails_C::RichTextBlock_OtherReason' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, Text_BusFare) == 0x0007D0, "Member 'UTournamentEventWindowDetails_C::Text_BusFare' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, TournamentContextText) == 0x0007D8, "Member 'UTournamentEventWindowDetails_C::TournamentContextText' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, VictoryRoyaleInfo) == 0x0007E0, "Member 'UTournamentEventWindowDetails_C::VictoryRoyaleInfo' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, ViewLeaderboard) == 0x0007E8, "Member 'UTournamentEventWindowDetails_C::ViewLeaderboard' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, AllowLeaderboardAccess) == 0x0007F8, "Member 'UTournamentEventWindowDetails_C::AllowLeaderboardAccess' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, ViewPayouts) == 0x000800, "Member 'UTournamentEventWindowDetails_C::ViewPayouts' has a wrong offset!");

}
