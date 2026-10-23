#pragma once

#include "Basic.hpp"

#include "VotingFramework_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct VoteBroadcasterComponent_OnVoteCasted final
{
public:
	struct FUniqueNetIdRepl                       UserNetId;
	struct FGameplayTag                           VoteSessionId;
	struct FGameplayTag                           VoteId;
	struct FGameplayTag                           VoteSelectionId;
	uint8                                         Pad_3C[0x4];
};
static_assert(alignof(VoteBroadcasterComponent_OnVoteCasted) == 0x000008, "Wrong alignment on VoteBroadcasterComponent_OnVoteCasted");
static_assert(sizeof(VoteBroadcasterComponent_OnVoteCasted) == 0x000040, "Wrong size on VoteBroadcasterComponent_OnVoteCasted");
static_assert(offsetof(VoteBroadcasterComponent_OnVoteCasted, UserNetId) == 0x000000, "Member 'VoteBroadcasterComponent_OnVoteCasted::UserNetId' has a wrong offset!");
static_assert(offsetof(VoteBroadcasterComponent_OnVoteCasted, VoteSessionId) == 0x000030, "Member 'VoteBroadcasterComponent_OnVoteCasted::VoteSessionId' has a wrong offset!");
static_assert(offsetof(VoteBroadcasterComponent_OnVoteCasted, VoteId) == 0x000034, "Member 'VoteBroadcasterComponent_OnVoteCasted::VoteId' has a wrong offset!");
static_assert(offsetof(VoteBroadcasterComponent_OnVoteCasted, VoteSelectionId) == 0x000038, "Member 'VoteBroadcasterComponent_OnVoteCasted::VoteSelectionId' has a wrong offset!");

struct VoteBroadcasterComponent_ServerSubmitVotesAggregated final
{
public:
	class FName                                   VoteSessionId;
	class FName                                   VoteId;
	class FName                                   VoteSelectionId;
	int32                                         VoteDelta;
};
static_assert(alignof(VoteBroadcasterComponent_ServerSubmitVotesAggregated) == 0x000004, "Wrong alignment on VoteBroadcasterComponent_ServerSubmitVotesAggregated");
static_assert(sizeof(VoteBroadcasterComponent_ServerSubmitVotesAggregated) == 0x000010, "Wrong size on VoteBroadcasterComponent_ServerSubmitVotesAggregated");
static_assert(offsetof(VoteBroadcasterComponent_ServerSubmitVotesAggregated, VoteSessionId) == 0x000000, "Member 'VoteBroadcasterComponent_ServerSubmitVotesAggregated::VoteSessionId' has a wrong offset!");
static_assert(offsetof(VoteBroadcasterComponent_ServerSubmitVotesAggregated, VoteId) == 0x000004, "Member 'VoteBroadcasterComponent_ServerSubmitVotesAggregated::VoteId' has a wrong offset!");
static_assert(offsetof(VoteBroadcasterComponent_ServerSubmitVotesAggregated, VoteSelectionId) == 0x000008, "Member 'VoteBroadcasterComponent_ServerSubmitVotesAggregated::VoteSelectionId' has a wrong offset!");
static_assert(offsetof(VoteBroadcasterComponent_ServerSubmitVotesAggregated, VoteDelta) == 0x00000C, "Member 'VoteBroadcasterComponent_ServerSubmitVotesAggregated::VoteDelta' has a wrong offset!");

struct VoteBroadcasterComponent_VoteEnd final
{
public:
	class FName                                   VoteSessionId;
	class FName                                   VoteId;
	class FName                                   WinningVoteSelectionId;
};
static_assert(alignof(VoteBroadcasterComponent_VoteEnd) == 0x000004, "Wrong alignment on VoteBroadcasterComponent_VoteEnd");
static_assert(sizeof(VoteBroadcasterComponent_VoteEnd) == 0x00000C, "Wrong size on VoteBroadcasterComponent_VoteEnd");
static_assert(offsetof(VoteBroadcasterComponent_VoteEnd, VoteSessionId) == 0x000000, "Member 'VoteBroadcasterComponent_VoteEnd::VoteSessionId' has a wrong offset!");
static_assert(offsetof(VoteBroadcasterComponent_VoteEnd, VoteId) == 0x000004, "Member 'VoteBroadcasterComponent_VoteEnd::VoteId' has a wrong offset!");
static_assert(offsetof(VoteBroadcasterComponent_VoteEnd, WinningVoteSelectionId) == 0x000008, "Member 'VoteBroadcasterComponent_VoteEnd::WinningVoteSelectionId' has a wrong offset!");

