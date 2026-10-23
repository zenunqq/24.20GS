#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EConversationTaskResultType : uint8
{
	Invalid                                  = 0,
	AbortConversation                        = 1,
	AdvanceConversation                      = 2,
	AdvanceConversationWithChoice            = 3,
	PauseConversationAndSendClientChoices    = 4,
	ReturnToLastClientChoice                 = 5,
	ReturnToCurrentClientChoice              = 6,
	ReturnToConversationStart                = 7,
	EConversationTaskResultType_MAX          = 8,
};

enum class EConversationRequirementResult : uint8
{
	Passed                                   = 0,
	FailedButVisible                         = 1,
	FailedAndHidden                          = 2,
	EConversationRequirementResult_MAX       = 3,
};

enum class EConversationChoiceType : uint8
{
	ServerOnly                               = 0,
	UserChoiceAvailable                      = 1,
	UserChoiceUnavailable                    = 2,
	EConversationChoiceType_MAX              = 3,
};

struct FConversationEntryList final
{
public:
	struct FGameplayTag                           EntryTag;
	uint8                                         Pad_4[0x4];
	TArray<struct FGuid>                          DestinationList;
};
static_assert(alignof(FConversationEntryList) == 0x000008, "Wrong alignment on FConversationEntryList");
static_assert(sizeof(FConversationEntryList) == 0x000018, "Wrong size on FConversationEntryList");
static_assert(offsetof(FConversationEntryList, EntryTag) == 0x000000, "Member 'FConversationEntryList::EntryTag' has a wrong offset!");
static_assert(offsetof(FConversationEntryList, DestinationList) == 0x000008, "Member 'FConversationEntryList::DestinationList' has a wrong offset!");

struct FConversationNodeParameterPair final
{
public:
	class FString                                 Name;
	class FString                                 Value;
};
static_assert(alignof(FConversationNodeParameterPair) == 0x000008, "Wrong alignment on FConversationNodeParameterPair");
static_assert(sizeof(FConversationNodeParameterPair) == 0x000020, "Wrong size on FConversationNodeParameterPair");
static_assert(offsetof(FConversationNodeParameterPair, Name) == 0x000000, "Member 'FConversationNodeParameterPair::Name' has a wrong offset!");
static_assert(offsetof(FConversationNodeParameterPair, Value) == 0x000010, "Member 'FConversationNodeParameterPair::Value' has a wrong offset!");

struct FClientConversationMessage final
{
public:
	struct FGameplayTag                           SpeakerID;
	uint8                                         Pad_4[0x4];
	class FText                                   ParticipantDisplayName;
	class FText                                   Text;
	TArray<struct FConversationNodeParameterPair> MetadataParameters;
};
static_assert(alignof(FClientConversationMessage) == 0x000008, "Wrong alignment on FClientConversationMessage");
static_assert(sizeof(FClientConversationMessage) == 0x000048, "Wrong size on FClientConversationMessage");
static_assert(offsetof(FClientConversationMessage, SpeakerID) == 0x000000, "Member 'FClientConversationMessage::SpeakerID' has a wrong offset!");
static_assert(offsetof(FClientConversationMessage, ParticipantDisplayName) == 0x000008, "Member 'FClientConversationMessage::ParticipantDisplayName' has a wrong offset!");
static_assert(offsetof(FClientConversationMessage, Text) == 0x000020, "Member 'FClientConversationMessage::Text' has a wrong offset!");
static_assert(offsetof(FClientConversationMessage, MetadataParameters) == 0x000038, "Member 'FClientConversationMessage::MetadataParameters' has a wrong offset!");

struct FConversationParticipantEntry final
{
public:
	class AActor*                                 Actor;
	struct FGameplayTag                           ParticipantID;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(FConversationParticipantEntry) == 0x000008, "Wrong alignment on FConversationParticipantEntry");
