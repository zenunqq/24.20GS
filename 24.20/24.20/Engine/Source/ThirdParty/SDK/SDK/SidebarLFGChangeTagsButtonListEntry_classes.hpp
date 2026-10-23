#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SocialUMG_classes.hpp"

namespace SDK
{

class USidebarLFGChangeTagsButtonListEntry_C final : public USocialListInteractableEntryBase
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
	class UHorizontalBox*                         HorizontalBox_0;
	class USizeBox*                               SizeBox_0;
	class UCommonRichTextBlock*                   Text_ChangeTagsText;
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SidebarLFGChangeTagsButtonListEntry(int32 EntryPoint);
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarLFGChangeTagsButtonListEntry_C">();
	}
	static class USidebarLFGChangeTagsButtonListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarLFGChangeTagsButtonListEntry_C>();
	}
};
static_assert(alignof(USidebarLFGChangeTagsButtonListEntry_C) == 0x000010, "Wrong alignment on USidebarLFGChangeTagsButtonListEntry_C");
static_assert(sizeof(USidebarLFGChangeTagsButtonListEntry_C) == 0x0014C0, "Wrong size on USidebarLFGChangeTagsButtonListEntry_C");
static_assert(offsetof(USidebarLFGChangeTagsButtonListEntry_C, UberGraphFrame) == 0x001460, "Member 'USidebarLFGChangeTagsButtonListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarLFGChangeTagsButtonListEntry_C, Selected) == 0x001468, "Member 'USidebarLFGChangeTagsButtonListEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(USidebarLFGChangeTagsButtonListEntry_C, Hovered) == 0x001470, "Member 'USidebarLFGChangeTagsButtonListEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(USidebarLFGChangeTagsButtonListEntry_C, AnimatedInputBorder) == 0x001478, "Member 'USidebarLFGChangeTagsButtonListEntry_C::AnimatedInputBorder' has a wrong offset!");
static_assert(offsetof(USidebarLFGChangeTagsButtonListEntry_C, Arrow) == 0x001480, "Member 'USidebarLFGChangeTagsButtonListEntry_C::Arrow' has a wrong offset!");
static_assert(offsetof(USidebarLFGChangeTagsButtonListEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x001488, "Member 'USidebarLFGChangeTagsButtonListEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(USidebarLFGChangeTagsButtonListEntry_C, EntryBorder) == 0x001490, "Member 'USidebarLFGChangeTagsButtonListEntry_C::EntryBorder' has a wrong offset!");
static_assert(offsetof(USidebarLFGChangeTagsButtonListEntry_C, HorizontalBox_0) == 0x001498, "Member 'USidebarLFGChangeTagsButtonListEntry_C::HorizontalBox_0' has a wrong offset!");
static_assert(offsetof(USidebarLFGChangeTagsButtonListEntry_C, SizeBox_0) == 0x0014A0, "Member 'USidebarLFGChangeTagsButtonListEntry_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(USidebarLFGChangeTagsButtonListEntry_C, Text_ChangeTagsText) == 0x0014A8, "Member 'USidebarLFGChangeTagsButtonListEntry_C::Text_ChangeTagsText' has a wrong offset!");
static_assert(offsetof(USidebarLFGChangeTagsButtonListEntry_C, UserActionMenuInputButton) == 0x0014B0, "Member 'USidebarLFGChangeTagsButtonListEntry_C::UserActionMenuInputButton' has a wrong offset!");

}
