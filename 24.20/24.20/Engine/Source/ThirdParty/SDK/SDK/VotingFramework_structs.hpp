#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "NetCore_structs.hpp"

namespace SDK
{

enum class EVoteState : uint8
{
	None                                     = 0,
	Setup                                    = 1,
	Active                                   = 2,
	Completed                                = 3,
	EVoteState_MAX                           = 4,
};

enum class EVoteSessionState : uint8
{
	None                                     = 0,
	Setup                                    = 1,
	Voting                                   = 2,
	Complete                                 = 3,
	Shutdown                                 = 4,
	EVoteSessionState_MAX                    = 5,
};

enum class EVoteSessionNetworkType : uint8
{
	NotDetermined                            = 0,
	DedicatedServer                          = 1,
	MeshNetwork                              = 2,
	EVoteSessionNetworkType_MAX              = 3,
};

struct FCastedVote final
{
public:
	class FName                                   VoteSessionId;
	class FName                                   VoteId;
	class FName                                   VoteSelectionId;
};
static_assert(alignof(FCastedVote) == 0x000004, "Wrong alignment on FCastedVote");
static_assert(sizeof(FCastedVote) == 0x00000C, "Wrong size on FCastedVote");
static_assert(offsetof(FCastedVote, VoteSessionId) == 0x000000, "Member 'FCastedVote::VoteSessionId' has a wrong offset!");
static_assert(offsetof(FCastedVote, VoteId) == 0x000004, "Member 'FCastedVote::VoteId' has a wrong offset!");
static_assert(offsetof(FCastedVote, VoteSelectionId) == 0x000008, "Member 'FCastedVote::VoteSelectionId' has a wrong offset!");

struct FVoteSelection final
{
public:
	struct FGameplayTag                           VoteSessionId;
	struct FGameplayTag                           VoteId;
	struct FGameplayTag                           VoteSelectionId;
};
static_assert(alignof(FVoteSelection) == 0x000004, "Wrong alignment on FVoteSelection");
static_assert(sizeof(FVoteSelection) == 0x00000C, "Wrong size on FVoteSelection");
static_assert(offsetof(FVoteSelection, VoteSessionId) == 0x000000, "Member 'FVoteSelection::VoteSessionId' has a wrong offset!");
static_assert(offsetof(FVoteSelection, VoteId) == 0x000004, "Member 'FVoteSelection::VoteId' has a wrong offset!");
static_assert(offsetof(FVoteSelection, VoteSelectionId) == 0x000008, "Member 'FVoteSelection::VoteSelectionId' has a wrong offset!");

struct FVoteSelectionSettings final
{
public:
	struct FGameplayTag                           VoteSelectionId;
	uint8                                         Pad_4[0x4];
	class FText                                   VoteSelectionText;
};
static_assert(alignof(FVoteSelectionSettings) == 0x000008, "Wrong alignment on FVoteSelectionSettings");
static_assert(sizeof(FVoteSelectionSettings) == 0x000020, "Wrong size on FVoteSelectionSettings");
static_assert(offsetof(FVoteSelectionSettings, VoteSelectionId) == 0x000000, "Member 'FVoteSelectionSettings::VoteSelectionId' has a wrong offset!");
static_assert(offsetof(FVoteSelectionSettings, VoteSelectionText) == 0x000008, "Member 'FVoteSelectionSettings::VoteSelectionText' has a wrong offset!");

struct FVoteSettings final
{
public:
	struct FGameplayTag                           VoteId;
	bool                                          bLocksSelection;
	uint8                                         Pad_5[0x3];
	class FText                                   VoteText;
	TArray<struct FVoteSelectionSettings>         VoteSelections;
};
static_assert(alignof(FVoteSettings) == 0x000008, "Wrong alignment on FVoteSettings");
static_assert(sizeof(FVoteSettings) == 0x000030, "Wrong size on FVoteSettings");
static_assert(offsetof(FVoteSettings, VoteId) == 0x000000, "Member 'FVoteSettings::VoteId' has a wrong offset!");
static_assert(offsetof(FVoteSettings, bLocksSelection) == 0x000004, "Member 'FVoteSettings::bLocksSelection' has a wrong offset!");
static_assert(offsetof(FVoteSettings, VoteText) == 0x000008, "Member 'FVoteSettings::VoteText' has a wrong offset!");
static_assert(offsetof(FVoteSettings, VoteSelections) == 0x000020, "Member 'FVoteSettings::VoteSelections' has a wrong offset!");

struct FVoteSessionSettings final
{
public:
	struct FGameplayTag                           VoteSessionId;
	uint8                                         Pad_4[0x4];
	class FText                                   VoteSessionText;
	TArray<struct FVoteSettings>                  VoteSettingsList;
	EVoteSessionNetworkType                       NetworkType;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(FVoteSessionSettings) == 0x000008, "Wrong alignment on FVoteSessionSettings");
static_assert(sizeof(FVoteSessionSettings) == 0x000038, "Wrong size on FVoteSessionSettings");
static_assert(offsetof(FVoteSessionSettings, VoteSessionId) == 0x000000, "Member 'FVoteSessionSettings::VoteSessionId' has a wrong offset!");
static_assert(offsetof(FVoteSessionSettings, VoteSessionText) == 0x000008, "Member 'FVoteSessionSettings::VoteSessionText' has a wrong offset!");
static_assert(offsetof(FVoteSessionSettings, VoteSettingsList) == 0x000020, "Member 'FVoteSessionSettings::VoteSettingsList' has a wrong offset!");
static_assert(offsetof(FVoteSessionSettings, NetworkType) == 0x000030, "Member 'FVoteSessionSettings::NetworkType' has a wrong offset!");

struct FVoteSelectionResults final : public FFastArraySerializerItem
{
public:
	uint8                                         Pad_C[0x4];
	class UWorld*                                 WorldRef;
	class FName                                   VoteSessionId;
	class FName                                   VoteId;
	class FName                                   VoteSelectionId;
	int32                                         ServerVoteTotal;
	int32                                         AllServersVoteTotal;
	int32                                         Shadow_ServerVoteTotal;
	int32                                         Shadow_AllServersVoteTotal;
	uint8                                         Pad_34[0x4];
};
static_assert(alignof(FVoteSelectionResults) == 0x000008, "Wrong alignment on FVoteSelectionResults");
static_assert(sizeof(FVoteSelectionResults) == 0x000038, "Wrong size on FVoteSelectionResults");
static_assert(offsetof(FVoteSelectionResults, WorldRef) == 0x000010, "Member 'FVoteSelectionResults::WorldRef' has a wrong offset!");
static_assert(offsetof(FVoteSelectionResults, VoteSessionId) == 0x000018, "Member 'FVoteSelectionResults::VoteSessionId' has a wrong offset!");
static_assert(offsetof(FVoteSelectionResults, VoteId) == 0x00001C, "Member 'FVoteSelectionResults::VoteId' has a wrong offset!");
static_assert(offsetof(FVoteSelectionResults, VoteSelectionId) == 0x000020, "Member 'FVoteSelectionResults::VoteSelectionId' has a wrong offset!");
static_assert(offsetof(FVoteSelectionResults, ServerVoteTotal) == 0x000024, "Member 'FVoteSelectionResults::ServerVoteTotal' has a wrong offset!");
static_assert(offsetof(FVoteSelectionResults, AllServersVoteTotal) == 0x000028, "Member 'FVoteSelectionResults::AllServersVoteTotal' has a wrong offset!");
static_assert(offsetof(FVoteSelectionResults, Shadow_ServerVoteTotal) == 0x00002C, "Member 'FVoteSelectionResults::Shadow_ServerVoteTotal' has a wrong offset!");
static_assert(offsetof(FVoteSelectionResults, Shadow_AllServersVoteTotal) == 0x000030, "Member 'FVoteSelectionResults::Shadow_AllServersVoteTotal' has a wrong offset!");

struct FVoteSelectionResultsArray final : public FFastArraySerializer
{
public:
	class UWorld*                                 WorldRef;
	TArray<struct FVoteSelectionResults>          VoteSelectionResults;
};
static_assert(alignof(FVoteSelectionResultsArray) == 0x000008, "Wrong alignment on FVoteSelectionResultsArray");
static_assert(sizeof(FVoteSelectionResultsArray) == 0x000120, "Wrong size on FVoteSelectionResultsArray");
static_assert(offsetof(FVoteSelectionResultsArray, WorldRef) == 0x000108, "Member 'FVoteSelectionResultsArray::WorldRef' has a wrong offset!");
static_assert(offsetof(FVoteSelectionResultsArray, VoteSelectionResults) == 0x000110, "Member 'FVoteSelectionResultsArray::VoteSelectionResults' has a wrong offset!");

struct FVoteRuntime final : public FFastArraySerializerItem
{
public:
	uint8                                         Pad_C[0x4];
	class UWorld*                                 WorldRef;
	class FName                                   VoteSessionId;
	class FName                                   VoteId;
	TArray<class FName>                           VoteSelectionIds;
	EVoteState                                    VoteState;
	uint8                                         Pad_31[0x3];
	class FName                                   VoteSelectionWinningResult;
	class FName                                   Shadow_VoteSelectionWinningResult;
	EVoteState                                    Shadow_VoteState;
	uint8                                         Pad_3D[0x3];
};
static_assert(alignof(FVoteRuntime) == 0x000008, "Wrong alignment on FVoteRuntime");
static_assert(sizeof(FVoteRuntime) == 0x000040, "Wrong size on FVoteRuntime");
static_assert(offsetof(FVoteRuntime, WorldRef) == 0x000010, "Member 'FVoteRuntime::WorldRef' has a wrong offset!");
static_assert(offsetof(FVoteRuntime, VoteSessionId) == 0x000018, "Member 'FVoteRuntime::VoteSessionId' has a wrong offset!");
static_assert(offsetof(FVoteRuntime, VoteId) == 0x00001C, "Member 'FVoteRuntime::VoteId' has a wrong offset!");
static_assert(offsetof(FVoteRuntime, VoteSelectionIds) == 0x000020, "Member 'FVoteRuntime::VoteSelectionIds' has a wrong offset!");
static_assert(offsetof(FVoteRuntime, VoteState) == 0x000030, "Member 'FVoteRuntime::VoteState' has a wrong offset!");
static_assert(offsetof(FVoteRuntime, VoteSelectionWinningResult) == 0x000034, "Member 'FVoteRuntime::VoteSelectionWinningResult' has a wrong offset!");
static_assert(offsetof(FVoteRuntime, Shadow_VoteSelectionWinningResult) == 0x000038, "Member 'FVoteRuntime::Shadow_VoteSelectionWinningResult' has a wrong offset!");
static_assert(offsetof(FVoteRuntime, Shadow_VoteState) == 0x00003C, "Member 'FVoteRuntime::Shadow_VoteState' has a wrong offset!");

struct FVoteRuntimeArray final : public FFastArraySerializer
{
public:
	class UWorld*                                 WorldRef;
	TArray<struct FVoteRuntime>                   VotingResults;
};
static_assert(alignof(FVoteRuntimeArray) == 0x000008, "Wrong alignment on FVoteRuntimeArray");
static_assert(sizeof(FVoteRuntimeArray) == 0x000120, "Wrong size on FVoteRuntimeArray");
static_assert(offsetof(FVoteRuntimeArray, WorldRef) == 0x000108, "Member 'FVoteRuntimeArray::WorldRef' has a wrong offset!");
static_assert(offsetof(FVoteRuntimeArray, VotingResults) == 0x000110, "Member 'FVoteRuntimeArray::VotingResults' has a wrong offset!");

struct FVoteSessionRuntime final : public FFastArraySerializerItem
{
public:
	class FName                                   VoteSessionId;
	EVoteSessionNetworkType                       NetworkType;
	EVoteSessionState                             VoteSessionState;
	uint8                                         Pad_12[0x2];
	class FName                                   CurrentVoteId;
	class UWorld*                                 WorldRef;
	EVoteSessionState                             Shadow_VoteSessionState;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FVoteSessionRuntime) == 0x000008, "Wrong alignment on FVoteSessionRuntime");
