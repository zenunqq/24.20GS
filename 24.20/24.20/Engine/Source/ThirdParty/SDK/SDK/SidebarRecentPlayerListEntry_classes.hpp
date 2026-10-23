#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USidebarRecentPlayerListEntry_C final : public UFortConnectionsUserListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Unhovered;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UBorder*                                Border_Background;
	class UBorder*                                Border_Highlight;
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;
	class UCommonActivatableWidgetSwitcher*       Switcher_LastInteraction;
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
	void ExecuteUbergraph_SidebarRecentPlayerListEntry(int32 EntryPoint);
	void HandleInputMethodChanged(ECommonInputType NewInputType);
	void OnInitialized();
	void OnNewAvatarsEnabledChanged(bool bUsingNewAvatars);
	void SetUnhoverState(bool bPlayAnimation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarRecentPlayerListEntry_C">();
	}
	static class USidebarRecentPlayerListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarRecentPlayerListEntry_C>();
	}
};
static_assert(alignof(USidebarRecentPlayerListEntry_C) == 0x000010, "Wrong alignment on USidebarRecentPlayerListEntry_C");
static_assert(sizeof(USidebarRecentPlayerListEntry_C) == 0x001540, "Wrong size on USidebarRecentPlayerListEntry_C");
static_assert(offsetof(USidebarRecentPlayerListEntry_C, UberGraphFrame) == 0x0014D0, "Member 'USidebarRecentPlayerListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarRecentPlayerListEntry_C, Unhovered) == 0x0014D8, "Member 'USidebarRecentPlayerListEntry_C::Unhovered' has a wrong offset!");
static_assert(offsetof(USidebarRecentPlayerListEntry_C, Selected) == 0x0014E0, "Member 'USidebarRecentPlayerListEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(USidebarRecentPlayerListEntry_C, Hovered) == 0x0014E8, "Member 'USidebarRecentPlayerListEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(USidebarRecentPlayerListEntry_C, Border_Background) == 0x0014F0, "Member 'USidebarRecentPlayerListEntry_C::Border_Background' has a wrong offset!");
static_assert(offsetof(USidebarRecentPlayerListEntry_C, Border_Highlight) == 0x0014F8, "Member 'USidebarRecentPlayerListEntry_C::Border_Highlight' has a wrong offset!");
static_assert(offsetof(USidebarRecentPlayerListEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x001500, "Member 'USidebarRecentPlayerListEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(USidebarRecentPlayerListEntry_C, Switcher_LastInteraction) == 0x001508, "Member 'USidebarRecentPlayerListEntry_C::Switcher_LastInteraction' has a wrong offset!");
static_assert(offsetof(USidebarRecentPlayerListEntry_C, Switcher_SocialName) == 0x001510, "Member 'USidebarRecentPlayerListEntry_C::Switcher_SocialName' has a wrong offset!");
static_assert(offsetof(USidebarRecentPlayerListEntry_C, UserActionMenuInputButton) == 0x001518, "Member 'USidebarRecentPlayerListEntry_C::UserActionMenuInputButton' has a wrong offset!");
static_assert(offsetof(USidebarRecentPlayerListEntry_C, EncourageEpicFriend_IdleColor) == 0x001520, "Member 'USidebarRecentPlayerListEntry_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(USidebarRecentPlayerListEntry_C, EncourageEpicFriend_HoveredColor) == 0x001530, "Member 'USidebarRecentPlayerListEntry_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");

}
