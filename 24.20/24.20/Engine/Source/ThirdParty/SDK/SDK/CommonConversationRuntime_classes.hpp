#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "CommonConversationRuntime_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "DeveloperSettings_classes.hpp"

namespace SDK
{

class UConversationNode : public UObject
{
public:
	class UObject*                                EvalWorldContextObj;
	class FString                                 NodeName;
	struct FGuid                                  Compiled_NodeGUID;
	class UConversationNode*                      ParentNode;

public:
	struct FLinearColor GetDebugParticipantColor(const struct FGameplayTag& ParticipantID) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationNode">();
	}
	static class UConversationNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationNode>();
	}
};
static_assert(alignof(UConversationNode) == 0x000008, "Wrong alignment on UConversationNode");
static_assert(sizeof(UConversationNode) == 0x000058, "Wrong size on UConversationNode");
static_assert(offsetof(UConversationNode, EvalWorldContextObj) == 0x000028, "Member 'UConversationNode::EvalWorldContextObj' has a wrong offset!");
static_assert(offsetof(UConversationNode, NodeName) == 0x000030, "Member 'UConversationNode::NodeName' has a wrong offset!");
static_assert(offsetof(UConversationNode, Compiled_NodeGUID) == 0x000040, "Member 'UConversationNode::Compiled_NodeGUID' has a wrong offset!");
static_assert(offsetof(UConversationNode, ParentNode) == 0x000050, "Member 'UConversationNode::ParentNode' has a wrong offset!");

class UConversationSubNode : public UConversationNode
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationSubNode">();
	}
	static class UConversationSubNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationSubNode>();
	}
};
static_assert(alignof(UConversationSubNode) == 0x000008, "Wrong alignment on UConversationSubNode");
static_assert(sizeof(UConversationSubNode) == 0x000058, "Wrong size on UConversationSubNode");

class UConversationChoiceNode : public UConversationSubNode
{
public:
	class FText                                   DefaultChoiceDisplayText;
	struct FGameplayTagContainer                  ChoiceTags;

public:
	void FillChoice(const struct FConversationContext& Context, struct FClientConversationOptionEntry* ChoiceEntry) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationChoiceNode">();
	}
	static class UConversationChoiceNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationChoiceNode>();
	}
};
static_assert(alignof(UConversationChoiceNode) == 0x000008, "Wrong alignment on UConversationChoiceNode");
static_assert(sizeof(UConversationChoiceNode) == 0x000090, "Wrong size on UConversationChoiceNode");
static_assert(offsetof(UConversationChoiceNode, DefaultChoiceDisplayText) == 0x000058, "Member 'UConversationChoiceNode::DefaultChoiceDisplayText' has a wrong offset!");
static_assert(offsetof(UConversationChoiceNode, ChoiceTags) == 0x000070, "Member 'UConversationChoiceNode::ChoiceTags' has a wrong offset!");

class UConversationContextHelpers final : public UBlueprintFunctionLibrary
{
public:
	static struct FConversationTaskResult AbortConversation(const struct FConversationContext& Context);
	static struct FConversationTaskResult AdvanceConversation(const struct FConversationContext& Context);
	static struct FConversationTaskResult AdvanceConversationWithChoice(const struct FConversationContext& Context, const struct FAdvanceConversationRequest& Choice);
	static bool CanConversationContinue(const struct FConversationTaskResult& ConversationTasResult);
	static class UConversationParticipantComponent* FindConversationComponent(class AActor* Actor);
	static class UConversationInstance* GetConversationInstance(const struct FConversationContext& Context);
	static class UConversationParticipantComponent* GetConversationParticipant(const struct FConversationContext& Context, const struct FGameplayTag& ParticipantTag);
	static class AActor* GetConversationParticipantActor(const struct FConversationContext& Context, const struct FGameplayTag& ParticipantTag);
	static struct FConversationNodeHandle GetCurrentConversationNodeHandle(const struct FConversationContext& Context);
	static void MakeConversationParticipant(const struct FConversationContext& Context, class AActor* ParticipantActor, const struct FGameplayTag& ParticipantTag);
	static struct FConversationTaskResult PauseConversationAndSendClientChoices(const struct FConversationContext& Context, const struct FClientConversationMessage& message);
	static struct FConversationTaskResult ReturnToConversationStart(const struct FConversationContext& Context);
	static struct FConversationTaskResult ReturnToCurrentClientChoice(const struct FConversationContext& Context);
	static struct FConversationTaskResult ReturnToLastClientChoice(const struct FConversationContext& Context);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationContextHelpers">();
	}
	static class UConversationContextHelpers* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationContextHelpers>();
	}
};
static_assert(alignof(UConversationContextHelpers) == 0x000008, "Wrong alignment on UConversationContextHelpers");
static_assert(sizeof(UConversationContextHelpers) == 0x000028, "Wrong size on UConversationContextHelpers");