struct VoteBroadcasterComponent_VoteSessionComplete final
{
public:
	class FName                                   VoteSessionId;
};
static_assert(alignof(VoteBroadcasterComponent_VoteSessionComplete) == 0x000004, "Wrong alignment on VoteBroadcasterComponent_VoteSessionComplete");
static_assert(sizeof(VoteBroadcasterComponent_VoteSessionComplete) == 0x000004, "Wrong size on VoteBroadcasterComponent_VoteSessionComplete");
static_assert(offsetof(VoteBroadcasterComponent_VoteSessionComplete, VoteSessionId) == 0x000000, "Member 'VoteBroadcasterComponent_VoteSessionComplete::VoteSessionId' has a wrong offset!");

struct VoteBroadcasterComponent_VoteSessionSetup final
{
public:
	class FName                                   VoteSessionId;
	class FName                                   StartingVoteId;
	EVoteSessionNetworkType                       NetworkType;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(VoteBroadcasterComponent_VoteSessionSetup) == 0x000004, "Wrong alignment on VoteBroadcasterComponent_VoteSessionSetup");
static_assert(sizeof(VoteBroadcasterComponent_VoteSessionSetup) == 0x00000C, "Wrong size on VoteBroadcasterComponent_VoteSessionSetup");
static_assert(offsetof(VoteBroadcasterComponent_VoteSessionSetup, VoteSessionId) == 0x000000, "Member 'VoteBroadcasterComponent_VoteSessionSetup::VoteSessionId' has a wrong offset!");
static_assert(offsetof(VoteBroadcasterComponent_VoteSessionSetup, StartingVoteId) == 0x000004, "Member 'VoteBroadcasterComponent_VoteSessionSetup::StartingVoteId' has a wrong offset!");
static_assert(offsetof(VoteBroadcasterComponent_VoteSessionSetup, NetworkType) == 0x000008, "Member 'VoteBroadcasterComponent_VoteSessionSetup::NetworkType' has a wrong offset!");

struct VoteBroadcasterComponent_VoteSessionShutdown final
{
public:
	class FName                                   VoteSessionId;
};
static_assert(alignof(VoteBroadcasterComponent_VoteSessionShutdown) == 0x000004, "Wrong alignment on VoteBroadcasterComponent_VoteSessionShutdown");
static_assert(sizeof(VoteBroadcasterComponent_VoteSessionShutdown) == 0x000004, "Wrong size on VoteBroadcasterComponent_VoteSessionShutdown");
static_assert(offsetof(VoteBroadcasterComponent_VoteSessionShutdown, VoteSessionId) == 0x000000, "Member 'VoteBroadcasterComponent_VoteSessionShutdown::VoteSessionId' has a wrong offset!");

struct VoteBroadcasterComponent_VoteSetup final
{
public:
	class FName                                   VoteSessionId;
	class FName                                   VoteId;
};
static_assert(alignof(VoteBroadcasterComponent_VoteSetup) == 0x000004, "Wrong alignment on VoteBroadcasterComponent_VoteSetup");
static_assert(sizeof(VoteBroadcasterComponent_VoteSetup) == 0x000008, "Wrong size on VoteBroadcasterComponent_VoteSetup");
static_assert(offsetof(VoteBroadcasterComponent_VoteSetup, VoteSessionId) == 0x000000, "Member 'VoteBroadcasterComponent_VoteSetup::VoteSessionId' has a wrong offset!");
static_assert(offsetof(VoteBroadcasterComponent_VoteSetup, VoteId) == 0x000004, "Member 'VoteBroadcasterComponent_VoteSetup::VoteId' has a wrong offset!");

struct VoteBroadcasterComponent_VoteStart final
{
public:
	class FName                                   VoteSessionId;
	class FName                                   VoteId;
};
static_assert(alignof(VoteBroadcasterComponent_VoteStart) == 0x000004, "Wrong alignment on VoteBroadcasterComponent_VoteStart");
static_assert(sizeof(VoteBroadcasterComponent_VoteStart) == 0x000008, "Wrong size on VoteBroadcasterComponent_VoteStart");
static_assert(offsetof(VoteBroadcasterComponent_VoteStart, VoteSessionId) == 0x000000, "Member 'VoteBroadcasterComponent_VoteStart::VoteSessionId' has a wrong offset!");
static_assert(offsetof(VoteBroadcasterComponent_VoteStart, VoteId) == 0x000004, "Member 'VoteBroadcasterComponent_VoteStart::VoteId' has a wrong offset!");

