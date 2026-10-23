#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UInviteListEntry_FriendInvite_XS_C final : public UFortConnectionsUserListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UImage*                                 Arrow;
	class UBorder*                                Border_OnlineStatusIndicator;
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;
	class UBorder*                                EntryBorder;
	class UCommonRichTextBlock*                   Text_SentRequest;
	struct FLinearColor                           Online;
	struct FLinearColor                           Offline;
	struct FLinearColor                           Away;

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_InviteListEntry_FriendInvite_XS(int32 EntryPoint);
	void HandleOnlineIndicatorView(uint8 OnlineStatus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InviteListEntry_FriendInvite_XS_C">();
	}
	static class UInviteListEntry_FriendInvite_XS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInviteListEntry_FriendInvite_XS_C>();
	}
};
static_assert(alignof(UInviteListEntry_FriendInvite_XS_C) == 0x000010, "Wrong alignment on UInviteListEntry_FriendInvite_XS_C");
static_assert(sizeof(UInviteListEntry_FriendInvite_XS_C) == 0x001540, "Wrong size on UInviteListEntry_FriendInvite_XS_C");
static_assert(offsetof(UInviteListEntry_FriendInvite_XS_C, UberGraphFrame) == 0x0014D0, "Member 'UInviteListEntry_FriendInvite_XS_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInviteListEntry_FriendInvite_XS_C, Selected) == 0x0014D8, "Member 'UInviteListEntry_FriendInvite_XS_C::Selected' has a wrong offset!");
static_assert(offsetof(UInviteListEntry_FriendInvite_XS_C, Hovered) == 0x0014E0, "Member 'UInviteListEntry_FriendInvite_XS_C::Hovered' has a wrong offset!");
static_assert(offsetof(UInviteListEntry_FriendInvite_XS_C, Arrow) == 0x0014E8, "Member 'UInviteListEntry_FriendInvite_XS_C::Arrow' has a wrong offset!");
static_assert(offsetof(UInviteListEntry_FriendInvite_XS_C, Border_OnlineStatusIndicator) == 0x0014F0, "Member 'UInviteListEntry_FriendInvite_XS_C::Border_OnlineStatusIndicator' has a wrong offset!");
static_assert(offsetof(UInviteListEntry_FriendInvite_XS_C, EmptyButtonToEatOneMouseUpEvent) == 0x0014F8, "Member 'UInviteListEntry_FriendInvite_XS_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(UInviteListEntry_FriendInvite_XS_C, EntryBorder) == 0x001500, "Member 'UInviteListEntry_FriendInvite_XS_C::EntryBorder' has a wrong offset!");
static_assert(offsetof(UInviteListEntry_FriendInvite_XS_C, Text_SentRequest) == 0x001508, "Member 'UInviteListEntry_FriendInvite_XS_C::Text_SentRequest' has a wrong offset!");
static_assert(offsetof(UInviteListEntry_FriendInvite_XS_C, Online) == 0x001510, "Member 'UInviteListEntry_FriendInvite_XS_C::Online' has a wrong offset!");
static_assert(offsetof(UInviteListEntry_FriendInvite_XS_C, Offline) == 0x001520, "Member 'UInviteListEntry_FriendInvite_XS_C::Offline' has a wrong offset!");
static_assert(offsetof(UInviteListEntry_FriendInvite_XS_C, Away) == 0x001530, "Member 'UInviteListEntry_FriendInvite_XS_C::Away' has a wrong offset!");

}
