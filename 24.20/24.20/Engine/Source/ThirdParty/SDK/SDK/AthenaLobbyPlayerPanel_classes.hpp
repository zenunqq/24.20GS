#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UAthenaLobbyPlayerPanel_C final : public UAthenaLobbyPlayerPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UHorizontalBox*                         BattlePassRow;
	class UBorder*                                Border_0;
	uint8                                         Pad_5C8[0x8];
	struct FFortTeamMemberInfo                    TeamMemberInfo;
	TMulticastInlineDelegate<void()>              OnGadgetsClicked;
	class FText                                   AddFriendText;
	class FText                                   AcceptInviteText;
	class FText                                   SentInviteText;
	class FText                                   AcceptedInviteText;

public:
	void ExecuteUbergraph_AthenaLobbyPlayerPanel(int32 EntryPoint);
	void OnFriendStatusUpdated(EFortFriendRequestStatus FriendRequestStatus);
	void OnHasBattlePassUpdated(bool bHasBattlePass);
	void OnIsMutedUpdated(bool bIsMuted);
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaLobbyPlayerPanel_C">();
	}
	static class UAthenaLobbyPlayerPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaLobbyPlayerPanel_C>();
	}
};
static_assert(alignof(UAthenaLobbyPlayerPanel_C) == 0x000010, "Wrong alignment on UAthenaLobbyPlayerPanel_C");
static_assert(sizeof(UAthenaLobbyPlayerPanel_C) == 0x000890, "Wrong size on UAthenaLobbyPlayerPanel_C");
static_assert(offsetof(UAthenaLobbyPlayerPanel_C, UberGraphFrame) == 0x0005B0, "Member 'UAthenaLobbyPlayerPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyPlayerPanel_C, BattlePassRow) == 0x0005B8, "Member 'UAthenaLobbyPlayerPanel_C::BattlePassRow' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyPlayerPanel_C, Border_0) == 0x0005C0, "Member 'UAthenaLobbyPlayerPanel_C::Border_0' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyPlayerPanel_C, TeamMemberInfo) == 0x0005D0, "Member 'UAthenaLobbyPlayerPanel_C::TeamMemberInfo' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyPlayerPanel_C, OnGadgetsClicked) == 0x000820, "Member 'UAthenaLobbyPlayerPanel_C::OnGadgetsClicked' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyPlayerPanel_C, AddFriendText) == 0x000830, "Member 'UAthenaLobbyPlayerPanel_C::AddFriendText' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyPlayerPanel_C, AcceptInviteText) == 0x000848, "Member 'UAthenaLobbyPlayerPanel_C::AcceptInviteText' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyPlayerPanel_C, SentInviteText) == 0x000860, "Member 'UAthenaLobbyPlayerPanel_C::SentInviteText' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyPlayerPanel_C, AcceptedInviteText) == 0x000878, "Member 'UAthenaLobbyPlayerPanel_C::AcceptedInviteText' has a wrong offset!");

}
