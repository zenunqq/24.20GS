#pragma once

#include "Basic.hpp"

#include "AthenaLobbyPlayerPanel_classes.hpp"
#include "AthenaLobbyPlayerPanel_parameters.hpp"

namespace SDK
{

void UAthenaLobbyPlayerPanel_C::ExecuteUbergraph_AthenaLobbyPlayerPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "ExecuteUbergraph_AthenaLobbyPlayerPanel");

	Params::AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLobbyPlayerPanel_C::OnFriendStatusUpdated(EFortFriendRequestStatus FriendRequestStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "OnFriendStatusUpdated");

	Params::AthenaLobbyPlayerPanel_C_OnFriendStatusUpdated Parms{};

	Parms.FriendRequestStatus = FriendRequestStatus;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLobbyPlayerPanel_C::OnHasBattlePassUpdated(bool bHasBattlePass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "OnHasBattlePassUpdated");

	Params::AthenaLobbyPlayerPanel_C_OnHasBattlePassUpdated Parms{};

	Parms.bHasBattlePass = bHasBattlePass;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLobbyPlayerPanel_C::OnIsMutedUpdated(bool bIsMuted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "OnIsMutedUpdated");

	Params::AthenaLobbyPlayerPanel_C_OnIsMutedUpdated Parms{};

	Parms.bIsMuted = bIsMuted;

	UObject::ProcessEvent(Func, &Parms);
}

struct FEventReply UAthenaLobbyPlayerPanel_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "OnMouseButtonDown_0");

	Params::AthenaLobbyPlayerPanel_C_OnMouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
