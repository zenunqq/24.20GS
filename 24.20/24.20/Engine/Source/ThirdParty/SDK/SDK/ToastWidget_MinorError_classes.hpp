#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UToastWidget_MinorError_C final : public UFortToastWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Outro_New;
	class UWidgetAnimation*                       Intro_212;
	class UWidgetAnimation*                       Intro_4114;
	class UWidgetAnimation*                       Intro_new2;
	class UWidgetAnimation*                       Outro;
	class UWidgetAnimation*                       Intro;
	class UCommonBorder*                          B_NotificationImage;
	class UCommonBorder*                          B_NotificationImageExtended;
	class UCommonBorder*                          CommonBorder_MainWidget;
	class UCommonTextBlock*                       Description;
	class UImage*                                 NotificationImage;
	class UIconTextButton_C*                      OpenButton;
	class UCommonTextBlock*                       ProgrammerNote;
	class UCommonTextBlock*                       Title;
	TMulticastInlineDelegate<void()>              OnFinishedToast;
	struct FTimerHandle                           AnimationDelayTimer;
	bool                                          bActionTaken;

public:
	void ApplyAdditionalStyling();
	void BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_ToastWidget_MinorError(int32 EntryPoint);
	ESlateVisibility GetOpenButtonVisibility();
	void HandleIntroFinished();
	void HandleOutroFinished();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnNotificationSet(class UFortUINotification* Notification);
	void OnNotificationUpdated(class UFortUINotification* Notification);
	void OnPlayOpenAnimation();
	void PlayOutro();
	void SetupAnimBindings(bool Unbind);
	void StartIntro();
	void UpdateToast(class UFortUINotification* Notification);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ToastWidget_MinorError_C">();
	}
	static class UToastWidget_MinorError_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UToastWidget_MinorError_C>();
	}
};
static_assert(alignof(UToastWidget_MinorError_C) == 0x000008, "Wrong alignment on UToastWidget_MinorError_C");
static_assert(sizeof(UToastWidget_MinorError_C) == 0x000350, "Wrong size on UToastWidget_MinorError_C");
static_assert(offsetof(UToastWidget_MinorError_C, UberGraphFrame) == 0x0002B8, "Member 'UToastWidget_MinorError_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UToastWidget_MinorError_C, Outro_New) == 0x0002C0, "Member 'UToastWidget_MinorError_C::Outro_New' has a wrong offset!");
static_assert(offsetof(UToastWidget_MinorError_C, Intro_212) == 0x0002C8, "Member 'UToastWidget_MinorError_C::Intro_212' has a wrong offset!");
static_assert(offsetof(UToastWidget_MinorError_C, Intro_4114) == 0x0002D0, "Member 'UToastWidget_MinorError_C::Intro_4114' has a wrong offset!");
static_assert(offsetof(UToastWidget_MinorError_C, Intro_new2) == 0x0002D8, "Member 'UToastWidget_MinorError_C::Intro_new2' has a wrong offset!");
static_assert(offsetof(UToastWidget_MinorError_C, Outro) == 0x0002E0, "Member 'UToastWidget_MinorError_C::Outro' has a wrong offset!");
static_assert(offsetof(UToastWidget_MinorError_C, Intro) == 0x0002E8, "Member 'UToastWidget_MinorError_C::Intro' has a wrong offset!");
static_assert(offsetof(UToastWidget_MinorError_C, B_NotificationImage) == 0x0002F0, "Member 'UToastWidget_MinorError_C::B_NotificationImage' has a wrong offset!");
static_assert(offsetof(UToastWidget_MinorError_C, B_NotificationImageExtended) == 0x0002F8, "Member 'UToastWidget_MinorError_C::B_NotificationImageExtended' has a wrong offset!");
static_assert(offsetof(UToastWidget_MinorError_C, CommonBorder_MainWidget) == 0x000300, "Member 'UToastWidget_MinorError_C::CommonBorder_MainWidget' has a wrong offset!");
static_assert(offsetof(UToastWidget_MinorError_C, Description) == 0x000308, "Member 'UToastWidget_MinorError_C::Description' has a wrong offset!");
static_assert(offsetof(UToastWidget_MinorError_C, NotificationImage) == 0x000310, "Member 'UToastWidget_MinorError_C::NotificationImage' has a wrong offset!");
static_assert(offsetof(UToastWidget_MinorError_C, OpenButton) == 0x000318, "Member 'UToastWidget_MinorError_C::OpenButton' has a wrong offset!");
static_assert(offsetof(UToastWidget_MinorError_C, ProgrammerNote) == 0x000320, "Member 'UToastWidget_MinorError_C::ProgrammerNote' has a wrong offset!");
static_assert(offsetof(UToastWidget_MinorError_C, Title) == 0x000328, "Member 'UToastWidget_MinorError_C::Title' has a wrong offset!");
static_assert(offsetof(UToastWidget_MinorError_C, OnFinishedToast) == 0x000330, "Member 'UToastWidget_MinorError_C::OnFinishedToast' has a wrong offset!");
static_assert(offsetof(UToastWidget_MinorError_C, AnimationDelayTimer) == 0x000340, "Member 'UToastWidget_MinorError_C::AnimationDelayTimer' has a wrong offset!");
static_assert(offsetof(UToastWidget_MinorError_C, bActionTaken) == 0x000348, "Member 'UToastWidget_MinorError_C::bActionTaken' has a wrong offset!");

}
