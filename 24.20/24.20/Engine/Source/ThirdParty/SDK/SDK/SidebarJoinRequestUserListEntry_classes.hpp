#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USidebarJoinRequestUserListEntry_C final : public UFortSocialUserListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Unhovered;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;
	class UCommonRichTextBlock*                   JoinRequest;
	class UCommonActivatableWidgetSwitcher*       Switcher_SocialName;
	class UCommonRichTextBlock*                   Text_DisplayName;
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;
	struct FLinearColor                           EncourageEpicFriend_IdleColor;
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SidebarJoinRequestUserListEntry(int32 EntryPoint);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void OnNewAvatarsEnabledChanged(bool bUsingNewAvatars);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarJoinRequestUserListEntry_C">();
	}
	static class USidebarJoinRequestUserListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarJoinRequestUserListEntry_C>();
	}
};
static_assert(alignof(USidebarJoinRequestUserListEntry_C) == 0x000010, "Wrong alignment on USidebarJoinRequestUserListEntry_C");
static_assert(sizeof(USidebarJoinRequestUserListEntry_C) == 0x001560, "Wrong size on USidebarJoinRequestUserListEntry_C");
static_assert(offsetof(USidebarJoinRequestUserListEntry_C, UberGraphFrame) == 0x0014F0, "Member 'USidebarJoinRequestUserListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarJoinRequestUserListEntry_C, Unhovered) == 0x0014F8, "Member 'USidebarJoinRequestUserListEntry_C::Unhovered' has a wrong offset!");
static_assert(offsetof(USidebarJoinRequestUserListEntry_C, Selected) == 0x001500, "Member 'USidebarJoinRequestUserListEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(USidebarJoinRequestUserListEntry_C, Hovered) == 0x001508, "Member 'USidebarJoinRequestUserListEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(USidebarJoinRequestUserListEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x001510, "Member 'USidebarJoinRequestUserListEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(USidebarJoinRequestUserListEntry_C, JoinRequest) == 0x001518, "Member 'USidebarJoinRequestUserListEntry_C::JoinRequest' has a wrong offset!");
static_assert(offsetof(USidebarJoinRequestUserListEntry_C, Switcher_SocialName) == 0x001520, "Member 'USidebarJoinRequestUserListEntry_C::Switcher_SocialName' has a wrong offset!");
static_assert(offsetof(USidebarJoinRequestUserListEntry_C, Text_DisplayName) == 0x001528, "Member 'USidebarJoinRequestUserListEntry_C::Text_DisplayName' has a wrong offset!");
static_assert(offsetof(USidebarJoinRequestUserListEntry_C, UserActionMenuInputButton) == 0x001530, "Member 'USidebarJoinRequestUserListEntry_C::UserActionMenuInputButton' has a wrong offset!");
static_assert(offsetof(USidebarJoinRequestUserListEntry_C, EncourageEpicFriend_IdleColor) == 0x001538, "Member 'USidebarJoinRequestUserListEntry_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(USidebarJoinRequestUserListEntry_C, EncourageEpicFriend_HoveredColor) == 0x001548, "Member 'USidebarJoinRequestUserListEntry_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");

}
