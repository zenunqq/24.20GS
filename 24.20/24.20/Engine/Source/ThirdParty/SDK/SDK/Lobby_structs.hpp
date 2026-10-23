#pragma once

#include "Basic.hpp"

#include "NetCore_structs.hpp"

namespace SDK
{

enum class ELobbyBeaconJoinState : uint8
{
	None                                     = 0,
	SentJoinRequest                          = 1,
	JoinRequestAcknowledged                  = 2,
	ELobbyBeaconJoinState_MAX                = 3,
};

struct FLobbyPlayerStateActorInfo final : public FFastArraySerializerItem
{
public:
	uint8                                         Pad_C[0x4];
	class ALobbyBeaconPlayerState*                LobbyPlayerState;
};
static_assert(alignof(FLobbyPlayerStateActorInfo) == 0x000008, "Wrong alignment on FLobbyPlayerStateActorInfo");
static_assert(sizeof(FLobbyPlayerStateActorInfo) == 0x000018, "Wrong size on FLobbyPlayerStateActorInfo");
static_assert(offsetof(FLobbyPlayerStateActorInfo, LobbyPlayerState) == 0x000010, "Member 'FLobbyPlayerStateActorInfo::LobbyPlayerState' has a wrong offset!");

struct FLobbyPlayerStateInfoArray final : public FFastArraySerializer
{
public:
	TArray<struct FLobbyPlayerStateActorInfo>     Players;
	class ALobbyBeaconState*                      ParentState;
};
static_assert(alignof(FLobbyPlayerStateInfoArray) == 0x000008, "Wrong alignment on FLobbyPlayerStateInfoArray");
static_assert(sizeof(FLobbyPlayerStateInfoArray) == 0x000120, "Wrong size on FLobbyPlayerStateInfoArray");
static_assert(offsetof(FLobbyPlayerStateInfoArray, Players) == 0x000108, "Member 'FLobbyPlayerStateInfoArray::Players' has a wrong offset!");
static_assert(offsetof(FLobbyPlayerStateInfoArray, ParentState) == 0x000118, "Member 'FLobbyPlayerStateInfoArray::ParentState' has a wrong offset!");

}
