#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UJoinRequestUserListEntry_C final : public UFortSocialUserListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UImage*                                 Arrow;
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;
	class UCommonRichTextBlock*                   JoinRequest;
	class UCommonRichTextBlock*                   Text_DisplayName;
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;
	struct FLinearColor                           EncourageEpicFriend_IdleColor;
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_JoinRequestUserListEntry(int32 EntryPoint);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"JoinRequestUserListEntry_C">();
	}
	static class UJoinRequestUserListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJoinRequestUserListEntry_C>();
	}
};
static_assert(alignof(UJoinRequestUserListEntry_C) == 0x000010, "Wrong alignment on UJoinRequestUserListEntry_C");
static_assert(sizeof(UJoinRequestUserListEntry_C) == 0x001550, "Wrong size on UJoinRequestUserListEntry_C");
static_assert(offsetof(UJoinRequestUserListEntry_C, UberGraphFrame) == 0x0014F0, "Member 'UJoinRequestUserListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UJoinRequestUserListEntry_C, Selected) == 0x0014F8, "Member 'UJoinRequestUserListEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(UJoinRequestUserListEntry_C, Hovered) == 0x001500, "Member 'UJoinRequestUserListEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(UJoinRequestUserListEntry_C, Arrow) == 0x001508, "Member 'UJoinRequestUserListEntry_C::Arrow' has a wrong offset!");
static_assert(offsetof(UJoinRequestUserListEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x001510, "Member 'UJoinRequestUserListEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(UJoinRequestUserListEntry_C, JoinRequest) == 0x001518, "Member 'UJoinRequestUserListEntry_C::JoinRequest' has a wrong offset!");
static_assert(offsetof(UJoinRequestUserListEntry_C, Text_DisplayName) == 0x001520, "Member 'UJoinRequestUserListEntry_C::Text_DisplayName' has a wrong offset!");
static_assert(offsetof(UJoinRequestUserListEntry_C, UserActionMenuInputButton) == 0x001528, "Member 'UJoinRequestUserListEntry_C::UserActionMenuInputButton' has a wrong offset!");
static_assert(offsetof(UJoinRequestUserListEntry_C, EncourageEpicFriend_IdleColor) == 0x001530, "Member 'UJoinRequestUserListEntry_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(UJoinRequestUserListEntry_C, EncourageEpicFriend_HoveredColor) == 0x001540, "Member 'UJoinRequestUserListEntry_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");

}
