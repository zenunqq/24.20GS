#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UEventLeaderboardEntryDetails_C final : public UFortLeaderboardEntryDetails
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       MatchHistoryHover;
	class UWidgetAnimation*                       ProfileHover;
	class UWidgetAnimation*                       Intro;
	class UIconTextButton_C*                      Button_MatchHistory;
	class UIconTextButton_C*                      Button_Profiles;
	class UCommonBorder*                          CommonBorder_ElimPointer;
	class UCommonBorder*                          CommonBorder_PlacementPointer;
	class UCommonBorder*                          CommonBorderMainContent;
	class UCommonTextBlock*                       CommonTextBlock_1;
	class UCommonTextBlock*                       CommonTextBlock_MatchHistoryTextMatchHistory;
	class UCommonTextBlock*                       CommonTextBlock_Placement;
	class UCommonTextBlock*                       CommonTextBlock_PlayerNames;
	class UCommonTextBlock*                       CommonTextBlock_PlayerNamesTitle;
	class UCommonTextBlock*                       CommonTextBlock_ProfileText;
	class UCommonTextBlock*                       CommonTextBlock_Score;
	class UCommonTextBlock*                       CommonTextBlock_Title;
	class UImage*                                 Image_31;
	class UImage*                                 Image_32;
	class UImage*                                 Image_57;
	class UImage*                                 Image_58;
	class UImage*                                 Image_93;
	class UImage*                                 Image_94;
	class UImage*                                 Image_DetailsBG;
	class UImage*                                 Image_ElimIcon;
	class UImage*                                 Image_LiveMatch;
	class UImage*                                 Image_Pie;
	class UImage*                                 Image_PieShadow;
	class UImage*                                 Image_PlacementIcon;
	class UImage*                                 Image_PlayernameBG;
	class UImage*                                 Image_PlayernameBG_Shadow;
	class UOverlay*                               Overlay_Placement;
	class UOverlay*                               Overlay_PointBreakdown;
	class UOverlay*                               Overlay_TeamMembers;
	class UEventLeaderboardDetails_Stat_C*        Stat_AveragePlacement;
	class UEventLeaderboardDetails_Stat_C*        Stat_AveragePointsPerMatch;
	class UEventLeaderboardDetails_Stat_C*        Stat_EliminationsOrAltStat;
	class UEventLeaderboardDetails_Stat_C*        Stat_MatchesPlayed;
	class UEventLeaderboardDetails_Stat_C*        Stat_VictoryRoyales;
	class UCommonTextBlock*                       Text_EliminationPointInfo;
	class UCommonTextBlock*                       Text_PlacementPointInfo;
	class UVerticalBox*                           VerticalBox_Placement;
	class UVerticalBox*                           VerticalBox_StatContainer;
	class UFortEventLeaderboardEntryData*         LeaderboardEntryData;
	TMulticastInlineDelegate<void()>              ProfileSelectedFromSelector;
	class UEventPlayerStatProfileSelector_C*      ProfileSelectorInstance;
	class FString                                 TournamentId;
	class FString                                 EventWindowId;
	struct FFortTournamentDisplayInfo             CurrentDisplayInfo;
	class FString                                 LeaderboardInstanceId;
	class FString                                 LeaderboardGroupingKey;
	class FString                                 AltLeaderboardTrackedStatName;
	bool                                          bHasAltLeaderboardTrackedStat;
	uint8                                         Pad_631[0x3];
	int32                                         ScoredPointsForPie;

