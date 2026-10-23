#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class USuggestedFriendListEntry_C final : public UFortConnectionsUserListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UImage*                                 Arrow;
	class UBorder*                                Border_Background;
	class UBorder*                                Border_Highlight;
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;
	struct FLinearColor                           EncourageEpicFriend_IdleColor;
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SuggestedFriendListEntry(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SuggestedFriendListEntry_C">();
	}
	static class USuggestedFriendListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USuggestedFriendListEntry_C>();
	}
};
static_assert(alignof(USuggestedFriendListEntry_C) == 0x000010, "Wrong alignment on USuggestedFriendListEntry_C");
static_assert(sizeof(USuggestedFriendListEntry_C) == 0x001530, "Wrong size on USuggestedFriendListEntry_C");
static_assert(offsetof(USuggestedFriendListEntry_C, UberGraphFrame) == 0x0014D0, "Member 'USuggestedFriendListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USuggestedFriendListEntry_C, Selected) == 0x0014D8, "Member 'USuggestedFriendListEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(USuggestedFriendListEntry_C, Hovered) == 0x0014E0, "Member 'USuggestedFriendListEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(USuggestedFriendListEntry_C, Arrow) == 0x0014E8, "Member 'USuggestedFriendListEntry_C::Arrow' has a wrong offset!");
static_assert(offsetof(USuggestedFriendListEntry_C, Border_Background) == 0x0014F0, "Member 'USuggestedFriendListEntry_C::Border_Background' has a wrong offset!");
static_assert(offsetof(USuggestedFriendListEntry_C, Border_Highlight) == 0x0014F8, "Member 'USuggestedFriendListEntry_C::Border_Highlight' has a wrong offset!");
static_assert(offsetof(USuggestedFriendListEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x001500, "Member 'USuggestedFriendListEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(USuggestedFriendListEntry_C, UserActionMenuInputButton) == 0x001508, "Member 'USuggestedFriendListEntry_C::UserActionMenuInputButton' has a wrong offset!");
static_assert(offsetof(USuggestedFriendListEntry_C, EncourageEpicFriend_IdleColor) == 0x001510, "Member 'USuggestedFriendListEntry_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(USuggestedFriendListEntry_C, EncourageEpicFriend_HoveredColor) == 0x001520, "Member 'USuggestedFriendListEntry_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");

}
