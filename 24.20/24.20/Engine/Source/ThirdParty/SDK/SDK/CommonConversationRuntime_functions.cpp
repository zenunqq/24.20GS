#pragma once

#include "Basic.hpp"

#include "CommonConversationRuntime_classes.hpp"
#include "CommonConversationRuntime_parameters.hpp"

namespace SDK
{

struct FLinearColor UConversationNode::GetDebugParticipantColor(const struct FGameplayTag& ParticipantID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationNode", "GetDebugParticipantColor");

	Params::ConversationNode_GetDebugParticipantColor Parms{};

	Parms.ParticipantID = std::move(ParticipantID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UConversationChoiceNode::FillChoice(const struct FConversationContext& Context, struct FClientConversationOptionEntry* ChoiceEntry) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationChoiceNode", "FillChoice");

	Params::ConversationChoiceNode_FillChoice Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ChoiceEntry != nullptr)
		*ChoiceEntry = std::move(Parms.ChoiceEntry);
}

struct FConversationTaskResult UConversationContextHelpers::AbortConversation(const struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ConversationContextHelpers", "AbortConversation");

	Params::ConversationContextHelpers_AbortConversation Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FConversationTaskResult UConversationContextHelpers::AdvanceConversation(const struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ConversationContextHelpers", "AdvanceConversation");

	Params::ConversationContextHelpers_AdvanceConversation Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FConversationTaskResult UConversationContextHelpers::AdvanceConversationWithChoice(const struct FConversationContext& Context, const struct FAdvanceConversationRequest& Choice)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ConversationContextHelpers", "AdvanceConversationWithChoice");

	Params::ConversationContextHelpers_AdvanceConversationWithChoice Parms{};

	Parms.Context = std::move(Context);
	Parms.Choice = std::move(Choice);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UConversationContextHelpers::CanConversationContinue(const struct FConversationTaskResult& ConversationTasResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ConversationContextHelpers", "CanConversationContinue");

	Params::ConversationContextHelpers_CanConversationContinue Parms{};

	Parms.ConversationTasResult = std::move(ConversationTasResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UConversationParticipantComponent* UConversationContextHelpers::FindConversationComponent(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ConversationContextHelpers", "FindConversationComponent");

	Params::ConversationContextHelpers_FindConversationComponent Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UConversationInstance* UConversationContextHelpers::GetConversationInstance(const struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ConversationContextHelpers", "GetConversationInstance");

	Params::ConversationContextHelpers_GetConversationInstance Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UConversationParticipantComponent* UConversationContextHelpers::GetConversationParticipant(const struct FConversationContext& Context, const struct FGameplayTag& ParticipantTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ConversationContextHelpers", "GetConversationParticipant");

	Params::ConversationContextHelpers_GetConversationParticipant Parms{};

	Parms.Context = std::move(Context);
	Parms.ParticipantTag = std::move(ParticipantTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AActor* UConversationContextHelpers::GetConversationParticipantActor(const struct FConversationContext& Context, const struct FGameplayTag& ParticipantTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ConversationContextHelpers", "GetConversationParticipantActor");

	Params::ConversationContextHelpers_GetConversationParticipantActor Parms{};

	Parms.Context = std::move(Context);
	Parms.ParticipantTag = std::move(ParticipantTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FConversationNodeHandle UConversationContextHelpers::GetCurrentConversationNodeHandle(const struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ConversationContextHelpers", "GetCurrentConversationNodeHandle");

	Params::ConversationContextHelpers_GetCurrentConversationNodeHandle Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UConversationContextHelpers::MakeConversationParticipant(const struct FConversationContext& Context, class AActor* ParticipantActor, const struct FGameplayTag& ParticipantTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ConversationContextHelpers", "MakeConversationParticipant");

	Params::ConversationContextHelpers_MakeConversationParticipant Parms{};

	Parms.Context = std::move(Context);
	Parms.ParticipantActor = ParticipantActor;
	Parms.ParticipantTag = std::move(ParticipantTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FConversationTaskResult UConversationContextHelpers::PauseConversationAndSendClientChoices(const struct FConversationContext& Context, const struct FClientConversationMessage& message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ConversationContextHelpers", "PauseConversationAndSendClientChoices");

	Params::ConversationContextHelpers_PauseConversationAndSendClientChoices Parms{};

	Parms.Context = std::move(Context);
	Parms.message = std::move(message);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FConversationTaskResult UConversationContextHelpers::ReturnToConversationStart(const struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ConversationContextHelpers", "ReturnToConversationStart");

	Params::ConversationContextHelpers_ReturnToConversationStart Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FConversationTaskResult UConversationContextHelpers::ReturnToCurrentClientChoice(const struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ConversationContextHelpers", "ReturnToCurrentClientChoice");

	Params::ConversationContextHelpers_ReturnToCurrentClientChoice Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FConversationTaskResult UConversationContextHelpers::ReturnToLastClientChoice(const struct FConversationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ConversationContextHelpers", "ReturnToLastClientChoice");

	Params::ConversationContextHelpers_ReturnToLastClientChoice Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UConversationInstance* UConversationLibrary::StartConversation(const struct FGameplayTag& ConversationEntryTag, class AActor* Instigator, const struct FGameplayTag& InstigatorTag, class AActor* Target, const struct FGameplayTag& TargetTag, const TSubclassOf<class UConversationInstance> ConversationInstanceClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ConversationLibrary", "StartConversation");

	Params::ConversationLibrary_StartConversation Parms{};

	Parms.ConversationEntryTag = std::move(ConversationEntryTag);
	Parms.Instigator = Instigator;
	Parms.InstigatorTag = std::move(InstigatorTag);
	Parms.Target = Target;
	Parms.TargetTag = std::move(TargetTag);
	Parms.ConversationInstanceClass = ConversationInstanceClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UConversationTaskNode::ExecuteClientEffects(const struct FConversationContext& Context) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationTaskNode", "ExecuteClientEffects");

	Params::ConversationTaskNode_ExecuteClientEffects Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FConversationTaskResult UConversationTaskNode::ExecuteTaskNode(const struct FConversationContext& Context) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationTaskNode", "ExecuteTaskNode");

	Params::ConversationTaskNode_ExecuteTaskNode Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UConversationTaskNode::GatherStaticExtraData(const struct FConversationContext& Context, TArray<struct FConversationNodeParameterPair>* InOutExtraData) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationTaskNode", "GatherStaticExtraData");

	Params::ConversationTaskNode_GatherStaticExtraData Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (InOutExtraData != nullptr)
		*InOutExtraData = std::move(Parms.InOutExtraData);
}

bool UConversationTaskNode::GetNodeBodyColor(struct FLinearColor* BodyColor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationTaskNode", "GetNodeBodyColor");

	Params::ConversationTaskNode_GetNodeBodyColor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (BodyColor != nullptr)
		*BodyColor = std::move(Parms.BodyColor);

	return Parms.ReturnValue;
}

EConversationRequirementResult UConversationTaskNode::IsRequirementSatisfied(const struct FConversationContext& Context) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationTaskNode", "IsRequirementSatisfied");

	Params::ConversationTaskNode_IsRequirementSatisfied Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UConversationParticipantComponent::ClientExecuteTaskAndSideEffects(const struct FConversationNodeHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationParticipantComponent", "ClientExecuteTaskAndSideEffects");

	Params::ConversationParticipantComponent_ClientExecuteTaskAndSideEffects Parms{};

	Parms.Handle = std::move(Handle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UConversationParticipantComponent::ClientStartConversation(const struct FGameplayTag& AsParticipant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationParticipantComponent", "ClientStartConversation");

	Params::ConversationParticipantComponent_ClientStartConversation Parms{};

	Parms.AsParticipant = std::move(AsParticipant);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UConversationParticipantComponent::ClientUpdateConversation(const struct FClientConversationMessagePayload& message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationParticipantComponent", "ClientUpdateConversation");

	Params::ConversationParticipantComponent_ClientUpdateConversation Parms{};

	Parms.message = std::move(message);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UConversationParticipantComponent::ClientUpdateConversations(int32 InConversationsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationParticipantComponent", "ClientUpdateConversations");

	Params::ConversationParticipantComponent_ClientUpdateConversations Parms{};

	Parms.InConversationsActive = InConversationsActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UConversationParticipantComponent::ClientUpdateConversationTaskChoiceData(const struct FConversationNodeHandle& Handle, const struct FClientConversationOptionEntry& OptionEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationParticipantComponent", "ClientUpdateConversationTaskChoiceData");

	Params::ConversationParticipantComponent_ClientUpdateConversationTaskChoiceData Parms{};

	Parms.Handle = std::move(Handle);
	Parms.OptionEntry = std::move(OptionEntry);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UConversationParticipantComponent::ClientUpdateParticipants(const struct FConversationParticipants& InParticipants)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationParticipantComponent", "ClientUpdateParticipants");

	Params::ConversationParticipantComponent_ClientUpdateParticipants Parms{};

	Parms.InParticipants = std::move(InParticipants);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FText UConversationParticipantComponent::GetParticipantDisplayName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationParticipantComponent", "GetParticipantDisplayName");

	Params::ConversationParticipantComponent_GetParticipantDisplayName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UConversationParticipantComponent::OnRep_ConversationsActive(int32 OldConversationsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationParticipantComponent", "OnRep_ConversationsActive");

	Params::ConversationParticipantComponent_OnRep_ConversationsActive Parms{};

	Parms.OldConversationsActive = OldConversationsActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UConversationParticipantComponent::RequestServerAdvanceConversation(const struct FAdvanceConversationRequest& InChoicePicked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationParticipantComponent", "RequestServerAdvanceConversation");

	Params::ConversationParticipantComponent_RequestServerAdvanceConversation Parms{};

	Parms.InChoicePicked = std::move(InChoicePicked);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UConversationParticipantComponent::ServerAdvanceConversation(const struct FAdvanceConversationRequest& InChoicePicked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationParticipantComponent", "ServerAdvanceConversation");

	Params::ConversationParticipantComponent_ServerAdvanceConversation Parms{};

	Parms.InChoicePicked = std::move(InChoicePicked);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UConversationParticipantComponent::IsInActiveConversation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationParticipantComponent", "IsInActiveConversation");

	Params::ConversationParticipantComponent_IsInActiveConversation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EConversationRequirementResult UConversationRequirementNode::IsRequirementSatisfied(const struct FConversationContext& Context) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationRequirementNode", "IsRequirementSatisfied");

	Params::ConversationRequirementNode_IsRequirementSatisfied Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UConversationSideEffectNode::ClientCauseSideEffect(const struct FConversationContext& Context) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationSideEffectNode", "ClientCauseSideEffect");

	Params::ConversationSideEffectNode_ClientCauseSideEffect Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UConversationSideEffectNode::ServerCauseSideEffect(const struct FConversationContext& Context) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationSideEffectNode", "ServerCauseSideEffect");

	Params::ConversationSideEffectNode_ServerCauseSideEffect Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
