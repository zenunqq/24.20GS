#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class URebootCardIndicator_C final : public UAthenaRebootCardIndicator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       UpdateTime;
	class UBorder*                                Border_Nameplate;
	class UImage*                                 burst;
	class UImage*                                 Image_RebootIcon;
	class USpacer*                                IndicatorSpacer;
	class UHorizontalBox*                         RebootCountdownContainer;
	class UCommonTextBlock*                       TimeText;
	double                                        CurTime;
	double                                        EndTime;
	struct FTimerHandle                           TimerHandle;

public:
	void bp_UpdateCountdownText();
	void ExecuteUbergraph_RebootCardIndicator(int32 EntryPoint);
	void HandleDisplayForSelf(bool bSelf);
	void SetupCountdown(float StartTimeLocalWorld, float EndTimeLocalWorld);
	void UpdateCountdownText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RebootCardIndicator_C">();
	}
	static class URebootCardIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URebootCardIndicator_C>();
	}
};
static_assert(alignof(URebootCardIndicator_C) == 0x000008, "Wrong alignment on URebootCardIndicator_C");
static_assert(sizeof(URebootCardIndicator_C) == 0x000670, "Wrong size on URebootCardIndicator_C");
static_assert(offsetof(URebootCardIndicator_C, UberGraphFrame) == 0x000618, "Member 'URebootCardIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URebootCardIndicator_C, UpdateTime) == 0x000620, "Member 'URebootCardIndicator_C::UpdateTime' has a wrong offset!");
static_assert(offsetof(URebootCardIndicator_C, Border_Nameplate) == 0x000628, "Member 'URebootCardIndicator_C::Border_Nameplate' has a wrong offset!");
static_assert(offsetof(URebootCardIndicator_C, burst) == 0x000630, "Member 'URebootCardIndicator_C::burst' has a wrong offset!");
static_assert(offsetof(URebootCardIndicator_C, Image_RebootIcon) == 0x000638, "Member 'URebootCardIndicator_C::Image_RebootIcon' has a wrong offset!");
static_assert(offsetof(URebootCardIndicator_C, IndicatorSpacer) == 0x000640, "Member 'URebootCardIndicator_C::IndicatorSpacer' has a wrong offset!");
static_assert(offsetof(URebootCardIndicator_C, RebootCountdownContainer) == 0x000648, "Member 'URebootCardIndicator_C::RebootCountdownContainer' has a wrong offset!");
static_assert(offsetof(URebootCardIndicator_C, TimeText) == 0x000650, "Member 'URebootCardIndicator_C::TimeText' has a wrong offset!");
static_assert(offsetof(URebootCardIndicator_C, CurTime) == 0x000658, "Member 'URebootCardIndicator_C::CurTime' has a wrong offset!");
static_assert(offsetof(URebootCardIndicator_C, EndTime) == 0x000660, "Member 'URebootCardIndicator_C::EndTime' has a wrong offset!");
static_assert(offsetof(URebootCardIndicator_C, TimerHandle) == 0x000668, "Member 'URebootCardIndicator_C::TimerHandle' has a wrong offset!");

}
