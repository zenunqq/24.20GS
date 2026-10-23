#pragma once

#include "Basic.hpp"

#include "Lobby_structs.hpp"
#include "OnlineSubsystemUtils_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class ALobbyBeaconClient : public AOnlineBeaconClient
{
public:
	class ALobbyBeaconState*                      LobbyState;
	class ALobbyBeaconPlayerState*                PlayerState;
	uint8                                         Pad_328[0x1];
	ELobbyBeaconJoinState                         LobbyJoinServerState;
	uint8                                         Pad_32A[0x76];

public:
	void ClientAckJoiningServer();
	void ClientJoinGame();
	void ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
	void ClientPlayerJoined(const class FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId);
	void ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId);
	void ClientSetInviteFlags(const struct FJoinabilitySettings& Settings);
	void ClientWasKicked(const class FText& KickReason);
	void ServerCheat(const class FString& Msg);
	void ServerDisconnectFromLobby();
	void ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const class FText& Reason);
	void ServerLoginPlayer(const class FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const class FString& UrlString);
	void ServerNotifyJoiningServer();
	void ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LobbyBeaconClient">();
	}
	static class ALobbyBeaconClient* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALobbyBeaconClient>();
	}
};
static_assert(alignof(ALobbyBeaconClient) == 0x000008, "Wrong alignment on ALobbyBeaconClient");
static_assert(sizeof(ALobbyBeaconClient) == 0x0003A0, "Wrong size on ALobbyBeaconClient");
static_assert(offsetof(ALobbyBeaconClient, LobbyState) == 0x000318, "Member 'ALobbyBeaconClient::LobbyState' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconClient, PlayerState) == 0x000320, "Member 'ALobbyBeaconClient::PlayerState' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconClient, LobbyJoinServerState) == 0x000329, "Member 'ALobbyBeaconClient::LobbyJoinServerState' has a wrong offset!");

class ALobbyBeaconHost : public AOnlineBeaconHostObject
{
public:
	uint8                                         Pad_2B0[0x8];
	TSoftClassPtr<class UClass>                   LobbyStateClass;
	class ALobbyBeaconState*                      LobbyState;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LobbyBeaconHost">();
	}
	static class ALobbyBeaconHost* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALobbyBeaconHost>();
	}
};
static_assert(alignof(ALobbyBeaconHost) == 0x000008, "Wrong alignment on ALobbyBeaconHost");
static_assert(sizeof(ALobbyBeaconHost) == 0x0002E8, "Wrong size on ALobbyBeaconHost");
static_assert(offsetof(ALobbyBeaconHost, LobbyStateClass) == 0x0002B8, "Member 'ALobbyBeaconHost::LobbyStateClass' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconHost, LobbyState) == 0x0002E0, "Member 'ALobbyBeaconHost::LobbyState' has a wrong offset!");

class ALobbyBeaconPlayerState : public AInfo
{
public:
	class FText                                   DisplayName;
	struct FUniqueNetIdRepl                       UniqueId;
	struct FUniqueNetIdRepl                       PartyOwnerUniqueId;
	bool                                          bInLobby;
	uint8                                         Pad_301[0x7];
	class AOnlineBeaconClient*                    ClientActor;
	uint8                                         Pad_310[0x48];

public:
	void OnRep_InLobby();
	void OnRep_PartyOwner();
	void OnRep_UniqueId();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LobbyBeaconPlayerState">();
	}
	static class ALobbyBeaconPlayerState* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALobbyBeaconPlayerState>();
	}
};
static_assert(alignof(ALobbyBeaconPlayerState) == 0x000008, "Wrong alignment on ALobbyBeaconPlayerState");
static_assert(sizeof(ALobbyBeaconPlayerState) == 0x000358, "Wrong size on ALobbyBeaconPlayerState");
static_assert(offsetof(ALobbyBeaconPlayerState, DisplayName) == 0x000288, "Member 'ALobbyBeaconPlayerState::DisplayName' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconPlayerState, UniqueId) == 0x0002A0, "Member 'ALobbyBeaconPlayerState::UniqueId' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconPlayerState, PartyOwnerUniqueId) == 0x0002D0, "Member 'ALobbyBeaconPlayerState::PartyOwnerUniqueId' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconPlayerState, bInLobby) == 0x000300, "Member 'ALobbyBeaconPlayerState::bInLobby' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconPlayerState, ClientActor) == 0x000308, "Member 'ALobbyBeaconPlayerState::ClientActor' has a wrong offset!");

class ALobbyBeaconState : public AInfo
{
public:
	int32                                         MaxPlayers;
	uint8                                         Pad_28C[0x4];
	TSubclassOf<class ALobbyBeaconPlayerState>    LobbyBeaconPlayerStateClass;
	uint8                                         Pad_298[0x8];
	bool                                          bLobbyStarted;
	uint8                                         Pad_2A1[0x3];
	float                                         WaitForPlayersTimeRemaining;
	struct FLobbyPlayerStateInfoArray             Players;
	uint8                                         Pad_3C8[0x68];

public:
	void OnRep_LobbyStarted();
	void OnRep_WaitForPlayersTimeRemaining();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LobbyBeaconState">();
	}
	static class ALobbyBeaconState* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALobbyBeaconState>();
	}
};
static_assert(alignof(ALobbyBeaconState) == 0x000008, "Wrong alignment on ALobbyBeaconState");
static_assert(sizeof(ALobbyBeaconState) == 0x000430, "Wrong size on ALobbyBeaconState");
static_assert(offsetof(ALobbyBeaconState, MaxPlayers) == 0x000288, "Member 'ALobbyBeaconState::MaxPlayers' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconState, LobbyBeaconPlayerStateClass) == 0x000290, "Member 'ALobbyBeaconState::LobbyBeaconPlayerStateClass' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconState, bLobbyStarted) == 0x0002A0, "Member 'ALobbyBeaconState::bLobbyStarted' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconState, WaitForPlayersTimeRemaining) == 0x0002A4, "Member 'ALobbyBeaconState::WaitForPlayersTimeRemaining' has a wrong offset!");
static_assert(offsetof(ALobbyBeaconState, Players) == 0x0002A8, "Member 'ALobbyBeaconState::Players' has a wrong offset!");

}
