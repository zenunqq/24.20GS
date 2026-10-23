#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UFrontEnd_RockyRidgeV2_Final_New_C final : public UFortUIStateWidget_NightNightBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       BGReveal;
	class UWidgetAnimation*                       FadeIn;
	class UWidgetAnimation*                       CountdownIntro;
	class UWidgetAnimation*                       NewSeason;
	class UWidgetAnimation*                       ToBeContinued4;
	class UWidgetAnimation*                       ToBeContinued3;
	class UWidgetAnimation*                       ToBeContinued2;
	class UWidgetAnimation*                       ToBeContinued1;
	class USkewButton_C*                          CloseButton;
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_AnimStates;
	class UImage*                                 Glow;
	class UImage*                                 Glow_0;
	class UImage*                                 Glow_1;
	class UImage*                                 Glow_2;
	class UImage*                                 Glow_3;
	class UImage*                                 Image;
	class UImage*                                 Image_1;
	class UImage*                                 Image_2;
	class UImage*                                 Image_3;
	class UImage*                                 Image_4;
	class UImage*                                 Image_5;
	class UImage*                                 Image_6;
	class UImage*                                 Image_7;
	class UImage*                                 Image_8;
	class UImage*                                 Image_103;
	class UImage*                                 Image_BGColor;
	class UImage*                                 Image_Fade;
	class UImage*                                 Image_Logo;
	class UOverlay*                               Overlay_TextLines;
	class URetainerBox*                           RetainerBox_0;
	class USafeZone*                              SafeZone_0;
	class UCommonTextBlock*                       Text_Button_Close;
	class UCommonTextBlock*                       Text_Countdown_value;
	class UCommonTextBlock*                       Text_line1;
	class UCommonTextBlock*                       Text_line2;
	class UCommonTextBlock*                       Text_line3;
	class UCommonTextBlock*                       Text_line4;
	double                                        CurrentTime;
	class FText                                   ToBeContinuedText;
	TArray<class FString>                         TextArray;

public:
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__SkewButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BP_OnActivated();
	void Construct();
	void DialogResult_F5CDF2014834DA2289AC4A9C8C219485(EFortDialogResult Result, class FName ResultName);
	void ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New(int32 EntryPoint);
	void Finished_009FE66B4A5DE041C9AA728E656E3D34();
	void Finished_24AAB65A42736580C51BD3BB9210CF74();
	void Finished_388F0DBF48A3BD71CA4248816CD1A310();
	void Finished_5FFD204542BF85A654213A9C63D02822();
	void Finished_6D646E07453715C140E19082FCFB49E2();
	void Finished_7A14662040CAA9993EEA69A3B3F098D9();
	void Finished_8824F67B4A44C9BC1A26E3BEF904F050();
	void PreConstruct(bool IsDesignTime);
	void SoundMaybe(int32 Index_0, class USoundBase* sound);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateCountdown();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontEnd_RockyRidgeV2_Final_New_C">();
	}
	static class UFrontEnd_RockyRidgeV2_Final_New_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFrontEnd_RockyRidgeV2_Final_New_C>();
	}
};
static_assert(alignof(UFrontEnd_RockyRidgeV2_Final_New_C) == 0x000008, "Wrong alignment on UFrontEnd_RockyRidgeV2_Final_New_C");
static_assert(sizeof(UFrontEnd_RockyRidgeV2_Final_New_C) == 0x000568, "Wrong size on UFrontEnd_RockyRidgeV2_Final_New_C");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, UberGraphFrame) == 0x000408, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, BGReveal) == 0x000410, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::BGReveal' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, FadeIn) == 0x000418, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, CountdownIntro) == 0x000420, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::CountdownIntro' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, NewSeason) == 0x000428, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::NewSeason' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, ToBeContinued4) == 0x000430, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::ToBeContinued4' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, ToBeContinued3) == 0x000438, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::ToBeContinued3' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, ToBeContinued2) == 0x000440, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::ToBeContinued2' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, ToBeContinued1) == 0x000448, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::ToBeContinued1' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, CloseButton) == 0x000450, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, CommonWidgetSwitcher_AnimStates) == 0x000458, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::CommonWidgetSwitcher_AnimStates' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Glow) == 0x000460, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Glow' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Glow_0) == 0x000468, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Glow_0' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Glow_1) == 0x000470, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Glow_1' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Glow_2) == 0x000478, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Glow_2' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Glow_3) == 0x000480, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Glow_3' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Image) == 0x000488, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Image' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Image_1) == 0x000490, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Image_1' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Image_2) == 0x000498, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Image_2' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Image_3) == 0x0004A0, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Image_3' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Image_4) == 0x0004A8, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Image_4' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Image_5) == 0x0004B0, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Image_5' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Image_6) == 0x0004B8, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Image_6' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Image_7) == 0x0004C0, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Image_7' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Image_8) == 0x0004C8, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Image_8' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Image_103) == 0x0004D0, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Image_103' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Image_BGColor) == 0x0004D8, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Image_BGColor' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Image_Fade) == 0x0004E0, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Image_Fade' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Image_Logo) == 0x0004E8, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Image_Logo' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Overlay_TextLines) == 0x0004F0, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Overlay_TextLines' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, RetainerBox_0) == 0x0004F8, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, SafeZone_0) == 0x000500, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Text_Button_Close) == 0x000508, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Text_Button_Close' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Text_Countdown_value) == 0x000510, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Text_Countdown_value' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Text_line1) == 0x000518, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Text_line1' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Text_line2) == 0x000520, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Text_line2' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Text_line3) == 0x000528, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Text_line3' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, Text_line4) == 0x000530, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::Text_line4' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, CurrentTime) == 0x000538, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::CurrentTime' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, ToBeContinuedText) == 0x000540, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::ToBeContinuedText' has a wrong offset!");
static_assert(offsetof(UFrontEnd_RockyRidgeV2_Final_New_C, TextArray) == 0x000558, "Member 'UFrontEnd_RockyRidgeV2_Final_New_C::TextArray' has a wrong offset!");

}
