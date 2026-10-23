#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarJoinablePartyEntry_C final : public UFortJoinablePartyListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;
	class UBorder*                                EntryBorder;
	class UCommonActivatableWidgetSwitcher*       Switcher_DisplayNames;
	class UCommonActivatableWidgetSwitcher*       Switcher_PartyPresence;
	class UCommonActivatableWidgetSwitcher*       Switcher_PartyPresence_Hover;
	class UCommonRichTextBlock*                   Text_PartyPresence_Hover_Marquee;
	class UCommonRichTextBlock*                   Text_PartyPresence_Marquee;
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;
	struct FSlateColor                            InviteFontColor;
	struct FSlateColor                            DefaultFontColor;

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SidebarJoinablePartyEntry(int32 EntryPoint);
	void OnPartyPresenceTextUpdated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarJoinablePartyEntry_C">();
	}
	static class USidebarJoinablePartyEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarJoinablePartyEntry_C>();
	}
};
static_assert(alignof(USidebarJoinablePartyEntry_C) == 0x000010, "Wrong alignment on USidebarJoinablePartyEntry_C");
static_assert(sizeof(USidebarJoinablePartyEntry_C) == 0x001570, "Wrong size on USidebarJoinablePartyEntry_C");
static_assert(offsetof(USidebarJoinablePartyEntry_C, UberGraphFrame) == 0x0014F0, "Member 'USidebarJoinablePartyEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarJoinablePartyEntry_C, Selected) == 0x0014F8, "Member 'USidebarJoinablePartyEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(USidebarJoinablePartyEntry_C, Hovered) == 0x001500, "Member 'USidebarJoinablePartyEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(USidebarJoinablePartyEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x001508, "Member 'USidebarJoinablePartyEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(USidebarJoinablePartyEntry_C, EntryBorder) == 0x001510, "Member 'USidebarJoinablePartyEntry_C::EntryBorder' has a wrong offset!");
static_assert(offsetof(USidebarJoinablePartyEntry_C, Switcher_DisplayNames) == 0x001518, "Member 'USidebarJoinablePartyEntry_C::Switcher_DisplayNames' has a wrong offset!");
static_assert(offsetof(USidebarJoinablePartyEntry_C, Switcher_PartyPresence) == 0x001520, "Member 'USidebarJoinablePartyEntry_C::Switcher_PartyPresence' has a wrong offset!");
static_assert(offsetof(USidebarJoinablePartyEntry_C, Switcher_PartyPresence_Hover) == 0x001528, "Member 'USidebarJoinablePartyEntry_C::Switcher_PartyPresence_Hover' has a wrong offset!");
static_assert(offsetof(USidebarJoinablePartyEntry_C, Text_PartyPresence_Hover_Marquee) == 0x001530, "Member 'USidebarJoinablePartyEntry_C::Text_PartyPresence_Hover_Marquee' has a wrong offset!");
static_assert(offsetof(USidebarJoinablePartyEntry_C, Text_PartyPresence_Marquee) == 0x001538, "Member 'USidebarJoinablePartyEntry_C::Text_PartyPresence_Marquee' has a wrong offset!");
static_assert(offsetof(USidebarJoinablePartyEntry_C, UserActionMenuInputButton) == 0x001540, "Member 'USidebarJoinablePartyEntry_C::UserActionMenuInputButton' has a wrong offset!");
static_assert(offsetof(USidebarJoinablePartyEntry_C, InviteFontColor) == 0x001548, "Member 'USidebarJoinablePartyEntry_C::InviteFontColor' has a wrong offset!");
static_assert(offsetof(USidebarJoinablePartyEntry_C, DefaultFontColor) == 0x00155C, "Member 'USidebarJoinablePartyEntry_C::DefaultFontColor' has a wrong offset!");

}
