#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UMissedInvitesEntry_C final : public UFortMissedInvitesListEntry
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
	void ExecuteUbergraph_MissedInvitesEntry(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissedInvitesEntry_C">();
	}
	static class UMissedInvitesEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissedInvitesEntry_C>();
	}
};
static_assert(alignof(UMissedInvitesEntry_C) == 0x000010, "Wrong alignment on UMissedInvitesEntry_C");
static_assert(sizeof(UMissedInvitesEntry_C) == 0x0014B0, "Wrong size on UMissedInvitesEntry_C");
static_assert(offsetof(UMissedInvitesEntry_C, UberGraphFrame) == 0x001460, "Member 'UMissedInvitesEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMissedInvitesEntry_C, Selected) == 0x001468, "Member 'UMissedInvitesEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(UMissedInvitesEntry_C, Hovered) == 0x001470, "Member 'UMissedInvitesEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(UMissedInvitesEntry_C, AnimatedInputBorder) == 0x001478, "Member 'UMissedInvitesEntry_C::AnimatedInputBorder' has a wrong offset!");
static_assert(offsetof(UMissedInvitesEntry_C, Arrow) == 0x001480, "Member 'UMissedInvitesEntry_C::Arrow' has a wrong offset!");
static_assert(offsetof(UMissedInvitesEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x001488, "Member 'UMissedInvitesEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(UMissedInvitesEntry_C, EntryBorder) == 0x001490, "Member 'UMissedInvitesEntry_C::EntryBorder' has a wrong offset!");
static_assert(offsetof(UMissedInvitesEntry_C, Exclamation) == 0x001498, "Member 'UMissedInvitesEntry_C::Exclamation' has a wrong offset!");
static_assert(offsetof(UMissedInvitesEntry_C, Text_MissedInvitesText) == 0x0014A0, "Member 'UMissedInvitesEntry_C::Text_MissedInvitesText' has a wrong offset!");
static_assert(offsetof(UMissedInvitesEntry_C, UserActionMenuInputButton) == 0x0014A8, "Member 'UMissedInvitesEntry_C::UserActionMenuInputButton' has a wrong offset!");

}
