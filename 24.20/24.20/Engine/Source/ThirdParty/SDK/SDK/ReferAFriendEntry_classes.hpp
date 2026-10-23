#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UReferAFriendEntry_C final : public UFortReferFriendListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UBorder*                                AnimatedInputBorder;
	class UImage*                                 Arrow;
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;
	class UBorder*                                EntryBorder;
	class USizeBox*                               Exclamation;
	class UCommonRichTextBlock*                   Text_MissedInvitesText;
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_ReferAFriendEntry(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ReferAFriendEntry_C">();
	}
	static class UReferAFriendEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReferAFriendEntry_C>();
	}
};
static_assert(alignof(UReferAFriendEntry_C) == 0x000010, "Wrong alignment on UReferAFriendEntry_C");
static_assert(sizeof(UReferAFriendEntry_C) == 0x0014B0, "Wrong size on UReferAFriendEntry_C");
static_assert(offsetof(UReferAFriendEntry_C, UberGraphFrame) == 0x001460, "Member 'UReferAFriendEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UReferAFriendEntry_C, Selected) == 0x001468, "Member 'UReferAFriendEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(UReferAFriendEntry_C, Hovered) == 0x001470, "Member 'UReferAFriendEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(UReferAFriendEntry_C, AnimatedInputBorder) == 0x001478, "Member 'UReferAFriendEntry_C::AnimatedInputBorder' has a wrong offset!");
static_assert(offsetof(UReferAFriendEntry_C, Arrow) == 0x001480, "Member 'UReferAFriendEntry_C::Arrow' has a wrong offset!");
static_assert(offsetof(UReferAFriendEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x001488, "Member 'UReferAFriendEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(UReferAFriendEntry_C, EntryBorder) == 0x001490, "Member 'UReferAFriendEntry_C::EntryBorder' has a wrong offset!");
static_assert(offsetof(UReferAFriendEntry_C, Exclamation) == 0x001498, "Member 'UReferAFriendEntry_C::Exclamation' has a wrong offset!");
static_assert(offsetof(UReferAFriendEntry_C, Text_MissedInvitesText) == 0x0014A0, "Member 'UReferAFriendEntry_C::Text_MissedInvitesText' has a wrong offset!");
static_assert(offsetof(UReferAFriendEntry_C, UserActionMenuInputButton) == 0x0014A8, "Member 'UReferAFriendEntry_C::UserActionMenuInputButton' has a wrong offset!");

}
