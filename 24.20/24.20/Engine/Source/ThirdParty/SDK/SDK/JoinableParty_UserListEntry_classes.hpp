#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UJoinableParty_UserListEntry_C final : public UFortJoinablePartyListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Unhovered_WithTrim;
	class UWidgetAnimation*                       Unhovered;
	class UWidgetAnimation*                       Hovered_WithTrim;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UFortSocialAvatarIcon*                  Avatar_MemberIcon;
	class UBorder*                                Border_Background;
	class UBorder*                                Border_Highlight;
	class UBorder*                                Border_OnlineStatusIndicator;
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;
	class UImage*                                 Image_Lock;
	class UOverlay*                               Overlay_Avatar;
	class UScaleBox*                              ScaleBox_2;
	class USizeBox*                               SizeBox_MultiParty;
	class UCommonActivatableWidgetSwitcher*       Switcher_DisplayNamesText;
	class UCommonActivatableWidgetSwitcher*       Switcher_JoinablePartyText;
	class UCommonRichTextBlock*                   Text_DisplayName;
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;
	struct FLinearColor                           EncourageEpicFriend_IdleColor;
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;
	bool                                          AlwaysShowTrim;
	uint8                                         Pad_15A9[0x7];
	TArray<class USocialTagWidget*>               SidebarSocialTagWidgetArray;

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_JoinableParty_UserListEntry(int32 EntryPoint);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void OnInviteStatusUpdated(bool bIsInvited);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"JoinableParty_UserListEntry_C">();
	}
	static class UJoinableParty_UserListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJoinableParty_UserListEntry_C>();
	}
};
static_assert(alignof(UJoinableParty_UserListEntry_C) == 0x000010, "Wrong alignment on UJoinableParty_UserListEntry_C");
static_assert(sizeof(UJoinableParty_UserListEntry_C) == 0x0015C0, "Wrong size on UJoinableParty_UserListEntry_C");
static_assert(offsetof(UJoinableParty_UserListEntry_C, UberGraphFrame) == 0x0014F0, "Member 'UJoinableParty_UserListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UJoinableParty_UserListEntry_C, Unhovered_WithTrim) == 0x0014F8, "Member 'UJoinableParty_UserListEntry_C::Unhovered_WithTrim' has a wrong offset!");
static_assert(offsetof(UJoinableParty_UserListEntry_C, Unhovered) == 0x001500, "Member 'UJoinableParty_UserListEntry_C::Unhovered' has a wrong offset!");
static_assert(offsetof(UJoinableParty_UserListEntry_C, Hovered_WithTrim) == 0x001508, "Member 'UJoinableParty_UserListEntry_C::Hovered_WithTrim' has a wrong offset!");
static_assert(offsetof(UJoinableParty_UserListEntry_C, Selected) == 0x001510, "Member 'UJoinableParty_UserListEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(UJoinableParty_UserListEntry_C, Hovered) == 0x001518, "Member 'UJoinableParty_UserListEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(UJoinableParty_UserListEntry_C, Avatar_MemberIcon) == 0x001520, "Member 'UJoinableParty_UserListEntry_C::Avatar_MemberIcon' has a wrong offset!");
static_assert(offsetof(UJoinableParty_UserListEntry_C, Border_Background) == 0x001528, "Member 'UJoinableParty_UserListEntry_C::Border_Background' has a wrong offset!");
static_assert(offsetof(UJoinableParty_UserListEntry_C, Border_Highlight) == 0x001530, "Member 'UJoinableParty_UserListEntry_C::Border_Highlight' has a wrong offset!");
static_assert(offsetof(UJoinableParty_UserListEntry_C, Border_OnlineStatusIndicator) == 0x001538, "Member 'UJoinableParty_UserListEntry_C::Border_OnlineStatusIndicator' has a wrong offset!");
static_assert(offsetof(UJoinableParty_UserListEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x001540, "Member 'UJoinableParty_UserListEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(UJoinableParty_UserListEntry_C, Image_Lock) == 0x001548, "Member 'UJoinableParty_UserListEntry_C::Image_Lock' has a wrong offset!");
static_assert(offsetof(UJoinableParty_UserListEntry_C, Overlay_Avatar) == 0x001550, "Member 'UJoinableParty_UserListEntry_C::Overlay_Avatar' has a wrong offset!");
static_assert(offsetof(UJoinableParty_UserListEntry_C, ScaleBox_2) == 0x001558, "Member 'UJoinableParty_UserListEntry_C::ScaleBox_2' has a wrong offset!");
static_assert(offsetof(UJoinableParty_UserListEntry_C, SizeBox_MultiParty) == 0x001560, "Member 'UJoinableParty_UserListEntry_C::SizeBox_MultiParty' has a wrong offset!");
static_assert(offsetof(UJoinableParty_UserListEntry_C, Switcher_DisplayNamesText) == 0x001568, "Member 'UJoinableParty_UserListEntry_C::Switcher_DisplayNamesText' has a wrong offset!");
static_assert(offsetof(UJoinableParty_UserListEntry_C, Switcher_JoinablePartyText) == 0x001570, "Member 'UJoinableParty_UserListEntry_C::Switcher_JoinablePartyText' has a wrong offset!");
static_assert(offsetof(UJoinableParty_UserListEntry_C, Text_DisplayName) == 0x001578, "Member 'UJoinableParty_UserListEntry_C::Text_DisplayName' has a wrong offset!");
static_assert(offsetof(UJoinableParty_UserListEntry_C, UserActionMenuInputButton) == 0x001580, "Member 'UJoinableParty_UserListEntry_C::UserActionMenuInputButton' has a wrong offset!");
static_assert(offsetof(UJoinableParty_UserListEntry_C, EncourageEpicFriend_IdleColor) == 0x001588, "Member 'UJoinableParty_UserListEntry_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(UJoinableParty_UserListEntry_C, EncourageEpicFriend_HoveredColor) == 0x001598, "Member 'UJoinableParty_UserListEntry_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");
static_assert(offsetof(UJoinableParty_UserListEntry_C, AlwaysShowTrim) == 0x0015A8, "Member 'UJoinableParty_UserListEntry_C::AlwaysShowTrim' has a wrong offset!");
static_assert(offsetof(UJoinableParty_UserListEntry_C, SidebarSocialTagWidgetArray) == 0x0015B0, "Member 'UJoinableParty_UserListEntry_C::SidebarSocialTagWidgetArray' has a wrong offset!");

}