class UConversationDatabase final : public UPrimaryDataAsset
{
public:
	int32                                         CompilerVersion;
	uint8                                         Pad_34[0x4];
	TMap<struct FGuid, class UConversationNode*>  ReachableNodeMap;
	TArray<struct FConversationEntryList>         EntryTags;
	struct FGameplayTagContainer                  ExitTags;
	TArray<struct FGuid>                          InternalNodeIds;
	TArray<struct FGuid>                          LinkedToNodeIds;
	TArray<struct FCommonDialogueBankParticipant> Speakers;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationDatabase">();
	}
	static class UConversationDatabase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationDatabase>();
	}
};
static_assert(alignof(UConversationDatabase) == 0x000008, "Wrong alignment on UConversationDatabase");
static_assert(sizeof(UConversationDatabase) == 0x0000E8, "Wrong size on UConversationDatabase");
static_assert(offsetof(UConversationDatabase, CompilerVersion) == 0x000030, "Member 'UConversationDatabase::CompilerVersion' has a wrong offset!");
static_assert(offsetof(UConversationDatabase, ReachableNodeMap) == 0x000038, "Member 'UConversationDatabase::ReachableNodeMap' has a wrong offset!");
static_assert(offsetof(UConversationDatabase, EntryTags) == 0x000088, "Member 'UConversationDatabase::EntryTags' has a wrong offset!");
static_assert(offsetof(UConversationDatabase, ExitTags) == 0x000098, "Member 'UConversationDatabase::ExitTags' has a wrong offset!");
static_assert(offsetof(UConversationDatabase, InternalNodeIds) == 0x0000B8, "Member 'UConversationDatabase::InternalNodeIds' has a wrong offset!");
static_assert(offsetof(UConversationDatabase, LinkedToNodeIds) == 0x0000C8, "Member 'UConversationDatabase::LinkedToNodeIds' has a wrong offset!");
static_assert(offsetof(UConversationDatabase, Speakers) == 0x0000D8, "Member 'UConversationDatabase::Speakers' has a wrong offset!");

class UConversationNodeWithLinks : public UConversationNode
{
public:
	TArray<struct FGuid>                          OutputConnections;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationNodeWithLinks">();
	}
	static class UConversationNodeWithLinks* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationNodeWithLinks>();
	}
};
static_assert(alignof(UConversationNodeWithLinks) == 0x000008, "Wrong alignment on UConversationNodeWithLinks");
static_assert(sizeof(UConversationNodeWithLinks) == 0x000068, "Wrong size on UConversationNodeWithLinks");
static_assert(offsetof(UConversationNodeWithLinks, OutputConnections) == 0x000058, "Member 'UConversationNodeWithLinks::OutputConnections' has a wrong offset!");

class UConversationEntryPointNode final : public UConversationNodeWithLinks
{
public:
	struct FGameplayTag                           EntryTag;
	uint8                                         Pad_6C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationEntryPointNode">();
	}
	static class UConversationEntryPointNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationEntryPointNode>();
	}
};
static_assert(alignof(UConversationEntryPointNode) == 0x000008, "Wrong alignment on UConversationEntryPointNode");
static_assert(sizeof(UConversationEntryPointNode) == 0x000070, "Wrong size on UConversationEntryPointNode");
static_assert(offsetof(UConversationEntryPointNode, EntryTag) == 0x000068, "Member 'UConversationEntryPointNode::EntryTag' has a wrong offset!");

