#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebar_FriendSearchBar_C final : public UFortFriendSearchButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnHovered;
	class UImage*                                 AddFriendBanIcon;
	class USizeBox*                               ClearButtonSB;
	class UBorder*                                ClickCapture;
	class UCommonRichTextBlock*                   RichText_CannotAddFriends;
	class UCommonRichTextBlock*                   RichText_SocialBan;
	class UFortMobileImage*                       SharingIcon;
	class UFortSimpleWidgetAnimationsPanel*       SimpleWidgetAnimationsPanel;
	class USizeBox*                               SizeBox_FriendSearch;
	class FName                                   ShakeAnimation;
	bool                                          bShakeAnimationIsPlaying;

public:
	void BndEvt__EditableText_AddFriend_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_Sidebar_FriendSearchBar(int32 EntryPoint);
	struct FEventReply On_ClickCapture_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Sidebar_FriendSearchBar_C">();
	}
	static class USidebar_FriendSearchBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebar_FriendSearchBar_C>();
	}
};
static_assert(alignof(USidebar_FriendSearchBar_C) == 0x000010, "Wrong alignment on USidebar_FriendSearchBar_C");
static_assert(sizeof(USidebar_FriendSearchBar_C) == 0x001530, "Wrong size on USidebar_FriendSearchBar_C");
static_assert(offsetof(USidebar_FriendSearchBar_C, UberGraphFrame) == 0x0014D0, "Member 'USidebar_FriendSearchBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebar_FriendSearchBar_C, OnHovered) == 0x0014D8, "Member 'USidebar_FriendSearchBar_C::OnHovered' has a wrong offset!");
static_assert(offsetof(USidebar_FriendSearchBar_C, AddFriendBanIcon) == 0x0014E0, "Member 'USidebar_FriendSearchBar_C::AddFriendBanIcon' has a wrong offset!");
static_assert(offsetof(USidebar_FriendSearchBar_C, ClearButtonSB) == 0x0014E8, "Member 'USidebar_FriendSearchBar_C::ClearButtonSB' has a wrong offset!");
static_assert(offsetof(USidebar_FriendSearchBar_C, ClickCapture) == 0x0014F0, "Member 'USidebar_FriendSearchBar_C::ClickCapture' has a wrong offset!");
static_assert(offsetof(USidebar_FriendSearchBar_C, RichText_CannotAddFriends) == 0x0014F8, "Member 'USidebar_FriendSearchBar_C::RichText_CannotAddFriends' has a wrong offset!");
static_assert(offsetof(USidebar_FriendSearchBar_C, RichText_SocialBan) == 0x001500, "Member 'USidebar_FriendSearchBar_C::RichText_SocialBan' has a wrong offset!");
static_assert(offsetof(USidebar_FriendSearchBar_C, SharingIcon) == 0x001508, "Member 'USidebar_FriendSearchBar_C::SharingIcon' has a wrong offset!");
static_assert(offsetof(USidebar_FriendSearchBar_C, SimpleWidgetAnimationsPanel) == 0x001510, "Member 'USidebar_FriendSearchBar_C::SimpleWidgetAnimationsPanel' has a wrong offset!");
static_assert(offsetof(USidebar_FriendSearchBar_C, SizeBox_FriendSearch) == 0x001518, "Member 'USidebar_FriendSearchBar_C::SizeBox_FriendSearch' has a wrong offset!");
static_assert(offsetof(USidebar_FriendSearchBar_C, ShakeAnimation) == 0x001520, "Member 'USidebar_FriendSearchBar_C::ShakeAnimation' has a wrong offset!");
static_assert(offsetof(USidebar_FriendSearchBar_C, bShakeAnimationIsPlaying) == 0x001524, "Member 'USidebar_FriendSearchBar_C::bShakeAnimationIsPlaying' has a wrong offset!");

}
