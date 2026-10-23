#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUILegacy_classes.hpp"

namespace SDK
{

class USocialPanelWeGameFriendButton_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnHovered;
	class UCommonTextBlock*                       Text_LinkPrompt;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SocialPanelWeGameFriendButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialPanelWeGameFriendButton_C">();
	}
	static class USocialPanelWeGameFriendButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialPanelWeGameFriendButton_C>();
	}
};
static_assert(alignof(USocialPanelWeGameFriendButton_C) == 0x000010, "Wrong alignment on USocialPanelWeGameFriendButton_C");
static_assert(sizeof(USocialPanelWeGameFriendButton_C) == 0x001450, "Wrong size on USocialPanelWeGameFriendButton_C");
static_assert(offsetof(USocialPanelWeGameFriendButton_C, UberGraphFrame) == 0x001430, "Member 'USocialPanelWeGameFriendButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialPanelWeGameFriendButton_C, OnHovered) == 0x001438, "Member 'USocialPanelWeGameFriendButton_C::OnHovered' has a wrong offset!");
static_assert(offsetof(USocialPanelWeGameFriendButton_C, Text_LinkPrompt) == 0x001440, "Member 'USocialPanelWeGameFriendButton_C::Text_LinkPrompt' has a wrong offset!");

}
