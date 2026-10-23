#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct CinematicSequenceDeviceBase_HandleSequencePlayerCreated final
{
public:
	class ULevelSequencePlayer*                   Player;
};
static_assert(alignof(CinematicSequenceDeviceBase_HandleSequencePlayerCreated) == 0x000008, "Wrong alignment on CinematicSequenceDeviceBase_HandleSequencePlayerCreated");
static_assert(sizeof(CinematicSequenceDeviceBase_HandleSequencePlayerCreated) == 0x000008, "Wrong size on CinematicSequenceDeviceBase_HandleSequencePlayerCreated");
static_assert(offsetof(CinematicSequenceDeviceBase_HandleSequencePlayerCreated, Player) == 0x000000, "Member 'CinematicSequenceDeviceBase_HandleSequencePlayerCreated::Player' has a wrong offset!");

struct CinematicSequenceDeviceBase_GetSequencePlayer final
{
public:
	class UMovieSceneSequencePlayer*              ReturnValue;
};
static_assert(alignof(CinematicSequenceDeviceBase_GetSequencePlayer) == 0x000008, "Wrong alignment on CinematicSequenceDeviceBase_GetSequencePlayer");
static_assert(sizeof(CinematicSequenceDeviceBase_GetSequencePlayer) == 0x000008, "Wrong size on CinematicSequenceDeviceBase_GetSequencePlayer");
static_assert(offsetof(CinematicSequenceDeviceBase_GetSequencePlayer, ReturnValue) == 0x000000, "Member 'CinematicSequenceDeviceBase_GetSequencePlayer::ReturnValue' has a wrong offset!");

}
