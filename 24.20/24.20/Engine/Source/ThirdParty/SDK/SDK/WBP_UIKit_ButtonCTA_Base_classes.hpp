#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "ModularButtonSize_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CommonInput_structs.hpp"

namespace SDK
{

#pragma pack(push, 0x1)
class alignas(0x10) UWBP_UIKit_ButtonCTA_Base_C : public UFortCTAButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Anim_HoldProgress;
	class UWidgetAnimation*                       Anim_Pressed_Base;
	class UWidgetAnimation*                       Anim_Focused_Base;
	class UWBP_UIKit_ButtonBackground_CTA_C*      Background;
	class UGridPanel*                             Button;
	class UImage*                                 HoldIcon;
	class UImage*                                 HoldProgressBar;
	class UGridPanel*                             Prompt;
	class UGridPanel*                             PromptAlignment;
	class UWBP_UIKit_ButtonText_CTA_C*            SecondaryTextBlock;
	class UWBP_UIKit_ButtonText_CTA_C*            TextBlock;
	class UVerticalBox*                           VerticalBox_Text;
	EModularButtonSize                            ButtonSize;
	uint8                                         Pad_14F9[0x7];
	class FText                                   Text;
	class FText                                   TextSecondary;
	TArray<class UWBP_UIKit_Block_Base_C*>        ModularBlocks;
	class UMaterialInstanceDynamic*               InputActionProgressMaterial;
	class UMaterialInstance*                      BackgroundMaterial;
	class UMaterialInstance*                      BorderMaterial;
	bool                                          IsBorderAdditive;
	uint8                                         Pad_1559[0x3];
	int32                                         LargeHeight;
	int32                                         MediumHeight;
	int32                                         SmallHeight;
	struct FMargin                                SingleTextLargePadding;
	struct FMargin                                SingleTextMediumPadding;
	struct FMargin                                SingleTextSmallPadding;
	struct FMargin                                DoubleTextLargePadding;
	struct FMargin                                DoubleTextMediumPadding;
	struct FMargin                                DoubleTextSmallPadding;
	struct FMargin                                DoubleTextSecondaryLargePadding;
	struct FMargin                                DoubleTextSecondaryMediumPadding;
	struct FMargin                                DoubleTextSecondarySmallPadding;
	int32                                         GridUnit;
	uint8                                         Pad_15FC[0x4];
	struct FSlateFontInfo                         LargePrimaryFont;
	struct FSlateFontInfo                         MediumPrimaryFont;
	struct FSlateFontInfo                         SmallPrimaryFont;
	struct FSlateFontInfo                         LargeSecondaryFont;
	struct FSlateFontInfo                         MeduimSecondaryFont;
	struct FSlateFontInfo                         SmallSecondaryFont;
	struct FWidgetTransform                       LeftToRightTransform;
	struct FWidgetTransform                       RightToLeftTransform;
	bool                                          SingleText;
	uint8                                         Pad_1881[0x7];
	TMulticastInlineDelegate<void(bool HasFocus)> OnFocusChanged;
	double                                        MobileFontSizeMultiplierLarge;
	double                                        MobileFontSizeMultiplierMedium;
	double                                        MobileFontSizeMultiplierSmall;
	int32                                         MobileMinWidth;
	bool                                          OverrideDefaultHeight;
	uint8                                         Pad_18B5[0x3];
	int32                                         MobileMinHeight;
	int32                                         MobileLargeHeight;
	int32                                         MobileMediumHeight;
	int32                                         MobileSmallHeight;
	struct FMargin                                MobileSingleTextLargePadding;
	struct FMargin                                MobileSingleTextMediumPadding;
	struct FMargin                                MobileSingleTextSmallPadding;
	struct FMargin                                MobileDoubleTextLargePadding;
	struct FMargin                                MobileDoubleTextMediumPadding;
	struct FMargin                                MobileDoubleTextSmallPadding;
	struct FMargin                                MobileDoubleTextSecondaryLargePadding;
	struct FMargin                                MobileDoubleTextSecondaryMediumPadding;
	struct FMargin                                MobileDoubleTextSecondarySmallPadding;
	double                                        MobileFontSizeMultiplierSecondaryLarge;
	double                                        MobileFontSizeMultiplierSecondaryMedium;
	double                                        MobileFontSizeMultiplierSecondarySmall;
	bool                                          OverrideDefaultMobileFontSizeMultiplier;
	uint8                                         Pad_1971[0x7];
	double                                        MobileFontSizeMultiplierOverride;
	TArray<bool>                                  EnabledEvents;
	double                                        AudioLoopFadeoutTime;
	double                                        AudioLoopFadeInTime;
	class USoundBase*                             HoldPressedSound;
	class USoundBase*                             HoldSound;
	class USoundBase*                             HoldReleasedSound;
	class USoundBase*                             HoldCompleteSound;
	class UAudioComponent*                        HoldSoundAudioComponent;
	ECommonInputType                              CurrentInputType;
	bool                                          OverrideSecondaryTextSize;
	uint8                                         Pad_19CA[0x6];
	double                                        OverrideSecondaryTextSizeMultiplier;
	TMulticastInlineDelegate<void()>              OnHoldCompleted;

public:
	void AddModularBlock(class UWBP_UIKit_Block_Base_C* Modular_Block);
	void BP_OnDisabled();
	void BP_OnEnabled();
	void BP_OnFocusLost();
	void BP_OnFocusReceived();
	void BP_OnHoldCompleted();
	void BP_OnHoldEnded(const float HoldPercentage, const bool bInUseSecondaryHoldAnimation);
	void BP_OnHoldReset();
	void BP_OnHoldStarted(const float HoldPercentage, const bool bInUseSecondaryHoldAnimation);
	void BP_OnHovered();
	void BP_OnInputActionUpdated();
	void BP_OnInputMethodChanged(ECommonInputType CurrentInputType_0);
	void BP_OnPressed();
	void BP_OnReleased();
	void BP_OnUnhovered();
	void BP_SetSecondaryText(const class FText& Text_0);
	void BP_SetText(const class FText& Text_0);
	void Construct();
	void EventOnFocusedManually();
	void ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base(int32 EntryPoint);
	void IsPromptAction(bool* Valid);
	void IsPromptHoldable(bool* Holdable);
	void IsPromptIcon(bool* Valid);
	void OnActionProgress(float HeldPercent);
	void OnHoldRequiredChanged(bool bHoldRequired);
	void PreConstruct(bool IsDesignTime);
	void ResetButtonState();
	void ResetPrompt();
	void Set_Prompt();
	void SetBackgroundMaterial(class UMaterialInstance* Background_0);
	void SetBackgroundVisibility(bool Visible);
	void SetBlockTiming(class UWBP_UIKit_Block_Base_C* bLock, double Time_Hovering, double Time_Unhovering, double Time_Focusing, double Time_Unfocusing, double Time_Pressing, double Time_Releasing, double Time_Disabling, double Time_Enabling);
	void SetBorderMaterial(class UMaterialInstance* BorderMaterial_0, bool IsAdditive);
	void SetButtonIsEnabled();
	void SetButtonSize(EModularButtonSize ButtonSize_0);
	void SetButtonTiming(double Time_Hovering, double Time_Unhovering, double Time_Focusing, double Time_Unfocusing, double Time_Pressing, double Time_Releasing, double Time_Disabling, double Time_Enabling);
	void SetLanguageDirection(bool RightToLeft);
	void ShowInputActionText();
	void ShowPromptFallbackAction(bool Show);
	void UpdateButtonSIze();
	void UpdateButtonSizeToGrid();
	void UpdateFonts();
	void UpdatePrompt(ECommonInputType InputType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UIKit_ButtonCTA_Base_C">();
	}
	static class UWBP_UIKit_ButtonCTA_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UIKit_ButtonCTA_Base_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(UWBP_UIKit_ButtonCTA_Base_C) == 0x000010, "Wrong alignment on UWBP_UIKit_ButtonCTA_Base_C");
