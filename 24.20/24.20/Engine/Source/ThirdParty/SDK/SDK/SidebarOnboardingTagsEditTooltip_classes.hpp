#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarOnboardingTagsEditTooltip_C final : public UFortSidebarOnboardTooltipWidget
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
	void ExecuteUbergraph_SidebarOnboardingTagsEditTooltip(int32 EntryPoint);
	void Finished_00D30FD74E4AD96827646281D0AF44AF();
	void Finished_AC6DBEA34771A9CA6E4921A9C0BEA216();
	void OnEndTooltip();
	void OnShowTooltip();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarOnboardingTagsEditTooltip_C">();
	}
	static class USidebarOnboardingTagsEditTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarOnboardingTagsEditTooltip_C>();
	}
};
static_assert(alignof(USidebarOnboardingTagsEditTooltip_C) == 0x000008, "Wrong alignment on USidebarOnboardingTagsEditTooltip_C");
static_assert(sizeof(USidebarOnboardingTagsEditTooltip_C) == 0x000440, "Wrong size on USidebarOnboardingTagsEditTooltip_C");
static_assert(offsetof(USidebarOnboardingTagsEditTooltip_C, UberGraphFrame) == 0x000408, "Member 'USidebarOnboardingTagsEditTooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarOnboardingTagsEditTooltip_C, Outro) == 0x000410, "Member 'USidebarOnboardingTagsEditTooltip_C::Outro' has a wrong offset!");
static_assert(offsetof(USidebarOnboardingTagsEditTooltip_C, Pulse) == 0x000418, "Member 'USidebarOnboardingTagsEditTooltip_C::Pulse' has a wrong offset!");
static_assert(offsetof(USidebarOnboardingTagsEditTooltip_C, CommonRichTextBlock_106) == 0x000420, "Member 'USidebarOnboardingTagsEditTooltip_C::CommonRichTextBlock_106' has a wrong offset!");
static_assert(offsetof(USidebarOnboardingTagsEditTooltip_C, CommonRichTextBlock_140) == 0x000428, "Member 'USidebarOnboardingTagsEditTooltip_C::CommonRichTextBlock_140' has a wrong offset!");
static_assert(offsetof(USidebarOnboardingTagsEditTooltip_C, Image_Arrow) == 0x000430, "Member 'USidebarOnboardingTagsEditTooltip_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(USidebarOnboardingTagsEditTooltip_C, ImageBurst) == 0x000438, "Member 'USidebarOnboardingTagsEditTooltip_C::ImageBurst' has a wrong offset!");

}
