#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UWBP_ExpressYourSupportOnboardingTooltip_C final : public UFortSidebarOnboardTooltipWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Outro;
	class UWidgetAnimation*                       Pulse;
	class UCommonRichTextBlock*                   CommonRichTextBlock_106;
	class UCommonRichTextBlock*                   CommonRichTextBlock_140;
	class UImage*                                 Image_Arrow;
	class UImage*                                 ImageBurst;

public:
	void ExecuteUbergraph_WBP_ExpressYourSupportOnboardingTooltip(int32 EntryPoint);
	void Finished_D7671D604923598032BE2991D56E36EB();
	void OnEndTooltip();
	void OnShowTooltip();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ExpressYourSupportOnboardingTooltip_C">();
	}
	static class UWBP_ExpressYourSupportOnboardingTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ExpressYourSupportOnboardingTooltip_C>();
	}
};
static_assert(alignof(UWBP_ExpressYourSupportOnboardingTooltip_C) == 0x000008, "Wrong alignment on UWBP_ExpressYourSupportOnboardingTooltip_C");
static_assert(sizeof(UWBP_ExpressYourSupportOnboardingTooltip_C) == 0x000440, "Wrong size on UWBP_ExpressYourSupportOnboardingTooltip_C");
static_assert(offsetof(UWBP_ExpressYourSupportOnboardingTooltip_C, UberGraphFrame) == 0x000408, "Member 'UWBP_ExpressYourSupportOnboardingTooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportOnboardingTooltip_C, Outro) == 0x000410, "Member 'UWBP_ExpressYourSupportOnboardingTooltip_C::Outro' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportOnboardingTooltip_C, Pulse) == 0x000418, "Member 'UWBP_ExpressYourSupportOnboardingTooltip_C::Pulse' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportOnboardingTooltip_C, CommonRichTextBlock_106) == 0x000420, "Member 'UWBP_ExpressYourSupportOnboardingTooltip_C::CommonRichTextBlock_106' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportOnboardingTooltip_C, CommonRichTextBlock_140) == 0x000428, "Member 'UWBP_ExpressYourSupportOnboardingTooltip_C::CommonRichTextBlock_140' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportOnboardingTooltip_C, Image_Arrow) == 0x000430, "Member 'UWBP_ExpressYourSupportOnboardingTooltip_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportOnboardingTooltip_C, ImageBurst) == 0x000438, "Member 'UWBP_ExpressYourSupportOnboardingTooltip_C::ImageBurst' has a wrong offset!");

}
