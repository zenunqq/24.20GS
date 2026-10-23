#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CrewUI_structs.hpp"
#include "CrewUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UCrewPurchaseScreen_C final : public UCrewPurchaseScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       NewTile;
	class UWidgetAnimation*                       TransitionOut;
	class UWidgetAnimation*                       TransitionIn;
	class UCommonBorder*                          Border_Disclaimer;
	class UCommonBorder*                          Border_LimitedTimeText;
	class UCommonBorder*                          Border_RecurringText;
	class UCommonBorder*                          Border_Subtitle;
	class UMTXButton_C*                           Button_MtxWallet;
	class UCrewCrown_Animated_C*                  CrewCrown_Animated;
	class UErrorInfoFlag_C*                       ErrorInfoFlag1;
	class UErrorInfoFlag_C*                       ErrorInfoFlag2;
	class UImage*                                 Image_BGDarken;
	class UImage*                                 Image_CMSBG;
	class UImage*                                 Image_ErrorBG;
	class UImage*                                 Image_ErrorBG_Accent;
	class UImage*                                 Image_GradientBacking;
	class ULightbox_C*                            LightBox_Progress;
	class UUpsell_TutorialTooltip_C*              NavButtonNotification;
	class UOverlay*                               Overlay_Background;
	class UOverlay*                               Overlay_MainContent;
	class UOverlay*                               Overlay_PurchaseButton;
	class UImage*                                 ProgressSpinner;
	class UVerticalBox*                           ProgressVBox;
	class USafeZone*                              SafeZone_0;
	class USafeZone*                              SafeZone_BottomRight;
	class USafeZone*                              SafeZone_Content;
	class USafeZone*                              SafeZone_ContentPurchase_Pad;
	class USafeZone*                              SafeZone_TopRight;
	class UScaleBox*                              ScaleBox_0;
	class USizeBox*                               SizeBox_1;
	class USizeBox*                               SizeBox_Content;
	class USizeBox*                               SizeBox_LeftContent;
	class UNamedSlot*                             Slot_Null;
	class USpacer*                                Spacer_NavPlaceholder;
	class UWidgetSwitcher*                        Switcher_Content;
	class UCommonTextBlock*                       Text_ProgressLabel;
	class UUpsell_TutorialTooltip_C*              Upsell_TutorialTooltip;
	class UVerticalBox*                           VerticalBox_RightContent_Pad;
	class UCommonVisibilitySwitcher*              VisibilitySwitcher_PurchaseRejoinState;
	class UWBP_ContentPurchaseBlocker_C*          WBP_ContentPurchaseBlocker;
	TArray<class UBorder*>                        RowTitles;
	struct FLinearColor                           AccentColor;
	struct FLinearColor                           SubHeaderColor;
	struct FLinearColor                           FadeColor;
	class UMaterialInstanceDynamic*               ImageMID;
	TMulticastInlineDelegate<void()>              Dispatch_TransitionIn;
	class UTexture2D*                             OldBackground;
	TSoftObjectPtr<class UTexture>                DesignTimeAsset;

