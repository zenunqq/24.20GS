#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UBP_AthenaMapScreenContainer_C final : public UAthenaMapScreenContainer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       DamageTaken;
	class UHorizontalBox*                         HBox_Tabs;
	class UImage*                                 Image_NavigationBG;
	class UCommonActionWidget*                    NextTabAction;
	class UImage*                                 OnlineStatusIndicator;
	class UOverlay*                               Overlay_2;
	class UCommonActionWidget*                    PreviousTabAction;
	class US18_PlayerBattlePassXpAndReward_C*     S18_PlayerBattlePassXpAndReward_310;
	class USafeZone*                              SafeZone_RightSideWidgets;
	class USafeZone*                              SafeZone_TabButtons;
	class USizeBox*                               SizeBox_Mobile;
	class USizeBox*                               SizeBox_SwitcherContainer;
	int32                                         DesignTimeTabCount;

public:
	void BP_OnActivated();
	void BP_OnShowTabsSet(bool bShowTabs);
	void Construct();
	void ExecuteUbergraph_BP_AthenaMapScreenContainer(int32 EntryPoint);
	void OnDamageReceived();
	void OnShowOrHideCreativeScoreboard(bool bShowCreativeScoreboard);
	void PreConstruct(bool IsDesignTime);
	void ShowOrHideScoreboardUI(class UObject* ScoreboardWidget, bool bShow);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AthenaMapScreenContainer_C">();
	}
	static class UBP_AthenaMapScreenContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AthenaMapScreenContainer_C>();
	}
};
static_assert(alignof(UBP_AthenaMapScreenContainer_C) == 0x000008, "Wrong alignment on UBP_AthenaMapScreenContainer_C");
static_assert(sizeof(UBP_AthenaMapScreenContainer_C) == 0x000680, "Wrong size on UBP_AthenaMapScreenContainer_C");
static_assert(offsetof(UBP_AthenaMapScreenContainer_C, UberGraphFrame) == 0x000610, "Member 'UBP_AthenaMapScreenContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AthenaMapScreenContainer_C, DamageTaken) == 0x000618, "Member 'UBP_AthenaMapScreenContainer_C::DamageTaken' has a wrong offset!");
static_assert(offsetof(UBP_AthenaMapScreenContainer_C, HBox_Tabs) == 0x000620, "Member 'UBP_AthenaMapScreenContainer_C::HBox_Tabs' has a wrong offset!");
static_assert(offsetof(UBP_AthenaMapScreenContainer_C, Image_NavigationBG) == 0x000628, "Member 'UBP_AthenaMapScreenContainer_C::Image_NavigationBG' has a wrong offset!");
static_assert(offsetof(UBP_AthenaMapScreenContainer_C, NextTabAction) == 0x000630, "Member 'UBP_AthenaMapScreenContainer_C::NextTabAction' has a wrong offset!");
static_assert(offsetof(UBP_AthenaMapScreenContainer_C, OnlineStatusIndicator) == 0x000638, "Member 'UBP_AthenaMapScreenContainer_C::OnlineStatusIndicator' has a wrong offset!");
static_assert(offsetof(UBP_AthenaMapScreenContainer_C, Overlay_2) == 0x000640, "Member 'UBP_AthenaMapScreenContainer_C::Overlay_2' has a wrong offset!");
static_assert(offsetof(UBP_AthenaMapScreenContainer_C, PreviousTabAction) == 0x000648, "Member 'UBP_AthenaMapScreenContainer_C::PreviousTabAction' has a wrong offset!");
static_assert(offsetof(UBP_AthenaMapScreenContainer_C, S18_PlayerBattlePassXpAndReward_310) == 0x000650, "Member 'UBP_AthenaMapScreenContainer_C::S18_PlayerBattlePassXpAndReward_310' has a wrong offset!");
static_assert(offsetof(UBP_AthenaMapScreenContainer_C, SafeZone_RightSideWidgets) == 0x000658, "Member 'UBP_AthenaMapScreenContainer_C::SafeZone_RightSideWidgets' has a wrong offset!");
static_assert(offsetof(UBP_AthenaMapScreenContainer_C, SafeZone_TabButtons) == 0x000660, "Member 'UBP_AthenaMapScreenContainer_C::SafeZone_TabButtons' has a wrong offset!");
static_assert(offsetof(UBP_AthenaMapScreenContainer_C, SizeBox_Mobile) == 0x000668, "Member 'UBP_AthenaMapScreenContainer_C::SizeBox_Mobile' has a wrong offset!");
static_assert(offsetof(UBP_AthenaMapScreenContainer_C, SizeBox_SwitcherContainer) == 0x000670, "Member 'UBP_AthenaMapScreenContainer_C::SizeBox_SwitcherContainer' has a wrong offset!");
static_assert(offsetof(UBP_AthenaMapScreenContainer_C, DesignTimeTabCount) == 0x000678, "Member 'UBP_AthenaMapScreenContainer_C::DesignTimeTabCount' has a wrong offset!");

}
