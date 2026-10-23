#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UToastWidgetDonut_C final : public UFortToastWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Outro_New;
	class UWidgetAnimation*                       Intro;
	class UCommonBorder*                          CommonBorder_MainWidget;
	class UCommonTextBlock*                       Description;
	class UImage*                                 Image_134;
	class UTextBlock*                             TextBlock_0;
	class UCommonTextBlock*                       Title;
	TMulticastInlineDelegate<void()>              OnFinishedToast;
	struct FTimerHandle                           AnimationDelayTimer;
	bool                                          bActionTaken;

public:
	void ApplyAdditionalStyling();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_ToastWidgetDonut(int32 EntryPoint);
	ESlateVisibility GetOpenButtonVisibility();
	void HandleIntroFinished();
	void HandleOutroFinished();
	void OnNotificationSet(class UFortUINotification* Notification);
	void OnNotificationUpdated(class UFortUINotification* Notification);
	void OnPlayOpenAnimation();
	void PlayOutro();
	void SetImage();
	void SetupAnimBindings(bool Unbind);
	void StartIntro();
	void UpdateToast(class UFortUINotification* Notification);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ToastWidgetDonut_C">();
	}
	static class UToastWidgetDonut_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UToastWidgetDonut_C>();
	}
};
static_assert(alignof(UToastWidgetDonut_C) == 0x000008, "Wrong alignment on UToastWidgetDonut_C");
static_assert(sizeof(UToastWidgetDonut_C) == 0x000318, "Wrong size on UToastWidgetDonut_C");
static_assert(offsetof(UToastWidgetDonut_C, UberGraphFrame) == 0x0002B8, "Member 'UToastWidgetDonut_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UToastWidgetDonut_C, Outro_New) == 0x0002C0, "Member 'UToastWidgetDonut_C::Outro_New' has a wrong offset!");
static_assert(offsetof(UToastWidgetDonut_C, Intro) == 0x0002C8, "Member 'UToastWidgetDonut_C::Intro' has a wrong offset!");
static_assert(offsetof(UToastWidgetDonut_C, CommonBorder_MainWidget) == 0x0002D0, "Member 'UToastWidgetDonut_C::CommonBorder_MainWidget' has a wrong offset!");
static_assert(offsetof(UToastWidgetDonut_C, Description) == 0x0002D8, "Member 'UToastWidgetDonut_C::Description' has a wrong offset!");
static_assert(offsetof(UToastWidgetDonut_C, Image_134) == 0x0002E0, "Member 'UToastWidgetDonut_C::Image_134' has a wrong offset!");
static_assert(offsetof(UToastWidgetDonut_C, TextBlock_0) == 0x0002E8, "Member 'UToastWidgetDonut_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UToastWidgetDonut_C, Title) == 0x0002F0, "Member 'UToastWidgetDonut_C::Title' has a wrong offset!");
static_assert(offsetof(UToastWidgetDonut_C, OnFinishedToast) == 0x0002F8, "Member 'UToastWidgetDonut_C::OnFinishedToast' has a wrong offset!");
static_assert(offsetof(UToastWidgetDonut_C, AnimationDelayTimer) == 0x000308, "Member 'UToastWidgetDonut_C::AnimationDelayTimer' has a wrong offset!");
static_assert(offsetof(UToastWidgetDonut_C, bActionTaken) == 0x000310, "Member 'UToastWidgetDonut_C::bActionTaken' has a wrong offset!");

}