struct VoteListenerComponent_OnVoteChange final
{
public:
	struct FGameplayTag                           VoteSessionId;
	struct FGameplayTag                           VoteId;
	struct FGameplayTag                           VoteSelectionId;
	int32                                         ServerVoteTotal;
	int32                                         AllServersVoteTotal;
};
static_assert(alignof(VoteListenerComponent_OnVoteChange) == 0x000004, "Wrong alignment on VoteListenerComponent_OnVoteChange");
static_assert(sizeof(VoteListenerComponent_OnVoteChange) == 0x000014, "Wrong size on VoteListenerComponent_OnVoteChange");
static_assert(offsetof(VoteListenerComponent_OnVoteChange, VoteSessionId) == 0x000000, "Member 'VoteListenerComponent_OnVoteChange::VoteSessionId' has a wrong offset!");
static_assert(offsetof(VoteListenerComponent_OnVoteChange, VoteId) == 0x000004, "Member 'VoteListenerComponent_OnVoteChange::VoteId' has a wrong offset!");
static_assert(offsetof(VoteListenerComponent_OnVoteChange, VoteSelectionId) == 0x000008, "Member 'VoteListenerComponent_OnVoteChange::VoteSelectionId' has a wrong offset!");
static_assert(offsetof(VoteListenerComponent_OnVoteChange, ServerVoteTotal) == 0x00000C, "Member 'VoteListenerComponent_OnVoteChange::ServerVoteTotal' has a wrong offset!");
static_assert(offsetof(VoteListenerComponent_OnVoteChange, AllServersVoteTotal) == 0x000010, "Member 'VoteListenerComponent_OnVoteChange::AllServersVoteTotal' has a wrong offset!");

struct VoteListenerComponent_OnVoteEnd final
{
public:
	struct FGameplayTag                           VoteSessionId;
	struct FGameplayTag                           VoteId;
	struct FGameplayTag                           WinningVoteSelectionId;
	EVoteState                                    VoteState;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(VoteListenerComponent_OnVoteEnd) == 0x000004, "Wrong alignment on VoteListenerComponent_OnVoteEnd");
static_assert(sizeof(VoteListenerComponent_OnVoteEnd) == 0x000010, "Wrong size on VoteListenerComponent_OnVoteEnd");
static_assert(offsetof(VoteListenerComponent_OnVoteEnd, VoteSessionId) == 0x000000, "Member 'VoteListenerComponent_OnVoteEnd::VoteSessionId' has a wrong offset!");
static_assert(offsetof(VoteListenerComponent_OnVoteEnd, VoteId) == 0x000004, "Member 'VoteListenerComponent_OnVoteEnd::VoteId' has a wrong offset!");
static_assert(offsetof(VoteListenerComponent_OnVoteEnd, WinningVoteSelectionId) == 0x000008, "Member 'VoteListenerComponent_OnVoteEnd::WinningVoteSelectionId' has a wrong offset!");
static_assert(offsetof(VoteListenerComponent_OnVoteEnd, VoteState) == 0x00000C, "Member 'VoteListenerComponent_OnVoteEnd::VoteState' has a wrong offset!");

struct VoteListenerComponent_OnVoteSessionComplete final
{
public:
	struct FGameplayTag                           VoteSessionId;
};
static_assert(alignof(VoteListenerComponent_OnVoteSessionComplete) == 0x000004, "Wrong alignment on VoteListenerComponent_OnVoteSessionComplete");
static_assert(sizeof(VoteListenerComponent_OnVoteSessionComplete) == 0x000004, "Wrong size on VoteListenerComponent_OnVoteSessionComplete");
static_assert(offsetof(VoteListenerComponent_OnVoteSessionComplete, VoteSessionId) == 0x000000, "Member 'VoteListenerComponent_OnVoteSessionComplete::VoteSessionId' has a wrong offset!");