class UConversationInstance : public UObject
{
public:
	uint8                                         Pad_28[0x28];
	struct FConversationParticipants              Participants;
	uint8                                         Pad_60[0x148];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationInstance">();
	}
	static class UConversationInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationInstance>();
	}
};
static_assert(alignof(UConversationInstance) == 0x000008, "Wrong alignment on UConversationInstance");
static_assert(sizeof(UConversationInstance) == 0x0001A8, "Wrong size on UConversationInstance");
static_assert(offsetof(UConversationInstance, Participants) == 0x000050, "Member 'UConversationInstance::Participants' has a wrong offset!");

class UConversationLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UConversationInstance* StartConversation(const struct FGameplayTag& ConversationEntryTag, class AActor* Instigator, const struct FGameplayTag& InstigatorTag, class AActor* Target, const struct FGameplayTag& TargetTag, const TSubclassOf<class UConversationInstance> ConversationInstanceClass);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationLibrary">();
	}
	static class UConversationLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationLibrary>();
	}
};
static_assert(alignof(UConversationLibrary) == 0x000008, "Wrong alignment on UConversationLibrary");
static_assert(sizeof(UConversationLibrary) == 0x000028, "Wrong size on UConversationLibrary");

class UConversationTaskNode : public UConversationNodeWithLinks
{
public:
	TArray<class UConversationSubNode*>           SubNodes;
	bool                                          bIgnoreRequirementsWhileAdvancingConversations;
	uint8                                         Pad_79[0x7];

public:
	void ExecuteClientEffects(const struct FConversationContext& Context) const;
	struct FConversationTaskResult ExecuteTaskNode(const struct FConversationContext& Context) const;
	void GatherStaticExtraData(const struct FConversationContext& Context, TArray<struct FConversationNodeParameterPair>* InOutExtraData) const;
	bool GetNodeBodyColor(struct FLinearColor* BodyColor) const;
	EConversationRequirementResult IsRequirementSatisfied(const struct FConversationContext& Context) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationTaskNode">();
	}
	static class UConversationTaskNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationTaskNode>();
	}
};
static_assert(alignof(UConversationTaskNode) == 0x000008, "Wrong alignment on UConversationTaskNode");
static_assert(sizeof(UConversationTaskNode) == 0x000080, "Wrong size on UConversationTaskNode");
static_assert(offsetof(UConversationTaskNode, SubNodes) == 0x000068, "Member 'UConversationTaskNode::SubNodes' has a wrong offset!");
static_assert(offsetof(UConversationTaskNode, bIgnoreRequirementsWhileAdvancingConversations) == 0x000078, "Member 'UConversationTaskNode::bIgnoreRequirementsWhileAdvancingConversations' has a wrong offset!");

class UConversationLinkNode final : public UConversationTaskNode
{
public:
	struct FGameplayTag                           RemoteEntryTag;
	uint8                                         Pad_84[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationLinkNode">();
	}
	static class UConversationLinkNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationLinkNode>();
	}
};
static_assert(alignof(UConversationLinkNode) == 0x000008, "Wrong alignment on UConversationLinkNode");
static_assert(sizeof(UConversationLinkNode) == 0x000088, "Wrong size on UConversationLinkNode");
static_assert(offsetof(UConversationLinkNode, RemoteEntryTag) == 0x000080, "Member 'UConversationLinkNode::RemoteEntryTag' has a wrong offset!");

class UConversationParticipantComponent : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x60];
	int32                                         ConversationsActive;
	uint8                                         Pad_104[0x4];
	class UConversationInstance*                  Auth_CurrentConversation;
	TArray<class UConversationInstance*>          Auth_Conversations;
	struct FClientConversationMessagePayload      LastMessage;
	uint8                                         Pad_198[0x8];

