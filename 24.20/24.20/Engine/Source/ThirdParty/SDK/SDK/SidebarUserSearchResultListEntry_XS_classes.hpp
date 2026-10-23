#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USidebarUserSearchResultListEntry_XS_C final : public UFortUserSearchResultListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Unhovered;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;
	class UImage*                                 Image_Lock;
	class UCommonActivatableWidgetSwitcher*       Switcher_MutualFriends;
	class UCommonActivatableWidgetSwitcher*       Switcher_SocialName;
	class UCommonRichTextBlock*                   Text_DisplayName;
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;
	struct FLinearColor                           EncourageEpicFriend_IdleColor;
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;

public:
	void BindHoverAnimFinished();
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SidebarUserSearchResultListEntry_XS(int32 EntryPoint);
	void HoverAnimationFinished();
	void OnNewAvatarsEnabledChanged(bool bUsingNewAvatars);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarUserSearchResultListEntry_XS_C">();
	}
	static class USidebarUserSearchResultListEntry_XS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarUserSearchResultListEntry_XS_C>();
	}
};
static_assert(alignof(USidebarUserSearchResultListEntry_XS_C) == 0x000010, "Wrong alignment on USidebarUserSearchResultListEntry_XS_C");
static_assert(sizeof(USidebarUserSearchResultListEntry_XS_C) == 0x001570, "Wrong size on USidebarUserSearchResultListEntry_XS_C");
static_assert(offsetof(USidebarUserSearchResultListEntry_XS_C, UberGraphFrame) == 0x001500, "Member 'USidebarUserSearchResultListEntry_XS_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarUserSearchResultListEntry_XS_C, Unhovered) == 0x001508, "Member 'USidebarUserSearchResultListEntry_XS_C::Unhovered' has a wrong offset!");
static_assert(offsetof(USidebarUserSearchResultListEntry_XS_C, Selected) == 0x001510, "Member 'USidebarUserSearchResultListEntry_XS_C::Selected' has a wrong offset!");
static_assert(offsetof(USidebarUserSearchResultListEntry_XS_C, Hovered) == 0x001518, "Member 'USidebarUserSearchResultListEntry_XS_C::Hovered' has a wrong offset!");
static_assert(offsetof(USidebarUserSearchResultListEntry_XS_C, EmptyButtonToEatOneMouseUpEvent) == 0x001520, "Member 'USidebarUserSearchResultListEntry_XS_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(USidebarUserSearchResultListEntry_XS_C, Image_Lock) == 0x001528, "Member 'USidebarUserSearchResultListEntry_XS_C::Image_Lock' has a wrong offset!");
static_assert(offsetof(USidebarUserSearchResultListEntry_XS_C, Switcher_MutualFriends) == 0x001530, "Member 'USidebarUserSearchResultListEntry_XS_C::Switcher_MutualFriends' has a wrong offset!");
static_assert(offsetof(USidebarUserSearchResultListEntry_XS_C, Switcher_SocialName) == 0x001538, "Member 'USidebarUserSearchResultListEntry_XS_C::Switcher_SocialName' has a wrong offset!");
static_assert(offsetof(USidebarUserSearchResultListEntry_XS_C, Text_DisplayName) == 0x001540, "Member 'USidebarUserSearchResultListEntry_XS_C::Text_DisplayName' has a wrong offset!");
static_assert(offsetof(USidebarUserSearchResultListEntry_XS_C, UserActionMenuInputButton) == 0x001548, "Member 'USidebarUserSearchResultListEntry_XS_C::UserActionMenuInputButton' has a wrong offset!");
static_assert(offsetof(USidebarUserSearchResultListEntry_XS_C, EncourageEpicFriend_IdleColor) == 0x001550, "Member 'USidebarUserSearchResultListEntry_XS_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(USidebarUserSearchResultListEntry_XS_C, EncourageEpicFriend_HoveredColor) == 0x001560, "Member 'USidebarUserSearchResultListEntry_XS_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");

}
