#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UToastSocialWidget_Base_C final : public UFortSocialNotificationWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       TapAccept;
	class UWidgetAnimation*                       ClickAccept;
	class UWidgetAnimation*                       Intro_NeutralInfo_Simple;
	class UWidgetAnimation*                       Intro_GoodInfo_Simple;
	class UWidgetAnimation*                       Intro_BadInfo_Simple;
	class UWidgetAnimation*                       Intro_NeutralInfo;
	class UWidgetAnimation*                       Intro_GoodInfo;
	class UWidgetAnimation*                       Intro_BadInfo;
	class UWidgetAnimation*                       TimeToRespond;
	class UWidgetAnimation*                       Outro_New;
	class UWidgetAnimation*                       HoldProgress;
	class UWidgetAnimation*                       Intro_Action;
	class UImage*                                 BackgroundMat;
	class UIconTextButtonHold_C*                  Button_Cursor;
	class UIconTextButton_C*                      Button_Hold;
	class UFortMobileImage*                       HamburgerIcon;
	class UImage*                                 Image_Fail;
	class UImage*                                 Image_Info;
	class UImage*                                 Image_Success;
	class UImage*                                 Image_Trim;
	class UFortLazyImage*                         LazyImage_Icon;
	class UOverlay*                               Overlay_Input_Keybind;
	class UOverlay*                               Overlay_ResultIcon;
	class UImage*                                 ProgressCircle;
	class UScaleBox*                              ScaleBox_Input_Pad;
	class UCommonWidgetSwitcherLegacy*            Switcher_InputButtons;
	class UCommonTextBlock*                       Text_Action;
	class UCommonRichTextBlock*                   Text_Desc;
	class UCommonRichTextBlock*                   Text_Title;
	class UImage*                                 TextureIcon;
	class UImage*                                 ToastCushion;
	class UVerticalBox*                           VerticalBox_HoldAction;
	class UVerticalBox*                           VerticalBox_Info;
	class UWBP_RebootRallyIcon_C*                 WBP_RebootRallyIcon;
	TMulticastInlineDelegate<void()>              OnFinishedToast;
	struct FTimerHandle                           AnimationDelayTimer;
	bool                                          bActionTaken;
	bool                                          UseComplexAnims;
	bool                                          NewVar;
	uint8                                         Pad_423[0x5];
	TSoftObjectPtr<class UObject>                 DownloadOnDemandErrorIcon;
	bool                                          bUsingNewAvatars;

