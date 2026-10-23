#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePassBase_structs.hpp"
#include "BattlePassS24UI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UBPS24_LandingPages_C final : public UBattlePassLandingPageS24
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UHorizontalBox*                         HBox_CurrentSeason;
	class UHorizontalBox*                         HorizontalBox_0;
	class USizeBox*                               SizeBox_0;
	class UCommonTextBlock*                       Text_Season;
	class UBPS24_BattlePassDynamicIcon_C*         WBP_BattlePassDynamicIcon;
	TMulticastInlineDelegate<void()>              On_show_BP_character;
	TMulticastInlineDelegate<void()>              On_show_Custo_Character;
	TMulticastInlineDelegate<void()>              On_show_Mystery_Character;
	TMulticastInlineDelegate<void()>              On_show_Bonus_Character;
	TMulticastInlineDelegate<void()>              On_show_Crew_Character;
	TMulticastInlineDelegate<void()>              On_show_Buy_BP;
	TMulticastInlineDelegate<void()>              On_show_Buy_Level;
	TMulticastInlineDelegate<void()>              On_show_Gift_Battle_Pass;
	bool                                          CustomizationOwned;
	uint8                                         Pad_601[0x7];
	TMulticastInlineDelegate<void(const struct FBattlePassLandingPageButtonDisplayDetails& DisplayInfo, bool bShowRewardCount, const class FString& ButtonID)> OnShowButtonDetails;
	class USoundBase*                             ScreenAppearWhooshSound;

