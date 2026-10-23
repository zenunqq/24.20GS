#pragma once

#include "Basic.hpp"

#include "VotingFramework_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "MeshNetwork_classes.hpp"

namespace SDK
{

class UVoteBroadcasterComponent final : public UMeshNetworkComponent
{
public:
	TArray<struct FVoteSessionSettings>           VoteSessionSettingsList;
	struct FVoteSessionRuntimeArray               VoteSessionRuntimeList;
	struct FVoteRuntimeArray                      VoteRuntimeList;
	struct FVoteSelectionResultsArray             VoteResultsList;
	TMap<struct FUniqueNetIdRepl, struct FCastedVote> PlayerCastedVotesMap;

public:
	void OnVoteCasted(const struct FUniqueNetIdRepl& UserNetId, const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, const struct FGameplayTag& VoteSelectionId);
	void ServerSubmitVotesAggregated(class FName VoteSessionId, class FName VoteId, class FName VoteSelectionId, int32 VoteDelta);
	void VoteEnd(class FName VoteSessionId, class FName VoteId, class FName WinningVoteSelectionId);
	void VoteSessionComplete(class FName VoteSessionId);
	void VoteSessionSetup(class FName VoteSessionId, class FName StartingVoteId, EVoteSessionNetworkType NetworkType);
	void VoteSessionShutdown(class FName VoteSessionId);
	void VoteSetup(class FName VoteSessionId, class FName VoteId);
	void VoteStart(class FName VoteSessionId, class FName VoteId);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VoteBroadcasterComponent">();
	}
	static class UVoteBroadcasterComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoteBroadcasterComponent>();
	}
};
static_assert(alignof(UVoteBroadcasterComponent) == 0x000008, "Wrong alignment on UVoteBroadcasterComponent");
static_assert(sizeof(UVoteBroadcasterComponent) == 0x000510, "Wrong size on UVoteBroadcasterComponent");
static_assert(offsetof(UVoteBroadcasterComponent, VoteSessionSettingsList) == 0x000150, "Member 'UVoteBroadcasterComponent::VoteSessionSettingsList' has a wrong offset!");
static_assert(offsetof(UVoteBroadcasterComponent, VoteSessionRuntimeList) == 0x000160, "Member 'UVoteBroadcasterComponent::VoteSessionRuntimeList' has a wrong offset!");
static_assert(offsetof(UVoteBroadcasterComponent, VoteRuntimeList) == 0x000280, "Member 'UVoteBroadcasterComponent::VoteRuntimeList' has a wrong offset!");
static_assert(offsetof(UVoteBroadcasterComponent, VoteResultsList) == 0x0003A0, "Member 'UVoteBroadcasterComponent::VoteResultsList' has a wrong offset!");
static_assert(offsetof(UVoteBroadcasterComponent, PlayerCastedVotesMap) == 0x0004C0, "Member 'UVoteBroadcasterComponent::PlayerCastedVotesMap' has a wrong offset!");

class UVoteDispatchSubsystem final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_30[0x90];
	TArray<struct FVoteSelectionResults>          VotingResults;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VoteDispatchSubsystem">();
	}
	static class UVoteDispatchSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoteDispatchSubsystem>();
	}
};
static_assert(alignof(UVoteDispatchSubsystem) == 0x000008, "Wrong alignment on UVoteDispatchSubsystem");
static_assert(sizeof(UVoteDispatchSubsystem) == 0x0000D0, "Wrong size on UVoteDispatchSubsystem");
static_assert(offsetof(UVoteDispatchSubsystem, VotingResults) == 0x0000C0, "Member 'UVoteDispatchSubsystem::VotingResults' has a wrong offset!");