public:
	void ApplyAdditionalStyling();
	void BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__ToastSocialWidget_Base_Button_Cursor_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__ToastSocialWidget_Base_Button_Cursor_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_3_HoldActionStarted__DelegateSignature();
	void BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_4_HoldActionEnded__DelegateSignature();
	void BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_6_HoldActionCompleted__DelegateSignature();
	void CleanupBeforeClosing();
	void Construct();
	void Destruct();
	class UWidgetAnimation* DetermineIntroAnim();
	void ExecuteUbergraph_ToastSocialWidget_Base(int32 EntryPoint);
	int32 GetActiveWidgetIndex();
	void GetButtonCursorText(class FText* Text);
	void GetButtonHoldText(class FText* Text);
	ESlateVisibility GetInputSwitcherVisibility();
	void HandleIntroFinished();
	void HandleNotificationType(class FText* Return);
	void HandleOutroFinished();
	void HoldComplete();
	void InputBasedStyling();
	void OnCancelNotification();
	void OnCursorModeChanged(bool bCursorModeEnabled);
	void OnInputModeChanged(ECommonInputType NewInputType);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnNewAvatarsEnabledChanged(bool bUsingNewAvatars_0);
	void OnNotificationSet(class UFortUINotification* Notification);
	void OnNotificationUpdated(class UFortUINotification* Notification);
	void OnPlayOpenAnimation();
	void OnTakeActionNotification();
	void OnUserStartedHoldActionNotification();
	void PlayOutro();
	void PreConstruct(bool IsDesignTime);
	void ResetMaterials();
	void SequenceEvent__ENTRYPOINTToastSocialWidget_Base();
	void SequenceEvent__ENTRYPOINTToastSocialWidget_Base_0();
	void SequenceEvent__ENTRYPOINTToastSocialWidget_Base_1();
	void SetImage();
	void SetupAnimBindings(bool Unbind);
	void SetVisibilityForOptionalElements();
	void TakeAction();
	void UpdateIcons();
	void UpdateToast(class UFortUINotification* Notification);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ToastSocialWidget_Base_C">();
	}
	static class UToastSocialWidget_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UToastSocialWidget_Base_C>();
	}
};
static_assert(alignof(UToastSocialWidget_Base_C) == 0x000008, "Wrong alignment on UToastSocialWidget_Base_C");
static_assert(sizeof(UToastSocialWidget_Base_C) == 0x000458, "Wrong size on UToastSocialWidget_Base_C");
static_assert(offsetof(UToastSocialWidget_Base_C, UberGraphFrame) == 0x0002F0, "Member 'UToastSocialWidget_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, TapAccept) == 0x0002F8, "Member 'UToastSocialWidget_Base_C::TapAccept' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, ClickAccept) == 0x000300, "Member 'UToastSocialWidget_Base_C::ClickAccept' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, Intro_NeutralInfo_Simple) == 0x000308, "Member 'UToastSocialWidget_Base_C::Intro_NeutralInfo_Simple' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, Intro_GoodInfo_Simple) == 0x000310, "Member 'UToastSocialWidget_Base_C::Intro_GoodInfo_Simple' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, Intro_BadInfo_Simple) == 0x000318, "Member 'UToastSocialWidget_Base_C::Intro_BadInfo_Simple' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, Intro_NeutralInfo) == 0x000320, "Member 'UToastSocialWidget_Base_C::Intro_NeutralInfo' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, Intro_GoodInfo) == 0x000328, "Member 'UToastSocialWidget_Base_C::Intro_GoodInfo' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, Intro_BadInfo) == 0x000330, "Member 'UToastSocialWidget_Base_C::Intro_BadInfo' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, TimeToRespond) == 0x000338, "Member 'UToastSocialWidget_Base_C::TimeToRespond' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, Outro_New) == 0x000340, "Member 'UToastSocialWidget_Base_C::Outro_New' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, HoldProgress) == 0x000348, "Member 'UToastSocialWidget_Base_C::HoldProgress' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, Intro_Action) == 0x000350, "Member 'UToastSocialWidget_Base_C::Intro_Action' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, BackgroundMat) == 0x000358, "Member 'UToastSocialWidget_Base_C::BackgroundMat' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, Button_Cursor) == 0x000360, "Member 'UToastSocialWidget_Base_C::Button_Cursor' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, Button_Hold) == 0x000368, "Member 'UToastSocialWidget_Base_C::Button_Hold' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, HamburgerIcon) == 0x000370, "Member 'UToastSocialWidget_Base_C::HamburgerIcon' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, Image_Fail) == 0x000378, "Member 'UToastSocialWidget_Base_C::Image_Fail' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, Image_Info) == 0x000380, "Member 'UToastSocialWidget_Base_C::Image_Info' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, Image_Success) == 0x000388, "Member 'UToastSocialWidget_Base_C::Image_Success' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, Image_Trim) == 0x000390, "Member 'UToastSocialWidget_Base_C::Image_Trim' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, LazyImage_Icon) == 0x000398, "Member 'UToastSocialWidget_Base_C::LazyImage_Icon' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, Overlay_Input_Keybind) == 0x0003A0, "Member 'UToastSocialWidget_Base_C::Overlay_Input_Keybind' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, Overlay_ResultIcon) == 0x0003A8, "Member 'UToastSocialWidget_Base_C::Overlay_ResultIcon' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, ProgressCircle) == 0x0003B0, "Member 'UToastSocialWidget_Base_C::ProgressCircle' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, ScaleBox_Input_Pad) == 0x0003B8, "Member 'UToastSocialWidget_Base_C::ScaleBox_Input_Pad' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, Switcher_InputButtons) == 0x0003C0, "Member 'UToastSocialWidget_Base_C::Switcher_InputButtons' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, Text_Action) == 0x0003C8, "Member 'UToastSocialWidget_Base_C::Text_Action' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, Text_Desc) == 0x0003D0, "Member 'UToastSocialWidget_Base_C::Text_Desc' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, Text_Title) == 0x0003D8, "Member 'UToastSocialWidget_Base_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, TextureIcon) == 0x0003E0, "Member 'UToastSocialWidget_Base_C::TextureIcon' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, ToastCushion) == 0x0003E8, "Member 'UToastSocialWidget_Base_C::ToastCushion' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, VerticalBox_HoldAction) == 0x0003F0, "Member 'UToastSocialWidget_Base_C::VerticalBox_HoldAction' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, VerticalBox_Info) == 0x0003F8, "Member 'UToastSocialWidget_Base_C::VerticalBox_Info' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, WBP_RebootRallyIcon) == 0x000400, "Member 'UToastSocialWidget_Base_C::WBP_RebootRallyIcon' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, OnFinishedToast) == 0x000408, "Member 'UToastSocialWidget_Base_C::OnFinishedToast' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, AnimationDelayTimer) == 0x000418, "Member 'UToastSocialWidget_Base_C::AnimationDelayTimer' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, bActionTaken) == 0x000420, "Member 'UToastSocialWidget_Base_C::bActionTaken' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, UseComplexAnims) == 0x000421, "Member 'UToastSocialWidget_Base_C::UseComplexAnims' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, NewVar) == 0x000422, "Member 'UToastSocialWidget_Base_C::NewVar' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, DownloadOnDemandErrorIcon) == 0x000428, "Member 'UToastSocialWidget_Base_C::DownloadOnDemandErrorIcon' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_Base_C, bUsingNewAvatars) == 0x000450, "Member 'UToastSocialWidget_Base_C::bUsingNewAvatars' has a wrong offset!");

}
