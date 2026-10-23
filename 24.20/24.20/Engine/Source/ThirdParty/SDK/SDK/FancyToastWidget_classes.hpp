#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"

namespace SDK
{

class UFancyToastWidget_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Outro;
	class UWidgetAnimation*                       Intro;
	class UCommonTextBlock*                       Description;
	class UCommonTextBlock*                       DescriptionRegular;
	class UOverlay*                               RegularToast;
	class UImage*                                 SmallPreviewPortrait;
	class UOverlay*                               SpecialToast;
	class UCommonTextBlock*                       Title;
	class UCommonTextBlock*                       TitleRegular;
	class UWidgetSwitcher*                        TypeWidgetSwitcher;
	TMulticastInlineDelegate<void()>              OnFinishedToast;
	TSoftObjectPtr<class UTexture2D>              Dev_TestImage;
	TMulticastInlineDelegate<void()>              OnToastClicked;
	bool                                          DoNotUseTimerToDismiss;

public:
	void Clicked();
	void CompleteToast();
	void ExecuteUbergraph_FancyToastWidget(int32 EntryPoint);
	void On_Idle_Finished();
	void OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8(class UObject* Loaded);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnShowToast(const struct FFortToastDisplayInfo& DispalyInfo);
	void RemoveWidget();
	void SetAndShowText(const class FText& Text, class UCommonTextBlock* TextBlock);
	void ShowToast(const struct FFortToastDisplayInfo& DisplayInfo);
	void SimulateAthenaStoreToast();
	void Start_Toast_Animation();
	void WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_0();
	void WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FancyToastWidget_C">();
	}
	static class UFancyToastWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFancyToastWidget_C>();
	}
};
static_assert(alignof(UFancyToastWidget_C) == 0x000008, "Wrong alignment on UFancyToastWidget_C");
static_assert(sizeof(UFancyToastWidget_C) == 0x000338, "Wrong size on UFancyToastWidget_C");
static_assert(offsetof(UFancyToastWidget_C, UberGraphFrame) == 0x000290, "Member 'UFancyToastWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFancyToastWidget_C, Outro) == 0x000298, "Member 'UFancyToastWidget_C::Outro' has a wrong offset!");
static_assert(offsetof(UFancyToastWidget_C, Intro) == 0x0002A0, "Member 'UFancyToastWidget_C::Intro' has a wrong offset!");
static_assert(offsetof(UFancyToastWidget_C, Description) == 0x0002A8, "Member 'UFancyToastWidget_C::Description' has a wrong offset!");
static_assert(offsetof(UFancyToastWidget_C, DescriptionRegular) == 0x0002B0, "Member 'UFancyToastWidget_C::DescriptionRegular' has a wrong offset!");
static_assert(offsetof(UFancyToastWidget_C, RegularToast) == 0x0002B8, "Member 'UFancyToastWidget_C::RegularToast' has a wrong offset!");
static_assert(offsetof(UFancyToastWidget_C, SmallPreviewPortrait) == 0x0002C0, "Member 'UFancyToastWidget_C::SmallPreviewPortrait' has a wrong offset!");
static_assert(offsetof(UFancyToastWidget_C, SpecialToast) == 0x0002C8, "Member 'UFancyToastWidget_C::SpecialToast' has a wrong offset!");
static_assert(offsetof(UFancyToastWidget_C, Title) == 0x0002D0, "Member 'UFancyToastWidget_C::Title' has a wrong offset!");
static_assert(offsetof(UFancyToastWidget_C, TitleRegular) == 0x0002D8, "Member 'UFancyToastWidget_C::TitleRegular' has a wrong offset!");
static_assert(offsetof(UFancyToastWidget_C, TypeWidgetSwitcher) == 0x0002E0, "Member 'UFancyToastWidget_C::TypeWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UFancyToastWidget_C, OnFinishedToast) == 0x0002E8, "Member 'UFancyToastWidget_C::OnFinishedToast' has a wrong offset!");
static_assert(offsetof(UFancyToastWidget_C, Dev_TestImage) == 0x0002F8, "Member 'UFancyToastWidget_C::Dev_TestImage' has a wrong offset!");
static_assert(offsetof(UFancyToastWidget_C, OnToastClicked) == 0x000320, "Member 'UFancyToastWidget_C::OnToastClicked' has a wrong offset!");
static_assert(offsetof(UFancyToastWidget_C, DoNotUseTimerToDismiss) == 0x000330, "Member 'UFancyToastWidget_C::DoNotUseTimerToDismiss' has a wrong offset!");

}