public:
	void BeginProgress(const class FText& ProgressLabel);
	void BlockScreenContent(const bool bBlockScreen, const class FText& ContentBlockedText);
	void BP_OnActivated();
	void Construct();
	void ContentBlocked(bool isContentBlocked, const class FText& ContentBlockedText);
	class UWidget* DownFromRecurringRewards(EUINavigation Navigation_0);
	void EndProgress();
	void EventScreenTransitionIn();
	void EventSetColors();
	void ExecuteUbergraph_CrewPurchaseScreen(int32 EntryPoint);
	void OnContainerTabVisibilityUpdated(const bool bTabsVisible, const float SpacingAdjustmentForTabs);
	void OnDownloadBackgroundComplete(class UTexture2D* NewBackground);
	void OnSetNavButtonNotificationText(const class FText& NotificationText);
	void OnShowNavButtonNotification(const bool bShowNotification);
	void OnStartingDownloadBackground();
	void OnUpdatePurchaseButtonState(ECrewPurchaseButtonState ButtonState);
	void OnUpdateVBuckRefundVisibility(bool bVisible);
	void OnUserInformationTextsUpdated(const class FText& UserInformationText1, const class FText& UserInformationText2, EMcpSubscriptionState SubscriptionState);
	void PreConstruct(bool IsDesignTime);
	void Set_Up_Error_Info_Flags(const class FText& UserInformationText_1, const class FText& UserInformationText_2, EMcpSubscriptionState SubscriptionState);
	void SetDesignTimeImages();
	void UpdateLayoutForTabs(bool bTabsVisible, double SpacingAdjustmentForTabs);
	class UWidget* UpFromLimitedTimeRewards(EUINavigation Navigation_0);
	class UWidget* UpToFirstTile(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CrewPurchaseScreen_C">();
	}
	static class UCrewPurchaseScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrewPurchaseScreen_C>();
	}
};
static_assert(alignof(UCrewPurchaseScreen_C) == 0x000008, "Wrong alignment on UCrewPurchaseScreen_C");
static_assert(sizeof(UCrewPurchaseScreen_C) == 0x000750, "Wrong size on UCrewPurchaseScreen_C");
static_assert(offsetof(UCrewPurchaseScreen_C, UberGraphFrame) == 0x000580, "Member 'UCrewPurchaseScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, NewTile) == 0x000588, "Member 'UCrewPurchaseScreen_C::NewTile' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, TransitionOut) == 0x000590, "Member 'UCrewPurchaseScreen_C::TransitionOut' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, TransitionIn) == 0x000598, "Member 'UCrewPurchaseScreen_C::TransitionIn' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, Border_Disclaimer) == 0x0005A0, "Member 'UCrewPurchaseScreen_C::Border_Disclaimer' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, Border_LimitedTimeText) == 0x0005A8, "Member 'UCrewPurchaseScreen_C::Border_LimitedTimeText' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, Border_RecurringText) == 0x0005B0, "Member 'UCrewPurchaseScreen_C::Border_RecurringText' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, Border_Subtitle) == 0x0005B8, "Member 'UCrewPurchaseScreen_C::Border_Subtitle' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, Button_MtxWallet) == 0x0005C0, "Member 'UCrewPurchaseScreen_C::Button_MtxWallet' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, CrewCrown_Animated) == 0x0005C8, "Member 'UCrewPurchaseScreen_C::CrewCrown_Animated' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, ErrorInfoFlag1) == 0x0005D0, "Member 'UCrewPurchaseScreen_C::ErrorInfoFlag1' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, ErrorInfoFlag2) == 0x0005D8, "Member 'UCrewPurchaseScreen_C::ErrorInfoFlag2' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, Image_BGDarken) == 0x0005E0, "Member 'UCrewPurchaseScreen_C::Image_BGDarken' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, Image_CMSBG) == 0x0005E8, "Member 'UCrewPurchaseScreen_C::Image_CMSBG' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, Image_ErrorBG) == 0x0005F0, "Member 'UCrewPurchaseScreen_C::Image_ErrorBG' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, Image_ErrorBG_Accent) == 0x0005F8, "Member 'UCrewPurchaseScreen_C::Image_ErrorBG_Accent' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, Image_GradientBacking) == 0x000600, "Member 'UCrewPurchaseScreen_C::Image_GradientBacking' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, LightBox_Progress) == 0x000608, "Member 'UCrewPurchaseScreen_C::LightBox_Progress' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, NavButtonNotification) == 0x000610, "Member 'UCrewPurchaseScreen_C::NavButtonNotification' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, Overlay_Background) == 0x000618, "Member 'UCrewPurchaseScreen_C::Overlay_Background' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, Overlay_MainContent) == 0x000620, "Member 'UCrewPurchaseScreen_C::Overlay_MainContent' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, Overlay_PurchaseButton) == 0x000628, "Member 'UCrewPurchaseScreen_C::Overlay_PurchaseButton' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, ProgressSpinner) == 0x000630, "Member 'UCrewPurchaseScreen_C::ProgressSpinner' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, ProgressVBox) == 0x000638, "Member 'UCrewPurchaseScreen_C::ProgressVBox' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, SafeZone_0) == 0x000640, "Member 'UCrewPurchaseScreen_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, SafeZone_BottomRight) == 0x000648, "Member 'UCrewPurchaseScreen_C::SafeZone_BottomRight' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, SafeZone_Content) == 0x000650, "Member 'UCrewPurchaseScreen_C::SafeZone_Content' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, SafeZone_ContentPurchase_Pad) == 0x000658, "Member 'UCrewPurchaseScreen_C::SafeZone_ContentPurchase_Pad' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, SafeZone_TopRight) == 0x000660, "Member 'UCrewPurchaseScreen_C::SafeZone_TopRight' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, ScaleBox_0) == 0x000668, "Member 'UCrewPurchaseScreen_C::ScaleBox_0' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, SizeBox_1) == 0x000670, "Member 'UCrewPurchaseScreen_C::SizeBox_1' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, SizeBox_Content) == 0x000678, "Member 'UCrewPurchaseScreen_C::SizeBox_Content' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, SizeBox_LeftContent) == 0x000680, "Member 'UCrewPurchaseScreen_C::SizeBox_LeftContent' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, Slot_Null) == 0x000688, "Member 'UCrewPurchaseScreen_C::Slot_Null' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, Spacer_NavPlaceholder) == 0x000690, "Member 'UCrewPurchaseScreen_C::Spacer_NavPlaceholder' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, Switcher_Content) == 0x000698, "Member 'UCrewPurchaseScreen_C::Switcher_Content' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, Text_ProgressLabel) == 0x0006A0, "Member 'UCrewPurchaseScreen_C::Text_ProgressLabel' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, Upsell_TutorialTooltip) == 0x0006A8, "Member 'UCrewPurchaseScreen_C::Upsell_TutorialTooltip' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, VerticalBox_RightContent_Pad) == 0x0006B0, "Member 'UCrewPurchaseScreen_C::VerticalBox_RightContent_Pad' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, VisibilitySwitcher_PurchaseRejoinState) == 0x0006B8, "Member 'UCrewPurchaseScreen_C::VisibilitySwitcher_PurchaseRejoinState' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, WBP_ContentPurchaseBlocker) == 0x0006C0, "Member 'UCrewPurchaseScreen_C::WBP_ContentPurchaseBlocker' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, RowTitles) == 0x0006C8, "Member 'UCrewPurchaseScreen_C::RowTitles' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, AccentColor) == 0x0006D8, "Member 'UCrewPurchaseScreen_C::AccentColor' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, SubHeaderColor) == 0x0006E8, "Member 'UCrewPurchaseScreen_C::SubHeaderColor' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, FadeColor) == 0x0006F8, "Member 'UCrewPurchaseScreen_C::FadeColor' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, ImageMID) == 0x000708, "Member 'UCrewPurchaseScreen_C::ImageMID' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, Dispatch_TransitionIn) == 0x000710, "Member 'UCrewPurchaseScreen_C::Dispatch_TransitionIn' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, OldBackground) == 0x000720, "Member 'UCrewPurchaseScreen_C::OldBackground' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen_C, DesignTimeAsset) == 0x000728, "Member 'UCrewPurchaseScreen_C::DesignTimeAsset' has a wrong offset!");

}
