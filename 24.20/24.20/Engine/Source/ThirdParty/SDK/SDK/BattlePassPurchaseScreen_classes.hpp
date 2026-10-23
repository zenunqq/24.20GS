#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CrewUI_structs.hpp"
#include "CrewUI_classes.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK
{

class UBattlePassPurchaseScreen_C final : public UBattlePassPurchaseScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       NewTile;
	class UWidgetAnimation*                       PurchaseOptions;
	class UWidgetAnimation*                       TransitionOut;
	class UWidgetAnimation*                       TransitionIn;
	class UHorizontalBox*                         HorizontalBox_BottomButtons;
	class UHorizontalBox*                         HorizontalBox_ConfirmButtons;
	class UEpicCMSImage*                          Image_Background_TestBG;
	class UImage*                                 Image_BackgroundBlur;
	class UImage*                                 Image_BGDarken;
	class UImage*                                 Image_Glow;
	class UOverlay*                               MobileCloseVisibilityWrapper;
	class UUpsell_TutorialTooltip_C*              NavButtonNotification;
	class USizeBox*                               NavButtonNotificationWrapper;
	class UOverlay*                               Overlay_1;
	class UOverlay*                               Overlay_PurchaseOptions;
	class UOverlay*                               PurchaseVisibilityWrapper;
	class USafeZone*                              SafeZone_0;
	class USafeZone*                              SafeZone_1;
	class USafeZone*                              SafeZone_TopRight;
	class USizeBox*                               SizeBox_Content;
	class USpacer*                                Spacer_169;
	class USpacer*                                Spacer_purchase;
	class UOverlay*                               ToCrewVisibilityWrapper;
	class UVerticalBox*                           VerticalBox_PassDetails;
	class UVerticalBox*                           VerticalBox_PurchaseOptions;
	class UMaterialInstanceDynamic*               ImageMID;
	TSoftObjectPtr<class UTexture>                DesignTimeAsset;
	TMulticastInlineDelegate<void()>              OnPurchaseStateConfirm;
	TMulticastInlineDelegate<void()>              OnPurchaseStatePurchase;
	class UTexture2D*                             OldBackground;
	class USoundBase*                             UpsellScreenAppearSound;
	bool                                          Show_Notification;
	uint8                                         Pad_631[0x7];
	class USoundBase*                             Purchase_Button_Click_Sound;
	class USoundBase*                             Back_To_Battlepass_Click_Sound;
	class USoundBase*                             BP_ScreenAppearWhooshSound;

public:
	void BndEvt__BattlePassPurchaseScreen_Button_ConfirmBundle_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility);
	void BndEvt__BattlePassPurchaseScreen_Button_ToCrew_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BP_OnActivated();
	void Construct();
	void EventScreenTransitionIn();
	void ExecuteUbergraph_BattlePassPurchaseScreen(int32 EntryPoint);
	void OnDownloadBackgroundComplete(class UTexture2D* NewBackground);
	void OnPurchaseConfirmed();
	void OnPurchaseStateChanged(EBattlePassPurchaseState InCurrentState);
	void OnSetNavButtonNotificationText(const class FText& NotificationText);
	void OnSetScreenInteractable(bool bInteractable);
	void OnShowNavButtonNotification(const bool bShowNotification);
	void OnStartingDownloadBackground();
	void PreConstruct(bool IsDesignTime);
	void SetDesignTimeImages();
	void SetMobileVisuals();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattlePassPurchaseScreen_C">();
	}
	static class UBattlePassPurchaseScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattlePassPurchaseScreen_C>();
	}
};
static_assert(alignof(UBattlePassPurchaseScreen_C) == 0x000008, "Wrong alignment on UBattlePassPurchaseScreen_C");
static_assert(sizeof(UBattlePassPurchaseScreen_C) == 0x000650, "Wrong size on UBattlePassPurchaseScreen_C");
static_assert(offsetof(UBattlePassPurchaseScreen_C, UberGraphFrame) == 0x000500, "Member 'UBattlePassPurchaseScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, NewTile) == 0x000508, "Member 'UBattlePassPurchaseScreen_C::NewTile' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, PurchaseOptions) == 0x000510, "Member 'UBattlePassPurchaseScreen_C::PurchaseOptions' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, TransitionOut) == 0x000518, "Member 'UBattlePassPurchaseScreen_C::TransitionOut' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, TransitionIn) == 0x000520, "Member 'UBattlePassPurchaseScreen_C::TransitionIn' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, HorizontalBox_BottomButtons) == 0x000528, "Member 'UBattlePassPurchaseScreen_C::HorizontalBox_BottomButtons' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, HorizontalBox_ConfirmButtons) == 0x000530, "Member 'UBattlePassPurchaseScreen_C::HorizontalBox_ConfirmButtons' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, Image_Background_TestBG) == 0x000538, "Member 'UBattlePassPurchaseScreen_C::Image_Background_TestBG' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, Image_BackgroundBlur) == 0x000540, "Member 'UBattlePassPurchaseScreen_C::Image_BackgroundBlur' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, Image_BGDarken) == 0x000548, "Member 'UBattlePassPurchaseScreen_C::Image_BGDarken' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, Image_Glow) == 0x000550, "Member 'UBattlePassPurchaseScreen_C::Image_Glow' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, MobileCloseVisibilityWrapper) == 0x000558, "Member 'UBattlePassPurchaseScreen_C::MobileCloseVisibilityWrapper' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, NavButtonNotification) == 0x000560, "Member 'UBattlePassPurchaseScreen_C::NavButtonNotification' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, NavButtonNotificationWrapper) == 0x000568, "Member 'UBattlePassPurchaseScreen_C::NavButtonNotificationWrapper' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, Overlay_1) == 0x000570, "Member 'UBattlePassPurchaseScreen_C::Overlay_1' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, Overlay_PurchaseOptions) == 0x000578, "Member 'UBattlePassPurchaseScreen_C::Overlay_PurchaseOptions' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, PurchaseVisibilityWrapper) == 0x000580, "Member 'UBattlePassPurchaseScreen_C::PurchaseVisibilityWrapper' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, SafeZone_0) == 0x000588, "Member 'UBattlePassPurchaseScreen_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, SafeZone_1) == 0x000590, "Member 'UBattlePassPurchaseScreen_C::SafeZone_1' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, SafeZone_TopRight) == 0x000598, "Member 'UBattlePassPurchaseScreen_C::SafeZone_TopRight' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, SizeBox_Content) == 0x0005A0, "Member 'UBattlePassPurchaseScreen_C::SizeBox_Content' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, Spacer_169) == 0x0005A8, "Member 'UBattlePassPurchaseScreen_C::Spacer_169' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, Spacer_purchase) == 0x0005B0, "Member 'UBattlePassPurchaseScreen_C::Spacer_purchase' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, ToCrewVisibilityWrapper) == 0x0005B8, "Member 'UBattlePassPurchaseScreen_C::ToCrewVisibilityWrapper' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, VerticalBox_PassDetails) == 0x0005C0, "Member 'UBattlePassPurchaseScreen_C::VerticalBox_PassDetails' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, VerticalBox_PurchaseOptions) == 0x0005C8, "Member 'UBattlePassPurchaseScreen_C::VerticalBox_PurchaseOptions' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, ImageMID) == 0x0005D0, "Member 'UBattlePassPurchaseScreen_C::ImageMID' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, DesignTimeAsset) == 0x0005D8, "Member 'UBattlePassPurchaseScreen_C::DesignTimeAsset' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, OnPurchaseStateConfirm) == 0x000600, "Member 'UBattlePassPurchaseScreen_C::OnPurchaseStateConfirm' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, OnPurchaseStatePurchase) == 0x000610, "Member 'UBattlePassPurchaseScreen_C::OnPurchaseStatePurchase' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, OldBackground) == 0x000620, "Member 'UBattlePassPurchaseScreen_C::OldBackground' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, UpsellScreenAppearSound) == 0x000628, "Member 'UBattlePassPurchaseScreen_C::UpsellScreenAppearSound' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, Show_Notification) == 0x000630, "Member 'UBattlePassPurchaseScreen_C::Show_Notification' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, Purchase_Button_Click_Sound) == 0x000638, "Member 'UBattlePassPurchaseScreen_C::Purchase_Button_Click_Sound' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, Back_To_Battlepass_Click_Sound) == 0x000640, "Member 'UBattlePassPurchaseScreen_C::Back_To_Battlepass_Click_Sound' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, BP_ScreenAppearWhooshSound) == 0x000648, "Member 'UBattlePassPurchaseScreen_C::BP_ScreenAppearWhooshSound' has a wrong offset!");

}
