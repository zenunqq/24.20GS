#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USidebarPartyMemberListEntry_C final : public UFortPartyMemberListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Unhovered;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;
	class UHorizontalBox*                         HBox_SocialName;
	class UCommonActivatableWidgetSwitcher*       Switcher_SocialName;
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;
	struct FLinearColor                           EncourageEpicFriend_IdleColor;
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_SidebarPartyMemberListEntry(int32 EntryPoint);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void OnNewAvatarsEnabledChanged(bool bUsingNewAvatars);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarPartyMemberListEntry_C">();
	}
	static class USidebarPartyMemberListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarPartyMemberListEntry_C>();
	}
};
static_assert(alignof(USidebarPartyMemberListEntry_C) == 0x000010, "Wrong alignment on USidebarPartyMemberListEntry_C");
static_assert(sizeof(USidebarPartyMemberListEntry_C) == 0x001560, "Wrong size on USidebarPartyMemberListEntry_C");
static_assert(offsetof(USidebarPartyMemberListEntry_C, UberGraphFrame) == 0x001500, "Member 'USidebarPartyMemberListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarPartyMemberListEntry_C, Unhovered) == 0x001508, "Member 'USidebarPartyMemberListEntry_C::Unhovered' has a wrong offset!");
static_assert(offsetof(USidebarPartyMemberListEntry_C, Selected) == 0x001510, "Member 'USidebarPartyMemberListEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(USidebarPartyMemberListEntry_C, Hovered) == 0x001518, "Member 'USidebarPartyMemberListEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(USidebarPartyMemberListEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x001520, "Member 'USidebarPartyMemberListEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(USidebarPartyMemberListEntry_C, HBox_SocialName) == 0x001528, "Member 'USidebarPartyMemberListEntry_C::HBox_SocialName' has a wrong offset!");
static_assert(offsetof(USidebarPartyMemberListEntry_C, Switcher_SocialName) == 0x001530, "Member 'USidebarPartyMemberListEntry_C::Switcher_SocialName' has a wrong offset!");
static_assert(offsetof(USidebarPartyMemberListEntry_C, UserActionMenuInputButton) == 0x001538, "Member 'USidebarPartyMemberListEntry_C::UserActionMenuInputButton' has a wrong offset!");
static_assert(offsetof(USidebarPartyMemberListEntry_C, EncourageEpicFriend_IdleColor) == 0x001540, "Member 'USidebarPartyMemberListEntry_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(USidebarPartyMemberListEntry_C, EncourageEpicFriend_HoveredColor) == 0x001550, "Member 'USidebarPartyMemberListEntry_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");

}
