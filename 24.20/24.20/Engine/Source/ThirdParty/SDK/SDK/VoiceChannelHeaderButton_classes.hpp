#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UVoiceChannelHeaderButton_C final : public UFortVoiceChannelHeaderButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnExpansion;
	class UWidgetAnimation*                       JoinSlideOut;
	class UWidgetAnimation*                       ScaleUp;
	class UFortMobileImage*                       ExpandDirectionTick;
	class UHorizontalBox*                         HBox_Join;
	class UImage*                                 Image_VoiceChatWarning;
	class UCommonRichTextBlock*                   JoinText;
	class UImage*                                 NotTransmitting;
	class UCommonRichTextBlock*                   OffText;
	class UWidgetSwitcher*                        OnOffSwitcher;
	class UCommonRichTextBlock*                   OnText;
	class UOverlay*                               Overlay_1;
	class UImage*                                 SelectionBackplate;
	class UWidgetSwitcher*                        SimultaneousChannelSwitcher;
	class UWidgetSwitcher*                        Switch_Transmitting;
	class UImage*                                 Transmitting;
	struct FLinearColor                           VoiceStatusActiveColor;
	struct FLinearColor                           VoiceStatusWarningColor;

public:
	void BP_OnDisabled();
	void BP_OnEnabled();
	void BP_OnHovered();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnUnhovered();
	void ExecuteUbergraph_VoiceChannelHeaderButton(int32 EntryPoint);
	void OnListItemObjectSet_1(class UObject* ListItemObject);
	void OnUpdateVisuals(bool bIsActiveAndListening, bool bIsActiveOrAvailable, bool bIsAvailableAndNotActive, bool bIsListening, bool bShowingRestriction);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VoiceChannelHeaderButton_C">();
	}
	static class UVoiceChannelHeaderButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoiceChannelHeaderButton_C>();
	}
};
static_assert(alignof(UVoiceChannelHeaderButton_C) == 0x000010, "Wrong alignment on UVoiceChannelHeaderButton_C");
static_assert(sizeof(UVoiceChannelHeaderButton_C) == 0x001540, "Wrong size on UVoiceChannelHeaderButton_C");
static_assert(offsetof(UVoiceChannelHeaderButton_C, UberGraphFrame) == 0x001490, "Member 'UVoiceChannelHeaderButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, OnExpansion) == 0x001498, "Member 'UVoiceChannelHeaderButton_C::OnExpansion' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, JoinSlideOut) == 0x0014A0, "Member 'UVoiceChannelHeaderButton_C::JoinSlideOut' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, ScaleUp) == 0x0014A8, "Member 'UVoiceChannelHeaderButton_C::ScaleUp' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, ExpandDirectionTick) == 0x0014B0, "Member 'UVoiceChannelHeaderButton_C::ExpandDirectionTick' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, HBox_Join) == 0x0014B8, "Member 'UVoiceChannelHeaderButton_C::HBox_Join' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, Image_VoiceChatWarning) == 0x0014C0, "Member 'UVoiceChannelHeaderButton_C::Image_VoiceChatWarning' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, JoinText) == 0x0014C8, "Member 'UVoiceChannelHeaderButton_C::JoinText' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, NotTransmitting) == 0x0014D0, "Member 'UVoiceChannelHeaderButton_C::NotTransmitting' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, OffText) == 0x0014D8, "Member 'UVoiceChannelHeaderButton_C::OffText' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, OnOffSwitcher) == 0x0014E0, "Member 'UVoiceChannelHeaderButton_C::OnOffSwitcher' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, OnText) == 0x0014E8, "Member 'UVoiceChannelHeaderButton_C::OnText' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, Overlay_1) == 0x0014F0, "Member 'UVoiceChannelHeaderButton_C::Overlay_1' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, SelectionBackplate) == 0x0014F8, "Member 'UVoiceChannelHeaderButton_C::SelectionBackplate' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, SimultaneousChannelSwitcher) == 0x001500, "Member 'UVoiceChannelHeaderButton_C::SimultaneousChannelSwitcher' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, Switch_Transmitting) == 0x001508, "Member 'UVoiceChannelHeaderButton_C::Switch_Transmitting' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, Transmitting) == 0x001510, "Member 'UVoiceChannelHeaderButton_C::Transmitting' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, VoiceStatusActiveColor) == 0x001518, "Member 'UVoiceChannelHeaderButton_C::VoiceStatusActiveColor' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, VoiceStatusWarningColor) == 0x001528, "Member 'UVoiceChannelHeaderButton_C::VoiceStatusWarningColor' has a wrong offset!");

}
