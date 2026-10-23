#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UMultiFriendActionListEntry_C final : public UFortMultiFriendActionListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;
	class UBorder*                                EntryBorder;
	class UCommonRichTextBlock*                   Text_MissedInvitesText;
	class UCommonRichTextBlock*                   Text_MissedInvitesText_Hover;
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_MultiFriendActionListEntry(int32 EntryPoint);
	void GetText(EMultiFriendAction InAction, class FText* Text);
	void OnActionUpdated(EMultiFriendAction InAction);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MultiFriendActionListEntry_C">();
	}
	static class UMultiFriendActionListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMultiFriendActionListEntry_C>();
	}
};
static_assert(alignof(UMultiFriendActionListEntry_C) == 0x000010, "Wrong alignment on UMultiFriendActionListEntry_C");
static_assert(sizeof(UMultiFriendActionListEntry_C) == 0x0014A0, "Wrong size on UMultiFriendActionListEntry_C");
static_assert(offsetof(UMultiFriendActionListEntry_C, UberGraphFrame) == 0x001460, "Member 'UMultiFriendActionListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMultiFriendActionListEntry_C, Selected) == 0x001468, "Member 'UMultiFriendActionListEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(UMultiFriendActionListEntry_C, Hovered) == 0x001470, "Member 'UMultiFriendActionListEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(UMultiFriendActionListEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x001478, "Member 'UMultiFriendActionListEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(UMultiFriendActionListEntry_C, EntryBorder) == 0x001480, "Member 'UMultiFriendActionListEntry_C::EntryBorder' has a wrong offset!");
static_assert(offsetof(UMultiFriendActionListEntry_C, Text_MissedInvitesText) == 0x001488, "Member 'UMultiFriendActionListEntry_C::Text_MissedInvitesText' has a wrong offset!");
static_assert(offsetof(UMultiFriendActionListEntry_C, Text_MissedInvitesText_Hover) == 0x001490, "Member 'UMultiFriendActionListEntry_C::Text_MissedInvitesText_Hover' has a wrong offset!");
static_assert(offsetof(UMultiFriendActionListEntry_C, UserActionMenuInputButton) == 0x001498, "Member 'UMultiFriendActionListEntry_C::UserActionMenuInputButton' has a wrong offset!");

}