static_assert(sizeof(FConversationParticipantEntry) == 0x000010, "Wrong size on FConversationParticipantEntry");
static_assert(offsetof(FConversationParticipantEntry, Actor) == 0x000000, "Member 'FConversationParticipantEntry::Actor' has a wrong offset!");
static_assert(offsetof(FConversationParticipantEntry, ParticipantID) == 0x000008, "Member 'FConversationParticipantEntry::ParticipantID' has a wrong offset!");

struct FConversationParticipants final
{
public:
	TArray<struct FConversationParticipantEntry>  List;
};
static_assert(alignof(FConversationParticipants) == 0x000008, "Wrong alignment on FConversationParticipants");
static_assert(sizeof(FConversationParticipants) == 0x000010, "Wrong size on FConversationParticipants");
static_assert(offsetof(FConversationParticipants, List) == 0x000000, "Member 'FConversationParticipants::List' has a wrong offset!");

struct FConversationNodeHandle final
{
public:
	struct FGuid                                  NodeGUID;
};
static_assert(alignof(FConversationNodeHandle) == 0x000004, "Wrong alignment on FConversationNodeHandle");
static_assert(sizeof(FConversationNodeHandle) == 0x000010, "Wrong size on FConversationNodeHandle");
static_assert(offsetof(FConversationNodeHandle, NodeGUID) == 0x000000, "Member 'FConversationNodeHandle::NodeGUID' has a wrong offset!");

struct FConversationChoiceReference final
{
public:
	struct FConversationNodeHandle                NodeReference;
	TArray<struct FConversationNodeParameterPair> NodeParameters;
};
static_assert(alignof(FConversationChoiceReference) == 0x000008, "Wrong alignment on FConversationChoiceReference");
static_assert(sizeof(FConversationChoiceReference) == 0x000020, "Wrong size on FConversationChoiceReference");
static_assert(offsetof(FConversationChoiceReference, NodeReference) == 0x000000, "Member 'FConversationChoiceReference::NodeReference' has a wrong offset!");
static_assert(offsetof(FConversationChoiceReference, NodeParameters) == 0x000010, "Member 'FConversationChoiceReference::NodeParameters' has a wrong offset!");

struct FClientConversationOptionEntry final
{
public:
	class FText                                   ChoiceText;
	struct FGameplayTagContainer                  ChoiceTags;
	EConversationChoiceType                       ChoiceType;
	uint8                                         Pad_39[0x7];
	struct FConversationChoiceReference           ChoiceReference;
	TArray<struct FConversationNodeParameterPair> ExtraData;
};
static_assert(alignof(FClientConversationOptionEntry) == 0x000008, "Wrong alignment on FClientConversationOptionEntry");
static_assert(sizeof(FClientConversationOptionEntry) == 0x000070, "Wrong size on FClientConversationOptionEntry");
static_assert(offsetof(FClientConversationOptionEntry, ChoiceText) == 0x000000, "Member 'FClientConversationOptionEntry::ChoiceText' has a wrong offset!");
static_assert(offsetof(FClientConversationOptionEntry, ChoiceTags) == 0x000018, "Member 'FClientConversationOptionEntry::ChoiceTags' has a wrong offset!");
static_assert(offsetof(FClientConversationOptionEntry, ChoiceType) == 0x000038, "Member 'FClientConversationOptionEntry::ChoiceType' has a wrong offset!");
static_assert(offsetof(FClientConversationOptionEntry, ChoiceReference) == 0x000040, "Member 'FClientConversationOptionEntry::ChoiceReference' has a wrong offset!");
static_assert(offsetof(FClientConversationOptionEntry, ExtraData) == 0x000060, "Member 'FClientConversationOptionEntry::ExtraData' has a wrong offset!");

