#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UEnableMultiFactorAuthModalBP_C final : public UEnableMultiFactorModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro_V2;
	class UWidgetAnimation*                       ArrowPulse;
	class UWidgetAnimation*                       Intro;
	class UCommonTextBlock*                       ConsoleTextBlock;
	class UCommonTextBlock*                       CT_LimitedTimeHeader;
	class UCommonTextBlock*                       CT_TakenToWebsite;
	class UWidgetSwitcher*                        EnableButtonSwitcher;
	class UImage*                                 Image_GoToWebsite;
	class UItemInfoWidget_C*                      ItemInfoWidget_FromSocialImport;
	class UFortLazyImage*                         lazyImage;
	class USafeZone*                              SafeZone;
	class UScaleBox*                              ScaleBox_TitleHeader;
	double                                        HeartbeatDelayIntroAnimation;
	bool                                          bHasReward;
	uint8                                         Pad_5F9[0x7];
	class UClass*                                 MobileLimitedTimeHeaderStyle;

public:
	void AnimationFullyCompleteBP();
	void BP_OnActivated();
	void Construct();
	void ExecuteUbergraph_EnableMultiFactorAuthModalBP(int32 EntryPoint);
	void HandleHeaderText();
	void HandleSetScreenMode();
	void NavRight();
	void NavUp();
	void OnConsoleDisplayURLProvided(const class FText& UniquePlayerURLText);
	void OnIncentivizedSet(bool bIncentivized);
	void OnInputModeChanged(bool bUsingGamepad);
	void OnSetExitButtonText(const class FText& NewButtonText);
	void OnSetScreenConfiguration(bool bIsConsole);
	void PreConstruct(bool IsDesignTime);
	void ScaleTitleForCulture();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EnableMultiFactorAuthModalBP_C">();
	}
	static class UEnableMultiFactorAuthModalBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnableMultiFactorAuthModalBP_C>();
	}
};
static_assert(alignof(UEnableMultiFactorAuthModalBP_C) == 0x000008, "Wrong alignment on UEnableMultiFactorAuthModalBP_C");
static_assert(sizeof(UEnableMultiFactorAuthModalBP_C) == 0x000608, "Wrong size on UEnableMultiFactorAuthModalBP_C");
static_assert(offsetof(UEnableMultiFactorAuthModalBP_C, UberGraphFrame) == 0x000588, "Member 'UEnableMultiFactorAuthModalBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEnableMultiFactorAuthModalBP_C, Intro_V2) == 0x000590, "Member 'UEnableMultiFactorAuthModalBP_C::Intro_V2' has a wrong offset!");
static_assert(offsetof(UEnableMultiFactorAuthModalBP_C, ArrowPulse) == 0x000598, "Member 'UEnableMultiFactorAuthModalBP_C::ArrowPulse' has a wrong offset!");
static_assert(offsetof(UEnableMultiFactorAuthModalBP_C, Intro) == 0x0005A0, "Member 'UEnableMultiFactorAuthModalBP_C::Intro' has a wrong offset!");
static_assert(offsetof(UEnableMultiFactorAuthModalBP_C, ConsoleTextBlock) == 0x0005A8, "Member 'UEnableMultiFactorAuthModalBP_C::ConsoleTextBlock' has a wrong offset!");
static_assert(offsetof(UEnableMultiFactorAuthModalBP_C, CT_LimitedTimeHeader) == 0x0005B0, "Member 'UEnableMultiFactorAuthModalBP_C::CT_LimitedTimeHeader' has a wrong offset!");
static_assert(offsetof(UEnableMultiFactorAuthModalBP_C, CT_TakenToWebsite) == 0x0005B8, "Member 'UEnableMultiFactorAuthModalBP_C::CT_TakenToWebsite' has a wrong offset!");
static_assert(offsetof(UEnableMultiFactorAuthModalBP_C, EnableButtonSwitcher) == 0x0005C0, "Member 'UEnableMultiFactorAuthModalBP_C::EnableButtonSwitcher' has a wrong offset!");
static_assert(offsetof(UEnableMultiFactorAuthModalBP_C, Image_GoToWebsite) == 0x0005C8, "Member 'UEnableMultiFactorAuthModalBP_C::Image_GoToWebsite' has a wrong offset!");
static_assert(offsetof(UEnableMultiFactorAuthModalBP_C, ItemInfoWidget_FromSocialImport) == 0x0005D0, "Member 'UEnableMultiFactorAuthModalBP_C::ItemInfoWidget_FromSocialImport' has a wrong offset!");
static_assert(offsetof(UEnableMultiFactorAuthModalBP_C, lazyImage) == 0x0005D8, "Member 'UEnableMultiFactorAuthModalBP_C::lazyImage' has a wrong offset!");
static_assert(offsetof(UEnableMultiFactorAuthModalBP_C, SafeZone) == 0x0005E0, "Member 'UEnableMultiFactorAuthModalBP_C::SafeZone' has a wrong offset!");
static_assert(offsetof(UEnableMultiFactorAuthModalBP_C, ScaleBox_TitleHeader) == 0x0005E8, "Member 'UEnableMultiFactorAuthModalBP_C::ScaleBox_TitleHeader' has a wrong offset!");
static_assert(offsetof(UEnableMultiFactorAuthModalBP_C, HeartbeatDelayIntroAnimation) == 0x0005F0, "Member 'UEnableMultiFactorAuthModalBP_C::HeartbeatDelayIntroAnimation' has a wrong offset!");
static_assert(offsetof(UEnableMultiFactorAuthModalBP_C, bHasReward) == 0x0005F8, "Member 'UEnableMultiFactorAuthModalBP_C::bHasReward' has a wrong offset!");
static_assert(offsetof(UEnableMultiFactorAuthModalBP_C, MobileLimitedTimeHeaderStyle) == 0x000600, "Member 'UEnableMultiFactorAuthModalBP_C::MobileLimitedTimeHeaderStyle' has a wrong offset!");

}
