#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UToastSocialWidget_C final : public UFortSocialNotificationWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Outro_New;
	class UWidgetAnimation*                       Intro;
	class UCommonBorder*                          B_NotificationImage;
	class UCommonBorder*                          B_NotificationImageExtended;
	class UIconTextButton_C*                      Button_Cursor;
	class UIconTextButton_C*                      Button_Hold;
	class UCommonBorder*                          CommonBorder_MainWidget;
	class UCommonRichTextBlock*                   DescriptionRichText;
	class UFortLazyImage*                         NotificationImage;
	class UCommonWidgetSwitcherLegacy*            Switcher_InputButtons;
	class UCommonRichTextBlock*                   TitleRichText;
	struct FTimerHandle                           AnimationDelayTimer;
	bool                                          bActionTaken;

public:
	void BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void CleanupBeforeClosing();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_ToastSocialWidget(int32 EntryPoint);
	int32 GetActiveWidgetIndex();
	void GetButtonCursorText(class FText* Text);
	void GetButtonHoldText(class FText* Text);
	ESlateVisibility GetInputSwitcherVisibility();
	void HandleIntroFinished();
	void HandleOutroFinished();
	void OnCancelNotification();
	void OnCursorModeChanged(bool bCursorModeEnabled);
	void OnInputModeChanged(ECommonInputType NewInputType);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnNotificationSet(class UFortUINotification* Notification);
	void OnNotificationUpdated(class UFortUINotification* Notification);
	void OnPlayOpenAnimation();
	void OnTakeActionNotification();
	void OnUserStartedHoldActionNotification();
	void PlayOutro();
	void SetImage();
	void SetupAnimBindings(bool Unbind);
	void SetVisibilityForOptionalElements();
	void StartIntro();
	void TakeAction();
	void UpdateToast(class UFortUINotification* Notification);

	float GetDisplayTime(bool* bOutDisplayTimeOverridden) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ToastSocialWidget_C">();
	}
	static class UToastSocialWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UToastSocialWidget_C>();
	}
};
static_assert(alignof(UToastSocialWidget_C) == 0x000008, "Wrong alignment on UToastSocialWidget_C");
static_assert(sizeof(UToastSocialWidget_C) == 0x000360, "Wrong size on UToastSocialWidget_C");
static_assert(offsetof(UToastSocialWidget_C, UberGraphFrame) == 0x0002F0, "Member 'UToastSocialWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_C, Outro_New) == 0x0002F8, "Member 'UToastSocialWidget_C::Outro_New' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_C, Intro) == 0x000300, "Member 'UToastSocialWidget_C::Intro' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_C, B_NotificationImage) == 0x000308, "Member 'UToastSocialWidget_C::B_NotificationImage' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_C, B_NotificationImageExtended) == 0x000310, "Member 'UToastSocialWidget_C::B_NotificationImageExtended' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_C, Button_Cursor) == 0x000318, "Member 'UToastSocialWidget_C::Button_Cursor' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_C, Button_Hold) == 0x000320, "Member 'UToastSocialWidget_C::Button_Hold' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_C, CommonBorder_MainWidget) == 0x000328, "Member 'UToastSocialWidget_C::CommonBorder_MainWidget' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_C, DescriptionRichText) == 0x000330, "Member 'UToastSocialWidget_C::DescriptionRichText' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_C, NotificationImage) == 0x000338, "Member 'UToastSocialWidget_C::NotificationImage' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_C, Switcher_InputButtons) == 0x000340, "Member 'UToastSocialWidget_C::Switcher_InputButtons' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_C, TitleRichText) == 0x000348, "Member 'UToastSocialWidget_C::TitleRichText' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_C, AnimationDelayTimer) == 0x000350, "Member 'UToastSocialWidget_C::AnimationDelayTimer' has a wrong offset!");
static_assert(offsetof(UToastSocialWidget_C, bActionTaken) == 0x000358, "Member 'UToastSocialWidget_C::bActionTaken' has a wrong offset!");

}
