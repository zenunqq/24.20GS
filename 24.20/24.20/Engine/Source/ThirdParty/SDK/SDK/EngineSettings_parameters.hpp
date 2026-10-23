#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct GameMapsSettings_GetGameMapsSettings final
{
public:
	class UGameMapsSettings*                      ReturnValue;
};
static_assert(alignof(GameMapsSettings_GetGameMapsSettings) == 0x000008, "Wrong alignment on GameMapsSettings_GetGameMapsSettings");
static_assert(sizeof(GameMapsSettings_GetGameMapsSettings) == 0x000008, "Wrong size on GameMapsSettings_GetGameMapsSettings");
static_assert(offsetof(GameMapsSettings_GetGameMapsSettings, ReturnValue) == 0x000000, "Member 'GameMapsSettings_GetGameMapsSettings::ReturnValue' has a wrong offset!");

struct GameMapsSettings_SetSkipAssigningGamepadToPlayer1 final
{
public:
	bool                                          bSkipFirstPlayer;
};
static_assert(alignof(GameMapsSettings_SetSkipAssigningGamepadToPlayer1) == 0x000001, "Wrong alignment on GameMapsSettings_SetSkipAssigningGamepadToPlayer1");
static_assert(sizeof(GameMapsSettings_SetSkipAssigningGamepadToPlayer1) == 0x000001, "Wrong size on GameMapsSettings_SetSkipAssigningGamepadToPlayer1");
static_assert(offsetof(GameMapsSettings_SetSkipAssigningGamepadToPlayer1, bSkipFirstPlayer) == 0x000000, "Member 'GameMapsSettings_SetSkipAssigningGamepadToPlayer1::bSkipFirstPlayer' has a wrong offset!");

struct GameMapsSettings_GetSkipAssigningGamepadToPlayer1 final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(GameMapsSettings_GetSkipAssigningGamepadToPlayer1) == 0x000001, "Wrong alignment on GameMapsSettings_GetSkipAssigningGamepadToPlayer1");
static_assert(sizeof(GameMapsSettings_GetSkipAssigningGamepadToPlayer1) == 0x000001, "Wrong size on GameMapsSettings_GetSkipAssigningGamepadToPlayer1");
static_assert(offsetof(GameMapsSettings_GetSkipAssigningGamepadToPlayer1, ReturnValue) == 0x000000, "Member 'GameMapsSettings_GetSkipAssigningGamepadToPlayer1::ReturnValue' has a wrong offset!");

}
