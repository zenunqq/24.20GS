#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SocialUMG_classes.hpp"

namespace SDK
{

class USidebarShuffleListEntry_C final : public USocialListInteractableEntryBase
{
public:
	uint8                                         Pad_1458[0x8];
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UBorder*                                AnimatedInputBorder;
	class UImage*                                 Arrow;
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;
	class UBorder*                                EntryBorder;
	class UCommonRichTextBlock*                   Text_ShuffleText;
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SidebarShuffleListEntry(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarShuffleListEntry_C">();
	}
	static class USidebarShuffleListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarShuffleListEntry_C>();
	}
};
static_assert(alignof(USidebarShuffleListEntry_C) == 0x000010, "Wrong alignment on USidebarShuffleListEntry_C");
static_assert(sizeof(USidebarShuffleListEntry_C) == 0x0014B0, "Wrong size on USidebarShuffleListEntry_C");
static_assert(offsetof(USidebarShuffleListEntry_C, UberGraphFrame) == 0x001460, "Member 'USidebarShuffleListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarShuffleListEntry_C, Selected) == 0x001468, "Member 'USidebarShuffleListEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(USidebarShuffleListEntry_C, Hovered) == 0x001470, "Member 'USidebarShuffleListEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(USidebarShuffleListEntry_C, AnimatedInputBorder) == 0x001478, "Member 'USidebarShuffleListEntry_C::AnimatedInputBorder' has a wrong offset!");
static_assert(offsetof(USidebarShuffleListEntry_C, Arrow) == 0x001480, "Member 'USidebarShuffleListEntry_C::Arrow' has a wrong offset!");
static_assert(offsetof(USidebarShuffleListEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x001488, "Member 'USidebarShuffleListEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(USidebarShuffleListEntry_C, EntryBorder) == 0x001490, "Member 'USidebarShuffleListEntry_C::EntryBorder' has a wrong offset!");
static_assert(offsetof(USidebarShuffleListEntry_C, Text_ShuffleText) == 0x001498, "Member 'USidebarShuffleListEntry_C::Text_ShuffleText' has a wrong offset!");
static_assert(offsetof(USidebarShuffleListEntry_C, UserActionMenuInputButton) == 0x0014A0, "Member 'USidebarShuffleListEntry_C::UserActionMenuInputButton' has a wrong offset!");

}