struct FClientConversationMessagePayload final
{
public:
	struct FClientConversationMessage             message;
	struct FConversationParticipants              Participants;
	struct FConversationNodeHandle                CurrentNode;
	TArray<struct FClientConversationOptionEntry> Options;
};
static_assert(alignof(FClientConversationMessagePayload) == 0x000008, "Wrong alignment on FClientConversationMessagePayload");
static_assert(sizeof(FClientConversationMessagePayload) == 0x000078, "Wrong size on FClientConversationMessagePayload");
static_assert(offsetof(FClientConversationMessagePayload, message) == 0x000000, "Member 'FClientConversationMessagePayload::message' has a wrong offset!");
static_assert(offsetof(FClientConversationMessagePayload, Participants) == 0x000048, "Member 'FClientConversationMessagePayload::Participants' has a wrong offset!");
static_assert(offsetof(FClientConversationMessagePayload, CurrentNode) == 0x000058, "Member 'FClientConversationMessagePayload::CurrentNode' has a wrong offset!");
static_assert(offsetof(FClientConversationMessagePayload, Options) == 0x000068, "Member 'FClientConversationMessagePayload::Options' has a wrong offset!");

struct FCommonDialogueBankParticipant final
{
public:
	class FText                                   FallbackName;
	struct FGameplayTag                           ParticipantName;
	struct FLinearColor                           NodeTint;
	uint8                                         Pad_2C[0x4];
};
static_assert(alignof(FCommonDialogueBankParticipant) == 0x000008, "Wrong alignment on FCommonDialogueBankParticipant");
static_assert(sizeof(FCommonDialogueBankParticipant) == 0x000030, "Wrong size on FCommonDialogueBankParticipant");
static_assert(offsetof(FCommonDialogueBankParticipant, FallbackName) == 0x000000, "Member 'FCommonDialogueBankParticipant::FallbackName' has a wrong offset!");
static_assert(offsetof(FCommonDialogueBankParticipant, ParticipantName) == 0x000018, "Member 'FCommonDialogueBankParticipant::ParticipantName' has a wrong offset!");
static_assert(offsetof(FCommonDialogueBankParticipant, NodeTint) == 0x00001C, "Member 'FCommonDialogueBankParticipant::NodeTint' has a wrong offset!");

struct FAdvanceConversationRequest final
{
public:
	struct FConversationChoiceReference           Choice;
	TArray<struct FConversationNodeParameterPair> UserParameters;
};
static_assert(alignof(FAdvanceConversationRequest) == 0x000008, "Wrong alignment on FAdvanceConversationRequest");
static_assert(sizeof(FAdvanceConversationRequest) == 0x000030, "Wrong size on FAdvanceConversationRequest");
static_assert(offsetof(FAdvanceConversationRequest, Choice) == 0x000000, "Member 'FAdvanceConversationRequest::Choice' has a wrong offset!");
static_assert(offsetof(FAdvanceConversationRequest, UserParameters) == 0x000020, "Member 'FAdvanceConversationRequest::UserParameters' has a wrong offset!");

struct FConversationTaskResult final
{
public:
	EConversationTaskResultType                   Type;
	uint8                                         Pad_1[0x7];
	struct FAdvanceConversationRequest            AdvanceToChoice;
	struct FClientConversationMessage             message;
};
static_assert(alignof(FConversationTaskResult) == 0x000008, "Wrong alignment on FConversationTaskResult");
static_assert(sizeof(FConversationTaskResult) == 0x000080, "Wrong size on FConversationTaskResult");
static_assert(offsetof(FConversationTaskResult, Type) == 0x000000, "Member 'FConversationTaskResult::Type' has a wrong offset!");
static_assert(offsetof(FConversationTaskResult, AdvanceToChoice) == 0x000008, "Member 'FConversationTaskResult::AdvanceToChoice' has a wrong offset!");
static_assert(offsetof(FConversationTaskResult, message) == 0x000038, "Member 'FConversationTaskResult::message' has a wrong offset!");

