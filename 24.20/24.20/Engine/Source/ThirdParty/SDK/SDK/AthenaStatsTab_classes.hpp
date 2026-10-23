#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UAthenaStatsTab_C final : public UAthenaStatsScreenBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Entrance;
	class UWidgetAnimation*                       Tabs_Paginate;
	class UCommonTextBlock*                       AccountLevelLabel;
	class UCloseButton_C*                         CloseButton;
	class UImage*                                 CloseIcon;
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_0;
	class UImage*                                 Divider;
	class UImage*                                 Divider1;
	class UImage*                                 Divider2;
	class UCommonTextBlock*                       FriendMatchXpBoostPointsLabel;
	class UHorizontalBox*                         HBoxNoStats;
	class UCommonWidgetSwitcherLegacy*            HiddenSwitcher;
	class UHorizontalBox*                         LastUpdatedTimeBox;
	class UCommonWidgetSwitcherLegacy*            MainStatWidgetSwitcher;
	class UCommonTextBlock*                       MatchXpBoostPointsLabel;
	class UPanelButton_C*                         MobileCloseButton_Disabled;
	class UCommonTextBlock*                       NoStatsText;
	class UOverlay*                               OverlayCloseButton_Disabled;
	class UPlayerRankEmblem_C*                    PlayerRankEmblem;
	class UImage*                                 ProgressSpinner;
	class UCommonTextBlock*                       SeasonLabel;
	class UHorizontalBox*                         UpdatingBox;
	class UVerticalBox*                           VBoxbannerstats;
	class UVerticalBox*                           VBoxStats;
	struct FDataTableRowHandle                    Back_Action;

public:
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__MobileCloseButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(class FName TabId);
	void BP_OnActivated();
	void Construct();
	void ExecuteUbergraph_AthenaStatsTab(int32 EntryPoint);
	class FText GetAccountLevelText();
	void GetFriendMatchXpBoostText(class FText* Result);
	void HandleBack(bool* PassThrough);
	void Init_Back_Action();
	void OnInputMethodChanged_Event_0(ECommonInputType bNewInputType);
	void OnQueryFinished(bool bWasSuccessful, bool bHasStatsToDisplay);
	void OnQueryStarted();
	void SetPlatformButtonText(const class FText& PlatformButtonText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaStatsTab_C">();
	}
	static class UAthenaStatsTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaStatsTab_C>();
	}
};
static_assert(alignof(UAthenaStatsTab_C) == 0x000008, "Wrong alignment on UAthenaStatsTab_C");
static_assert(sizeof(UAthenaStatsTab_C) == 0x0007A0, "Wrong size on UAthenaStatsTab_C");
static_assert(offsetof(UAthenaStatsTab_C, UberGraphFrame) == 0x0006C8, "Member 'UAthenaStatsTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, Entrance) == 0x0006D0, "Member 'UAthenaStatsTab_C::Entrance' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, Tabs_Paginate) == 0x0006D8, "Member 'UAthenaStatsTab_C::Tabs_Paginate' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, AccountLevelLabel) == 0x0006E0, "Member 'UAthenaStatsTab_C::AccountLevelLabel' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, CloseButton) == 0x0006E8, "Member 'UAthenaStatsTab_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, CloseIcon) == 0x0006F0, "Member 'UAthenaStatsTab_C::CloseIcon' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, CommonWidgetSwitcher_0) == 0x0006F8, "Member 'UAthenaStatsTab_C::CommonWidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, Divider) == 0x000700, "Member 'UAthenaStatsTab_C::Divider' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, Divider1) == 0x000708, "Member 'UAthenaStatsTab_C::Divider1' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, Divider2) == 0x000710, "Member 'UAthenaStatsTab_C::Divider2' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, FriendMatchXpBoostPointsLabel) == 0x000718, "Member 'UAthenaStatsTab_C::FriendMatchXpBoostPointsLabel' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, HBoxNoStats) == 0x000720, "Member 'UAthenaStatsTab_C::HBoxNoStats' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, HiddenSwitcher) == 0x000728, "Member 'UAthenaStatsTab_C::HiddenSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, LastUpdatedTimeBox) == 0x000730, "Member 'UAthenaStatsTab_C::LastUpdatedTimeBox' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, MainStatWidgetSwitcher) == 0x000738, "Member 'UAthenaStatsTab_C::MainStatWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, MatchXpBoostPointsLabel) == 0x000740, "Member 'UAthenaStatsTab_C::MatchXpBoostPointsLabel' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, MobileCloseButton_Disabled) == 0x000748, "Member 'UAthenaStatsTab_C::MobileCloseButton_Disabled' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, NoStatsText) == 0x000750, "Member 'UAthenaStatsTab_C::NoStatsText' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, OverlayCloseButton_Disabled) == 0x000758, "Member 'UAthenaStatsTab_C::OverlayCloseButton_Disabled' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, PlayerRankEmblem) == 0x000760, "Member 'UAthenaStatsTab_C::PlayerRankEmblem' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, ProgressSpinner) == 0x000768, "Member 'UAthenaStatsTab_C::ProgressSpinner' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, SeasonLabel) == 0x000770, "Member 'UAthenaStatsTab_C::SeasonLabel' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, UpdatingBox) == 0x000778, "Member 'UAthenaStatsTab_C::UpdatingBox' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, VBoxbannerstats) == 0x000780, "Member 'UAthenaStatsTab_C::VBoxbannerstats' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, VBoxStats) == 0x000788, "Member 'UAthenaStatsTab_C::VBoxStats' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, Back_Action) == 0x000790, "Member 'UAthenaStatsTab_C::Back_Action' has a wrong offset!");

}
