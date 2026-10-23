#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USidebarUserListEntry_MutualFriend_C final : public UFortMutualFriendSocialUserListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;
	class UCommonRichTextBlock*                   Text_DisplayName;
	struct FLinearColor                           EncourageEpicFriend_IdleColor;
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;

public:
	void ExecuteUbergraph_SidebarUserListEntry_MutualFriend(int32 EntryPoint);
	void OnNewAvatarsEnabledChanged(bool bUsingNewAvatars);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarUserListEntry_MutualFriend_C">();
	}
	static class USidebarUserListEntry_MutualFriend_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarUserListEntry_MutualFriend_C>();
	}
};
static_assert(alignof(USidebarUserListEntry_MutualFriend_C) == 0x000010, "Wrong alignment on USidebarUserListEntry_MutualFriend_C");
static_assert(sizeof(USidebarUserListEntry_MutualFriend_C) == 0x001500, "Wrong size on USidebarUserListEntry_MutualFriend_C");
static_assert(offsetof(USidebarUserListEntry_MutualFriend_C, UberGraphFrame) == 0x0014C0, "Member 'USidebarUserListEntry_MutualFriend_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_MutualFriend_C, EmptyButtonToEatOneMouseUpEvent) == 0x0014C8, "Member 'USidebarUserListEntry_MutualFriend_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_MutualFriend_C, Text_DisplayName) == 0x0014D0, "Member 'USidebarUserListEntry_MutualFriend_C::Text_DisplayName' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_MutualFriend_C, EncourageEpicFriend_IdleColor) == 0x0014D8, "Member 'USidebarUserListEntry_MutualFriend_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_MutualFriend_C, EncourageEpicFriend_HoveredColor) == 0x0014E8, "Member 'USidebarUserListEntry_MutualFriend_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");

}
