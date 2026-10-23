#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UPowerToastWidget_C final : public UFortPlayerPowerRatingToast
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       LookAtMe;
	class UWidgetAnimation*                       Outro;
	class UWidgetAnimation*                       Intro;
	class UImage*                                 Image_2;
	class UImage*                                 Image_Power;
	class UImage*                                 LineSeparator;
	class UImage*                                 Moonbeam_Power_Back_1;
	class UImage*                                 Moonbeam_Power_Back_Difference;
	class UImage*                                 PowerIconGlow;
	struct FTimerHandle                           AnimationDelayTimer;

public:
	void Construct();
	void ExecuteUbergraph_PowerToastWidget(int32 EntryPoint);
	void HandleAnimationDelay();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void ShowToast();
	void WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_0();
	void WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PowerToastWidget_C">();
	}
	static class UPowerToastWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPowerToastWidget_C>();
	}
};
static_assert(alignof(UPowerToastWidget_C) == 0x000008, "Wrong alignment on UPowerToastWidget_C");
static_assert(sizeof(UPowerToastWidget_C) == 0x000340, "Wrong size on UPowerToastWidget_C");
static_assert(offsetof(UPowerToastWidget_C, UberGraphFrame) == 0x0002E8, "Member 'UPowerToastWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, LookAtMe) == 0x0002F0, "Member 'UPowerToastWidget_C::LookAtMe' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, Outro) == 0x0002F8, "Member 'UPowerToastWidget_C::Outro' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, Intro) == 0x000300, "Member 'UPowerToastWidget_C::Intro' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, Image_2) == 0x000308, "Member 'UPowerToastWidget_C::Image_2' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, Image_Power) == 0x000310, "Member 'UPowerToastWidget_C::Image_Power' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, LineSeparator) == 0x000318, "Member 'UPowerToastWidget_C::LineSeparator' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, Moonbeam_Power_Back_1) == 0x000320, "Member 'UPowerToastWidget_C::Moonbeam_Power_Back_1' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, Moonbeam_Power_Back_Difference) == 0x000328, "Member 'UPowerToastWidget_C::Moonbeam_Power_Back_Difference' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, PowerIconGlow) == 0x000330, "Member 'UPowerToastWidget_C::PowerIconGlow' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, AnimationDelayTimer) == 0x000338, "Member 'UPowerToastWidget_C::AnimationDelayTimer' has a wrong offset!");

}
