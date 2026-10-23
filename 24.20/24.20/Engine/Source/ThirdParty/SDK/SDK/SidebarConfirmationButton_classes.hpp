#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUILegacy_classes.hpp"

namespace SDK
{

class USidebarConfirmationButton_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnHover;
	class UMenuAnchor*                            MenuAnchor_Actions;
	class UCommonTextBlock*                       Text_InteractionName;
	bool                                          bIsAccept;
	uint8                                         Pad_1451[0x7];
	class FText                                   DisplayText;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SidebarConfirmationButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarConfirmationButton_C">();
	}
	static class USidebarConfirmationButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarConfirmationButton_C>();
	}
};
static_assert(alignof(USidebarConfirmationButton_C) == 0x000010, "Wrong alignment on USidebarConfirmationButton_C");
static_assert(sizeof(USidebarConfirmationButton_C) == 0x001470, "Wrong size on USidebarConfirmationButton_C");
static_assert(offsetof(USidebarConfirmationButton_C, UberGraphFrame) == 0x001430, "Member 'USidebarConfirmationButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarConfirmationButton_C, OnHover) == 0x001438, "Member 'USidebarConfirmationButton_C::OnHover' has a wrong offset!");
static_assert(offsetof(USidebarConfirmationButton_C, MenuAnchor_Actions) == 0x001440, "Member 'USidebarConfirmationButton_C::MenuAnchor_Actions' has a wrong offset!");
static_assert(offsetof(USidebarConfirmationButton_C, Text_InteractionName) == 0x001448, "Member 'USidebarConfirmationButton_C::Text_InteractionName' has a wrong offset!");
static_assert(offsetof(USidebarConfirmationButton_C, bIsAccept) == 0x001450, "Member 'USidebarConfirmationButton_C::bIsAccept' has a wrong offset!");
static_assert(offsetof(USidebarConfirmationButton_C, DisplayText) == 0x001458, "Member 'USidebarConfirmationButton_C::DisplayText' has a wrong offset!");

}
