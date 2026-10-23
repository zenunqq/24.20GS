#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SocialUMG_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USocialInteraction_C final : public USocialInteractionButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnHover;
	class UImage*                                 EncourageEpicFriend;
	class UImage*                                 InteractionIcon;
	class UMenuAnchor*                            MenuAnchor_Actions;
	struct FLinearColor                           EncourageEpicFriend_IdleColor;
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;
	struct FLinearColor                           AddFriendColor;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_SocialInteraction(int32 EntryPoint);
	void OnInteractionSet();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialInteraction_C">();
	}
	static class USocialInteraction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialInteraction_C>();
	}
};
static_assert(alignof(USocialInteraction_C) == 0x000010, "Wrong alignment on USocialInteraction_C");
static_assert(sizeof(USocialInteraction_C) == 0x001540, "Wrong size on USocialInteraction_C");
static_assert(offsetof(USocialInteraction_C, UberGraphFrame) == 0x0014E0, "Member 'USocialInteraction_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialInteraction_C, OnHover) == 0x0014E8, "Member 'USocialInteraction_C::OnHover' has a wrong offset!");
static_assert(offsetof(USocialInteraction_C, EncourageEpicFriend) == 0x0014F0, "Member 'USocialInteraction_C::EncourageEpicFriend' has a wrong offset!");
static_assert(offsetof(USocialInteraction_C, InteractionIcon) == 0x0014F8, "Member 'USocialInteraction_C::InteractionIcon' has a wrong offset!");
static_assert(offsetof(USocialInteraction_C, MenuAnchor_Actions) == 0x001500, "Member 'USocialInteraction_C::MenuAnchor_Actions' has a wrong offset!");
static_assert(offsetof(USocialInteraction_C, EncourageEpicFriend_IdleColor) == 0x001508, "Member 'USocialInteraction_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(USocialInteraction_C, EncourageEpicFriend_HoveredColor) == 0x001518, "Member 'USocialInteraction_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");
static_assert(offsetof(USocialInteraction_C, AddFriendColor) == 0x001528, "Member 'USocialInteraction_C::AddFriendColor' has a wrong offset!");

}
