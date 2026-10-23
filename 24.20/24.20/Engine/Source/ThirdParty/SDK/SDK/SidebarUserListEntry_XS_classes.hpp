#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USidebarUserListEntry_XS_C final : public UFortSocialUserListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Unhovered;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;
	class UScaleBox*                              ScaleBox_1;
	class UCommonActivatableWidgetSwitcher*       Switcher_LastInteraction;
	class UCommonActivatableWidgetSwitcher*       Switcher_SocialName;
	class UCommonRichTextBlock*                   Text_DisplayName;
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;
	struct FLinearColor                           EncourageEpicFriend_IdleColor;
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;
	TArray<class USocialTagWidget*>               SidebarSocialTagWidgetArray;

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnEntryReleased();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_SidebarUserListEntry_XS(int32 EntryPoint);
	void HandleInputMethodChanged(ECommonInputType NewInputType);
	void OnInitialized();
	void OnNewAvatarsEnabledChanged(bool bUsingNewAvatars);
	void SetUnhoverState(bool PlayAnimation_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarUserListEntry_XS_C">();
	}
	static class USidebarUserListEntry_XS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarUserListEntry_XS_C>();
	}
};
static_assert(alignof(USidebarUserListEntry_XS_C) == 0x000010, "Wrong alignment on USidebarUserListEntry_XS_C");
static_assert(sizeof(USidebarUserListEntry_XS_C) == 0x001570, "Wrong size on USidebarUserListEntry_XS_C");
static_assert(offsetof(USidebarUserListEntry_XS_C, UberGraphFrame) == 0x0014F0, "Member 'USidebarUserListEntry_XS_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, Unhovered) == 0x0014F8, "Member 'USidebarUserListEntry_XS_C::Unhovered' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, Selected) == 0x001500, "Member 'USidebarUserListEntry_XS_C::Selected' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, Hovered) == 0x001508, "Member 'USidebarUserListEntry_XS_C::Hovered' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, EmptyButtonToEatOneMouseUpEvent) == 0x001510, "Member 'USidebarUserListEntry_XS_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, ScaleBox_1) == 0x001518, "Member 'USidebarUserListEntry_XS_C::ScaleBox_1' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, Switcher_LastInteraction) == 0x001520, "Member 'USidebarUserListEntry_XS_C::Switcher_LastInteraction' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, Switcher_SocialName) == 0x001528, "Member 'USidebarUserListEntry_XS_C::Switcher_SocialName' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, Text_DisplayName) == 0x001530, "Member 'USidebarUserListEntry_XS_C::Text_DisplayName' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, UserActionMenuInputButton) == 0x001538, "Member 'USidebarUserListEntry_XS_C::UserActionMenuInputButton' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, EncourageEpicFriend_IdleColor) == 0x001540, "Member 'USidebarUserListEntry_XS_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, EncourageEpicFriend_HoveredColor) == 0x001550, "Member 'USidebarUserListEntry_XS_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_XS_C, SidebarSocialTagWidgetArray) == 0x001560, "Member 'USidebarUserListEntry_XS_C::SidebarSocialTagWidgetArray' has a wrong offset!");

}
