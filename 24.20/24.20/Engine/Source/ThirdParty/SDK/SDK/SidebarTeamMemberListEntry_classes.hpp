#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USidebarTeamMemberListEntry_C final : public UFortTeamMemberListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Unhovered;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;
	class UCommonActivatableWidgetSwitcher*       Switcher_SocialName;
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;
	struct FLinearColor                           EncourageEpicFriend_IdleColor;
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SidebarTeamMemberListEntry(int32 EntryPoint);
	void OnNewAvatarsEnabledChanged(bool bUsingNewAvatars);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarTeamMemberListEntry_C">();
	}
	static class USidebarTeamMemberListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarTeamMemberListEntry_C>();
	}
};
static_assert(alignof(USidebarTeamMemberListEntry_C) == 0x000010, "Wrong alignment on USidebarTeamMemberListEntry_C");
static_assert(sizeof(USidebarTeamMemberListEntry_C) == 0x001560, "Wrong size on USidebarTeamMemberListEntry_C");
static_assert(offsetof(USidebarTeamMemberListEntry_C, UberGraphFrame) == 0x001500, "Member 'USidebarTeamMemberListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarTeamMemberListEntry_C, Unhovered) == 0x001508, "Member 'USidebarTeamMemberListEntry_C::Unhovered' has a wrong offset!");
static_assert(offsetof(USidebarTeamMemberListEntry_C, Selected) == 0x001510, "Member 'USidebarTeamMemberListEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(USidebarTeamMemberListEntry_C, Hovered) == 0x001518, "Member 'USidebarTeamMemberListEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(USidebarTeamMemberListEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x001520, "Member 'USidebarTeamMemberListEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(USidebarTeamMemberListEntry_C, Switcher_SocialName) == 0x001528, "Member 'USidebarTeamMemberListEntry_C::Switcher_SocialName' has a wrong offset!");
static_assert(offsetof(USidebarTeamMemberListEntry_C, UserActionMenuInputButton) == 0x001530, "Member 'USidebarTeamMemberListEntry_C::UserActionMenuInputButton' has a wrong offset!");
static_assert(offsetof(USidebarTeamMemberListEntry_C, EncourageEpicFriend_IdleColor) == 0x001538, "Member 'USidebarTeamMemberListEntry_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(USidebarTeamMemberListEntry_C, EncourageEpicFriend_HoveredColor) == 0x001548, "Member 'USidebarTeamMemberListEntry_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");

}
