#pragma once

#include "Basic.hpp"

#include "VotingFramework_classes.hpp"
#include "VotingFramework_parameters.hpp"

namespace SDK
{

void UVoteBroadcasterComponent::OnVoteCasted(const struct FUniqueNetIdRepl& UserNetId, const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, const struct FGameplayTag& VoteSelectionId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteBroadcasterComponent", "OnVoteCasted");

	Params::VoteBroadcasterComponent_OnVoteCasted Parms{};

	Parms.UserNetId = std::move(UserNetId);
	Parms.VoteSessionId = std::move(VoteSessionId);
	Parms.VoteId = std::move(VoteId);
	Parms.VoteSelectionId = std::move(VoteSelectionId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVoteBroadcasterComponent::ServerSubmitVotesAggregated(class FName VoteSessionId, class FName VoteId, class FName VoteSelectionId, int32 VoteDelta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteBroadcasterComponent", "ServerSubmitVotesAggregated");

	Params::VoteBroadcasterComponent_ServerSubmitVotesAggregated Parms{};

	Parms.VoteSessionId = VoteSessionId;
	Parms.VoteId = VoteId;
	Parms.VoteSelectionId = VoteSelectionId;
	Parms.VoteDelta = VoteDelta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVoteBroadcasterComponent::VoteEnd(class FName VoteSessionId, class FName VoteId, class FName WinningVoteSelectionId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteBroadcasterComponent", "VoteEnd");

	Params::VoteBroadcasterComponent_VoteEnd Parms{};

	Parms.VoteSessionId = VoteSessionId;
	Parms.VoteId = VoteId;
	Parms.WinningVoteSelectionId = WinningVoteSelectionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVoteBroadcasterComponent::VoteSessionComplete(class FName VoteSessionId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteBroadcasterComponent", "VoteSessionComplete");

	Params::VoteBroadcasterComponent_VoteSessionComplete Parms{};

	Parms.VoteSessionId = VoteSessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVoteBroadcasterComponent::VoteSessionSetup(class FName VoteSessionId, class FName StartingVoteId, EVoteSessionNetworkType NetworkType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteBroadcasterComponent", "VoteSessionSetup");

	Params::VoteBroadcasterComponent_VoteSessionSetup Parms{};

	Parms.VoteSessionId = VoteSessionId;
	Parms.StartingVoteId = StartingVoteId;
	Parms.NetworkType = NetworkType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVoteBroadcasterComponent::VoteSessionShutdown(class FName VoteSessionId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteBroadcasterComponent", "VoteSessionShutdown");

	Params::VoteBroadcasterComponent_VoteSessionShutdown Parms{};

	Parms.VoteSessionId = VoteSessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVoteBroadcasterComponent::VoteSetup(class FName VoteSessionId, class FName VoteId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteBroadcasterComponent", "VoteSetup");

	Params::VoteBroadcasterComponent_VoteSetup Parms{};

	Parms.VoteSessionId = VoteSessionId;
	Parms.VoteId = VoteId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVoteBroadcasterComponent::VoteStart(class FName VoteSessionId, class FName VoteId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteBroadcasterComponent", "VoteStart");

	Params::VoteBroadcasterComponent_VoteStart Parms{};

	Parms.VoteSessionId = VoteSessionId;
	Parms.VoteId = VoteId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVoteListenerComponent::OnVoteChange(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, const struct FGameplayTag& VoteSelectionId, int32 ServerVoteTotal, int32 AllServersVoteTotal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteListenerComponent", "OnVoteChange");

	Params::VoteListenerComponent_OnVoteChange Parms{};

	Parms.VoteSessionId = std::move(VoteSessionId);
	Parms.VoteId = std::move(VoteId);
	Parms.VoteSelectionId = std::move(VoteSelectionId);
	Parms.ServerVoteTotal = ServerVoteTotal;
	Parms.AllServersVoteTotal = AllServersVoteTotal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVoteListenerComponent::OnVoteEnd(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, const struct FGameplayTag& WinningVoteSelectionId, EVoteState VoteState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteListenerComponent", "OnVoteEnd");

	Params::VoteListenerComponent_OnVoteEnd Parms{};

	Parms.VoteSessionId = std::move(VoteSessionId);
	Parms.VoteId = std::move(VoteId);
	Parms.WinningVoteSelectionId = std::move(WinningVoteSelectionId);
	Parms.VoteState = VoteState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVoteListenerComponent::OnVoteSessionComplete(const struct FGameplayTag& VoteSessionId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteListenerComponent", "OnVoteSessionComplete");

	Params::VoteListenerComponent_OnVoteSessionComplete Parms{};

	Parms.VoteSessionId = std::move(VoteSessionId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVoteListenerComponent::OnVoteSessionSetup(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& StartingVoteId, EVoteSessionNetworkType NetworkType, EVoteSessionState SessionState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteListenerComponent", "OnVoteSessionSetup");

	Params::VoteListenerComponent_OnVoteSessionSetup Parms{};

	Parms.VoteSessionId = std::move(VoteSessionId);
	Parms.StartingVoteId = std::move(StartingVoteId);
	Parms.NetworkType = NetworkType;
	Parms.SessionState = SessionState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVoteListenerComponent::OnVoteSessionShutdown(const struct FGameplayTag& VoteSessionId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteListenerComponent", "OnVoteSessionShutdown");

	Params::VoteListenerComponent_OnVoteSessionShutdown Parms{};

	Parms.VoteSessionId = std::move(VoteSessionId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVoteListenerComponent::OnVoteSessionVoting(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& StartingVoteId, EVoteSessionState SessionState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteListenerComponent", "OnVoteSessionVoting");

	Params::VoteListenerComponent_OnVoteSessionVoting Parms{};

	Parms.VoteSessionId = std::move(VoteSessionId);
	Parms.StartingVoteId = std::move(StartingVoteId);
	Parms.SessionState = SessionState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVoteListenerComponent::OnVoteSetup(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, EVoteState VoteState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteListenerComponent", "OnVoteSetup");

	Params::VoteListenerComponent_OnVoteSetup Parms{};

	Parms.VoteSessionId = std::move(VoteSessionId);
	Parms.VoteId = std::move(VoteId);
	Parms.VoteState = VoteState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVoteListenerComponent::OnVoteStart(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, EVoteState VoteState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteListenerComponent", "OnVoteStart");

	Params::VoteListenerComponent_OnVoteStart Parms{};

	Parms.VoteSessionId = std::move(VoteSessionId);
	Parms.VoteId = std::move(VoteId);
	Parms.VoteState = VoteState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVoteResponderComponent::CastDefaultVoteSelection(const class APlayerState* InPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteResponderComponent", "CastDefaultVoteSelection");

	Params::VoteResponderComponent_CastDefaultVoteSelection Parms{};

	Parms.InPlayerState = InPlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVoteResponderComponent::CastManualVoteSelection(const class APlayerState* InPlayerState, const struct FGameplayTag& VoteSelection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteResponderComponent", "CastManualVoteSelection");

	Params::VoteResponderComponent_CastManualVoteSelection Parms{};

	Parms.InPlayerState = InPlayerState;
	Parms.VoteSelection = std::move(VoteSelection);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVoteResponderComponent::CastManualVoteSelectionAtIndex(const class APlayerState* InPlayerState, const int32 SelectionIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteResponderComponent", "CastManualVoteSelectionAtIndex");

	Params::VoteResponderComponent_CastManualVoteSelectionAtIndex Parms{};

	Parms.InPlayerState = InPlayerState;
	Parms.SelectionIndex = SelectionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVoteResponderComponent::ServerCastVoteSelection(const struct FUniqueNetIdRepl& InUserId, const struct FCastedVote& CastedVote)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoteResponderComponent", "ServerCastVoteSelection");

	Params::VoteResponderComponent_ServerCastVoteSelection Parms{};

	Parms.InUserId = std::move(InUserId);
	Parms.CastedVote = std::move(CastedVote);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
