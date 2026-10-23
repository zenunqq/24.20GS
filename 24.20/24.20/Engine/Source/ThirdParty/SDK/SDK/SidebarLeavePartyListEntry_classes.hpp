#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarLeavePartyListEntry_C final : public UFortLeavePartyListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UBorder*                                AnimatedInputBorder;
	class UImage*                                 Arrow;
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;
	class UBorder*                                EntryBorder;
	class UCommonRichTextBlock*                   Text_LeavePartyText;
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SidebarLeavePartyListEntry(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarLeavePartyListEntry_C">();
	}
	static class USidebarLeavePartyListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarLeavePartyListEntry_C>();
	}
};
static_assert(alignof(USidebarLeavePartyListEntry_C) == 0x000010, "Wrong alignment on USidebarLeavePartyListEntry_C");
static_assert(sizeof(USidebarLeavePartyListEntry_C) == 0x0014B0, "Wrong size on USidebarLeavePartyListEntry_C");
static_assert(offsetof(USidebarLeavePartyListEntry_C, UberGraphFrame) == 0x001460, "Member 'USidebarLeavePartyListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarLeavePartyListEntry_C, Selected) == 0x001468, "Member 'USidebarLeavePartyListEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(USidebarLeavePartyListEntry_C, Hovered) == 0x001470, "Member 'USidebarLeavePartyListEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(USidebarLeavePartyListEntry_C, AnimatedInputBorder) == 0x001478, "Member 'USidebarLeavePartyListEntry_C::AnimatedInputBorder' has a wrong offset!");
static_assert(offsetof(USidebarLeavePartyListEntry_C, Arrow) == 0x001480, "Member 'USidebarLeavePartyListEntry_C::Arrow' has a wrong offset!");
static_assert(offsetof(USidebarLeavePartyListEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x001488, "Member 'USidebarLeavePartyListEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(USidebarLeavePartyListEntry_C, EntryBorder) == 0x001490, "Member 'USidebarLeavePartyListEntry_C::EntryBorder' has a wrong offset!");
static_assert(offsetof(USidebarLeavePartyListEntry_C, Text_LeavePartyText) == 0x001498, "Member 'USidebarLeavePartyListEntry_C::Text_LeavePartyText' has a wrong offset!");
static_assert(offsetof(USidebarLeavePartyListEntry_C, UserActionMenuInputButton) == 0x0014A0, "Member 'USidebarLeavePartyListEntry_C::UserActionMenuInputButton' has a wrong offset!");

}