public:
	void BndEvt__BPS20_LandingPages_Button_BonusRewards_K2Node_ComponentBoundEvent_11_OnShowButtonDetails__DelegateSignature(const struct FBattlePassLandingPageButtonDisplayDetails& DisplayInfo, const class FString& ButtonID);
	void BndEvt__BPS20_LandingPages_Button_CharacterCustomizer_K2Node_ComponentBoundEvent_9_OnShowButtonDetails__DelegateSignature(const struct FBattlePassLandingPageButtonDisplayDetails& DisplayInfo, const class FString& ButtonID);
	void BndEvt__BPS20_LandingPages_Button_JoinSubscription_K2Node_ComponentBoundEvent_12_OnShowButtonDetails__DelegateSignature(const struct FBattlePassLandingPageButtonDisplayDetails& DisplayInfo, const class FString& ButtonID);
	void BndEvt__BPS20_LandingPages_Button_Quests_K2Node_ComponentBoundEvent_10_OnShowButtonDetails__DelegateSignature(const struct FBattlePassLandingPageButtonDisplayDetails& DisplayInfo, const class FString& ButtonID);
	void BndEvt__BPS20_LandingPages_Button_Rewards_K2Node_ComponentBoundEvent_8_OnShowButtonDetails__DelegateSignature(const struct FBattlePassLandingPageButtonDisplayDetails& DisplayInfo, const class FString& ButtonID);
	void BndEvt__BPS23_LandingPages_Button_WeeklyRewards_K2Node_ComponentBoundEvent_3_OnShowButtonDetails__DelegateSignature(const struct FBattlePassLandingPageButtonDisplayDetails& DisplayInfo, const class FString& ButtonID);
	void Button_BonusRewards_Event_0(class UBPS24_LandingPageButton_C* Button_BonusRewards_0);
	void Button_CharacterCustomizer_Event_0(class UBPS24_LandingPageButton_C* Button_CharacterCustomizer_0);
	void Button_JoinSubscription_Event_0(class UBPS24_LandingPageButton_C* Button_JoinSubscription_0);
	void Button_MysteryRewards_Event_0(class UBPS24_LandingPageButton_C* Button_MysteryRewards);
	void Button_RewardOverview_Event_2(class UBPS24_LandingPageButton_C* Button_RewardOverview);
	void Construct();
	void ExecuteUbergraph_BPS24_LandingPages(int32 EntryPoint);
	void On_BattlePass_completed(bool BPComplete);
	void OnBattlePassSubscriptionAllowed(const bool bSubscriptionAllowed);
	void OnEnterSubPage();
	void OnInitialized();
	void Play_intro();
	void SequenceEvent__ENTRYPOINTBPS24_LandingPages(class UBPS24_LandingPageButton_C* Button_RewardOverview);
	void SequenceEvent__ENTRYPOINTBPS24_LandingPages_0(class UBPS24_LandingPageButton_C* Button_CharacterCustomizer_0);
	void SequenceEvent__ENTRYPOINTBPS24_LandingPages_1(class UBPS24_LandingPageButton_C* Button_MysteryRewards);
	void SequenceEvent__ENTRYPOINTBPS24_LandingPages_2(class UBPS24_LandingPageButton_C* Button_BonusRewards_0);
	void SequenceEvent__ENTRYPOINTBPS24_LandingPages_3(class UBPS24_LandingPageButton_C* Button_JoinSubscription_0);
	void SequenceEvent__ENTRYPOINTBPS24_LandingPages_4(class UBPS24_LandingPageButton_C* Button_RewardOverview);
	void SetBattlePassOwned(bool bOwned);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPS24_LandingPages_C">();
	}
	static class UBPS24_LandingPages_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPS24_LandingPages_C>();
	}
};
static_assert(alignof(UBPS24_LandingPages_C) == 0x000008, "Wrong alignment on UBPS24_LandingPages_C");
static_assert(sizeof(UBPS24_LandingPages_C) == 0x000620, "Wrong size on UBPS24_LandingPages_C");
static_assert(offsetof(UBPS24_LandingPages_C, UberGraphFrame) == 0x000548, "Member 'UBPS24_LandingPages_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPages_C, Intro) == 0x000550, "Member 'UBPS24_LandingPages_C::Intro' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPages_C, HBox_CurrentSeason) == 0x000558, "Member 'UBPS24_LandingPages_C::HBox_CurrentSeason' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPages_C, HorizontalBox_0) == 0x000560, "Member 'UBPS24_LandingPages_C::HorizontalBox_0' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPages_C, SizeBox_0) == 0x000568, "Member 'UBPS24_LandingPages_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPages_C, Text_Season) == 0x000570, "Member 'UBPS24_LandingPages_C::Text_Season' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPages_C, WBP_BattlePassDynamicIcon) == 0x000578, "Member 'UBPS24_LandingPages_C::WBP_BattlePassDynamicIcon' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPages_C, On_show_BP_character) == 0x000580, "Member 'UBPS24_LandingPages_C::On_show_BP_character' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPages_C, On_show_Custo_Character) == 0x000590, "Member 'UBPS24_LandingPages_C::On_show_Custo_Character' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPages_C, On_show_Mystery_Character) == 0x0005A0, "Member 'UBPS24_LandingPages_C::On_show_Mystery_Character' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPages_C, On_show_Bonus_Character) == 0x0005B0, "Member 'UBPS24_LandingPages_C::On_show_Bonus_Character' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPages_C, On_show_Crew_Character) == 0x0005C0, "Member 'UBPS24_LandingPages_C::On_show_Crew_Character' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPages_C, On_show_Buy_BP) == 0x0005D0, "Member 'UBPS24_LandingPages_C::On_show_Buy_BP' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPages_C, On_show_Buy_Level) == 0x0005E0, "Member 'UBPS24_LandingPages_C::On_show_Buy_Level' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPages_C, On_show_Gift_Battle_Pass) == 0x0005F0, "Member 'UBPS24_LandingPages_C::On_show_Gift_Battle_Pass' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPages_C, CustomizationOwned) == 0x000600, "Member 'UBPS24_LandingPages_C::CustomizationOwned' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPages_C, OnShowButtonDetails) == 0x000608, "Member 'UBPS24_LandingPages_C::OnShowButtonDetails' has a wrong offset!");
static_assert(offsetof(UBPS24_LandingPages_C, ScreenAppearWhooshSound) == 0x000618, "Member 'UBPS24_LandingPages_C::ScreenAppearWhooshSound' has a wrong offset!");

}