static_assert(sizeof(FVoteSessionRuntime) == 0x000028, "Wrong size on FVoteSessionRuntime");
static_assert(offsetof(FVoteSessionRuntime, VoteSessionId) == 0x00000C, "Member 'FVoteSessionRuntime::VoteSessionId' has a wrong offset!");
static_assert(offsetof(FVoteSessionRuntime, NetworkType) == 0x000010, "Member 'FVoteSessionRuntime::NetworkType' has a wrong offset!");
static_assert(offsetof(FVoteSessionRuntime, VoteSessionState) == 0x000011, "Member 'FVoteSessionRuntime::VoteSessionState' has a wrong offset!");
static_assert(offsetof(FVoteSessionRuntime, CurrentVoteId) == 0x000014, "Member 'FVoteSessionRuntime::CurrentVoteId' has a wrong offset!");
static_assert(offsetof(FVoteSessionRuntime, WorldRef) == 0x000018, "Member 'FVoteSessionRuntime::WorldRef' has a wrong offset!");
static_assert(offsetof(FVoteSessionRuntime, Shadow_VoteSessionState) == 0x000020, "Member 'FVoteSessionRuntime::Shadow_VoteSessionState' has a wrong offset!");

struct FVoteSessionRuntimeArray final : public FFastArraySerializer
{
public:
	class UWorld*                                 WorldRef;
	TArray<struct FVoteSessionRuntime>            VotingSessions;
};
static_assert(alignof(FVoteSessionRuntimeArray) == 0x000008, "Wrong alignment on FVoteSessionRuntimeArray");
static_assert(sizeof(FVoteSessionRuntimeArray) == 0x000120, "Wrong size on FVoteSessionRuntimeArray");
static_assert(offsetof(FVoteSessionRuntimeArray, WorldRef) == 0x000108, "Member 'FVoteSessionRuntimeArray::WorldRef' has a wrong offset!");
static_assert(offsetof(FVoteSessionRuntimeArray, VotingSessions) == 0x000110, "Member 'FVoteSessionRuntimeArray::VotingSessions' has a wrong offset!");

}