public:
	void BndEvt__Button_MatchHistory_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__Button_MatchHistory_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__Button_WatchLive_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void Construct();
	void EventColorize(const struct FFortTournamentDisplayInfo& TournamentDisplayInfo);
	void EventIntro();
	void ExecuteUbergraph_EventLeaderboardEntryDetails(int32 EntryPoint);
	void LeaderboardEntryDoubleClicked();
	void Set_Leaderboard_Key(const class FString& LeaderboardInstanceId_0, const class FString& LeaderboardGroupingId);
	void Set_Points_Breakdown(ETournamentDisplayType EventType);
	void Set_Stats_Rows(ETournamentDisplayType EventType);
	void SetTournamentValues(const class FString& InTournamentId, const class FString& InEventWindowId);
	void Show_Details(class UFortEventLeaderboardEntryData* EntryData, ETournamentDisplayType EventType);
	void Update_Alt_Leaderboard_Tracked_Stat();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventLeaderboardEntryDetails_C">();
	}
	static class UEventLeaderboardEntryDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventLeaderboardEntryDetails_C>();
	}
};
static_assert(alignof(UEventLeaderboardEntryDetails_C) == 0x000008, "Wrong alignment on UEventLeaderboardEntryDetails_C");
static_assert(sizeof(UEventLeaderboardEntryDetails_C) == 0x000638, "Wrong size on UEventLeaderboardEntryDetails_C");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, UberGraphFrame) == 0x000298, "Member 'UEventLeaderboardEntryDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, MatchHistoryHover) == 0x0002A0, "Member 'UEventLeaderboardEntryDetails_C::MatchHistoryHover' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, ProfileHover) == 0x0002A8, "Member 'UEventLeaderboardEntryDetails_C::ProfileHover' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Intro) == 0x0002B0, "Member 'UEventLeaderboardEntryDetails_C::Intro' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Button_MatchHistory) == 0x0002B8, "Member 'UEventLeaderboardEntryDetails_C::Button_MatchHistory' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Button_Profiles) == 0x0002C0, "Member 'UEventLeaderboardEntryDetails_C::Button_Profiles' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, CommonBorder_ElimPointer) == 0x0002C8, "Member 'UEventLeaderboardEntryDetails_C::CommonBorder_ElimPointer' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, CommonBorder_PlacementPointer) == 0x0002D0, "Member 'UEventLeaderboardEntryDetails_C::CommonBorder_PlacementPointer' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, CommonBorderMainContent) == 0x0002D8, "Member 'UEventLeaderboardEntryDetails_C::CommonBorderMainContent' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, CommonTextBlock_1) == 0x0002E0, "Member 'UEventLeaderboardEntryDetails_C::CommonTextBlock_1' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, CommonTextBlock_MatchHistoryTextMatchHistory) == 0x0002E8, "Member 'UEventLeaderboardEntryDetails_C::CommonTextBlock_MatchHistoryTextMatchHistory' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, CommonTextBlock_Placement) == 0x0002F0, "Member 'UEventLeaderboardEntryDetails_C::CommonTextBlock_Placement' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, CommonTextBlock_PlayerNames) == 0x0002F8, "Member 'UEventLeaderboardEntryDetails_C::CommonTextBlock_PlayerNames' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, CommonTextBlock_PlayerNamesTitle) == 0x000300, "Member 'UEventLeaderboardEntryDetails_C::CommonTextBlock_PlayerNamesTitle' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, CommonTextBlock_ProfileText) == 0x000308, "Member 'UEventLeaderboardEntryDetails_C::CommonTextBlock_ProfileText' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, CommonTextBlock_Score) == 0x000310, "Member 'UEventLeaderboardEntryDetails_C::CommonTextBlock_Score' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, CommonTextBlock_Title) == 0x000318, "Member 'UEventLeaderboardEntryDetails_C::CommonTextBlock_Title' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Image_31) == 0x000320, "Member 'UEventLeaderboardEntryDetails_C::Image_31' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Image_32) == 0x000328, "Member 'UEventLeaderboardEntryDetails_C::Image_32' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Image_57) == 0x000330, "Member 'UEventLeaderboardEntryDetails_C::Image_57' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Image_58) == 0x000338, "Member 'UEventLeaderboardEntryDetails_C::Image_58' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Image_93) == 0x000340, "Member 'UEventLeaderboardEntryDetails_C::Image_93' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Image_94) == 0x000348, "Member 'UEventLeaderboardEntryDetails_C::Image_94' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Image_DetailsBG) == 0x000350, "Member 'UEventLeaderboardEntryDetails_C::Image_DetailsBG' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Image_ElimIcon) == 0x000358, "Member 'UEventLeaderboardEntryDetails_C::Image_ElimIcon' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Image_LiveMatch) == 0x000360, "Member 'UEventLeaderboardEntryDetails_C::Image_LiveMatch' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Image_Pie) == 0x000368, "Member 'UEventLeaderboardEntryDetails_C::Image_Pie' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Image_PieShadow) == 0x000370, "Member 'UEventLeaderboardEntryDetails_C::Image_PieShadow' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Image_PlacementIcon) == 0x000378, "Member 'UEventLeaderboardEntryDetails_C::Image_PlacementIcon' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Image_PlayernameBG) == 0x000380, "Member 'UEventLeaderboardEntryDetails_C::Image_PlayernameBG' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Image_PlayernameBG_Shadow) == 0x000388, "Member 'UEventLeaderboardEntryDetails_C::Image_PlayernameBG_Shadow' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Overlay_Placement) == 0x000390, "Member 'UEventLeaderboardEntryDetails_C::Overlay_Placement' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Overlay_PointBreakdown) == 0x000398, "Member 'UEventLeaderboardEntryDetails_C::Overlay_PointBreakdown' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Overlay_TeamMembers) == 0x0003A0, "Member 'UEventLeaderboardEntryDetails_C::Overlay_TeamMembers' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Stat_AveragePlacement) == 0x0003A8, "Member 'UEventLeaderboardEntryDetails_C::Stat_AveragePlacement' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Stat_AveragePointsPerMatch) == 0x0003B0, "Member 'UEventLeaderboardEntryDetails_C::Stat_AveragePointsPerMatch' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Stat_EliminationsOrAltStat) == 0x0003B8, "Member 'UEventLeaderboardEntryDetails_C::Stat_EliminationsOrAltStat' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Stat_MatchesPlayed) == 0x0003C0, "Member 'UEventLeaderboardEntryDetails_C::Stat_MatchesPlayed' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Stat_VictoryRoyales) == 0x0003C8, "Member 'UEventLeaderboardEntryDetails_C::Stat_VictoryRoyales' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Text_EliminationPointInfo) == 0x0003D0, "Member 'UEventLeaderboardEntryDetails_C::Text_EliminationPointInfo' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, Text_PlacementPointInfo) == 0x0003D8, "Member 'UEventLeaderboardEntryDetails_C::Text_PlacementPointInfo' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, VerticalBox_Placement) == 0x0003E0, "Member 'UEventLeaderboardEntryDetails_C::VerticalBox_Placement' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, VerticalBox_StatContainer) == 0x0003E8, "Member 'UEventLeaderboardEntryDetails_C::VerticalBox_StatContainer' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, LeaderboardEntryData) == 0x0003F0, "Member 'UEventLeaderboardEntryDetails_C::LeaderboardEntryData' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, ProfileSelectedFromSelector) == 0x0003F8, "Member 'UEventLeaderboardEntryDetails_C::ProfileSelectedFromSelector' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, ProfileSelectorInstance) == 0x000408, "Member 'UEventLeaderboardEntryDetails_C::ProfileSelectorInstance' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, TournamentId) == 0x000410, "Member 'UEventLeaderboardEntryDetails_C::TournamentId' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, EventWindowId) == 0x000420, "Member 'UEventLeaderboardEntryDetails_C::EventWindowId' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, CurrentDisplayInfo) == 0x000430, "Member 'UEventLeaderboardEntryDetails_C::CurrentDisplayInfo' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, LeaderboardInstanceId) == 0x000600, "Member 'UEventLeaderboardEntryDetails_C::LeaderboardInstanceId' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, LeaderboardGroupingKey) == 0x000610, "Member 'UEventLeaderboardEntryDetails_C::LeaderboardGroupingKey' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, AltLeaderboardTrackedStatName) == 0x000620, "Member 'UEventLeaderboardEntryDetails_C::AltLeaderboardTrackedStatName' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, bHasAltLeaderboardTrackedStat) == 0x000630, "Member 'UEventLeaderboardEntryDetails_C::bHasAltLeaderboardTrackedStat' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntryDetails_C, ScoredPointsForPie) == 0x000634, "Member 'UEventLeaderboardEntryDetails_C::ScoredPointsForPie' has a wrong offset!");

}
