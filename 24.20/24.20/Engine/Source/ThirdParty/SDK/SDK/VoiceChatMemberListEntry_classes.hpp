#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UVoiceChatMemberListEntry_C final : public UFortVoiceChatMemberListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UImage*                                 Arrow;
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;
	struct FLinearColor                           EncourageEpicFriend_IdleColor;
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_VoiceChatMemberListEntry(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VoiceChatMemberListEntry_C">();
	}
	static class UVoiceChatMemberListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoiceChatMemberListEntry_C>();
	}
};
static_assert(alignof(UVoiceChatMemberListEntry_C) == 0x000010, "Wrong alignment on UVoiceChatMemberListEntry_C");
static_assert(sizeof(UVoiceChatMemberListEntry_C) == 0x001550, "Wrong size on UVoiceChatMemberListEntry_C");
static_assert(offsetof(UVoiceChatMemberListEntry_C, UberGraphFrame) == 0x001500, "Member 'UVoiceChatMemberListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVoiceChatMemberListEntry_C, Selected) == 0x001508, "Member 'UVoiceChatMemberListEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(UVoiceChatMemberListEntry_C, Hovered) == 0x001510, "Member 'UVoiceChatMemberListEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(UVoiceChatMemberListEntry_C, Arrow) == 0x001518, "Member 'UVoiceChatMemberListEntry_C::Arrow' has a wrong offset!");
static_assert(offsetof(UVoiceChatMemberListEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x001520, "Member 'UVoiceChatMemberListEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(UVoiceChatMemberListEntry_C, EncourageEpicFriend_IdleColor) == 0x001528, "Member 'UVoiceChatMemberListEntry_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(UVoiceChatMemberListEntry_C, EncourageEpicFriend_HoveredColor) == 0x001538, "Member 'UVoiceChatMemberListEntry_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");

}
