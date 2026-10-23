#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UTeamMemberListEntry_C final : public UFortTeamMemberListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UImage*                                 Arrow;
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;
	struct FLinearColor                           EncourageEpicFriend_IdleColor;
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_TeamMemberListEntry(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamMemberListEntry_C">();
	}
	static class UTeamMemberListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamMemberListEntry_C>();
	}
};
static_assert(alignof(UTeamMemberListEntry_C) == 0x000010, "Wrong alignment on UTeamMemberListEntry_C");
static_assert(sizeof(UTeamMemberListEntry_C) == 0x001550, "Wrong size on UTeamMemberListEntry_C");
static_assert(offsetof(UTeamMemberListEntry_C, UberGraphFrame) == 0x001500, "Member 'UTeamMemberListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTeamMemberListEntry_C, Selected) == 0x001508, "Member 'UTeamMemberListEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(UTeamMemberListEntry_C, Hovered) == 0x001510, "Member 'UTeamMemberListEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(UTeamMemberListEntry_C, Arrow) == 0x001518, "Member 'UTeamMemberListEntry_C::Arrow' has a wrong offset!");
static_assert(offsetof(UTeamMemberListEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x001520, "Member 'UTeamMemberListEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(UTeamMemberListEntry_C, UserActionMenuInputButton) == 0x001528, "Member 'UTeamMemberListEntry_C::UserActionMenuInputButton' has a wrong offset!");
static_assert(offsetof(UTeamMemberListEntry_C, EncourageEpicFriend_IdleColor) == 0x001530, "Member 'UTeamMemberListEntry_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(UTeamMemberListEntry_C, EncourageEpicFriend_HoveredColor) == 0x001540, "Member 'UTeamMemberListEntry_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");

}
