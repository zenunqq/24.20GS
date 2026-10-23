#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USocialPanel_FriendLinkButton_C final : public UFortSocialPanelView_FriendLinkButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnCopied;
	class UWidgetAnimation*                       OnHovered;
	class UMenuAnchor*                            MenuAnchor_Actions;
	class UFortMobileImage*                       SharingIcon;
	class UCommonWidgetSwitcherLegacy*            Switcher_CopyState;
	class UCommonTextBlock*                       Text_CopyConfirmed;
	class UCommonTextBlock*                       Text_FriendLinkInstructions;
	class UCommonTextBlock*                       Text_LinkPrompt;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_SocialPanel_FriendLinkButton(int32 EntryPoint);
	void OnCopiedToClipboard();
	void OnShareButtonTypeSet(EFriendLinkShareButtonType Type);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialPanel_FriendLinkButton_C">();
	}
	static class USocialPanel_FriendLinkButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialPanel_FriendLinkButton_C>();
	}
};
static_assert(alignof(USocialPanel_FriendLinkButton_C) == 0x000010, "Wrong alignment on USocialPanel_FriendLinkButton_C");
static_assert(sizeof(USocialPanel_FriendLinkButton_C) == 0x001490, "Wrong size on USocialPanel_FriendLinkButton_C");
static_assert(offsetof(USocialPanel_FriendLinkButton_C, UberGraphFrame) == 0x001440, "Member 'USocialPanel_FriendLinkButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendLinkButton_C, OnCopied) == 0x001448, "Member 'USocialPanel_FriendLinkButton_C::OnCopied' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendLinkButton_C, OnHovered) == 0x001450, "Member 'USocialPanel_FriendLinkButton_C::OnHovered' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendLinkButton_C, MenuAnchor_Actions) == 0x001458, "Member 'USocialPanel_FriendLinkButton_C::MenuAnchor_Actions' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendLinkButton_C, SharingIcon) == 0x001460, "Member 'USocialPanel_FriendLinkButton_C::SharingIcon' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendLinkButton_C, Switcher_CopyState) == 0x001468, "Member 'USocialPanel_FriendLinkButton_C::Switcher_CopyState' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendLinkButton_C, Text_CopyConfirmed) == 0x001470, "Member 'USocialPanel_FriendLinkButton_C::Text_CopyConfirmed' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendLinkButton_C, Text_FriendLinkInstructions) == 0x001478, "Member 'USocialPanel_FriendLinkButton_C::Text_FriendLinkInstructions' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendLinkButton_C, Text_LinkPrompt) == 0x001480, "Member 'USocialPanel_FriendLinkButton_C::Text_LinkPrompt' has a wrong offset!");

}
