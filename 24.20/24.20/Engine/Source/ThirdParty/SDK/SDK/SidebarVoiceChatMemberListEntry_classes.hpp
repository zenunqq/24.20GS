#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USidebarVoiceChatMemberListEntry_C final : public UFortVoiceChatMemberListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Unhovered;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;
	class UCommonActivatableWidgetSwitcher*       Switcher_SocialName;
	struct FLinearColor                           EncourageEpicFriend_IdleColor;
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SidebarVoiceChatMemberListEntry(int32 EntryPoint);
	void OnNewAvatarsEnabledChanged(bool bUsingNewAvatars);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarVoiceChatMemberListEntry_C">();
	}
	static class USidebarVoiceChatMemberListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarVoiceChatMemberListEntry_C>();
	}
};
static_assert(alignof(USidebarVoiceChatMemberListEntry_C) == 0x000010, "Wrong alignment on USidebarVoiceChatMemberListEntry_C");
static_assert(sizeof(USidebarVoiceChatMemberListEntry_C) == 0x001550, "Wrong size on USidebarVoiceChatMemberListEntry_C");
static_assert(offsetof(USidebarVoiceChatMemberListEntry_C, UberGraphFrame) == 0x001500, "Member 'USidebarVoiceChatMemberListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChatMemberListEntry_C, Unhovered) == 0x001508, "Member 'USidebarVoiceChatMemberListEntry_C::Unhovered' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChatMemberListEntry_C, Selected) == 0x001510, "Member 'USidebarVoiceChatMemberListEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChatMemberListEntry_C, Hovered) == 0x001518, "Member 'USidebarVoiceChatMemberListEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChatMemberListEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x001520, "Member 'USidebarVoiceChatMemberListEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChatMemberListEntry_C, Switcher_SocialName) == 0x001528, "Member 'USidebarVoiceChatMemberListEntry_C::Switcher_SocialName' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChatMemberListEntry_C, EncourageEpicFriend_IdleColor) == 0x001530, "Member 'USidebarVoiceChatMemberListEntry_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(USidebarVoiceChatMemberListEntry_C, EncourageEpicFriend_HoveredColor) == 0x001540, "Member 'USidebarVoiceChatMemberListEntry_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");

}
