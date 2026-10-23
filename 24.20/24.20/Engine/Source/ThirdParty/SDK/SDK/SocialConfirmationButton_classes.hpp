#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUILegacy_classes.hpp"

namespace SDK
{

class USocialConfirmationButton_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnHover;
	class UBorder*                                Border_InteractionIndicator;
	class UImage*                                 InteractionIcon;
	class UMenuAnchor*                            MenuAnchor_Actions;
	class UCommonTextBlock*                       Text_InteractionName;
	bool                                          bIsAccept;
	uint8                                         Pad_1461[0x7];
	class FText                                   DisplayText;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SocialConfirmationButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialConfirmationButton_C">();
	}
	static class USocialConfirmationButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialConfirmationButton_C>();
	}
};
static_assert(alignof(USocialConfirmationButton_C) == 0x000010, "Wrong alignment on USocialConfirmationButton_C");
static_assert(sizeof(USocialConfirmationButton_C) == 0x001480, "Wrong size on USocialConfirmationButton_C");
static_assert(offsetof(USocialConfirmationButton_C, UberGraphFrame) == 0x001430, "Member 'USocialConfirmationButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialConfirmationButton_C, OnHover) == 0x001438, "Member 'USocialConfirmationButton_C::OnHover' has a wrong offset!");
static_assert(offsetof(USocialConfirmationButton_C, Border_InteractionIndicator) == 0x001440, "Member 'USocialConfirmationButton_C::Border_InteractionIndicator' has a wrong offset!");
static_assert(offsetof(USocialConfirmationButton_C, InteractionIcon) == 0x001448, "Member 'USocialConfirmationButton_C::InteractionIcon' has a wrong offset!");
static_assert(offsetof(USocialConfirmationButton_C, MenuAnchor_Actions) == 0x001450, "Member 'USocialConfirmationButton_C::MenuAnchor_Actions' has a wrong offset!");
static_assert(offsetof(USocialConfirmationButton_C, Text_InteractionName) == 0x001458, "Member 'USocialConfirmationButton_C::Text_InteractionName' has a wrong offset!");
static_assert(offsetof(USocialConfirmationButton_C, bIsAccept) == 0x001460, "Member 'USocialConfirmationButton_C::bIsAccept' has a wrong offset!");
static_assert(offsetof(USocialConfirmationButton_C, DisplayText) == 0x001468, "Member 'USocialConfirmationButton_C::DisplayText' has a wrong offset!");

}
