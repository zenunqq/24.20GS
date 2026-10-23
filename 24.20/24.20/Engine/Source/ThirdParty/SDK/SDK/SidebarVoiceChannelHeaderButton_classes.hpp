#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USidebarVoiceChannelHeaderButton_C final : public UFortVoiceChannelHeaderButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       NewAnimation;
	class UWidgetAnimation*                       OnExpansion;
	class UWidgetAnimation*                       JoinSlideOut;
	class UWidgetAnimation*                       ScaleUp;
	class UFortMobileImage*                       ExpandDirectionTick;
	class UHorizontalBox*                         HBox_Join;
	class UImage*                                 Image_VoiceChatWarning;
	class UCommonRichTextBlock*                   JoinText;
	class UFortMobileImage*                       NotTransmitting;
	class UCommonRichTextBlock*                   OffText;
	class UWidgetSwitcher*                        OnOffSwitcher;
	class UCommonRichTextBlock*                   OnText;
	class UOverlay*                               Overlay_1;
	class UWidgetSwitcher*                        SimultaneousChannelSwitcher;
	class UWidgetSwitcher*                        Switch_Transmitting;
	class UCommonActivatableWidgetSwitcher*       Switcher_ChannelInfo;
	class UCommonActivatableWidgetSwitcher*       Switcher_ChannelTitle;
	class UFortMobileImage*                       Transmitting;
	struct FLinearColor                           VoiceStatusActiveColor;
	struct FLinearColor                           VoiceStatusInactiveColor;
	struct FLinearColor                           VoiceStatusWarningColor;
	struct FSlateColor                            OnOffTextColor;
	struct FSlateColor                            OnOffTextColor_Hover;
	bool                                          IsRestricted;
	bool                                          IsHoveredColor;

public:
	void BP_OnDisabled();
	void BP_OnEnabled();
	void BP_OnHovered();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_SidebarVoiceChannelHeaderButton(int32 EntryPoint);
	void OnListItemObjectSet_1(class UObject* ListItemObject);
	void OnUpdateVisuals(bool bIsActiveAndListening, bool bIsActiveOrAvailable, bool bIsAvailableAndNotActive, bool bIsListening, bool bShowingRestriction);
	void PreConstruct(bool IsDesignTime);
	void SetActiveAndListeningVisuals(bool IsActiveAndListening, bool IsRestricted_0);
	void SetIsActiveOrAvailableVisuals(bool IsActiveOrAvailable);
	void SetIsAvaliableAndNotActiveVisuals(bool IsAvaliableAndNotActive);
	void SetIsListeningVisuals(bool IsListening);
	void SetRestrictedVisuals(bool IsRestricted_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarVoiceChannelHeaderButton_C">();
	}
	static class USidebarVoiceChannelHeaderButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarVoiceChannelHeaderButton_C>();
	}
};
static_assert(alignof(USidebarVoiceChannelHeaderButton_C) == 0x000010, "Wrong alignment on USidebarVoiceChannelHeaderButton_C");
static_assert(sizeof(USidebarVoiceChannelHeaderButton_C) == 0x001590, "Wrong size on USidebarVoiceChannelHeaderButton_C");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, UberGraphFrame) == 0x001490, "Member 'USidebarVoiceChannelHeaderButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, NewAnimation) == 0x001498, "Member 'USidebarVoiceChannelHeaderButton_C::NewAnimation' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, OnExpansion) == 0x0014A0, "Member 'USidebarVoiceChannelHeaderButton_C::OnExpansion' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, JoinSlideOut) == 0x0014A8, "Member 'USidebarVoiceChannelHeaderButton_C::JoinSlideOut' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, ScaleUp) == 0x0014B0, "Member 'USidebarVoiceChannelHeaderButton_C::ScaleUp' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, ExpandDirectionTick) == 0x0014B8, "Member 'USidebarVoiceChannelHeaderButton_C::ExpandDirectionTick' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, HBox_Join) == 0x0014C0, "Member 'USidebarVoiceChannelHeaderButton_C::HBox_Join' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, Image_VoiceChatWarning) == 0x0014C8, "Member 'USidebarVoiceChannelHeaderButton_C::Image_VoiceChatWarning' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, JoinText) == 0x0014D0, "Member 'USidebarVoiceChannelHeaderButton_C::JoinText' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, NotTransmitting) == 0x0014D8, "Member 'USidebarVoiceChannelHeaderButton_C::NotTransmitting' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, OffText) == 0x0014E0, "Member 'USidebarVoiceChannelHeaderButton_C::OffText' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, OnOffSwitcher) == 0x0014E8, "Member 'USidebarVoiceChannelHeaderButton_C::OnOffSwitcher' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, OnText) == 0x0014F0, "Member 'USidebarVoiceChannelHeaderButton_C::OnText' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, Overlay_1) == 0x0014F8, "Member 'USidebarVoiceChannelHeaderButton_C::Overlay_1' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, SimultaneousChannelSwitcher) == 0x001500, "Member 'USidebarVoiceChannelHeaderButton_C::SimultaneousChannelSwitcher' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, Switch_Transmitting) == 0x001508, "Member 'USidebarVoiceChannelHeaderButton_C::Switch_Transmitting' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, Switcher_ChannelInfo) == 0x001510, "Member 'USidebarVoiceChannelHeaderButton_C::Switcher_ChannelInfo' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, Switcher_ChannelTitle) == 0x001518, "Member 'USidebarVoiceChannelHeaderButton_C::Switcher_ChannelTitle' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, Transmitting) == 0x001520, "Member 'USidebarVoiceChannelHeaderButton_C::Transmitting' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, VoiceStatusActiveColor) == 0x001528, "Member 'USidebarVoiceChannelHeaderButton_C::VoiceStatusActiveColor' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, VoiceStatusInactiveColor) == 0x001538, "Member 'USidebarVoiceChannelHeaderButton_C::VoiceStatusInactiveColor' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, VoiceStatusWarningColor) == 0x001548, "Member 'USidebarVoiceChannelHeaderButton_C::VoiceStatusWarningColor' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, OnOffTextColor) == 0x001558, "Member 'USidebarVoiceChannelHeaderButton_C::OnOffTextColor' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, OnOffTextColor_Hover) == 0x00156C, "Member 'USidebarVoiceChannelHeaderButton_C::OnOffTextColor_Hover' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, IsRestricted) == 0x001580, "Member 'USidebarVoiceChannelHeaderButton_C::IsRestricted' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChannelHeaderButton_C, IsHoveredColor) == 0x001581, "Member 'USidebarVoiceChannelHeaderButton_C::IsHoveredColor' has a wrong offset!");

}
