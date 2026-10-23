#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UJoinablePartyEntry_C final : public UFortJoinablePartyListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UBorder*                                AnimatedInputBorder;
	class UImage*                                 Arrow;
	class UBorder*                                Border_OnlineStatusIndicator;
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;
	class UBorder*                                EntryBorder;
	class USizeBox*                               Exclamation;
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;
	struct FSlateColor                            InviteFontColor;
	struct FSlateColor                            DefaultFontColor;

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_JoinablePartyEntry(int32 EntryPoint);
	void OnInviteStatusUpdated(bool bIsInvited);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"JoinablePartyEntry_C">();
	}
	static class UJoinablePartyEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJoinablePartyEntry_C>();
	}
};
static_assert(alignof(UJoinablePartyEntry_C) == 0x000010, "Wrong alignment on UJoinablePartyEntry_C");
static_assert(sizeof(UJoinablePartyEntry_C) == 0x001570, "Wrong size on UJoinablePartyEntry_C");
static_assert(offsetof(UJoinablePartyEntry_C, UberGraphFrame) == 0x0014F0, "Member 'UJoinablePartyEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UJoinablePartyEntry_C, Selected) == 0x0014F8, "Member 'UJoinablePartyEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(UJoinablePartyEntry_C, Hovered) == 0x001500, "Member 'UJoinablePartyEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(UJoinablePartyEntry_C, AnimatedInputBorder) == 0x001508, "Member 'UJoinablePartyEntry_C::AnimatedInputBorder' has a wrong offset!");
static_assert(offsetof(UJoinablePartyEntry_C, Arrow) == 0x001510, "Member 'UJoinablePartyEntry_C::Arrow' has a wrong offset!");
static_assert(offsetof(UJoinablePartyEntry_C, Border_OnlineStatusIndicator) == 0x001518, "Member 'UJoinablePartyEntry_C::Border_OnlineStatusIndicator' has a wrong offset!");
static_assert(offsetof(UJoinablePartyEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x001520, "Member 'UJoinablePartyEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(UJoinablePartyEntry_C, EntryBorder) == 0x001528, "Member 'UJoinablePartyEntry_C::EntryBorder' has a wrong offset!");
static_assert(offsetof(UJoinablePartyEntry_C, Exclamation) == 0x001530, "Member 'UJoinablePartyEntry_C::Exclamation' has a wrong offset!");
static_assert(offsetof(UJoinablePartyEntry_C, UserActionMenuInputButton) == 0x001538, "Member 'UJoinablePartyEntry_C::UserActionMenuInputButton' has a wrong offset!");
static_assert(offsetof(UJoinablePartyEntry_C, InviteFontColor) == 0x001540, "Member 'UJoinablePartyEntry_C::InviteFontColor' has a wrong offset!");
static_assert(offsetof(UJoinablePartyEntry_C, DefaultFontColor) == 0x001554, "Member 'UJoinablePartyEntry_C::DefaultFontColor' has a wrong offset!");

}
