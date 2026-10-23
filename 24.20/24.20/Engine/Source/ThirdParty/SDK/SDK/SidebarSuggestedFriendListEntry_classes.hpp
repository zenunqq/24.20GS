#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USidebarSuggestedFriendListEntry_C final : public UFortConnectionsUserListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Unhovered;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UBorder*                                Border_Background;
	class UBorder*                                Border_Highlight;
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;
	class UCommonActivatableWidgetSwitcher*       Switcher_MutualFriends;
	class UCommonActivatableWidgetSwitcher*       Switcher_SocialName;
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;
	struct FLinearColor                           EncourageEpicFriend_IdleColor;
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnEntryReleased();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_SidebarSuggestedFriendListEntry(int32 EntryPoint);
	void HandleInputMethodChanged(ECommonInputType NewInputType);
	void OnInitialized();
	void OnNewAvatarsEnabledChanged(bool bUsingNewAvatars);
	void SetUnhoverState(bool bPlayAnimation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarSuggestedFriendListEntry_C">();
	}
	static class USidebarSuggestedFriendListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarSuggestedFriendListEntry_C>();
	}
};
static_assert(alignof(USidebarSuggestedFriendListEntry_C) == 0x000010, "Wrong alignment on USidebarSuggestedFriendListEntry_C");
static_assert(sizeof(USidebarSuggestedFriendListEntry_C) == 0x001540, "Wrong size on USidebarSuggestedFriendListEntry_C");
static_assert(offsetof(USidebarSuggestedFriendListEntry_C, UberGraphFrame) == 0x0014D0, "Member 'USidebarSuggestedFriendListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarSuggestedFriendListEntry_C, Unhovered) == 0x0014D8, "Member 'USidebarSuggestedFriendListEntry_C::Unhovered' has a wrong offset!");
static_assert(offsetof(USidebarSuggestedFriendListEntry_C, Selected) == 0x0014E0, "Member 'USidebarSuggestedFriendListEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(USidebarSuggestedFriendListEntry_C, Hovered) == 0x0014E8, "Member 'USidebarSuggestedFriendListEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(USidebarSuggestedFriendListEntry_C, Border_Background) == 0x0014F0, "Member 'USidebarSuggestedFriendListEntry_C::Border_Background' has a wrong offset!");
static_assert(offsetof(USidebarSuggestedFriendListEntry_C, Border_Highlight) == 0x0014F8, "Member 'USidebarSuggestedFriendListEntry_C::Border_Highlight' has a wrong offset!");
static_assert(offsetof(USidebarSuggestedFriendListEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x001500, "Member 'USidebarSuggestedFriendListEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(USidebarSuggestedFriendListEntry_C, Switcher_MutualFriends) == 0x001508, "Member 'USidebarSuggestedFriendListEntry_C::Switcher_MutualFriends' has a wrong offset!");
static_assert(offsetof(USidebarSuggestedFriendListEntry_C, Switcher_SocialName) == 0x001510, "Member 'USidebarSuggestedFriendListEntry_C::Switcher_SocialName' has a wrong offset!");
static_assert(offsetof(USidebarSuggestedFriendListEntry_C, UserActionMenuInputButton) == 0x001518, "Member 'USidebarSuggestedFriendListEntry_C::UserActionMenuInputButton' has a wrong offset!");
static_assert(offsetof(USidebarSuggestedFriendListEntry_C, EncourageEpicFriend_IdleColor) == 0x001520, "Member 'USidebarSuggestedFriendListEntry_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(USidebarSuggestedFriendListEntry_C, EncourageEpicFriend_HoveredColor) == 0x001530, "Member 'USidebarSuggestedFriendListEntry_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");

}
