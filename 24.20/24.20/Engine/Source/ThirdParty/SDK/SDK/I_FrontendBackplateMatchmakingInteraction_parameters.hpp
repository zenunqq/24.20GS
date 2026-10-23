#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct I_FrontendBackplateMatchmakingInteraction_C_MatchmakingEnded final
{
public:
	bool                                          bWasSuccess;
};
static_assert(alignof(I_FrontendBackplateMatchmakingInteraction_C_MatchmakingEnded) == 0x000001, "Wrong alignment on I_FrontendBackplateMatchmakingInteraction_C_MatchmakingEnded");
static_assert(sizeof(I_FrontendBackplateMatchmakingInteraction_C_MatchmakingEnded) == 0x000001, "Wrong size on I_FrontendBackplateMatchmakingInteraction_C_MatchmakingEnded");
static_assert(offsetof(I_FrontendBackplateMatchmakingInteraction_C_MatchmakingEnded, bWasSuccess) == 0x000000, "Member 'I_FrontendBackplateMatchmakingInteraction_C_MatchmakingEnded::bWasSuccess' has a wrong offset!");

struct I_FrontendBackplateMatchmakingInteraction_C_HasMatcmakingInteraction final
{
public:
	bool                                          HasInteraction;
};
static_assert(alignof(I_FrontendBackplateMatchmakingInteraction_C_HasMatcmakingInteraction) == 0x000001, "Wrong alignment on I_FrontendBackplateMatchmakingInteraction_C_HasMatcmakingInteraction");
static_assert(sizeof(I_FrontendBackplateMatchmakingInteraction_C_HasMatcmakingInteraction) == 0x000001, "Wrong size on I_FrontendBackplateMatchmakingInteraction_C_HasMatcmakingInteraction");
static_assert(offsetof(I_FrontendBackplateMatchmakingInteraction_C_HasMatcmakingInteraction, HasInteraction) == 0x000000, "Member 'I_FrontendBackplateMatchmakingInteraction_C_HasMatcmakingInteraction::HasInteraction' has a wrong offset!");

}
