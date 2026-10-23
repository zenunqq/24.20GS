#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USidebarInviteListEntry_FriendInvite_XS_C final : public UFortConnectionsUserListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Unhovered;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UBorder*                                Border_OnlineStatusIndicator;
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;
	class UBorder*                                EntryBorder;
	class UImage*                                 Image_Notification;
	class UCommonActivatableWidgetSwitcher*       Switcher_LastInteraction;
	class UCommonActivatableWidgetSwitcher*       Switcher_MutualFriends;
	class UCommonActivatableWidgetSwitcher*       Switcher_SocialName;
	struct FLinearColor                           Online;
	struct FLinearColor                           Offline;
	struct FLinearColor                           Away;

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SidebarInviteListEntry_FriendInvite_XS(int32 EntryPoint);
	void HandleOnlineIndicatorView(uint8 OnlineStatus);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void OnNewAvatarsEnabledChanged(bool bUsingNewAvatars);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarInviteListEntry_FriendInvite_XS_C">();
	}
	static class USidebarInviteListEntry_FriendInvite_XS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarInviteListEntry_FriendInvite_XS_C>();
	}
};
static_assert(alignof(USidebarInviteListEntry_FriendInvite_XS_C) == 0x000010, "Wrong alignment on USidebarInviteListEntry_FriendInvite_XS_C");
static_assert(sizeof(USidebarInviteListEntry_FriendInvite_XS_C) == 0x001560, "Wrong size on USidebarInviteListEntry_FriendInvite_XS_C");
static_assert(offsetof(USidebarInviteListEntry_FriendInvite_XS_C, UberGraphFrame) == 0x0014D0, "Member 'USidebarInviteListEntry_FriendInvite_XS_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarInviteListEntry_FriendInvite_XS_C, Unhovered) == 0x0014D8, "Member 'USidebarInviteListEntry_FriendInvite_XS_C::Unhovered' has a wrong offset!");
static_assert(offsetof(USidebarInviteListEntry_FriendInvite_XS_C, Selected) == 0x0014E0, "Member 'USidebarInviteListEntry_FriendInvite_XS_C::Selected' has a wrong offset!");
static_assert(offsetof(USidebarInviteListEntry_FriendInvite_XS_C, Hovered) == 0x0014E8, "Member 'USidebarInviteListEntry_FriendInvite_XS_C::Hovered' has a wrong offset!");
static_assert(offsetof(USidebarInviteListEntry_FriendInvite_XS_C, Border_OnlineStatusIndicator) == 0x0014F0, "Member 'USidebarInviteListEntry_FriendInvite_XS_C::Border_OnlineStatusIndicator' has a wrong offset!");
static_assert(offsetof(USidebarInviteListEntry_FriendInvite_XS_C, EmptyButtonToEatOneMouseUpEvent) == 0x0014F8, "Member 'USidebarInviteListEntry_FriendInvite_XS_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(USidebarInviteListEntry_FriendInvite_XS_C, EntryBorder) == 0x001500, "Member 'USidebarInviteListEntry_FriendInvite_XS_C::EntryBorder' has a wrong offset!");
static_assert(offsetof(USidebarInviteListEntry_FriendInvite_XS_C, Image_Notification) == 0x001508, "Member 'USidebarInviteListEntry_FriendInvite_XS_C::Image_Notification' has a wrong offset!");
static_assert(offsetof(USidebarInviteListEntry_FriendInvite_XS_C, Switcher_LastInteraction) == 0x001510, "Member 'USidebarInviteListEntry_FriendInvite_XS_C::Switcher_LastInteraction' has a wrong offset!");
static_assert(offsetof(USidebarInviteListEntry_FriendInvite_XS_C, Switcher_MutualFriends) == 0x001518, "Member 'USidebarInviteListEntry_FriendInvite_XS_C::Switcher_MutualFriends' has a wrong offset!");
static_assert(offsetof(USidebarInviteListEntry_FriendInvite_XS_C, Switcher_SocialName) == 0x001520, "Member 'USidebarInviteListEntry_FriendInvite_XS_C::Switcher_SocialName' has a wrong offset!");
static_assert(offsetof(USidebarInviteListEntry_FriendInvite_XS_C, Online) == 0x001528, "Member 'USidebarInviteListEntry_FriendInvite_XS_C::Online' has a wrong offset!");
static_assert(offsetof(USidebarInviteListEntry_FriendInvite_XS_C, Offline) == 0x001538, "Member 'USidebarInviteListEntry_FriendInvite_XS_C::Offline' has a wrong offset!");
static_assert(offsetof(USidebarInviteListEntry_FriendInvite_XS_C, Away) == 0x001548, "Member 'USidebarInviteListEntry_FriendInvite_XS_C::Away' has a wrong offset!");

}