struct FConversationContext final
{
public:
	class UConversationRegistry*                  ConversationRegistry;
	class UConversationInstance*                  ActiveConversation;
	class UConversationParticipantComponent*      ClientParticipant;
	class UConversationTaskNode*                  TaskBeingConsidered;
	TArray<struct FConversationNodeHandle>        ReturnScopeStack;
	bool                                          bServer;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(FConversationContext) == 0x000008, "Wrong alignment on FConversationContext");
static_assert(sizeof(FConversationContext) == 0x000038, "Wrong size on FConversationContext");
static_assert(offsetof(FConversationContext, ConversationRegistry) == 0x000000, "Member 'FConversationContext::ConversationRegistry' has a wrong offset!");
static_assert(offsetof(FConversationContext, ActiveConversation) == 0x000008, "Member 'FConversationContext::ActiveConversation' has a wrong offset!");
static_assert(offsetof(FConversationContext, ClientParticipant) == 0x000010, "Member 'FConversationContext::ClientParticipant' has a wrong offset!");
static_assert(offsetof(FConversationContext, TaskBeingConsidered) == 0x000018, "Member 'FConversationContext::TaskBeingConsidered' has a wrong offset!");
static_assert(offsetof(FConversationContext, ReturnScopeStack) == 0x000020, "Member 'FConversationContext::ReturnScopeStack' has a wrong offset!");
static_assert(offsetof(FConversationContext, bServer) == 0x000030, "Member 'FConversationContext::bServer' has a wrong offset!");

struct FNetSerializeScriptStructCache_ConvVersion final
{
public:
	TMap<class UScriptStruct*, int32>             ScriptStructsToIndex;
	TArray<class UScriptStruct*>                  IndexToScriptStructs;
};
static_assert(alignof(FNetSerializeScriptStructCache_ConvVersion) == 0x000008, "Wrong alignment on FNetSerializeScriptStructCache_ConvVersion");
static_assert(sizeof(FNetSerializeScriptStructCache_ConvVersion) == 0x000060, "Wrong size on FNetSerializeScriptStructCache_ConvVersion");
static_assert(offsetof(FNetSerializeScriptStructCache_ConvVersion, ScriptStructsToIndex) == 0x000000, "Member 'FNetSerializeScriptStructCache_ConvVersion::ScriptStructsToIndex' has a wrong offset!");
static_assert(offsetof(FNetSerializeScriptStructCache_ConvVersion, IndexToScriptStructs) == 0x000050, "Member 'FNetSerializeScriptStructCache_ConvVersion::IndexToScriptStructs' has a wrong offset!");

struct alignas(0x08) FConversationChoiceData final
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FConversationChoiceData) == 0x000008, "Wrong alignment on FConversationChoiceData");
static_assert(sizeof(FConversationChoiceData) == 0x000008, "Wrong size on FConversationChoiceData");

struct alignas(0x08) FConversationChoiceDataHandle final
{
public:
	uint8                                         Pad_0[0x20];
};
static_assert(alignof(FConversationChoiceDataHandle) == 0x000008, "Wrong alignment on FConversationChoiceDataHandle");
static_assert(sizeof(FConversationChoiceDataHandle) == 0x000020, "Wrong size on FConversationChoiceDataHandle");

struct FConversationBranchPoint final
{
public:
	TArray<struct FConversationNodeHandle>        ReturnScopeStack;
	struct FClientConversationOptionEntry         ClientChoice;
};
static_assert(alignof(FConversationBranchPoint) == 0x000008, "Wrong alignment on FConversationBranchPoint");
static_assert(sizeof(FConversationBranchPoint) == 0x000080, "Wrong size on FConversationBranchPoint");
static_assert(offsetof(FConversationBranchPoint, ReturnScopeStack) == 0x000000, "Member 'FConversationBranchPoint::ReturnScopeStack' has a wrong offset!");
static_assert(offsetof(FConversationBranchPoint, ClientChoice) == 0x000010, "Member 'FConversationBranchPoint::ClientChoice' has a wrong offset!");

}
