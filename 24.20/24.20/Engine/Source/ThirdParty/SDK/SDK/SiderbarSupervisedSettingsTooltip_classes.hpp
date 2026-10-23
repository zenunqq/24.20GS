#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USiderbarSupervisedSettingsTooltip_C final : public UFortSidebarOnboardTooltipWidget
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
	void ExecuteUbergraph_SiderbarSupervisedSettingsTooltip(int32 EntryPoint);
	void Finished_9A4EF2E647B5B62CF2E0AA8CDBD2E514();
	void OnEndTooltip();
	void OnShowTooltip();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SiderbarSupervisedSettingsTooltip_C">();
	}
	static class USiderbarSupervisedSettingsTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USiderbarSupervisedSettingsTooltip_C>();
	}
};
static_assert(alignof(USiderbarSupervisedSettingsTooltip_C) == 0x000008, "Wrong alignment on USiderbarSupervisedSettingsTooltip_C");
static_assert(sizeof(USiderbarSupervisedSettingsTooltip_C) == 0x000440, "Wrong size on USiderbarSupervisedSettingsTooltip_C");
static_assert(offsetof(USiderbarSupervisedSettingsTooltip_C, UberGraphFrame) == 0x000408, "Member 'USiderbarSupervisedSettingsTooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USiderbarSupervisedSettingsTooltip_C, Outro) == 0x000410, "Member 'USiderbarSupervisedSettingsTooltip_C::Outro' has a wrong offset!");
static_assert(offsetof(USiderbarSupervisedSettingsTooltip_C, Pulse) == 0x000418, "Member 'USiderbarSupervisedSettingsTooltip_C::Pulse' has a wrong offset!");
static_assert(offsetof(USiderbarSupervisedSettingsTooltip_C, CommonRichTextBlock_106) == 0x000420, "Member 'USiderbarSupervisedSettingsTooltip_C::CommonRichTextBlock_106' has a wrong offset!");
static_assert(offsetof(USiderbarSupervisedSettingsTooltip_C, CommonRichTextBlock_140) == 0x000428, "Member 'USiderbarSupervisedSettingsTooltip_C::CommonRichTextBlock_140' has a wrong offset!");
static_assert(offsetof(USiderbarSupervisedSettingsTooltip_C, Image_Arrow) == 0x000430, "Member 'USiderbarSupervisedSettingsTooltip_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(USiderbarSupervisedSettingsTooltip_C, ImageBurst) == 0x000438, "Member 'USiderbarSupervisedSettingsTooltip_C::ImageBurst' has a wrong offset!");

}
