#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct TurnBasedMatchInterface_OnMatchEnded final
{
public:
	class FString                                 Match;
};
static_assert(alignof(TurnBasedMatchInterface_OnMatchEnded) == 0x000008, "Wrong alignment on TurnBasedMatchInterface_OnMatchEnded");
static_assert(sizeof(TurnBasedMatchInterface_OnMatchEnded) == 0x000010, "Wrong size on TurnBasedMatchInterface_OnMatchEnded");
static_assert(offsetof(TurnBasedMatchInterface_OnMatchEnded, Match) == 0x000000, "Member 'TurnBasedMatchInterface_OnMatchEnded::Match' has a wrong offset!");

struct TurnBasedMatchInterface_OnMatchReceivedTurn final
{
public:
	class FString                                 Match;
	bool                                          bDidBecomeActive;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(TurnBasedMatchInterface_OnMatchReceivedTurn) == 0x000008, "Wrong alignment on TurnBasedMatchInterface_OnMatchReceivedTurn");
static_assert(sizeof(TurnBasedMatchInterface_OnMatchReceivedTurn) == 0x000018, "Wrong size on TurnBasedMatchInterface_OnMatchReceivedTurn");
static_assert(offsetof(TurnBasedMatchInterface_OnMatchReceivedTurn, Match) == 0x000000, "Member 'TurnBasedMatchInterface_OnMatchReceivedTurn::Match' has a wrong offset!");
static_assert(offsetof(TurnBasedMatchInterface_OnMatchReceivedTurn, bDidBecomeActive) == 0x000010, "Member 'TurnBasedMatchInterface_OnMatchReceivedTurn::bDidBecomeActive' has a wrong offset!");

}
