#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UToastWidget_New_C final : public UFortToastWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Outro_New;
	class UWidgetAnimation*                       Intro;
	class UCommonBorder*                          B_NotificationImage;
	class UCommonBorder*                          B_NotificationImageExtended;
	class UCommonBorder*                          CommonBorder_MainWidget;
	class UCommonRichTextBlock*                   DescriptionRichText;
	class UFortLazyImage*                         NotificationImage;
	class UIconTextButton_C*                      OpenButton;
	class UCommonRichTextBlock*                   TitleRichText;
	TMulticastInlineDelegate<void()>              OnFinishedToast;
	struct FTimerHandle                           AnimationDelayTimer;
	bool                                          bActionTaken;

public:
	void BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_ToastWidget_New(int32 EntryPoint);
	ESlateVisibility GetOpenButtonVisibility();
	void HandleIntroFinished();
	void HandleOutroFinished();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnNotificationSet(class UFortUINotification* Notification);
	void OnNotificationUpdated(class UFortUINotification* Notification);
	void OnPlayOpenAnimation();
	void PlayOutro();
	void SetImage();
	void SetupAnimBindings(bool Unbind);
	void StartIntro();
	void UpdateToast(class UFortUINotification* Notification);

	float GetDisplayTime(bool* bOutDisplayTimeOverridden) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ToastWidget_New_C">();
	}
	static class UToastWidget_New_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UToastWidget_New_C>();
	}
};
static_assert(alignof(UToastWidget_New_C) == 0x000008, "Wrong alignment on UToastWidget_New_C");
static_assert(sizeof(UToastWidget_New_C) == 0x000328, "Wrong size on UToastWidget_New_C");
static_assert(offsetof(UToastWidget_New_C, UberGraphFrame) == 0x0002B8, "Member 'UToastWidget_New_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UToastWidget_New_C, Outro_New) == 0x0002C0, "Member 'UToastWidget_New_C::Outro_New' has a wrong offset!");
static_assert(offsetof(UToastWidget_New_C, Intro) == 0x0002C8, "Member 'UToastWidget_New_C::Intro' has a wrong offset!");
static_assert(offsetof(UToastWidget_New_C, B_NotificationImage) == 0x0002D0, "Member 'UToastWidget_New_C::B_NotificationImage' has a wrong offset!");
static_assert(offsetof(UToastWidget_New_C, B_NotificationImageExtended) == 0x0002D8, "Member 'UToastWidget_New_C::B_NotificationImageExtended' has a wrong offset!");
static_assert(offsetof(UToastWidget_New_C, CommonBorder_MainWidget) == 0x0002E0, "Member 'UToastWidget_New_C::CommonBorder_MainWidget' has a wrong offset!");
static_assert(offsetof(UToastWidget_New_C, DescriptionRichText) == 0x0002E8, "Member 'UToastWidget_New_C::DescriptionRichText' has a wrong offset!");
static_assert(offsetof(UToastWidget_New_C, NotificationImage) == 0x0002F0, "Member 'UToastWidget_New_C::NotificationImage' has a wrong offset!");
static_assert(offsetof(UToastWidget_New_C, OpenButton) == 0x0002F8, "Member 'UToastWidget_New_C::OpenButton' has a wrong offset!");
static_assert(offsetof(UToastWidget_New_C, TitleRichText) == 0x000300, "Member 'UToastWidget_New_C::TitleRichText' has a wrong offset!");
static_assert(offsetof(UToastWidget_New_C, OnFinishedToast) == 0x000308, "Member 'UToastWidget_New_C::OnFinishedToast' has a wrong offset!");
static_assert(offsetof(UToastWidget_New_C, AnimationDelayTimer) == 0x000318, "Member 'UToastWidget_New_C::AnimationDelayTimer' has a wrong offset!");
static_assert(offsetof(UToastWidget_New_C, bActionTaken) == 0x000320, "Member 'UToastWidget_New_C::bActionTaken' has a wrong offset!");

}
