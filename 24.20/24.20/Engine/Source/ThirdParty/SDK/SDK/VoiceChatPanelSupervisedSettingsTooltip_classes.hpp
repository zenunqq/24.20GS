#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UVoiceChatPanelSupervisedSettingsTooltip_C final : public UFortSidebarOnboardTooltipWidget
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
	void ExecuteUbergraph_VoiceChatPanelSupervisedSettingsTooltip(int32 EntryPoint);
	void Finished_1A7A143A412B60CF3A5E64931FD65458();
	void Finished_AFBF44BB4D5270B5EDD0CA9897F59343();
	void OnEndTooltip();
	void OnShowTooltip();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VoiceChatPanelSupervisedSettingsTooltip_C">();
	}
	static class UVoiceChatPanelSupervisedSettingsTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoiceChatPanelSupervisedSettingsTooltip_C>();
	}
};
static_assert(alignof(UVoiceChatPanelSupervisedSettingsTooltip_C) == 0x000008, "Wrong alignment on UVoiceChatPanelSupervisedSettingsTooltip_C");
static_assert(sizeof(UVoiceChatPanelSupervisedSettingsTooltip_C) == 0x000440, "Wrong size on UVoiceChatPanelSupervisedSettingsTooltip_C");
static_assert(offsetof(UVoiceChatPanelSupervisedSettingsTooltip_C, UberGraphFrame) == 0x000408, "Member 'UVoiceChatPanelSupervisedSettingsTooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVoiceChatPanelSupervisedSettingsTooltip_C, Outro) == 0x000410, "Member 'UVoiceChatPanelSupervisedSettingsTooltip_C::Outro' has a wrong offset!");
static_assert(offsetof(UVoiceChatPanelSupervisedSettingsTooltip_C, Pulse) == 0x000418, "Member 'UVoiceChatPanelSupervisedSettingsTooltip_C::Pulse' has a wrong offset!");
static_assert(offsetof(UVoiceChatPanelSupervisedSettingsTooltip_C, CommonRichTextBlock_106) == 0x000420, "Member 'UVoiceChatPanelSupervisedSettingsTooltip_C::CommonRichTextBlock_106' has a wrong offset!");
static_assert(offsetof(UVoiceChatPanelSupervisedSettingsTooltip_C, CommonRichTextBlock_140) == 0x000428, "Member 'UVoiceChatPanelSupervisedSettingsTooltip_C::CommonRichTextBlock_140' has a wrong offset!");
static_assert(offsetof(UVoiceChatPanelSupervisedSettingsTooltip_C, Image_Arrow) == 0x000430, "Member 'UVoiceChatPanelSupervisedSettingsTooltip_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UVoiceChatPanelSupervisedSettingsTooltip_C, ImageBurst) == 0x000438, "Member 'UVoiceChatPanelSupervisedSettingsTooltip_C::ImageBurst' has a wrong offset!");

}
