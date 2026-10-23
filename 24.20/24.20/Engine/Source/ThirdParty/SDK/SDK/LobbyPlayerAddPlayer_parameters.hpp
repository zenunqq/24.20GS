#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct LobbyPlayerAddPlayer_C_ExecuteUbergraph_LobbyPlayerAddPlayer final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(LobbyPlayerAddPlayer_C_ExecuteUbergraph_LobbyPlayerAddPlayer) == 0x000008, "Wrong alignment on LobbyPlayerAddPlayer_C_ExecuteUbergraph_LobbyPlayerAddPlayer");
static_assert(sizeof(LobbyPlayerAddPlayer_C_ExecuteUbergraph_LobbyPlayerAddPlayer) == 0x000018, "Wrong size on LobbyPlayerAddPlayer_C_ExecuteUbergraph_LobbyPlayerAddPlayer");
static_assert(offsetof(LobbyPlayerAddPlayer_C_ExecuteUbergraph_LobbyPlayerAddPlayer, EntryPoint) == 0x000000, "Member 'LobbyPlayerAddPlayer_C_ExecuteUbergraph_LobbyPlayerAddPlayer::EntryPoint' has a wrong offset!");
static_assert(offsetof(LobbyPlayerAddPlayer_C_ExecuteUbergraph_LobbyPlayerAddPlayer, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'LobbyPlayerAddPlayer_C_ExecuteUbergraph_LobbyPlayerAddPlayer::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerAddPlayer_C_ExecuteUbergraph_LobbyPlayerAddPlayer, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'LobbyPlayerAddPlayer_C_ExecuteUbergraph_LobbyPlayerAddPlayer::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}
