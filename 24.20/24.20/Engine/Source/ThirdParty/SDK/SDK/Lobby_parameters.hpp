#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreOnline_structs.hpp"

namespace SDK::Params
{

struct LobbyBeaconClient_ClientLoginComplete final
{
public:
	struct FUniqueNetIdRepl                       InUniqueId;
	bool                                          bWasSuccessful;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(LobbyBeaconClient_ClientLoginComplete) == 0x000008, "Wrong alignment on LobbyBeaconClient_ClientLoginComplete");
static_assert(sizeof(LobbyBeaconClient_ClientLoginComplete) == 0x000038, "Wrong size on LobbyBeaconClient_ClientLoginComplete");
static_assert(offsetof(LobbyBeaconClient_ClientLoginComplete, InUniqueId) == 0x000000, "Member 'LobbyBeaconClient_ClientLoginComplete::InUniqueId' has a wrong offset!");
static_assert(offsetof(LobbyBeaconClient_ClientLoginComplete, bWasSuccessful) == 0x000030, "Member 'LobbyBeaconClient_ClientLoginComplete::bWasSuccessful' has a wrong offset!");

struct LobbyBeaconClient_ClientPlayerJoined final
{
public:
	class FText                                   NewPlayerName;
	struct FUniqueNetIdRepl                       InUniqueId;
};
static_assert(alignof(LobbyBeaconClient_ClientPlayerJoined) == 0x000008, "Wrong alignment on LobbyBeaconClient_ClientPlayerJoined");
static_assert(sizeof(LobbyBeaconClient_ClientPlayerJoined) == 0x000048, "Wrong size on LobbyBeaconClient_ClientPlayerJoined");
static_assert(offsetof(LobbyBeaconClient_ClientPlayerJoined, NewPlayerName) == 0x000000, "Member 'LobbyBeaconClient_ClientPlayerJoined::NewPlayerName' has a wrong offset!");
static_assert(offsetof(LobbyBeaconClient_ClientPlayerJoined, InUniqueId) == 0x000018, "Member 'LobbyBeaconClient_ClientPlayerJoined::InUniqueId' has a wrong offset!");

struct LobbyBeaconClient_ClientPlayerLeft final
{
public:
	struct FUniqueNetIdRepl                       InUniqueId;
};
static_assert(alignof(LobbyBeaconClient_ClientPlayerLeft) == 0x000008, "Wrong alignment on LobbyBeaconClient_ClientPlayerLeft");
static_assert(sizeof(LobbyBeaconClient_ClientPlayerLeft) == 0x000030, "Wrong size on LobbyBeaconClient_ClientPlayerLeft");
static_assert(offsetof(LobbyBeaconClient_ClientPlayerLeft, InUniqueId) == 0x000000, "Member 'LobbyBeaconClient_ClientPlayerLeft::InUniqueId' has a wrong offset!");

struct LobbyBeaconClient_ClientSetInviteFlags final
{
public:
	struct FJoinabilitySettings                   Settings;
};
static_assert(alignof(LobbyBeaconClient_ClientSetInviteFlags) == 0x000004, "Wrong alignment on LobbyBeaconClient_ClientSetInviteFlags");
static_assert(sizeof(LobbyBeaconClient_ClientSetInviteFlags) == 0x000010, "Wrong size on LobbyBeaconClient_ClientSetInviteFlags");
static_assert(offsetof(LobbyBeaconClient_ClientSetInviteFlags, Settings) == 0x000000, "Member 'LobbyBeaconClient_ClientSetInviteFlags::Settings' has a wrong offset!");

struct LobbyBeaconClient_ClientWasKicked final
{
public:
	class FText                                   KickReason;
};
static_assert(alignof(LobbyBeaconClient_ClientWasKicked) == 0x000008, "Wrong alignment on LobbyBeaconClient_ClientWasKicked");
static_assert(sizeof(LobbyBeaconClient_ClientWasKicked) == 0x000018, "Wrong size on LobbyBeaconClient_ClientWasKicked");
static_assert(offsetof(LobbyBeaconClient_ClientWasKicked, KickReason) == 0x000000, "Member 'LobbyBeaconClient_ClientWasKicked::KickReason' has a wrong offset!");

struct LobbyBeaconClient_ServerCheat final
{
public:
	class FString                                 Msg;
};
static_assert(alignof(LobbyBeaconClient_ServerCheat) == 0x000008, "Wrong alignment on LobbyBeaconClient_ServerCheat");
static_assert(sizeof(LobbyBeaconClient_ServerCheat) == 0x000010, "Wrong size on LobbyBeaconClient_ServerCheat");
static_assert(offsetof(LobbyBeaconClient_ServerCheat, Msg) == 0x000000, "Member 'LobbyBeaconClient_ServerCheat::Msg' has a wrong offset!");

struct LobbyBeaconClient_ServerKickPlayer final
{
public:
	struct FUniqueNetIdRepl                       PlayerToKick;
	class FText                                   Reason;
};
static_assert(alignof(LobbyBeaconClient_ServerKickPlayer) == 0x000008, "Wrong alignment on LobbyBeaconClient_ServerKickPlayer");
static_assert(sizeof(LobbyBeaconClient_ServerKickPlayer) == 0x000048, "Wrong size on LobbyBeaconClient_ServerKickPlayer");
static_assert(offsetof(LobbyBeaconClient_ServerKickPlayer, PlayerToKick) == 0x000000, "Member 'LobbyBeaconClient_ServerKickPlayer::PlayerToKick' has a wrong offset!");
static_assert(offsetof(LobbyBeaconClient_ServerKickPlayer, Reason) == 0x000030, "Member 'LobbyBeaconClient_ServerKickPlayer::Reason' has a wrong offset!");

struct LobbyBeaconClient_ServerLoginPlayer final
{
public:
	class FString                                 InSessionId;
	struct FUniqueNetIdRepl                       InUniqueId;
	class FString                                 UrlString;
};
static_assert(alignof(LobbyBeaconClient_ServerLoginPlayer) == 0x000008, "Wrong alignment on LobbyBeaconClient_ServerLoginPlayer");
static_assert(sizeof(LobbyBeaconClient_ServerLoginPlayer) == 0x000050, "Wrong size on LobbyBeaconClient_ServerLoginPlayer");
static_assert(offsetof(LobbyBeaconClient_ServerLoginPlayer, InSessionId) == 0x000000, "Member 'LobbyBeaconClient_ServerLoginPlayer::InSessionId' has a wrong offset!");
static_assert(offsetof(LobbyBeaconClient_ServerLoginPlayer, InUniqueId) == 0x000010, "Member 'LobbyBeaconClient_ServerLoginPlayer::InUniqueId' has a wrong offset!");
static_assert(offsetof(LobbyBeaconClient_ServerLoginPlayer, UrlString) == 0x000040, "Member 'LobbyBeaconClient_ServerLoginPlayer::UrlString' has a wrong offset!");

struct LobbyBeaconClient_ServerSetPartyOwner final
{
public:
	struct FUniqueNetIdRepl                       InUniqueId;
	struct FUniqueNetIdRepl                       InPartyOwnerId;
};
static_assert(alignof(LobbyBeaconClient_ServerSetPartyOwner) == 0x000008, "Wrong alignment on LobbyBeaconClient_ServerSetPartyOwner");
static_assert(sizeof(LobbyBeaconClient_ServerSetPartyOwner) == 0x000060, "Wrong size on LobbyBeaconClient_ServerSetPartyOwner");
static_assert(offsetof(LobbyBeaconClient_ServerSetPartyOwner, InUniqueId) == 0x000000, "Member 'LobbyBeaconClient_ServerSetPartyOwner::InUniqueId' has a wrong offset!");
static_assert(offsetof(LobbyBeaconClient_ServerSetPartyOwner, InPartyOwnerId) == 0x000030, "Member 'LobbyBeaconClient_ServerSetPartyOwner::InPartyOwnerId' has a wrong offset!");

}