class AVoteInitiationActor final : public AInfo
{
public:
	uint8                                         Pad_288[0x8];
	class UVoteBroadcasterComponent*              VoteBroadcasterComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VoteInitiationActor">();
	}
	static class AVoteInitiationActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVoteInitiationActor>();
	}
};
static_assert(alignof(AVoteInitiationActor) == 0x000008, "Wrong alignment on AVoteInitiationActor");
static_assert(sizeof(AVoteInitiationActor) == 0x000298, "Wrong size on AVoteInitiationActor");
static_assert(offsetof(AVoteInitiationActor, VoteBroadcasterComponent) == 0x000290, "Member 'AVoteInitiationActor::VoteBroadcasterComponent' has a wrong offset!");

class UVoteListenerComponent : public UActorComponent
{
public:
	TMulticastInlineDelegate<void(struct FGameplayTag& VoteSessionId, struct FGameplayTag& StartingVoteId, EVoteSessionNetworkType NetworkType, EVoteSessionState SessionState)> OnVoteSessionSetupEvent;
	TMulticastInlineDelegate<void(struct FGameplayTag& VoteSessionId, struct FGameplayTag& StartingVoteId, EVoteSessionState SessionState)> OnVoteSessionVotingEvent;
	TMulticastInlineDelegate<void(struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, EVoteState VoteState)> OnVoteSetupEvent;
	TMulticastInlineDelegate<void(struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, EVoteState VoteState)> OnVoteStartEvent;
	TMulticastInlineDelegate<void(struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, struct FGameplayTag& VoteSelectionId, int32 ServerVoteTotal, int32 AllServersVoteTotal)> OnVoteChangeEvent;
	TMulticastInlineDelegate<void(struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, struct FGameplayTag& WinningVoteSelectionId, EVoteState VoteState)> OnVoteEndEvent;
	TMulticastInlineDelegate<void(struct FGameplayTag& VoteSessionId)> OnVoteSessionCompleteEvent;
	TMulticastInlineDelegate<void(struct FGameplayTag& VoteSessionId)> OnVoteSessionShutdownEvent;
	struct FGameplayTagContainer                  RequestedVoteSessionIds;
	struct FGameplayTagContainer                  RequestedVoteIds;
	struct FGameplayTagContainer                  RequestedVoteSelectionIds;

public:
	void OnVoteChange(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, const struct FGameplayTag& VoteSelectionId, int32 ServerVoteTotal, int32 AllServersVoteTotal);
	void OnVoteEnd(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, const struct FGameplayTag& WinningVoteSelectionId, EVoteState VoteState);
	void OnVoteSessionComplete(const struct FGameplayTag& VoteSessionId);
	void OnVoteSessionSetup(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& StartingVoteId, EVoteSessionNetworkType NetworkType, EVoteSessionState SessionState);
	void OnVoteSessionShutdown(const struct FGameplayTag& VoteSessionId);
	void OnVoteSessionVoting(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& StartingVoteId, EVoteSessionState SessionState);
	void OnVoteSetup(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, EVoteState VoteState);
	void OnVoteStart(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, EVoteState VoteState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VoteListenerComponent">();
	}
	static class UVoteListenerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoteListenerComponent>();
	}
};
static_assert(alignof(UVoteListenerComponent) == 0x000008, "Wrong alignment on UVoteListenerComponent");
static_assert(sizeof(UVoteListenerComponent) == 0x000180, "Wrong size on UVoteListenerComponent");
static_assert(offsetof(UVoteListenerComponent, OnVoteSessionSetupEvent) == 0x0000A0, "Member 'UVoteListenerComponent::OnVoteSessionSetupEvent' has a wrong offset!");
static_assert(offsetof(UVoteListenerComponent, OnVoteSessionVotingEvent) == 0x0000B0, "Member 'UVoteListenerComponent::OnVoteSessionVotingEvent' has a wrong offset!");
static_assert(offsetof(UVoteListenerComponent, OnVoteSetupEvent) == 0x0000C0, "Member 'UVoteListenerComponent::OnVoteSetupEvent' has a wrong offset!");
static_assert(offsetof(UVoteListenerComponent, OnVoteStartEvent) == 0x0000D0, "Member 'UVoteListenerComponent::OnVoteStartEvent' has a wrong offset!");
static_assert(offsetof(UVoteListenerComponent, OnVoteChangeEvent) == 0x0000E0, "Member 'UVoteListenerComponent::OnVoteChangeEvent' has a wrong offset!");
static_assert(offsetof(UVoteListenerComponent, OnVoteEndEvent) == 0x0000F0, "Member 'UVoteListenerComponent::OnVoteEndEvent' has a wrong offset!");
static_assert(offsetof(UVoteListenerComponent, OnVoteSessionCompleteEvent) == 0x000100, "Member 'UVoteListenerComponent::OnVoteSessionCompleteEvent' has a wrong offset!");
static_assert(offsetof(UVoteListenerComponent, OnVoteSessionShutdownEvent) == 0x000110, "Member 'UVoteListenerComponent::OnVoteSessionShutdownEvent' has a wrong offset!");
static_assert(offsetof(UVoteListenerComponent, RequestedVoteSessionIds) == 0x000120, "Member 'UVoteListenerComponent::RequestedVoteSessionIds' has a wrong offset!");
static_assert(offsetof(UVoteListenerComponent, RequestedVoteIds) == 0x000140, "Member 'UVoteListenerComponent::RequestedVoteIds' has a wrong offset!");
static_assert(offsetof(UVoteListenerComponent, RequestedVoteSelectionIds) == 0x000160, "Member 'UVoteListenerComponent::RequestedVoteSelectionIds' has a wrong offset!");

