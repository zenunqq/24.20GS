#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class URebootRallyEligiblePlayersOnboardingTooltip_C final : public UFortSidebarOnboardTooltipWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Reset;
	class UWidgetAnimation*                       Outro;
	class UWidgetAnimation*                       Pulse;
	class UCommonRichTextBlock*                   CommonRichTextBlock_106;
	class UCommonRichTextBlock*                   CommonRichTextBlock_140;
	class UImage*                                 Image_Arrow;
	class UImage*                                 ImageBurst;

public:
	void ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip(int32 EntryPoint);
	void Finished_8745633545D14FC376C81C8A09011F8C();
	void OnEndTooltip();
	void OnShowTooltip();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RebootRallyEligiblePlayersOnboardingTooltip_C">();
	}
	static class URebootRallyEligiblePlayersOnboardingTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URebootRallyEligiblePlayersOnboardingTooltip_C>();
	}
};
static_assert(alignof(URebootRallyEligiblePlayersOnboardingTooltip_C) == 0x000008, "Wrong alignment on URebootRallyEligiblePlayersOnboardingTooltip_C");
static_assert(sizeof(URebootRallyEligiblePlayersOnboardingTooltip_C) == 0x000448, "Wrong size on URebootRallyEligiblePlayersOnboardingTooltip_C");
static_assert(offsetof(URebootRallyEligiblePlayersOnboardingTooltip_C, UberGraphFrame) == 0x000408, "Member 'URebootRallyEligiblePlayersOnboardingTooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URebootRallyEligiblePlayersOnboardingTooltip_C, Reset) == 0x000410, "Member 'URebootRallyEligiblePlayersOnboardingTooltip_C::Reset' has a wrong offset!");
static_assert(offsetof(URebootRallyEligiblePlayersOnboardingTooltip_C, Outro) == 0x000418, "Member 'URebootRallyEligiblePlayersOnboardingTooltip_C::Outro' has a wrong offset!");
static_assert(offsetof(URebootRallyEligiblePlayersOnboardingTooltip_C, Pulse) == 0x000420, "Member 'URebootRallyEligiblePlayersOnboardingTooltip_C::Pulse' has a wrong offset!");
static_assert(offsetof(URebootRallyEligiblePlayersOnboardingTooltip_C, CommonRichTextBlock_106) == 0x000428, "Member 'URebootRallyEligiblePlayersOnboardingTooltip_C::CommonRichTextBlock_106' has a wrong offset!");
static_assert(offsetof(URebootRallyEligiblePlayersOnboardingTooltip_C, CommonRichTextBlock_140) == 0x000430, "Member 'URebootRallyEligiblePlayersOnboardingTooltip_C::CommonRichTextBlock_140' has a wrong offset!");
static_assert(offsetof(URebootRallyEligiblePlayersOnboardingTooltip_C, Image_Arrow) == 0x000438, "Member 'URebootRallyEligiblePlayersOnboardingTooltip_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(URebootRallyEligiblePlayersOnboardingTooltip_C, ImageBurst) == 0x000440, "Member 'URebootRallyEligiblePlayersOnboardingTooltip_C::ImageBurst' has a wrong offset!");

}
