#pragma once

#include "Basic.hpp"

#include "Lobby_classes.hpp"
#include "Lobby_parameters.hpp"

namespace SDK
{

void ALobbyBeaconClient::ClientAckJoiningServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyBeaconClient", "ClientAckJoiningServer");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ALobbyBeaconClient::ClientJoinGame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyBeaconClient", "ClientJoinGame");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ALobbyBeaconClient::ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyBeaconClient", "ClientLoginComplete");

	Params::LobbyBeaconClient_ClientLoginComplete Parms{};

	Parms.InUniqueId = std::move(InUniqueId);
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALobbyBeaconClient::ClientPlayerJoined(const class FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyBeaconClient", "ClientPlayerJoined");

	Params::LobbyBeaconClient_ClientPlayerJoined Parms{};

	Parms.NewPlayerName = std::move(NewPlayerName);
	Parms.InUniqueId = std::move(InUniqueId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALobbyBeaconClient::ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyBeaconClient", "ClientPlayerLeft");

	Params::LobbyBeaconClient_ClientPlayerLeft Parms{};

	Parms.InUniqueId = std::move(InUniqueId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALobbyBeaconClient::ClientSetInviteFlags(const struct FJoinabilitySettings& Settings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyBeaconClient", "ClientSetInviteFlags");

	Params::LobbyBeaconClient_ClientSetInviteFlags Parms{};

	Parms.Settings = std::move(Settings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALobbyBeaconClient::ClientWasKicked(const class FText& KickReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyBeaconClient", "ClientWasKicked");

	Params::LobbyBeaconClient_ClientWasKicked Parms{};

	Parms.KickReason = std::move(KickReason);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALobbyBeaconClient::ServerCheat(const class FString& Msg)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyBeaconClient", "ServerCheat");

	Params::LobbyBeaconClient_ServerCheat Parms{};

	Parms.Msg = std::move(Msg);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALobbyBeaconClient::ServerDisconnectFromLobby()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyBeaconClient", "ServerDisconnectFromLobby");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ALobbyBeaconClient::ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const class FText& Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyBeaconClient", "ServerKickPlayer");

	Params::LobbyBeaconClient_ServerKickPlayer Parms{};

	Parms.PlayerToKick = std::move(PlayerToKick);
	Parms.Reason = std::move(Reason);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALobbyBeaconClient::ServerLoginPlayer(const class FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const class FString& UrlString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyBeaconClient", "ServerLoginPlayer");

	Params::LobbyBeaconClient_ServerLoginPlayer Parms{};

	Parms.InSessionId = std::move(InSessionId);
	Parms.InUniqueId = std::move(InUniqueId);
	Parms.UrlString = std::move(UrlString);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALobbyBeaconClient::ServerNotifyJoiningServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyBeaconClient", "ServerNotifyJoiningServer");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ALobbyBeaconClient::ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyBeaconClient", "ServerSetPartyOwner");

	Params::LobbyBeaconClient_ServerSetPartyOwner Parms{};

	Parms.InUniqueId = std::move(InUniqueId);
	Parms.InPartyOwnerId = std::move(InPartyOwnerId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALobbyBeaconPlayerState::OnRep_InLobby()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyBeaconPlayerState", "OnRep_InLobby");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ALobbyBeaconPlayerState::OnRep_PartyOwner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyBeaconPlayerState", "OnRep_PartyOwner");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ALobbyBeaconPlayerState::OnRep_UniqueId()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyBeaconPlayerState", "OnRep_UniqueId");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ALobbyBeaconState::OnRep_LobbyStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyBeaconState", "OnRep_LobbyStarted");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ALobbyBeaconState::OnRep_WaitForPlayersTimeRemaining()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyBeaconState", "OnRep_WaitForPlayersTimeRemaining");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