class UVoteResponderComponent final : public UVoteListenerComponent
{
public:
	TArray<struct FVoteSelection>                 SupportedVoteSelections;
	bool                                          bShouldLockVotingAfterCasted;
	uint8                                         Pad_191[0x7];
	TMap<struct FUniqueNetIdRepl, struct FCastedVote> PlayerCastedVotesMap;
	class FName                                   ActiveVoteSessionId;
	class FName                                   ActiveVoteId;

public:
	void CastDefaultVoteSelection(const class APlayerState* InPlayerState);
	void CastManualVoteSelection(const class APlayerState* InPlayerState, const struct FGameplayTag& VoteSelection);
	void CastManualVoteSelectionAtIndex(const class APlayerState* InPlayerState, const int32 SelectionIndex);
	void ServerCastVoteSelection(const struct FUniqueNetIdRepl& InUserId, const struct FCastedVote& CastedVote);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VoteResponderComponent">();
	}
	static class UVoteResponderComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoteResponderComponent>();
	}
};
static_assert(alignof(UVoteResponderComponent) == 0x000008, "Wrong alignment on UVoteResponderComponent");
static_assert(sizeof(UVoteResponderComponent) == 0x0001F0, "Wrong size on UVoteResponderComponent");
static_assert(offsetof(UVoteResponderComponent, SupportedVoteSelections) == 0x000180, "Member 'UVoteResponderComponent::SupportedVoteSelections' has a wrong offset!");
static_assert(offsetof(UVoteResponderComponent, bShouldLockVotingAfterCasted) == 0x000190, "Member 'UVoteResponderComponent::bShouldLockVotingAfterCasted' has a wrong offset!");
static_assert(offsetof(UVoteResponderComponent, PlayerCastedVotesMap) == 0x000198, "Member 'UVoteResponderComponent::PlayerCastedVotesMap' has a wrong offset!");
static_assert(offsetof(UVoteResponderComponent, ActiveVoteSessionId) == 0x0001E8, "Member 'UVoteResponderComponent::ActiveVoteSessionId' has a wrong offset!");
static_assert(offsetof(UVoteResponderComponent, ActiveVoteId) == 0x0001EC, "Member 'UVoteResponderComponent::ActiveVoteId' has a wrong offset!");

}
