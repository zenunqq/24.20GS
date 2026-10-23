#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UUserListEntry_C final : public UFortSocialUserListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UImage*                                 Arrow;
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;
	class UCommonRichTextBlock*                   Text_DisplayName;
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;
	struct FLinearColor                           EncourageEpicFriend_IdleColor;
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_UserListEntry(int32 EntryPoint);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UserListEntry_C">();
	}
	static class UUserListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUserListEntry_C>();
	}
};
static_assert(alignof(UUserListEntry_C) == 0x000010, "Wrong alignment on UUserListEntry_C");
static_assert(sizeof(UUserListEntry_C) == 0x001550, "Wrong size on UUserListEntry_C");
static_assert(offsetof(UUserListEntry_C, UberGraphFrame) == 0x0014F0, "Member 'UUserListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUserListEntry_C, Selected) == 0x0014F8, "Member 'UUserListEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(UUserListEntry_C, Hovered) == 0x001500, "Member 'UUserListEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(UUserListEntry_C, Arrow) == 0x001508, "Member 'UUserListEntry_C::Arrow' has a wrong offset!");
static_assert(offsetof(UUserListEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x001510, "Member 'UUserListEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(UUserListEntry_C, Text_DisplayName) == 0x001518, "Member 'UUserListEntry_C::Text_DisplayName' has a wrong offset!");
static_assert(offsetof(UUserListEntry_C, UserActionMenuInputButton) == 0x001520, "Member 'UUserListEntry_C::UserActionMenuInputButton' has a wrong offset!");
static_assert(offsetof(UUserListEntry_C, EncourageEpicFriend_IdleColor) == 0x001528, "Member 'UUserListEntry_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(UUserListEntry_C, EncourageEpicFriend_HoveredColor) == 0x001538, "Member 'UUserListEntry_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");

}