public:
	void ClientExecuteTaskAndSideEffects(const struct FConversationNodeHandle& Handle);
	void ClientStartConversation(const struct FGameplayTag& AsParticipant);
	void ClientUpdateConversation(const struct FClientConversationMessagePayload& message);
	void ClientUpdateConversations(int32 InConversationsActive);
	void ClientUpdateConversationTaskChoiceData(const struct FConversationNodeHandle& Handle, const struct FClientConversationOptionEntry& OptionEntry);
	void ClientUpdateParticipants(const struct FConversationParticipants& InParticipants);
	class FText GetParticipantDisplayName();
	void OnRep_ConversationsActive(int32 OldConversationsActive);
	void RequestServerAdvanceConversation(const struct FAdvanceConversationRequest& InChoicePicked);
	void ServerAdvanceConversation(const struct FAdvanceConversationRequest& InChoicePicked);

	bool IsInActiveConversation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationParticipantComponent">();
	}
	static class UConversationParticipantComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationParticipantComponent>();
	}
};
static_assert(alignof(UConversationParticipantComponent) == 0x000008, "Wrong alignment on UConversationParticipantComponent");
static_assert(sizeof(UConversationParticipantComponent) == 0x0001A0, "Wrong size on UConversationParticipantComponent");
static_assert(offsetof(UConversationParticipantComponent, ConversationsActive) == 0x000100, "Member 'UConversationParticipantComponent::ConversationsActive' has a wrong offset!");
static_assert(offsetof(UConversationParticipantComponent, Auth_CurrentConversation) == 0x000108, "Member 'UConversationParticipantComponent::Auth_CurrentConversation' has a wrong offset!");
static_assert(offsetof(UConversationParticipantComponent, Auth_Conversations) == 0x000110, "Member 'UConversationParticipantComponent::Auth_Conversations' has a wrong offset!");
static_assert(offsetof(UConversationParticipantComponent, LastMessage) == 0x000120, "Member 'UConversationParticipantComponent::LastMessage' has a wrong offset!");

class UConversationRegistry final : public UWorldSubsystem
{
public:
	uint8                                         Pad_30[0x8];
	struct FNetSerializeScriptStructCache_ConvVersion ConversationChoiceDataStructCache;
	uint8                                         Pad_98[0x160];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationRegistry">();
	}
	static class UConversationRegistry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationRegistry>();
	}
};
static_assert(alignof(UConversationRegistry) == 0x000008, "Wrong alignment on UConversationRegistry");
static_assert(sizeof(UConversationRegistry) == 0x0001F8, "Wrong size on UConversationRegistry");
static_assert(offsetof(UConversationRegistry, ConversationChoiceDataStructCache) == 0x000038, "Member 'UConversationRegistry::ConversationChoiceDataStructCache' has a wrong offset!");

class UConversationRequirementNode : public UConversationSubNode
{
public:
	EConversationRequirementResult IsRequirementSatisfied(const struct FConversationContext& Context) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationRequirementNode">();
	}
	static class UConversationRequirementNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationRequirementNode>();
	}
};
static_assert(alignof(UConversationRequirementNode) == 0x000008, "Wrong alignment on UConversationRequirementNode");
static_assert(sizeof(UConversationRequirementNode) == 0x000058, "Wrong size on UConversationRequirementNode");

class UConversationSettings final : public UDeveloperSettings
{
public:
	TSoftClassPtr<class UClass>                   ConversationInstanceClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationSettings">();
	}
	static class UConversationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationSettings>();
	}
};
static_assert(alignof(UConversationSettings) == 0x000008, "Wrong alignment on UConversationSettings");
static_assert(sizeof(UConversationSettings) == 0x000058, "Wrong size on UConversationSettings");
static_assert(offsetof(UConversationSettings, ConversationInstanceClass) == 0x000030, "Member 'UConversationSettings::ConversationInstanceClass' has a wrong offset!");

class UConversationSideEffectNode final : public UConversationSubNode
{
public:
	void ClientCauseSideEffect(const struct FConversationContext& Context) const;
	void ServerCauseSideEffect(const struct FConversationContext& Context) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationSideEffectNode">();
	}
	static class UConversationSideEffectNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationSideEffectNode>();
	}
};
static_assert(alignof(UConversationSideEffectNode) == 0x000008, "Wrong alignment on UConversationSideEffectNode");
static_assert(sizeof(UConversationSideEffectNode) == 0x000058, "Wrong size on UConversationSideEffectNode");

}
