#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AthenaChallengeRewardsMultiMarker_C_ExecuteUbergraph_AthenaChallengeRewardsMultiMarker final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	bool                                          K2Node_Event_bIsActive;
};
static_assert(alignof(AthenaChallengeRewardsMultiMarker_C_ExecuteUbergraph_AthenaChallengeRewardsMultiMarker) == 0x000008, "Wrong alignment on AthenaChallengeRewardsMultiMarker_C_ExecuteUbergraph_AthenaChallengeRewardsMultiMarker");
static_assert(sizeof(AthenaChallengeRewardsMultiMarker_C_ExecuteUbergraph_AthenaChallengeRewardsMultiMarker) == 0x000020, "Wrong size on AthenaChallengeRewardsMultiMarker_C_ExecuteUbergraph_AthenaChallengeRewardsMultiMarker");
static_assert(offsetof(AthenaChallengeRewardsMultiMarker_C_ExecuteUbergraph_AthenaChallengeRewardsMultiMarker, EntryPoint) == 0x000000, "Member 'AthenaChallengeRewardsMultiMarker_C_ExecuteUbergraph_AthenaChallengeRewardsMultiMarker::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaChallengeRewardsMultiMarker_C_ExecuteUbergraph_AthenaChallengeRewardsMultiMarker, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'AthenaChallengeRewardsMultiMarker_C_ExecuteUbergraph_AthenaChallengeRewardsMultiMarker::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeRewardsMultiMarker_C_ExecuteUbergraph_AthenaChallengeRewardsMultiMarker, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'AthenaChallengeRewardsMultiMarker_C_ExecuteUbergraph_AthenaChallengeRewardsMultiMarker::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeRewardsMultiMarker_C_ExecuteUbergraph_AthenaChallengeRewardsMultiMarker, K2Node_Event_bIsActive) == 0x000018, "Member 'AthenaChallengeRewardsMultiMarker_C_ExecuteUbergraph_AthenaChallengeRewardsMultiMarker::K2Node_Event_bIsActive' has a wrong offset!");

struct AthenaChallengeRewardsMultiMarker_C_BP_OnSetMarkerActive final
{
public:
	bool                                          bIsActive;
};
static_assert(alignof(AthenaChallengeRewardsMultiMarker_C_BP_OnSetMarkerActive) == 0x000001, "Wrong alignment on AthenaChallengeRewardsMultiMarker_C_BP_OnSetMarkerActive");
static_assert(sizeof(AthenaChallengeRewardsMultiMarker_C_BP_OnSetMarkerActive) == 0x000001, "Wrong size on AthenaChallengeRewardsMultiMarker_C_BP_OnSetMarkerActive");
static_assert(offsetof(AthenaChallengeRewardsMultiMarker_C_BP_OnSetMarkerActive, bIsActive) == 0x000000, "Member 'AthenaChallengeRewardsMultiMarker_C_BP_OnSetMarkerActive::bIsActive' has a wrong offset!");

}