static_assert(sizeof(UWBP_UIKit_ButtonCTA_Base_C) == 0x0019F0, "Wrong size on UWBP_UIKit_ButtonCTA_Base_C");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, UberGraphFrame) == 0x001490, "Member 'UWBP_UIKit_ButtonCTA_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, Anim_HoldProgress) == 0x001498, "Member 'UWBP_UIKit_ButtonCTA_Base_C::Anim_HoldProgress' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, Anim_Pressed_Base) == 0x0014A0, "Member 'UWBP_UIKit_ButtonCTA_Base_C::Anim_Pressed_Base' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, Anim_Focused_Base) == 0x0014A8, "Member 'UWBP_UIKit_ButtonCTA_Base_C::Anim_Focused_Base' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, Background) == 0x0014B0, "Member 'UWBP_UIKit_ButtonCTA_Base_C::Background' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, Button) == 0x0014B8, "Member 'UWBP_UIKit_ButtonCTA_Base_C::Button' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, HoldIcon) == 0x0014C0, "Member 'UWBP_UIKit_ButtonCTA_Base_C::HoldIcon' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, HoldProgressBar) == 0x0014C8, "Member 'UWBP_UIKit_ButtonCTA_Base_C::HoldProgressBar' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, Prompt) == 0x0014D0, "Member 'UWBP_UIKit_ButtonCTA_Base_C::Prompt' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, PromptAlignment) == 0x0014D8, "Member 'UWBP_UIKit_ButtonCTA_Base_C::PromptAlignment' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, SecondaryTextBlock) == 0x0014E0, "Member 'UWBP_UIKit_ButtonCTA_Base_C::SecondaryTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, TextBlock) == 0x0014E8, "Member 'UWBP_UIKit_ButtonCTA_Base_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, VerticalBox_Text) == 0x0014F0, "Member 'UWBP_UIKit_ButtonCTA_Base_C::VerticalBox_Text' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, ButtonSize) == 0x0014F8, "Member 'UWBP_UIKit_ButtonCTA_Base_C::ButtonSize' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, Text) == 0x001500, "Member 'UWBP_UIKit_ButtonCTA_Base_C::Text' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, TextSecondary) == 0x001518, "Member 'UWBP_UIKit_ButtonCTA_Base_C::TextSecondary' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, ModularBlocks) == 0x001530, "Member 'UWBP_UIKit_ButtonCTA_Base_C::ModularBlocks' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, InputActionProgressMaterial) == 0x001540, "Member 'UWBP_UIKit_ButtonCTA_Base_C::InputActionProgressMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, BackgroundMaterial) == 0x001548, "Member 'UWBP_UIKit_ButtonCTA_Base_C::BackgroundMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, BorderMaterial) == 0x001550, "Member 'UWBP_UIKit_ButtonCTA_Base_C::BorderMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, IsBorderAdditive) == 0x001558, "Member 'UWBP_UIKit_ButtonCTA_Base_C::IsBorderAdditive' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, LargeHeight) == 0x00155C, "Member 'UWBP_UIKit_ButtonCTA_Base_C::LargeHeight' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, MediumHeight) == 0x001560, "Member 'UWBP_UIKit_ButtonCTA_Base_C::MediumHeight' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, SmallHeight) == 0x001564, "Member 'UWBP_UIKit_ButtonCTA_Base_C::SmallHeight' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, SingleTextLargePadding) == 0x001568, "Member 'UWBP_UIKit_ButtonCTA_Base_C::SingleTextLargePadding' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, SingleTextMediumPadding) == 0x001578, "Member 'UWBP_UIKit_ButtonCTA_Base_C::SingleTextMediumPadding' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, SingleTextSmallPadding) == 0x001588, "Member 'UWBP_UIKit_ButtonCTA_Base_C::SingleTextSmallPadding' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, DoubleTextLargePadding) == 0x001598, "Member 'UWBP_UIKit_ButtonCTA_Base_C::DoubleTextLargePadding' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, DoubleTextMediumPadding) == 0x0015A8, "Member 'UWBP_UIKit_ButtonCTA_Base_C::DoubleTextMediumPadding' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, DoubleTextSmallPadding) == 0x0015B8, "Member 'UWBP_UIKit_ButtonCTA_Base_C::DoubleTextSmallPadding' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, DoubleTextSecondaryLargePadding) == 0x0015C8, "Member 'UWBP_UIKit_ButtonCTA_Base_C::DoubleTextSecondaryLargePadding' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, DoubleTextSecondaryMediumPadding) == 0x0015D8, "Member 'UWBP_UIKit_ButtonCTA_Base_C::DoubleTextSecondaryMediumPadding' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, DoubleTextSecondarySmallPadding) == 0x0015E8, "Member 'UWBP_UIKit_ButtonCTA_Base_C::DoubleTextSecondarySmallPadding' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, GridUnit) == 0x0015F8, "Member 'UWBP_UIKit_ButtonCTA_Base_C::GridUnit' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, LargePrimaryFont) == 0x001600, "Member 'UWBP_UIKit_ButtonCTA_Base_C::LargePrimaryFont' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, MediumPrimaryFont) == 0x001658, "Member 'UWBP_UIKit_ButtonCTA_Base_C::MediumPrimaryFont' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, SmallPrimaryFont) == 0x0016B0, "Member 'UWBP_UIKit_ButtonCTA_Base_C::SmallPrimaryFont' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, LargeSecondaryFont) == 0x001708, "Member 'UWBP_UIKit_ButtonCTA_Base_C::LargeSecondaryFont' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, MeduimSecondaryFont) == 0x001760, "Member 'UWBP_UIKit_ButtonCTA_Base_C::MeduimSecondaryFont' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, SmallSecondaryFont) == 0x0017B8, "Member 'UWBP_UIKit_ButtonCTA_Base_C::SmallSecondaryFont' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, LeftToRightTransform) == 0x001810, "Member 'UWBP_UIKit_ButtonCTA_Base_C::LeftToRightTransform' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, RightToLeftTransform) == 0x001848, "Member 'UWBP_UIKit_ButtonCTA_Base_C::RightToLeftTransform' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, SingleText) == 0x001880, "Member 'UWBP_UIKit_ButtonCTA_Base_C::SingleText' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, OnFocusChanged) == 0x001888, "Member 'UWBP_UIKit_ButtonCTA_Base_C::OnFocusChanged' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, MobileFontSizeMultiplierLarge) == 0x001898, "Member 'UWBP_UIKit_ButtonCTA_Base_C::MobileFontSizeMultiplierLarge' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, MobileFontSizeMultiplierMedium) == 0x0018A0, "Member 'UWBP_UIKit_ButtonCTA_Base_C::MobileFontSizeMultiplierMedium' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, MobileFontSizeMultiplierSmall) == 0x0018A8, "Member 'UWBP_UIKit_ButtonCTA_Base_C::MobileFontSizeMultiplierSmall' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, MobileMinWidth) == 0x0018B0, "Member 'UWBP_UIKit_ButtonCTA_Base_C::MobileMinWidth' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, OverrideDefaultHeight) == 0x0018B4, "Member 'UWBP_UIKit_ButtonCTA_Base_C::OverrideDefaultHeight' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, MobileMinHeight) == 0x0018B8, "Member 'UWBP_UIKit_ButtonCTA_Base_C::MobileMinHeight' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, MobileLargeHeight) == 0x0018BC, "Member 'UWBP_UIKit_ButtonCTA_Base_C::MobileLargeHeight' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, MobileMediumHeight) == 0x0018C0, "Member 'UWBP_UIKit_ButtonCTA_Base_C::MobileMediumHeight' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, MobileSmallHeight) == 0x0018C4, "Member 'UWBP_UIKit_ButtonCTA_Base_C::MobileSmallHeight' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, MobileSingleTextLargePadding) == 0x0018C8, "Member 'UWBP_UIKit_ButtonCTA_Base_C::MobileSingleTextLargePadding' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, MobileSingleTextMediumPadding) == 0x0018D8, "Member 'UWBP_UIKit_ButtonCTA_Base_C::MobileSingleTextMediumPadding' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, MobileSingleTextSmallPadding) == 0x0018E8, "Member 'UWBP_UIKit_ButtonCTA_Base_C::MobileSingleTextSmallPadding' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, MobileDoubleTextLargePadding) == 0x0018F8, "Member 'UWBP_UIKit_ButtonCTA_Base_C::MobileDoubleTextLargePadding' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, MobileDoubleTextMediumPadding) == 0x001908, "Member 'UWBP_UIKit_ButtonCTA_Base_C::MobileDoubleTextMediumPadding' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, MobileDoubleTextSmallPadding) == 0x001918, "Member 'UWBP_UIKit_ButtonCTA_Base_C::MobileDoubleTextSmallPadding' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, MobileDoubleTextSecondaryLargePadding) == 0x001928, "Member 'UWBP_UIKit_ButtonCTA_Base_C::MobileDoubleTextSecondaryLargePadding' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, MobileDoubleTextSecondaryMediumPadding) == 0x001938, "Member 'UWBP_UIKit_ButtonCTA_Base_C::MobileDoubleTextSecondaryMediumPadding' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, MobileDoubleTextSecondarySmallPadding) == 0x001948, "Member 'UWBP_UIKit_ButtonCTA_Base_C::MobileDoubleTextSecondarySmallPadding' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, MobileFontSizeMultiplierSecondaryLarge) == 0x001958, "Member 'UWBP_UIKit_ButtonCTA_Base_C::MobileFontSizeMultiplierSecondaryLarge' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, MobileFontSizeMultiplierSecondaryMedium) == 0x001960, "Member 'UWBP_UIKit_ButtonCTA_Base_C::MobileFontSizeMultiplierSecondaryMedium' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, MobileFontSizeMultiplierSecondarySmall) == 0x001968, "Member 'UWBP_UIKit_ButtonCTA_Base_C::MobileFontSizeMultiplierSecondarySmall' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, OverrideDefaultMobileFontSizeMultiplier) == 0x001970, "Member 'UWBP_UIKit_ButtonCTA_Base_C::OverrideDefaultMobileFontSizeMultiplier' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, MobileFontSizeMultiplierOverride) == 0x001978, "Member 'UWBP_UIKit_ButtonCTA_Base_C::MobileFontSizeMultiplierOverride' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, EnabledEvents) == 0x001980, "Member 'UWBP_UIKit_ButtonCTA_Base_C::EnabledEvents' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, AudioLoopFadeoutTime) == 0x001990, "Member 'UWBP_UIKit_ButtonCTA_Base_C::AudioLoopFadeoutTime' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, AudioLoopFadeInTime) == 0x001998, "Member 'UWBP_UIKit_ButtonCTA_Base_C::AudioLoopFadeInTime' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, HoldPressedSound) == 0x0019A0, "Member 'UWBP_UIKit_ButtonCTA_Base_C::HoldPressedSound' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, HoldSound) == 0x0019A8, "Member 'UWBP_UIKit_ButtonCTA_Base_C::HoldSound' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, HoldReleasedSound) == 0x0019B0, "Member 'UWBP_UIKit_ButtonCTA_Base_C::HoldReleasedSound' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, HoldCompleteSound) == 0x0019B8, "Member 'UWBP_UIKit_ButtonCTA_Base_C::HoldCompleteSound' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, HoldSoundAudioComponent) == 0x0019C0, "Member 'UWBP_UIKit_ButtonCTA_Base_C::HoldSoundAudioComponent' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, CurrentInputType) == 0x0019C8, "Member 'UWBP_UIKit_ButtonCTA_Base_C::CurrentInputType' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, OverrideSecondaryTextSize) == 0x0019C9, "Member 'UWBP_UIKit_ButtonCTA_Base_C::OverrideSecondaryTextSize' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, OverrideSecondaryTextSizeMultiplier) == 0x0019D0, "Member 'UWBP_UIKit_ButtonCTA_Base_C::OverrideSecondaryTextSizeMultiplier' has a wrong offset!");
static_assert(offsetof(UWBP_UIKit_ButtonCTA_Base_C, OnHoldCompleted) == 0x0019D8, "Member 'UWBP_UIKit_ButtonCTA_Base_C::OnHoldCompleted' has a wrong offset!");

}
