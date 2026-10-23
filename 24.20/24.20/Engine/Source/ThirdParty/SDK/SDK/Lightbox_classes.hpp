#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class ULightbox_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       FadeOut;
	class UWidgetAnimation*                       FadeIn;
	class UBorder*                                Border_Darken;
	class UButton*                                ClickCatcher;
	class UNamedSlot*                             Content;
	class UBorder*                                Dimmer;
	class USafeZone*                              SafeZone_0;
	class UCommonVisibilityWidgetLegacy*          WindowButtons;
	class UOverlay*                               WindowsOverlay;
	class Uwindowchromebuttons_C*                 WindowTitleBar;
	TMulticastInlineDelegate<void()>              IntroEnded;
	TMulticastInlineDelegate<void()>              OutroEnded;
	bool                                          ShowWindowControlButtons;
	uint8                                         Pad_309[0x7];
	double                                        DimAmount;
	struct FLinearColor                           BackgroundColor;

public:
	void AddContent(class UCommonUserWidget* Content_0);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_Lightbox(int32 EntryPoint);
	void Intro();
	void Outro();
	void PreConstruct(bool IsDesignTime);
	void RemoveContent();
	void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_0();
	void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Lightbox_C">();
	}
	static class ULightbox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULightbox_C>();
	}
};
static_assert(alignof(ULightbox_C) == 0x000008, "Wrong alignment on ULightbox_C");
static_assert(sizeof(ULightbox_C) == 0x000328, "Wrong size on ULightbox_C");
static_assert(offsetof(ULightbox_C, UberGraphFrame) == 0x000290, "Member 'ULightbox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULightbox_C, FadeOut) == 0x000298, "Member 'ULightbox_C::FadeOut' has a wrong offset!");
static_assert(offsetof(ULightbox_C, FadeIn) == 0x0002A0, "Member 'ULightbox_C::FadeIn' has a wrong offset!");
static_assert(offsetof(ULightbox_C, Border_Darken) == 0x0002A8, "Member 'ULightbox_C::Border_Darken' has a wrong offset!");
static_assert(offsetof(ULightbox_C, ClickCatcher) == 0x0002B0, "Member 'ULightbox_C::ClickCatcher' has a wrong offset!");
static_assert(offsetof(ULightbox_C, Content) == 0x0002B8, "Member 'ULightbox_C::Content' has a wrong offset!");
static_assert(offsetof(ULightbox_C, Dimmer) == 0x0002C0, "Member 'ULightbox_C::Dimmer' has a wrong offset!");
static_assert(offsetof(ULightbox_C, SafeZone_0) == 0x0002C8, "Member 'ULightbox_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(ULightbox_C, WindowButtons) == 0x0002D0, "Member 'ULightbox_C::WindowButtons' has a wrong offset!");
static_assert(offsetof(ULightbox_C, WindowsOverlay) == 0x0002D8, "Member 'ULightbox_C::WindowsOverlay' has a wrong offset!");
static_assert(offsetof(ULightbox_C, WindowTitleBar) == 0x0002E0, "Member 'ULightbox_C::WindowTitleBar' has a wrong offset!");
static_assert(offsetof(ULightbox_C, IntroEnded) == 0x0002E8, "Member 'ULightbox_C::IntroEnded' has a wrong offset!");
static_assert(offsetof(ULightbox_C, OutroEnded) == 0x0002F8, "Member 'ULightbox_C::OutroEnded' has a wrong offset!");
static_assert(offsetof(ULightbox_C, ShowWindowControlButtons) == 0x000308, "Member 'ULightbox_C::ShowWindowControlButtons' has a wrong offset!");
static_assert(offsetof(ULightbox_C, DimAmount) == 0x000310, "Member 'ULightbox_C::DimAmount' has a wrong offset!");
static_assert(offsetof(ULightbox_C, BackgroundColor) == 0x000318, "Member 'ULightbox_C::BackgroundColor' has a wrong offset!");

}