struct VoteListenerComponent_OnVoteSessionSetup final
{
public:
	struct FGameplayTag                           VoteSessionId;
	struct FGameplayTag                           StartingVoteId;
	EVoteSessionNetworkType                       NetworkType;
	EVoteSessionState                             SessionState;
	uint8                                         Pad_A[0x2];
};
static_assert(alignof(VoteListenerComponent_OnVoteSessionSetup) == 0x000004, "Wrong alignment on VoteListenerComponent_OnVoteSessionSetup");
static_assert(sizeof(VoteListenerComponent_OnVoteSessionSetup) == 0x00000C, "Wrong size on VoteListenerComponent_OnVoteSessionSetup");
static_assert(offsetof(VoteListenerComponent_OnVoteSessionSetup, VoteSessionId) == 0x000000, "Member 'VoteListenerComponent_OnVoteSessionSetup::VoteSessionId' has a wrong offset!");
static_assert(offsetof(VoteListenerComponent_OnVoteSessionSetup, StartingVoteId) == 0x000004, "Member 'VoteListenerComponent_OnVoteSessionSetup::StartingVoteId' has a wrong offset!");
static_assert(offsetof(VoteListenerComponent_OnVoteSessionSetup, NetworkType) == 0x000008, "Member 'VoteListenerComponent_OnVoteSessionSetup::NetworkType' has a wrong offset!");
static_assert(offsetof(VoteListenerComponent_OnVoteSessionSetup, SessionState) == 0x000009, "Member 'VoteListenerComponent_OnVoteSessionSetup::SessionState' has a wrong offset!");

struct VoteListenerComponent_OnVoteSessionShutdown final
{
public:
	struct FGameplayTag                           VoteSessionId;
};
static_assert(alignof(VoteListenerComponent_OnVoteSessionShutdown) == 0x000004, "Wrong alignment on VoteListenerComponent_OnVoteSessionShutdown");
static_assert(sizeof(VoteListenerComponent_OnVoteSessionShutdown) == 0x000004, "Wrong size on VoteListenerComponent_OnVoteSessionShutdown");
static_assert(offsetof(VoteListenerComponent_OnVoteSessionShutdown, VoteSessionId) == 0x000000, "Member 'VoteListenerComponent_OnVoteSessionShutdown::VoteSessionId' has a wrong offset!");

struct VoteListenerComponent_OnVoteSessionVoting final
{
public:
	struct FGameplayTag                           VoteSessionId;
	struct FGameplayTag                           StartingVoteId;
	EVoteSessionState                             SessionState;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(VoteListenerComponent_OnVoteSessionVoting) == 0x000004, "Wrong alignment on VoteListenerComponent_OnVoteSessionVoting");
static_assert(sizeof(VoteListenerComponent_OnVoteSessionVoting) == 0x00000C, "Wrong size on VoteListenerComponent_OnVoteSessionVoting");
static_assert(offsetof(VoteListenerComponent_OnVoteSessionVoting, VoteSessionId) == 0x000000, "Member 'VoteListenerComponent_OnVoteSessionVoting::VoteSessionId' has a wrong offset!");
static_assert(offsetof(VoteListenerComponent_OnVoteSessionVoting, StartingVoteId) == 0x000004, "Member 'VoteListenerComponent_OnVoteSessionVoting::StartingVoteId' has a wrong offset!");
static_assert(offsetof(VoteListenerComponent_OnVoteSessionVoting, SessionState) == 0x000008, "Member 'VoteListenerComponent_OnVoteSessionVoting::SessionState' has a wrong offset!");

struct VoteListenerComponent_OnVoteSetup final
{
public:
	struct FGameplayTag                           VoteSessionId;
	struct FGameplayTag                           VoteId;
	EVoteState                                    VoteState;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(VoteListenerComponent_OnVoteSetup) == 0x000004, "Wrong alignment on VoteListenerComponent_OnVoteSetup");
static_assert(sizeof(VoteListenerComponent_OnVoteSetup) == 0x00000C, "Wrong size on VoteListenerComponent_OnVoteSetup");
static_assert(offsetof(VoteListenerComponent_OnVoteSetup, VoteSessionId) == 0x000000, "Member 'VoteListenerComponent_OnVoteSetup::VoteSessionId' has a wrong offset!");
static_assert(offsetof(VoteListenerComponent_OnVoteSetup, VoteId) == 0x000004, "Member 'VoteListenerComponent_OnVoteSetup::VoteId' has a wrong offset!");
static_assert(offsetof(VoteListenerComponent_OnVoteSetup, VoteState) == 0x000008, "Member 'VoteListenerComponent_OnVoteSetup::VoteState' has a wrong offset!");

struct VoteListenerComponent_OnVoteStart final
{
public:
	struct FGameplayTag                           VoteSessionId;
	struct FGameplayTag                           VoteId;
	EVoteState                                    VoteState;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(VoteListenerComponent_OnVoteStart) == 0x000004, "Wrong alignment on VoteListenerComponent_OnVoteStart");
