#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarOnboardingLookingForParty_C final : public UFortSidebarOnboardTooltipWidget
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
	void ExecuteUbergraph_SidebarOnboardingLookingForParty(int32 EntryPoint);
	void Finished_469BDD0E45CC38F76A797EB7FC304743();
	void Finished_852B268C46273AE00023FBA7560B3CDA();
	void OnEndTooltip();
	void OnShowTooltip();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarOnboardingLookingForParty_C">();
	}
	static class USidebarOnboardingLookingForParty_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarOnboardingLookingForParty_C>();
	}
};
static_assert(alignof(USidebarOnboardingLookingForParty_C) == 0x000008, "Wrong alignment on USidebarOnboardingLookingForParty_C");
static_assert(sizeof(USidebarOnboardingLookingForParty_C) == 0x000440, "Wrong size on USidebarOnboardingLookingForParty_C");
static_assert(offsetof(USidebarOnboardingLookingForParty_C, UberGraphFrame) == 0x000408, "Member 'USidebarOnboardingLookingForParty_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarOnboardingLookingForParty_C, Outro) == 0x000410, "Member 'USidebarOnboardingLookingForParty_C::Outro' has a wrong offset!");
static_assert(offsetof(USidebarOnboardingLookingForParty_C, Pulse) == 0x000418, "Member 'USidebarOnboardingLookingForParty_C::Pulse' has a wrong offset!");
static_assert(offsetof(USidebarOnboardingLookingForParty_C, CommonRichTextBlock_106) == 0x000420, "Member 'USidebarOnboardingLookingForParty_C::CommonRichTextBlock_106' has a wrong offset!");
static_assert(offsetof(USidebarOnboardingLookingForParty_C, CommonRichTextBlock_140) == 0x000428, "Member 'USidebarOnboardingLookingForParty_C::CommonRichTextBlock_140' has a wrong offset!");
static_assert(offsetof(USidebarOnboardingLookingForParty_C, Image_Arrow) == 0x000430, "Member 'USidebarOnboardingLookingForParty_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(USidebarOnboardingLookingForParty_C, ImageBurst) == 0x000438, "Member 'USidebarOnboardingLookingForParty_C::ImageBurst' has a wrong offset!");

}
