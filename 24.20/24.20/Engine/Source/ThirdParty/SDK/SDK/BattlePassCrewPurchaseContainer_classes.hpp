#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CrewUI_structs.hpp"
#include "CrewUI_classes.hpp"

namespace SDK
{

class UBattlePassCrewPurchaseContainer_C final : public UBattlePassCrewPurchaseContainer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       TransitionLeft;
	class UWidgetAnimation*                       TransitionRight;
	class UCrewBenefitsAnim_C*                    CrewBenefitsAnim;
	class UCrewPurchaseScreen_C*                  CrewPurchaseScreen;
	class UCrewSeasonLaunchScreen_C*              CrewSeasonLaunchScreen;
	class UImage*                                 Image_BackgroundFill;
	class UImage*                                 Image_Blackout;
	class UImage*                                 Image_Blackout_quickintro;
	class UImage*                                 Image_BPEmblem;
	class UImage*                                 Image_IntroBG;
	class UImage*                                 Image_Sparks;
	class UImage*                                 Image_Transition;
	class UWidgetAnimation*                       LastPlayedAnimation;
	class UBattlePassPurchaseScreen_C*            As_Battle_Pass_Purchase_Screen;
	struct FTimerHandle                           MusicControllerHandle;
	class USoundMix*                              BattlePassMix;
	class ABattlepass_MusicController_Quartz_C*   MusicController_Quartz;
	class UAudioComponent*                        BattlepassSplashAudio;
	class UAudioComponent*                        CrewSplashAudio;
	double                                        TransitionLeftAlpha;
	double                                        TransitionRightAlpha;
	EBattlePassCrewContentState                   BPState;

public:
	void BattlePassMusic();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void CallMusicController();
	void Construct();
	void ExecuteUbergraph_BattlePassCrewPurchaseContainer(int32 EntryPoint);
	void OnContentStateUpdated(EBattlePassCrewContentState InState, bool bInScreenOpened);
	void OnLastPlayedAnimationFinished();
	void OnTransitionLeftEvaluated();
	void OnTransitionRightEvaluated();
	void OnTriggerIntroAnimation(bool bCanClaimRewards);
	void PlayBattlepassSplashAudio();
	void PlaySubscriptionSplashAudio();
	void ResetAnimations();
	void SequenceEvent__ENTRYPOINTBattlePassCrewPurchaseContainer();
	void SequenceEvent__ENTRYPOINTBattlePassCrewPurchaseContainer_0();
	void SequenceEvent__ENTRYPOINTBattlePassCrewPurchaseContainer_1();
	void SequenceEvent__ENTRYPOINTBattlePassCrewPurchaseContainer_2();
	void SequenceEvent_ToggleScreens(bool isLeft);
	void StopAllBattlePassMusic();
	void SubscriptionMusic();
	void TriggerSubTransitionIn(EBattlePassCrewContentState TransitionState);
	void TriggerSubTransitionOut(EBattlePassCrewContentState TransitionState);
	void UpSellMusic();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattlePassCrewPurchaseContainer_C">();
	}
	static class UBattlePassCrewPurchaseContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattlePassCrewPurchaseContainer_C>();
	}
};
static_assert(alignof(UBattlePassCrewPurchaseContainer_C) == 0x000008, "Wrong alignment on UBattlePassCrewPurchaseContainer_C");
static_assert(sizeof(UBattlePassCrewPurchaseContainer_C) == 0x0004E0, "Wrong size on UBattlePassCrewPurchaseContainer_C");
static_assert(offsetof(UBattlePassCrewPurchaseContainer_C, UberGraphFrame) == 0x000428, "Member 'UBattlePassCrewPurchaseContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer_C, TransitionLeft) == 0x000430, "Member 'UBattlePassCrewPurchaseContainer_C::TransitionLeft' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer_C, TransitionRight) == 0x000438, "Member 'UBattlePassCrewPurchaseContainer_C::TransitionRight' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer_C, CrewBenefitsAnim) == 0x000440, "Member 'UBattlePassCrewPurchaseContainer_C::CrewBenefitsAnim' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer_C, CrewPurchaseScreen) == 0x000448, "Member 'UBattlePassCrewPurchaseContainer_C::CrewPurchaseScreen' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer_C, CrewSeasonLaunchScreen) == 0x000450, "Member 'UBattlePassCrewPurchaseContainer_C::CrewSeasonLaunchScreen' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer_C, Image_BackgroundFill) == 0x000458, "Member 'UBattlePassCrewPurchaseContainer_C::Image_BackgroundFill' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer_C, Image_Blackout) == 0x000460, "Member 'UBattlePassCrewPurchaseContainer_C::Image_Blackout' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer_C, Image_Blackout_quickintro) == 0x000468, "Member 'UBattlePassCrewPurchaseContainer_C::Image_Blackout_quickintro' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer_C, Image_BPEmblem) == 0x000470, "Member 'UBattlePassCrewPurchaseContainer_C::Image_BPEmblem' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer_C, Image_IntroBG) == 0x000478, "Member 'UBattlePassCrewPurchaseContainer_C::Image_IntroBG' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer_C, Image_Sparks) == 0x000480, "Member 'UBattlePassCrewPurchaseContainer_C::Image_Sparks' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer_C, Image_Transition) == 0x000488, "Member 'UBattlePassCrewPurchaseContainer_C::Image_Transition' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer_C, LastPlayedAnimation) == 0x000490, "Member 'UBattlePassCrewPurchaseContainer_C::LastPlayedAnimation' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer_C, As_Battle_Pass_Purchase_Screen) == 0x000498, "Member 'UBattlePassCrewPurchaseContainer_C::As_Battle_Pass_Purchase_Screen' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer_C, MusicControllerHandle) == 0x0004A0, "Member 'UBattlePassCrewPurchaseContainer_C::MusicControllerHandle' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer_C, BattlePassMix) == 0x0004A8, "Member 'UBattlePassCrewPurchaseContainer_C::BattlePassMix' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer_C, MusicController_Quartz) == 0x0004B0, "Member 'UBattlePassCrewPurchaseContainer_C::MusicController_Quartz' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer_C, BattlepassSplashAudio) == 0x0004B8, "Member 'UBattlePassCrewPurchaseContainer_C::BattlepassSplashAudio' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer_C, CrewSplashAudio) == 0x0004C0, "Member 'UBattlePassCrewPurchaseContainer_C::CrewSplashAudio' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer_C, TransitionLeftAlpha) == 0x0004C8, "Member 'UBattlePassCrewPurchaseContainer_C::TransitionLeftAlpha' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer_C, TransitionRightAlpha) == 0x0004D0, "Member 'UBattlePassCrewPurchaseContainer_C::TransitionRightAlpha' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer_C, BPState) == 0x0004D8, "Member 'UBattlePassCrewPurchaseContainer_C::BPState' has a wrong offset!");

}