static_assert(sizeof(VoteListenerComponent_OnVoteStart) == 0x00000C, "Wrong size on VoteListenerComponent_OnVoteStart");
static_assert(offsetof(VoteListenerComponent_OnVoteStart, VoteSessionId) == 0x000000, "Member 'VoteListenerComponent_OnVoteStart::VoteSessionId' has a wrong offset!");
static_assert(offsetof(VoteListenerComponent_OnVoteStart, VoteId) == 0x000004, "Member 'VoteListenerComponent_OnVoteStart::VoteId' has a wrong offset!");
static_assert(offsetof(VoteListenerComponent_OnVoteStart, VoteState) == 0x000008, "Member 'VoteListenerComponent_OnVoteStart::VoteState' has a wrong offset!");

struct VoteResponderComponent_CastDefaultVoteSelection final
{
public:
	const class APlayerState*                     InPlayerState;
};
static_assert(alignof(VoteResponderComponent_CastDefaultVoteSelection) == 0x000008, "Wrong alignment on VoteResponderComponent_CastDefaultVoteSelection");
static_assert(sizeof(VoteResponderComponent_CastDefaultVoteSelection) == 0x000008, "Wrong size on VoteResponderComponent_CastDefaultVoteSelection");
static_assert(offsetof(VoteResponderComponent_CastDefaultVoteSelection, InPlayerState) == 0x000000, "Member 'VoteResponderComponent_CastDefaultVoteSelection::InPlayerState' has a wrong offset!");

struct VoteResponderComponent_CastManualVoteSelection final
{
public:
	const class APlayerState*                     InPlayerState;
	struct FGameplayTag                           VoteSelection;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(VoteResponderComponent_CastManualVoteSelection) == 0x000008, "Wrong alignment on VoteResponderComponent_CastManualVoteSelection");
static_assert(sizeof(VoteResponderComponent_CastManualVoteSelection) == 0x000010, "Wrong size on VoteResponderComponent_CastManualVoteSelection");
static_assert(offsetof(VoteResponderComponent_CastManualVoteSelection, InPlayerState) == 0x000000, "Member 'VoteResponderComponent_CastManualVoteSelection::InPlayerState' has a wrong offset!");
static_assert(offsetof(VoteResponderComponent_CastManualVoteSelection, VoteSelection) == 0x000008, "Member 'VoteResponderComponent_CastManualVoteSelection::VoteSelection' has a wrong offset!");

struct VoteResponderComponent_CastManualVoteSelectionAtIndex final
{
public:
	const class APlayerState*                     InPlayerState;
	int32                                         SelectionIndex;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(VoteResponderComponent_CastManualVoteSelectionAtIndex) == 0x000008, "Wrong alignment on VoteResponderComponent_CastManualVoteSelectionAtIndex");
static_assert(sizeof(VoteResponderComponent_CastManualVoteSelectionAtIndex) == 0x000010, "Wrong size on VoteResponderComponent_CastManualVoteSelectionAtIndex");
static_assert(offsetof(VoteResponderComponent_CastManualVoteSelectionAtIndex, InPlayerState) == 0x000000, "Member 'VoteResponderComponent_CastManualVoteSelectionAtIndex::InPlayerState' has a wrong offset!");
static_assert(offsetof(VoteResponderComponent_CastManualVoteSelectionAtIndex, SelectionIndex) == 0x000008, "Member 'VoteResponderComponent_CastManualVoteSelectionAtIndex::SelectionIndex' has a wrong offset!");

struct VoteResponderComponent_ServerCastVoteSelection final
{
public:
	struct FUniqueNetIdRepl                       InUserId;
	struct FCastedVote                            CastedVote;
	uint8                                         Pad_3C[0x4];
};
static_assert(alignof(VoteResponderComponent_ServerCastVoteSelection) == 0x000008, "Wrong alignment on VoteResponderComponent_ServerCastVoteSelection");
static_assert(sizeof(VoteResponderComponent_ServerCastVoteSelection) == 0x000040, "Wrong size on VoteResponderComponent_ServerCastVoteSelection");
static_assert(offsetof(VoteResponderComponent_ServerCastVoteSelection, InUserId) == 0x000000, "Member 'VoteResponderComponent_ServerCastVoteSelection::InUserId' has a wrong offset!");
static_assert(offsetof(VoteResponderComponent_ServerCastVoteSelection, CastedVote) == 0x000030, "Member 'VoteResponderComponent_ServerCastVoteSelection::CastedVote' has a wrong offset!");

}
