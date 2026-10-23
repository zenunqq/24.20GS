#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"

namespace SDK
{

class USidebarWhatAreTagsEditTagsTooltip_C final : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Outro;
	class UWidgetAnimation*                       Pulse;
	class UCommonRichTextBlock*                   CommonRichTextBlock_106;
	class UCommonRichTextBlock*                   CommonRichTextBlock_140;
	class UOnboardingTextInputActionButton_C*     Dismiss_Button;
	class UImage*                                 Image_Arrow;
	class UImage*                                 ImageBurst;

public:
	void BndEvt__SidebarWhatAreTagsEditTagsTooltip_Dismiss_Button_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BP_OnActivated();
	void BP_OnDeactivated();
	void ExecuteUbergraph_SidebarWhatAreTagsEditTagsTooltip(int32 EntryPoint);
	void Finished_403D1C044D946ADE029116801BEB88EB();
	void Finished_5D07487B49685BD47F6772925D8F43EB();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarWhatAreTagsEditTagsTooltip_C">();
	}
	static class USidebarWhatAreTagsEditTagsTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarWhatAreTagsEditTagsTooltip_C>();
	}
};
static_assert(alignof(USidebarWhatAreTagsEditTagsTooltip_C) == 0x000008, "Wrong alignment on USidebarWhatAreTagsEditTagsTooltip_C");
static_assert(sizeof(USidebarWhatAreTagsEditTagsTooltip_C) == 0x0003E8, "Wrong size on USidebarWhatAreTagsEditTagsTooltip_C");
static_assert(offsetof(USidebarWhatAreTagsEditTagsTooltip_C, UberGraphFrame) == 0x0003A8, "Member 'USidebarWhatAreTagsEditTagsTooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarWhatAreTagsEditTagsTooltip_C, Outro) == 0x0003B0, "Member 'USidebarWhatAreTagsEditTagsTooltip_C::Outro' has a wrong offset!");
static_assert(offsetof(USidebarWhatAreTagsEditTagsTooltip_C, Pulse) == 0x0003B8, "Member 'USidebarWhatAreTagsEditTagsTooltip_C::Pulse' has a wrong offset!");
static_assert(offsetof(USidebarWhatAreTagsEditTagsTooltip_C, CommonRichTextBlock_106) == 0x0003C0, "Member 'USidebarWhatAreTagsEditTagsTooltip_C::CommonRichTextBlock_106' has a wrong offset!");
static_assert(offsetof(USidebarWhatAreTagsEditTagsTooltip_C, CommonRichTextBlock_140) == 0x0003C8, "Member 'USidebarWhatAreTagsEditTagsTooltip_C::CommonRichTextBlock_140' has a wrong offset!");
static_assert(offsetof(USidebarWhatAreTagsEditTagsTooltip_C, Dismiss_Button) == 0x0003D0, "Member 'USidebarWhatAreTagsEditTagsTooltip_C::Dismiss_Button' has a wrong offset!");
static_assert(offsetof(USidebarWhatAreTagsEditTagsTooltip_C, Image_Arrow) == 0x0003D8, "Member 'USidebarWhatAreTagsEditTagsTooltip_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(USidebarWhatAreTagsEditTagsTooltip_C, ImageBurst) == 0x0003E0, "Member 'USidebarWhatAreTagsEditTagsTooltip_C::ImageBurst' has a wrong offset!");

}
