#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USocialPanel_FriendSearchBar_C final : public UFortFriendSearchButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnHovered;
	class UImage*                                 AddFriendBanIcon;
	class UBorder*                                ClickCapture;
	class UCommonRichTextBlock*                   RichText_CannotAddFriends;
	class UCommonRichTextBlock*                   RichText_SocialBan;
	class UFortMobileImage*                       SharingIcon;
	class UFortSimpleWidgetAnimationsPanel*       SimpleWidgetAnimationsPanel;
	class FName                                   ShakeAnimation;
	bool                                          bShakeAnimationIsPlaying;

public:
	void BndEvt__EditableText_AddFriend_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SocialPanel_FriendSearchBar(int32 EntryPoint);
	struct FEventReply On_ClickCapture_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialPanel_FriendSearchBar_C">();
	}
	static class USocialPanel_FriendSearchBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialPanel_FriendSearchBar_C>();
	}
};
static_assert(alignof(USocialPanel_FriendSearchBar_C) == 0x000010, "Wrong alignment on USocialPanel_FriendSearchBar_C");
static_assert(sizeof(USocialPanel_FriendSearchBar_C) == 0x001520, "Wrong size on USocialPanel_FriendSearchBar_C");
static_assert(offsetof(USocialPanel_FriendSearchBar_C, UberGraphFrame) == 0x0014D0, "Member 'USocialPanel_FriendSearchBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendSearchBar_C, OnHovered) == 0x0014D8, "Member 'USocialPanel_FriendSearchBar_C::OnHovered' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendSearchBar_C, AddFriendBanIcon) == 0x0014E0, "Member 'USocialPanel_FriendSearchBar_C::AddFriendBanIcon' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendSearchBar_C, ClickCapture) == 0x0014E8, "Member 'USocialPanel_FriendSearchBar_C::ClickCapture' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendSearchBar_C, RichText_CannotAddFriends) == 0x0014F0, "Member 'USocialPanel_FriendSearchBar_C::RichText_CannotAddFriends' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendSearchBar_C, RichText_SocialBan) == 0x0014F8, "Member 'USocialPanel_FriendSearchBar_C::RichText_SocialBan' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendSearchBar_C, SharingIcon) == 0x001500, "Member 'USocialPanel_FriendSearchBar_C::SharingIcon' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendSearchBar_C, SimpleWidgetAnimationsPanel) == 0x001508, "Member 'USocialPanel_FriendSearchBar_C::SimpleWidgetAnimationsPanel' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendSearchBar_C, ShakeAnimation) == 0x001510, "Member 'USocialPanel_FriendSearchBar_C::ShakeAnimation' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendSearchBar_C, bShakeAnimationIsPlaying) == 0x001514, "Member 'USocialPanel_FriendSearchBar_C::bShakeAnimationIsPlaying' has a wrong offset!");

}
