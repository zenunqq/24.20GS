#pragma once

#include "Basic.hpp"

#include "MetasoundEngine_structs.hpp"
#include "AudioExtensions_structs.hpp"
#include "MetasoundFrontend_structs.hpp"

namespace SDK::Params
{

struct MetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle final
{
public:
	class UAudioComponent*                        OnComponent;
	class UMetasoundGeneratorHandle*              ReturnValue;
};
static_assert(alignof(MetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle) == 0x000008, "Wrong alignment on MetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle");
static_assert(sizeof(MetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle) == 0x000010, "Wrong size on MetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle");
static_assert(offsetof(MetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle, OnComponent) == 0x000000, "Member 'MetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle::OnComponent' has a wrong offset!");
static_assert(offsetof(MetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle, ReturnValue) == 0x000008, "Member 'MetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle::ReturnValue' has a wrong offset!");

struct MetasoundGeneratorHandle_ApplyParameterPack final
{
public:
	class UMetasoundParameterPack*                pack;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(MetasoundGeneratorHandle_ApplyParameterPack) == 0x000008, "Wrong alignment on MetasoundGeneratorHandle_ApplyParameterPack");
static_assert(sizeof(MetasoundGeneratorHandle_ApplyParameterPack) == 0x000010, "Wrong size on MetasoundGeneratorHandle_ApplyParameterPack");
static_assert(offsetof(MetasoundGeneratorHandle_ApplyParameterPack, pack) == 0x000000, "Member 'MetasoundGeneratorHandle_ApplyParameterPack::pack' has a wrong offset!");
static_assert(offsetof(MetasoundGeneratorHandle_ApplyParameterPack, ReturnValue) == 0x000008, "Member 'MetasoundGeneratorHandle_ApplyParameterPack::ReturnValue' has a wrong offset!");

struct MetaSoundAssetSubsystem_RegisterAssetClassesInDirectories final
{
public:
	TArray<struct FMetaSoundAssetDirectory>       Directories;
};
static_assert(alignof(MetaSoundAssetSubsystem_RegisterAssetClassesInDirectories) == 0x000008, "Wrong alignment on MetaSoundAssetSubsystem_RegisterAssetClassesInDirectories");
static_assert(sizeof(MetaSoundAssetSubsystem_RegisterAssetClassesInDirectories) == 0x000010, "Wrong size on MetaSoundAssetSubsystem_RegisterAssetClassesInDirectories");
static_assert(offsetof(MetaSoundAssetSubsystem_RegisterAssetClassesInDirectories, Directories) == 0x000000, "Member 'MetaSoundAssetSubsystem_RegisterAssetClassesInDirectories::Directories' has a wrong offset!");

struct MetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories final
{
public:
	TArray<struct FMetaSoundAssetDirectory>       Directories;
};
static_assert(alignof(MetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories) == 0x000008, "Wrong alignment on MetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories");
static_assert(sizeof(MetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories) == 0x000010, "Wrong size on MetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories");
static_assert(offsetof(MetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories, Directories) == 0x000000, "Member 'MetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories::Directories' has a wrong offset!");

struct MetaSoundBuilderBase_AddGraphInputNode final
{
public:
	class FName                                   Name_0;
	class FName                                   DataType;
	struct FMetasoundFrontendLiteral              DefaultValue;
	EMetaSoundBuilderResult                       outResult;
	bool                                          bIsConstructorInput;
	uint8                                         Pad_62[0x2];
	struct FMetaSoundBuilderNodeOutputHandle      ReturnValue;
	uint8                                         Pad_84[0x4];
};
static_assert(alignof(MetaSoundBuilderBase_AddGraphInputNode) == 0x000008, "Wrong alignment on MetaSoundBuilderBase_AddGraphInputNode");
static_assert(sizeof(MetaSoundBuilderBase_AddGraphInputNode) == 0x000088, "Wrong size on MetaSoundBuilderBase_AddGraphInputNode");
static_assert(offsetof(MetaSoundBuilderBase_AddGraphInputNode, Name_0) == 0x000000, "Member 'MetaSoundBuilderBase_AddGraphInputNode::Name_0' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_AddGraphInputNode, DataType) == 0x000004, "Member 'MetaSoundBuilderBase_AddGraphInputNode::DataType' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_AddGraphInputNode, DefaultValue) == 0x000008, "Member 'MetaSoundBuilderBase_AddGraphInputNode::DefaultValue' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_AddGraphInputNode, outResult) == 0x000060, "Member 'MetaSoundBuilderBase_AddGraphInputNode::outResult' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_AddGraphInputNode, bIsConstructorInput) == 0x000061, "Member 'MetaSoundBuilderBase_AddGraphInputNode::bIsConstructorInput' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_AddGraphInputNode, ReturnValue) == 0x000064, "Member 'MetaSoundBuilderBase_AddGraphInputNode::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderBase_AddGraphOutputNode final
{
public:
	class FName                                   Name_0;
	class FName                                   DataType;
	struct FMetasoundFrontendLiteral              DefaultValue;
	EMetaSoundBuilderResult                       outResult;
	bool                                          bIsConstructorInput;
	uint8                                         Pad_62[0x2];
	struct FMetaSoundBuilderNodeInputHandle       ReturnValue;
	uint8                                         Pad_84[0x4];
};
static_assert(alignof(MetaSoundBuilderBase_AddGraphOutputNode) == 0x000008, "Wrong alignment on MetaSoundBuilderBase_AddGraphOutputNode");
static_assert(sizeof(MetaSoundBuilderBase_AddGraphOutputNode) == 0x000088, "Wrong size on MetaSoundBuilderBase_AddGraphOutputNode");
static_assert(offsetof(MetaSoundBuilderBase_AddGraphOutputNode, Name_0) == 0x000000, "Member 'MetaSoundBuilderBase_AddGraphOutputNode::Name_0' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_AddGraphOutputNode, DataType) == 0x000004, "Member 'MetaSoundBuilderBase_AddGraphOutputNode::DataType' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_AddGraphOutputNode, DefaultValue) == 0x000008, "Member 'MetaSoundBuilderBase_AddGraphOutputNode::DefaultValue' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_AddGraphOutputNode, outResult) == 0x000060, "Member 'MetaSoundBuilderBase_AddGraphOutputNode::outResult' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_AddGraphOutputNode, bIsConstructorInput) == 0x000061, "Member 'MetaSoundBuilderBase_AddGraphOutputNode::bIsConstructorInput' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_AddGraphOutputNode, ReturnValue) == 0x000064, "Member 'MetaSoundBuilderBase_AddGraphOutputNode::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderBase_AddInterface final
{
public:
	class FName                                   InterfaceName;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(MetaSoundBuilderBase_AddInterface) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_AddInterface");
static_assert(sizeof(MetaSoundBuilderBase_AddInterface) == 0x000008, "Wrong size on MetaSoundBuilderBase_AddInterface");
static_assert(offsetof(MetaSoundBuilderBase_AddInterface, InterfaceName) == 0x000000, "Member 'MetaSoundBuilderBase_AddInterface::InterfaceName' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_AddInterface, outResult) == 0x000004, "Member 'MetaSoundBuilderBase_AddInterface::outResult' has a wrong offset!");

struct MetaSoundBuilderBase_AddNode final
{
public:
	TScriptInterface<class IMetaSoundDocumentInterface> NodeClass;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_11[0x3];
	struct FMetaSoundNodeHandle                   ReturnValue;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(MetaSoundBuilderBase_AddNode) == 0x000008, "Wrong alignment on MetaSoundBuilderBase_AddNode");
static_assert(sizeof(MetaSoundBuilderBase_AddNode) == 0x000028, "Wrong size on MetaSoundBuilderBase_AddNode");
static_assert(offsetof(MetaSoundBuilderBase_AddNode, NodeClass) == 0x000000, "Member 'MetaSoundBuilderBase_AddNode::NodeClass' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_AddNode, outResult) == 0x000010, "Member 'MetaSoundBuilderBase_AddNode::outResult' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_AddNode, ReturnValue) == 0x000014, "Member 'MetaSoundBuilderBase_AddNode::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs final
{
public:
	struct FMetaSoundNodeHandle                   NodeHandle;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_11[0x7];
	TArray<struct FMetaSoundBuilderNodeOutputHandle> ReturnValue;
};
static_assert(alignof(MetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs) == 0x000008, "Wrong alignment on MetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs");
static_assert(sizeof(MetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs) == 0x000028, "Wrong size on MetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs");
static_assert(offsetof(MetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs, NodeHandle) == 0x000000, "Member 'MetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs::NodeHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs, outResult) == 0x000010, "Member 'MetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs::outResult' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs, ReturnValue) == 0x000018, "Member 'MetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderBase_ConnectNodeInputToGraphInput final
{
public:
	class FName                                   GraphInputName;
	struct FMetaSoundBuilderNodeInputHandle       NodeInputHandle;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_25[0x3];
};
static_assert(alignof(MetaSoundBuilderBase_ConnectNodeInputToGraphInput) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_ConnectNodeInputToGraphInput");
static_assert(sizeof(MetaSoundBuilderBase_ConnectNodeInputToGraphInput) == 0x000028, "Wrong size on MetaSoundBuilderBase_ConnectNodeInputToGraphInput");
static_assert(offsetof(MetaSoundBuilderBase_ConnectNodeInputToGraphInput, GraphInputName) == 0x000000, "Member 'MetaSoundBuilderBase_ConnectNodeInputToGraphInput::GraphInputName' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_ConnectNodeInputToGraphInput, NodeInputHandle) == 0x000004, "Member 'MetaSoundBuilderBase_ConnectNodeInputToGraphInput::NodeInputHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_ConnectNodeInputToGraphInput, outResult) == 0x000024, "Member 'MetaSoundBuilderBase_ConnectNodeInputToGraphInput::outResult' has a wrong offset!");

struct MetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs final
{
public:
	struct FMetaSoundNodeHandle                   NodeHandle;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_11[0x7];
	TArray<struct FMetaSoundBuilderNodeInputHandle> ReturnValue;
};
static_assert(alignof(MetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs) == 0x000008, "Wrong alignment on MetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs");
static_assert(sizeof(MetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs) == 0x000028, "Wrong size on MetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs");
static_assert(offsetof(MetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs, NodeHandle) == 0x000000, "Member 'MetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs::NodeHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs, outResult) == 0x000010, "Member 'MetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs::outResult' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs, ReturnValue) == 0x000018, "Member 'MetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderBase_ConnectNodeOutputToGraphOutput final
{
public:
	class FName                                   GraphOutputName;
	struct FMetaSoundBuilderNodeOutputHandle      NodeOutputHandle;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_25[0x3];
};
static_assert(alignof(MetaSoundBuilderBase_ConnectNodeOutputToGraphOutput) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_ConnectNodeOutputToGraphOutput");
static_assert(sizeof(MetaSoundBuilderBase_ConnectNodeOutputToGraphOutput) == 0x000028, "Wrong size on MetaSoundBuilderBase_ConnectNodeOutputToGraphOutput");
static_assert(offsetof(MetaSoundBuilderBase_ConnectNodeOutputToGraphOutput, GraphOutputName) == 0x000000, "Member 'MetaSoundBuilderBase_ConnectNodeOutputToGraphOutput::GraphOutputName' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_ConnectNodeOutputToGraphOutput, NodeOutputHandle) == 0x000004, "Member 'MetaSoundBuilderBase_ConnectNodeOutputToGraphOutput::NodeOutputHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_ConnectNodeOutputToGraphOutput, outResult) == 0x000024, "Member 'MetaSoundBuilderBase_ConnectNodeOutputToGraphOutput::outResult' has a wrong offset!");

struct MetaSoundBuilderBase_ConnectNodes final
{
public:
	struct FMetaSoundBuilderNodeOutputHandle      NodeOutputHandle;
	struct FMetaSoundBuilderNodeInputHandle       NodeInputHandle;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_41[0x3];
};
static_assert(alignof(MetaSoundBuilderBase_ConnectNodes) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_ConnectNodes");
static_assert(sizeof(MetaSoundBuilderBase_ConnectNodes) == 0x000044, "Wrong size on MetaSoundBuilderBase_ConnectNodes");
static_assert(offsetof(MetaSoundBuilderBase_ConnectNodes, NodeOutputHandle) == 0x000000, "Member 'MetaSoundBuilderBase_ConnectNodes::NodeOutputHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_ConnectNodes, NodeInputHandle) == 0x000020, "Member 'MetaSoundBuilderBase_ConnectNodes::NodeInputHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_ConnectNodes, outResult) == 0x000040, "Member 'MetaSoundBuilderBase_ConnectNodes::outResult' has a wrong offset!");

struct MetaSoundBuilderBase_ConnectNodesByInterfaceBindings final
{
public:
	struct FMetaSoundNodeHandle                   FromNodeHandle;
	struct FMetaSoundNodeHandle                   ToNodeHandle;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_21[0x3];
};
static_assert(alignof(MetaSoundBuilderBase_ConnectNodesByInterfaceBindings) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_ConnectNodesByInterfaceBindings");
static_assert(sizeof(MetaSoundBuilderBase_ConnectNodesByInterfaceBindings) == 0x000024, "Wrong size on MetaSoundBuilderBase_ConnectNodesByInterfaceBindings");
static_assert(offsetof(MetaSoundBuilderBase_ConnectNodesByInterfaceBindings, FromNodeHandle) == 0x000000, "Member 'MetaSoundBuilderBase_ConnectNodesByInterfaceBindings::FromNodeHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_ConnectNodesByInterfaceBindings, ToNodeHandle) == 0x000010, "Member 'MetaSoundBuilderBase_ConnectNodesByInterfaceBindings::ToNodeHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_ConnectNodesByInterfaceBindings, outResult) == 0x000020, "Member 'MetaSoundBuilderBase_ConnectNodesByInterfaceBindings::outResult' has a wrong offset!");

struct MetaSoundBuilderBase_DisconnectNodeInput final
{
public:
	struct FMetaSoundBuilderNodeInputHandle       NodeInputHandle;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_21[0x3];
};
static_assert(alignof(MetaSoundBuilderBase_DisconnectNodeInput) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_DisconnectNodeInput");
static_assert(sizeof(MetaSoundBuilderBase_DisconnectNodeInput) == 0x000024, "Wrong size on MetaSoundBuilderBase_DisconnectNodeInput");
static_assert(offsetof(MetaSoundBuilderBase_DisconnectNodeInput, NodeInputHandle) == 0x000000, "Member 'MetaSoundBuilderBase_DisconnectNodeInput::NodeInputHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_DisconnectNodeInput, outResult) == 0x000020, "Member 'MetaSoundBuilderBase_DisconnectNodeInput::outResult' has a wrong offset!");

struct MetaSoundBuilderBase_DisconnectNodeOutput final
{
public:
	struct FMetaSoundBuilderNodeOutputHandle      NodeOutputHandle;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_21[0x3];
};
static_assert(alignof(MetaSoundBuilderBase_DisconnectNodeOutput) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_DisconnectNodeOutput");
static_assert(sizeof(MetaSoundBuilderBase_DisconnectNodeOutput) == 0x000024, "Wrong size on MetaSoundBuilderBase_DisconnectNodeOutput");
static_assert(offsetof(MetaSoundBuilderBase_DisconnectNodeOutput, NodeOutputHandle) == 0x000000, "Member 'MetaSoundBuilderBase_DisconnectNodeOutput::NodeOutputHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_DisconnectNodeOutput, outResult) == 0x000020, "Member 'MetaSoundBuilderBase_DisconnectNodeOutput::outResult' has a wrong offset!");

struct MetaSoundBuilderBase_DisconnectNodes final
{
public:
	struct FMetaSoundBuilderNodeOutputHandle      NodeOutputHandle;
	struct FMetaSoundBuilderNodeInputHandle       NodeInputHandle;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_41[0x3];
};
static_assert(alignof(MetaSoundBuilderBase_DisconnectNodes) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_DisconnectNodes");
static_assert(sizeof(MetaSoundBuilderBase_DisconnectNodes) == 0x000044, "Wrong size on MetaSoundBuilderBase_DisconnectNodes");
static_assert(offsetof(MetaSoundBuilderBase_DisconnectNodes, NodeOutputHandle) == 0x000000, "Member 'MetaSoundBuilderBase_DisconnectNodes::NodeOutputHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_DisconnectNodes, NodeInputHandle) == 0x000020, "Member 'MetaSoundBuilderBase_DisconnectNodes::NodeInputHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_DisconnectNodes, outResult) == 0x000040, "Member 'MetaSoundBuilderBase_DisconnectNodes::outResult' has a wrong offset!");

struct MetaSoundBuilderBase_DisconnectNodesByInterfaceBindings final
{
public:
	struct FMetaSoundNodeHandle                   FromNodeHandle;
	struct FMetaSoundNodeHandle                   ToNodeHandle;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_21[0x3];
};
static_assert(alignof(MetaSoundBuilderBase_DisconnectNodesByInterfaceBindings) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_DisconnectNodesByInterfaceBindings");
static_assert(sizeof(MetaSoundBuilderBase_DisconnectNodesByInterfaceBindings) == 0x000024, "Wrong size on MetaSoundBuilderBase_DisconnectNodesByInterfaceBindings");
static_assert(offsetof(MetaSoundBuilderBase_DisconnectNodesByInterfaceBindings, FromNodeHandle) == 0x000000, "Member 'MetaSoundBuilderBase_DisconnectNodesByInterfaceBindings::FromNodeHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_DisconnectNodesByInterfaceBindings, ToNodeHandle) == 0x000010, "Member 'MetaSoundBuilderBase_DisconnectNodesByInterfaceBindings::ToNodeHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_DisconnectNodesByInterfaceBindings, outResult) == 0x000020, "Member 'MetaSoundBuilderBase_DisconnectNodesByInterfaceBindings::outResult' has a wrong offset!");

struct MetaSoundBuilderBase_RemoveInterface final
{
public:
	class FName                                   InterfaceName;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(MetaSoundBuilderBase_RemoveInterface) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_RemoveInterface");
static_assert(sizeof(MetaSoundBuilderBase_RemoveInterface) == 0x000008, "Wrong size on MetaSoundBuilderBase_RemoveInterface");
static_assert(offsetof(MetaSoundBuilderBase_RemoveInterface, InterfaceName) == 0x000000, "Member 'MetaSoundBuilderBase_RemoveInterface::InterfaceName' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_RemoveInterface, outResult) == 0x000004, "Member 'MetaSoundBuilderBase_RemoveInterface::outResult' has a wrong offset!");

struct MetaSoundBuilderBase_RemoveNode final
{
public:
	struct FMetaSoundNodeHandle                   NodeHandle;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_11[0x3];
};
static_assert(alignof(MetaSoundBuilderBase_RemoveNode) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_RemoveNode");
static_assert(sizeof(MetaSoundBuilderBase_RemoveNode) == 0x000014, "Wrong size on MetaSoundBuilderBase_RemoveNode");
static_assert(offsetof(MetaSoundBuilderBase_RemoveNode, NodeHandle) == 0x000000, "Member 'MetaSoundBuilderBase_RemoveNode::NodeHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_RemoveNode, outResult) == 0x000010, "Member 'MetaSoundBuilderBase_RemoveNode::outResult' has a wrong offset!");

struct MetaSoundBuilderBase_SetNodeInputDefault final
{
public:
	struct FMetaSoundBuilderNodeInputHandle       NodeInputHandle;
	struct FMetasoundFrontendLiteral              Literal;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_79[0x7];
};
static_assert(alignof(MetaSoundBuilderBase_SetNodeInputDefault) == 0x000008, "Wrong alignment on MetaSoundBuilderBase_SetNodeInputDefault");
static_assert(sizeof(MetaSoundBuilderBase_SetNodeInputDefault) == 0x000080, "Wrong size on MetaSoundBuilderBase_SetNodeInputDefault");
static_assert(offsetof(MetaSoundBuilderBase_SetNodeInputDefault, NodeInputHandle) == 0x000000, "Member 'MetaSoundBuilderBase_SetNodeInputDefault::NodeInputHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_SetNodeInputDefault, Literal) == 0x000020, "Member 'MetaSoundBuilderBase_SetNodeInputDefault::Literal' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_SetNodeInputDefault, outResult) == 0x000078, "Member 'MetaSoundBuilderBase_SetNodeInputDefault::outResult' has a wrong offset!");

struct MetaSoundBuilderBase_ContainsNode final
{
public:
	struct FMetaSoundNodeHandle                   Node;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x3];
};
static_assert(alignof(MetaSoundBuilderBase_ContainsNode) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_ContainsNode");
static_assert(sizeof(MetaSoundBuilderBase_ContainsNode) == 0x000014, "Wrong size on MetaSoundBuilderBase_ContainsNode");
static_assert(offsetof(MetaSoundBuilderBase_ContainsNode, Node) == 0x000000, "Member 'MetaSoundBuilderBase_ContainsNode::Node' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_ContainsNode, ReturnValue) == 0x000010, "Member 'MetaSoundBuilderBase_ContainsNode::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderBase_ContainsNodeInput final
{
public:
	struct FMetaSoundBuilderNodeInputHandle       Input;
	bool                                          ReturnValue;
	uint8                                         Pad_21[0x3];
};
static_assert(alignof(MetaSoundBuilderBase_ContainsNodeInput) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_ContainsNodeInput");
static_assert(sizeof(MetaSoundBuilderBase_ContainsNodeInput) == 0x000024, "Wrong size on MetaSoundBuilderBase_ContainsNodeInput");
static_assert(offsetof(MetaSoundBuilderBase_ContainsNodeInput, Input) == 0x000000, "Member 'MetaSoundBuilderBase_ContainsNodeInput::Input' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_ContainsNodeInput, ReturnValue) == 0x000020, "Member 'MetaSoundBuilderBase_ContainsNodeInput::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderBase_ContainsNodeOutput final
{
public:
	struct FMetaSoundBuilderNodeOutputHandle      Output;
	bool                                          ReturnValue;
	uint8                                         Pad_21[0x3];
};
static_assert(alignof(MetaSoundBuilderBase_ContainsNodeOutput) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_ContainsNodeOutput");
static_assert(sizeof(MetaSoundBuilderBase_ContainsNodeOutput) == 0x000024, "Wrong size on MetaSoundBuilderBase_ContainsNodeOutput");
static_assert(offsetof(MetaSoundBuilderBase_ContainsNodeOutput, Output) == 0x000000, "Member 'MetaSoundBuilderBase_ContainsNodeOutput::Output' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_ContainsNodeOutput, ReturnValue) == 0x000020, "Member 'MetaSoundBuilderBase_ContainsNodeOutput::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderBase_FindGraphInputNode final
{
public:
	class FName                                   InputName;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_5[0x3];
	struct FMetaSoundNodeHandle                   ReturnValue;
};
static_assert(alignof(MetaSoundBuilderBase_FindGraphInputNode) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_FindGraphInputNode");
static_assert(sizeof(MetaSoundBuilderBase_FindGraphInputNode) == 0x000018, "Wrong size on MetaSoundBuilderBase_FindGraphInputNode");
static_assert(offsetof(MetaSoundBuilderBase_FindGraphInputNode, InputName) == 0x000000, "Member 'MetaSoundBuilderBase_FindGraphInputNode::InputName' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindGraphInputNode, outResult) == 0x000004, "Member 'MetaSoundBuilderBase_FindGraphInputNode::outResult' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindGraphInputNode, ReturnValue) == 0x000008, "Member 'MetaSoundBuilderBase_FindGraphInputNode::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderBase_FindGraphOutputNode final
{
public:
	class FName                                   OutputName;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_5[0x3];
	struct FMetaSoundNodeHandle                   ReturnValue;
};
static_assert(alignof(MetaSoundBuilderBase_FindGraphOutputNode) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_FindGraphOutputNode");
static_assert(sizeof(MetaSoundBuilderBase_FindGraphOutputNode) == 0x000018, "Wrong size on MetaSoundBuilderBase_FindGraphOutputNode");
static_assert(offsetof(MetaSoundBuilderBase_FindGraphOutputNode, OutputName) == 0x000000, "Member 'MetaSoundBuilderBase_FindGraphOutputNode::OutputName' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindGraphOutputNode, outResult) == 0x000004, "Member 'MetaSoundBuilderBase_FindGraphOutputNode::outResult' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindGraphOutputNode, ReturnValue) == 0x000008, "Member 'MetaSoundBuilderBase_FindGraphOutputNode::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderBase_FindInterfaceInputNodes final
{
public:
	class FName                                   InterfaceName;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_5[0x3];
	TArray<struct FMetaSoundNodeHandle>           ReturnValue;
};
static_assert(alignof(MetaSoundBuilderBase_FindInterfaceInputNodes) == 0x000008, "Wrong alignment on MetaSoundBuilderBase_FindInterfaceInputNodes");
static_assert(sizeof(MetaSoundBuilderBase_FindInterfaceInputNodes) == 0x000018, "Wrong size on MetaSoundBuilderBase_FindInterfaceInputNodes");
static_assert(offsetof(MetaSoundBuilderBase_FindInterfaceInputNodes, InterfaceName) == 0x000000, "Member 'MetaSoundBuilderBase_FindInterfaceInputNodes::InterfaceName' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindInterfaceInputNodes, outResult) == 0x000004, "Member 'MetaSoundBuilderBase_FindInterfaceInputNodes::outResult' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindInterfaceInputNodes, ReturnValue) == 0x000008, "Member 'MetaSoundBuilderBase_FindInterfaceInputNodes::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderBase_FindInterfaceOutputNodes final
{
public:
	class FName                                   InterfaceName;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_5[0x3];
	TArray<struct FMetaSoundNodeHandle>           ReturnValue;
};
static_assert(alignof(MetaSoundBuilderBase_FindInterfaceOutputNodes) == 0x000008, "Wrong alignment on MetaSoundBuilderBase_FindInterfaceOutputNodes");
static_assert(sizeof(MetaSoundBuilderBase_FindInterfaceOutputNodes) == 0x000018, "Wrong size on MetaSoundBuilderBase_FindInterfaceOutputNodes");
static_assert(offsetof(MetaSoundBuilderBase_FindInterfaceOutputNodes, InterfaceName) == 0x000000, "Member 'MetaSoundBuilderBase_FindInterfaceOutputNodes::InterfaceName' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindInterfaceOutputNodes, outResult) == 0x000004, "Member 'MetaSoundBuilderBase_FindInterfaceOutputNodes::outResult' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindInterfaceOutputNodes, ReturnValue) == 0x000008, "Member 'MetaSoundBuilderBase_FindInterfaceOutputNodes::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderBase_FindNodeClassVersion final
{
public:
	struct FMetaSoundNodeHandle                   NodeHandle;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_11[0x3];
	struct FMetasoundFrontendVersion              ReturnValue;
};
static_assert(alignof(MetaSoundBuilderBase_FindNodeClassVersion) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_FindNodeClassVersion");
static_assert(sizeof(MetaSoundBuilderBase_FindNodeClassVersion) == 0x000020, "Wrong size on MetaSoundBuilderBase_FindNodeClassVersion");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeClassVersion, NodeHandle) == 0x000000, "Member 'MetaSoundBuilderBase_FindNodeClassVersion::NodeHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeClassVersion, outResult) == 0x000010, "Member 'MetaSoundBuilderBase_FindNodeClassVersion::outResult' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeClassVersion, ReturnValue) == 0x000014, "Member 'MetaSoundBuilderBase_FindNodeClassVersion::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderBase_FindNodeInputByName final
{
public:
	struct FMetaSoundNodeHandle                   NodeHandle;
	class FName                                   InputName;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_15[0x3];
	struct FMetaSoundBuilderNodeInputHandle       ReturnValue;
};
static_assert(alignof(MetaSoundBuilderBase_FindNodeInputByName) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_FindNodeInputByName");
static_assert(sizeof(MetaSoundBuilderBase_FindNodeInputByName) == 0x000038, "Wrong size on MetaSoundBuilderBase_FindNodeInputByName");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeInputByName, NodeHandle) == 0x000000, "Member 'MetaSoundBuilderBase_FindNodeInputByName::NodeHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeInputByName, InputName) == 0x000010, "Member 'MetaSoundBuilderBase_FindNodeInputByName::InputName' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeInputByName, outResult) == 0x000014, "Member 'MetaSoundBuilderBase_FindNodeInputByName::outResult' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeInputByName, ReturnValue) == 0x000018, "Member 'MetaSoundBuilderBase_FindNodeInputByName::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderBase_FindNodeInputParent final
{
public:
	struct FMetaSoundBuilderNodeInputHandle       InputHandle;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_21[0x3];
	struct FMetaSoundNodeHandle                   ReturnValue;
};
static_assert(alignof(MetaSoundBuilderBase_FindNodeInputParent) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_FindNodeInputParent");
static_assert(sizeof(MetaSoundBuilderBase_FindNodeInputParent) == 0x000034, "Wrong size on MetaSoundBuilderBase_FindNodeInputParent");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeInputParent, InputHandle) == 0x000000, "Member 'MetaSoundBuilderBase_FindNodeInputParent::InputHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeInputParent, outResult) == 0x000020, "Member 'MetaSoundBuilderBase_FindNodeInputParent::outResult' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeInputParent, ReturnValue) == 0x000024, "Member 'MetaSoundBuilderBase_FindNodeInputParent::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderBase_FindNodeInputs final
{
public:
	struct FMetaSoundNodeHandle                   NodeHandle;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_11[0x7];
	TArray<struct FMetaSoundBuilderNodeInputHandle> ReturnValue;
};
static_assert(alignof(MetaSoundBuilderBase_FindNodeInputs) == 0x000008, "Wrong alignment on MetaSoundBuilderBase_FindNodeInputs");
static_assert(sizeof(MetaSoundBuilderBase_FindNodeInputs) == 0x000028, "Wrong size on MetaSoundBuilderBase_FindNodeInputs");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeInputs, NodeHandle) == 0x000000, "Member 'MetaSoundBuilderBase_FindNodeInputs::NodeHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeInputs, outResult) == 0x000010, "Member 'MetaSoundBuilderBase_FindNodeInputs::outResult' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeInputs, ReturnValue) == 0x000018, "Member 'MetaSoundBuilderBase_FindNodeInputs::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderBase_FindNodeInputsByDataType final
{
public:
	struct FMetaSoundNodeHandle                   NodeHandle;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_11[0x3];
	class FName                                   DataType;
	TArray<struct FMetaSoundBuilderNodeInputHandle> ReturnValue;
};
static_assert(alignof(MetaSoundBuilderBase_FindNodeInputsByDataType) == 0x000008, "Wrong alignment on MetaSoundBuilderBase_FindNodeInputsByDataType");
static_assert(sizeof(MetaSoundBuilderBase_FindNodeInputsByDataType) == 0x000028, "Wrong size on MetaSoundBuilderBase_FindNodeInputsByDataType");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeInputsByDataType, NodeHandle) == 0x000000, "Member 'MetaSoundBuilderBase_FindNodeInputsByDataType::NodeHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeInputsByDataType, outResult) == 0x000010, "Member 'MetaSoundBuilderBase_FindNodeInputsByDataType::outResult' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeInputsByDataType, DataType) == 0x000014, "Member 'MetaSoundBuilderBase_FindNodeInputsByDataType::DataType' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeInputsByDataType, ReturnValue) == 0x000018, "Member 'MetaSoundBuilderBase_FindNodeInputsByDataType::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderBase_FindNodeOutputByName final
{
public:
	struct FMetaSoundNodeHandle                   NodeHandle;
	class FName                                   OutputName;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_15[0x3];
	struct FMetaSoundBuilderNodeOutputHandle      ReturnValue;
};
static_assert(alignof(MetaSoundBuilderBase_FindNodeOutputByName) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_FindNodeOutputByName");
static_assert(sizeof(MetaSoundBuilderBase_FindNodeOutputByName) == 0x000038, "Wrong size on MetaSoundBuilderBase_FindNodeOutputByName");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeOutputByName, NodeHandle) == 0x000000, "Member 'MetaSoundBuilderBase_FindNodeOutputByName::NodeHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeOutputByName, OutputName) == 0x000010, "Member 'MetaSoundBuilderBase_FindNodeOutputByName::OutputName' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeOutputByName, outResult) == 0x000014, "Member 'MetaSoundBuilderBase_FindNodeOutputByName::outResult' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeOutputByName, ReturnValue) == 0x000018, "Member 'MetaSoundBuilderBase_FindNodeOutputByName::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderBase_FindNodeOutputParent final
{
public:
	struct FMetaSoundBuilderNodeOutputHandle      OutputHandle;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_21[0x3];
	struct FMetaSoundNodeHandle                   ReturnValue;
};
static_assert(alignof(MetaSoundBuilderBase_FindNodeOutputParent) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_FindNodeOutputParent");
static_assert(sizeof(MetaSoundBuilderBase_FindNodeOutputParent) == 0x000034, "Wrong size on MetaSoundBuilderBase_FindNodeOutputParent");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeOutputParent, OutputHandle) == 0x000000, "Member 'MetaSoundBuilderBase_FindNodeOutputParent::OutputHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeOutputParent, outResult) == 0x000020, "Member 'MetaSoundBuilderBase_FindNodeOutputParent::outResult' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeOutputParent, ReturnValue) == 0x000024, "Member 'MetaSoundBuilderBase_FindNodeOutputParent::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderBase_FindNodeOutputs final
{
public:
	struct FMetaSoundNodeHandle                   NodeHandle;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_11[0x7];
	TArray<struct FMetaSoundBuilderNodeOutputHandle> ReturnValue;
};
static_assert(alignof(MetaSoundBuilderBase_FindNodeOutputs) == 0x000008, "Wrong alignment on MetaSoundBuilderBase_FindNodeOutputs");
static_assert(sizeof(MetaSoundBuilderBase_FindNodeOutputs) == 0x000028, "Wrong size on MetaSoundBuilderBase_FindNodeOutputs");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeOutputs, NodeHandle) == 0x000000, "Member 'MetaSoundBuilderBase_FindNodeOutputs::NodeHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeOutputs, outResult) == 0x000010, "Member 'MetaSoundBuilderBase_FindNodeOutputs::outResult' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeOutputs, ReturnValue) == 0x000018, "Member 'MetaSoundBuilderBase_FindNodeOutputs::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderBase_FindNodeOutputsByDataType final
{
public:
	struct FMetaSoundNodeHandle                   NodeHandle;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_11[0x3];
	class FName                                   DataType;
	TArray<struct FMetaSoundBuilderNodeOutputHandle> ReturnValue;
};
static_assert(alignof(MetaSoundBuilderBase_FindNodeOutputsByDataType) == 0x000008, "Wrong alignment on MetaSoundBuilderBase_FindNodeOutputsByDataType");
static_assert(sizeof(MetaSoundBuilderBase_FindNodeOutputsByDataType) == 0x000028, "Wrong size on MetaSoundBuilderBase_FindNodeOutputsByDataType");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeOutputsByDataType, NodeHandle) == 0x000000, "Member 'MetaSoundBuilderBase_FindNodeOutputsByDataType::NodeHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeOutputsByDataType, outResult) == 0x000010, "Member 'MetaSoundBuilderBase_FindNodeOutputsByDataType::outResult' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeOutputsByDataType, DataType) == 0x000014, "Member 'MetaSoundBuilderBase_FindNodeOutputsByDataType::DataType' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_FindNodeOutputsByDataType, ReturnValue) == 0x000018, "Member 'MetaSoundBuilderBase_FindNodeOutputsByDataType::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderBase_GetNodeInputData final
{
public:
	struct FMetaSoundBuilderNodeInputHandle       InputHandle;
	class FName                                   Name_0;
	class FName                                   DataType;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_29[0x3];
};
static_assert(alignof(MetaSoundBuilderBase_GetNodeInputData) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_GetNodeInputData");
static_assert(sizeof(MetaSoundBuilderBase_GetNodeInputData) == 0x00002C, "Wrong size on MetaSoundBuilderBase_GetNodeInputData");
static_assert(offsetof(MetaSoundBuilderBase_GetNodeInputData, InputHandle) == 0x000000, "Member 'MetaSoundBuilderBase_GetNodeInputData::InputHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_GetNodeInputData, Name_0) == 0x000020, "Member 'MetaSoundBuilderBase_GetNodeInputData::Name_0' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_GetNodeInputData, DataType) == 0x000024, "Member 'MetaSoundBuilderBase_GetNodeInputData::DataType' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_GetNodeInputData, outResult) == 0x000028, "Member 'MetaSoundBuilderBase_GetNodeInputData::outResult' has a wrong offset!");

struct MetaSoundBuilderBase_GetNodeOutputData final
{
public:
	struct FMetaSoundBuilderNodeOutputHandle      OutputHandle;
	class FName                                   Name_0;
	class FName                                   DataType;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_29[0x3];
};
static_assert(alignof(MetaSoundBuilderBase_GetNodeOutputData) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_GetNodeOutputData");
static_assert(sizeof(MetaSoundBuilderBase_GetNodeOutputData) == 0x00002C, "Wrong size on MetaSoundBuilderBase_GetNodeOutputData");
static_assert(offsetof(MetaSoundBuilderBase_GetNodeOutputData, OutputHandle) == 0x000000, "Member 'MetaSoundBuilderBase_GetNodeOutputData::OutputHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_GetNodeOutputData, Name_0) == 0x000020, "Member 'MetaSoundBuilderBase_GetNodeOutputData::Name_0' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_GetNodeOutputData, DataType) == 0x000024, "Member 'MetaSoundBuilderBase_GetNodeOutputData::DataType' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_GetNodeOutputData, outResult) == 0x000028, "Member 'MetaSoundBuilderBase_GetNodeOutputData::outResult' has a wrong offset!");

struct MetaSoundBuilderBase_InterfaceIsDeclared final
{
public:
	class FName                                   InterfaceName;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(MetaSoundBuilderBase_InterfaceIsDeclared) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_InterfaceIsDeclared");
static_assert(sizeof(MetaSoundBuilderBase_InterfaceIsDeclared) == 0x000008, "Wrong size on MetaSoundBuilderBase_InterfaceIsDeclared");
static_assert(offsetof(MetaSoundBuilderBase_InterfaceIsDeclared, InterfaceName) == 0x000000, "Member 'MetaSoundBuilderBase_InterfaceIsDeclared::InterfaceName' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_InterfaceIsDeclared, ReturnValue) == 0x000004, "Member 'MetaSoundBuilderBase_InterfaceIsDeclared::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderBase_NodeInputIsConnected final
{
public:
	struct FMetaSoundBuilderNodeInputHandle       InputHandle;
	bool                                          ReturnValue;
	uint8                                         Pad_21[0x3];
};
static_assert(alignof(MetaSoundBuilderBase_NodeInputIsConnected) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_NodeInputIsConnected");
static_assert(sizeof(MetaSoundBuilderBase_NodeInputIsConnected) == 0x000024, "Wrong size on MetaSoundBuilderBase_NodeInputIsConnected");
static_assert(offsetof(MetaSoundBuilderBase_NodeInputIsConnected, InputHandle) == 0x000000, "Member 'MetaSoundBuilderBase_NodeInputIsConnected::InputHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_NodeInputIsConnected, ReturnValue) == 0x000020, "Member 'MetaSoundBuilderBase_NodeInputIsConnected::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderBase_NodeOutputIsConnected final
{
public:
	struct FMetaSoundBuilderNodeOutputHandle      OutputHandle;
	bool                                          ReturnValue;
	uint8                                         Pad_21[0x3];
};
static_assert(alignof(MetaSoundBuilderBase_NodeOutputIsConnected) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_NodeOutputIsConnected");
static_assert(sizeof(MetaSoundBuilderBase_NodeOutputIsConnected) == 0x000024, "Wrong size on MetaSoundBuilderBase_NodeOutputIsConnected");
static_assert(offsetof(MetaSoundBuilderBase_NodeOutputIsConnected, OutputHandle) == 0x000000, "Member 'MetaSoundBuilderBase_NodeOutputIsConnected::OutputHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_NodeOutputIsConnected, ReturnValue) == 0x000020, "Member 'MetaSoundBuilderBase_NodeOutputIsConnected::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderBase_NodesAreConnected final
{
public:
	struct FMetaSoundBuilderNodeOutputHandle      OutputHandle;
	struct FMetaSoundBuilderNodeInputHandle       InputHandle;
	bool                                          ReturnValue;
	uint8                                         Pad_41[0x3];
};
static_assert(alignof(MetaSoundBuilderBase_NodesAreConnected) == 0x000004, "Wrong alignment on MetaSoundBuilderBase_NodesAreConnected");
static_assert(sizeof(MetaSoundBuilderBase_NodesAreConnected) == 0x000044, "Wrong size on MetaSoundBuilderBase_NodesAreConnected");
static_assert(offsetof(MetaSoundBuilderBase_NodesAreConnected, OutputHandle) == 0x000000, "Member 'MetaSoundBuilderBase_NodesAreConnected::OutputHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_NodesAreConnected, InputHandle) == 0x000020, "Member 'MetaSoundBuilderBase_NodesAreConnected::InputHandle' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderBase_NodesAreConnected, ReturnValue) == 0x000040, "Member 'MetaSoundBuilderBase_NodesAreConnected::ReturnValue' has a wrong offset!");

struct MetaSoundPatchBuilder_Build final
{
public:
	class UObject*                                Parent;
	struct FMetaSoundBuilderOptions               Options;
	TScriptInterface<class IMetaSoundDocumentInterface> ReturnValue;
};
static_assert(alignof(MetaSoundPatchBuilder_Build) == 0x000008, "Wrong alignment on MetaSoundPatchBuilder_Build");
static_assert(sizeof(MetaSoundPatchBuilder_Build) == 0x000030, "Wrong size on MetaSoundPatchBuilder_Build");
static_assert(offsetof(MetaSoundPatchBuilder_Build, Parent) == 0x000000, "Member 'MetaSoundPatchBuilder_Build::Parent' has a wrong offset!");
static_assert(offsetof(MetaSoundPatchBuilder_Build, Options) == 0x000008, "Member 'MetaSoundPatchBuilder_Build::Options' has a wrong offset!");
static_assert(offsetof(MetaSoundPatchBuilder_Build, ReturnValue) == 0x000020, "Member 'MetaSoundPatchBuilder_Build::ReturnValue' has a wrong offset!");

struct MetaSoundSourceBuilder_Audition final
{
public:
	class UObject*                                Parent;
	class UAudioComponent*                        AudioComponent;
	TDelegate<void(class UMetasoundGeneratorHandle* GeneratorHandle)> OnCreateGenerator;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(MetaSoundSourceBuilder_Audition) == 0x000008, "Wrong alignment on MetaSoundSourceBuilder_Audition");
static_assert(sizeof(MetaSoundSourceBuilder_Audition) == 0x000020, "Wrong size on MetaSoundSourceBuilder_Audition");
static_assert(offsetof(MetaSoundSourceBuilder_Audition, Parent) == 0x000000, "Member 'MetaSoundSourceBuilder_Audition::Parent' has a wrong offset!");
static_assert(offsetof(MetaSoundSourceBuilder_Audition, AudioComponent) == 0x000008, "Member 'MetaSoundSourceBuilder_Audition::AudioComponent' has a wrong offset!");
static_assert(offsetof(MetaSoundSourceBuilder_Audition, OnCreateGenerator) == 0x000010, "Member 'MetaSoundSourceBuilder_Audition::OnCreateGenerator' has a wrong offset!");

struct MetaSoundSourceBuilder_SetFormat final
{
public:
	EMetaSoundOutputAudioFormat                   OutputFormat;
	EMetaSoundBuilderResult                       outResult;
};
static_assert(alignof(MetaSoundSourceBuilder_SetFormat) == 0x000001, "Wrong alignment on MetaSoundSourceBuilder_SetFormat");
static_assert(sizeof(MetaSoundSourceBuilder_SetFormat) == 0x000002, "Wrong size on MetaSoundSourceBuilder_SetFormat");
static_assert(offsetof(MetaSoundSourceBuilder_SetFormat, OutputFormat) == 0x000000, "Member 'MetaSoundSourceBuilder_SetFormat::OutputFormat' has a wrong offset!");
static_assert(offsetof(MetaSoundSourceBuilder_SetFormat, outResult) == 0x000001, "Member 'MetaSoundSourceBuilder_SetFormat::outResult' has a wrong offset!");

struct MetaSoundSourceBuilder_Build final
{
public:
	class UObject*                                Parent;
	struct FMetaSoundBuilderOptions               Options;
	TScriptInterface<class IMetaSoundDocumentInterface> ReturnValue;
};
static_assert(alignof(MetaSoundSourceBuilder_Build) == 0x000008, "Wrong alignment on MetaSoundSourceBuilder_Build");
static_assert(sizeof(MetaSoundSourceBuilder_Build) == 0x000030, "Wrong size on MetaSoundSourceBuilder_Build");
static_assert(offsetof(MetaSoundSourceBuilder_Build, Parent) == 0x000000, "Member 'MetaSoundSourceBuilder_Build::Parent' has a wrong offset!");
static_assert(offsetof(MetaSoundSourceBuilder_Build, Options) == 0x000008, "Member 'MetaSoundSourceBuilder_Build::Options' has a wrong offset!");
static_assert(offsetof(MetaSoundSourceBuilder_Build, ReturnValue) == 0x000020, "Member 'MetaSoundSourceBuilder_Build::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral final
{
public:
	TArray<bool>                                  Value;
	class FName                                   DataType;
	uint8                                         Pad_14[0x4];
	struct FMetasoundFrontendLiteral              ReturnValue;
};
static_assert(alignof(MetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral) == 0x000008, "Wrong alignment on MetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral");
static_assert(sizeof(MetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral) == 0x000070, "Wrong size on MetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral, Value) == 0x000000, "Member 'MetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral::Value' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral, DataType) == 0x000010, "Member 'MetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral::DataType' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral, ReturnValue) == 0x000018, "Member 'MetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral final
{
public:
	bool                                          Value;
	uint8                                         Pad_1[0x3];
	class FName                                   DataType;
	struct FMetasoundFrontendLiteral              ReturnValue;
};
static_assert(alignof(MetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral) == 0x000008, "Wrong alignment on MetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral");
static_assert(sizeof(MetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral) == 0x000060, "Wrong size on MetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral, Value) == 0x000000, "Member 'MetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral::Value' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral, DataType) == 0x000004, "Member 'MetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral::DataType' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral, ReturnValue) == 0x000008, "Member 'MetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral final
{
public:
	TArray<float>                                 Value;
	class FName                                   DataType;
	uint8                                         Pad_14[0x4];
	struct FMetasoundFrontendLiteral              ReturnValue;
};
static_assert(alignof(MetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral) == 0x000008, "Wrong alignment on MetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral");
static_assert(sizeof(MetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral) == 0x000070, "Wrong size on MetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral, Value) == 0x000000, "Member 'MetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral::Value' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral, DataType) == 0x000010, "Member 'MetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral::DataType' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral, ReturnValue) == 0x000018, "Member 'MetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral final
{
public:
	float                                         Value;
	class FName                                   DataType;
	struct FMetasoundFrontendLiteral              ReturnValue;
};
static_assert(alignof(MetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral) == 0x000008, "Wrong alignment on MetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral");
static_assert(sizeof(MetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral) == 0x000060, "Wrong size on MetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral, Value) == 0x000000, "Member 'MetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral::Value' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral, DataType) == 0x000004, "Member 'MetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral::DataType' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral, ReturnValue) == 0x000008, "Member 'MetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral final
{
public:
	TArray<int32>                                 Value;
	class FName                                   DataType;
	uint8                                         Pad_14[0x4];
	struct FMetasoundFrontendLiteral              ReturnValue;
};
static_assert(alignof(MetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral) == 0x000008, "Wrong alignment on MetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral");
static_assert(sizeof(MetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral) == 0x000070, "Wrong size on MetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral, Value) == 0x000000, "Member 'MetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral::Value' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral, DataType) == 0x000010, "Member 'MetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral::DataType' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral, ReturnValue) == 0x000018, "Member 'MetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral final
{
public:
	int32                                         Value;
	class FName                                   DataType;
	struct FMetasoundFrontendLiteral              ReturnValue;
};
static_assert(alignof(MetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral) == 0x000008, "Wrong alignment on MetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral");
static_assert(sizeof(MetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral) == 0x000060, "Wrong size on MetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral, Value) == 0x000000, "Member 'MetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral::Value' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral, DataType) == 0x000004, "Member 'MetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral::DataType' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral, ReturnValue) == 0x000008, "Member 'MetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam final
{
public:
	struct FAudioParameter                        Param;
	struct FMetasoundFrontendLiteral              ReturnValue;
};
static_assert(alignof(MetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam) == 0x000008, "Wrong alignment on MetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam");
static_assert(sizeof(MetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam) == 0x0000E8, "Wrong size on MetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam, Param) == 0x000000, "Member 'MetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam::Param' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam, ReturnValue) == 0x000090, "Member 'MetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral final
{
public:
	TArray<class UObject*>                        Value;
	struct FMetasoundFrontendLiteral              ReturnValue;
};
static_assert(alignof(MetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral) == 0x000008, "Wrong alignment on MetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral");
static_assert(sizeof(MetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral) == 0x000068, "Wrong size on MetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral, Value) == 0x000000, "Member 'MetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral::Value' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral, ReturnValue) == 0x000010, "Member 'MetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral final
{
public:
	class UObject*                                Value;
	struct FMetasoundFrontendLiteral              ReturnValue;
};
static_assert(alignof(MetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral) == 0x000008, "Wrong alignment on MetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral");
static_assert(sizeof(MetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral) == 0x000060, "Wrong size on MetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral, Value) == 0x000000, "Member 'MetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral::Value' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral, ReturnValue) == 0x000008, "Member 'MetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderSubsystem_CreatePatchBuilder final
{
public:
	class FName                                   BuilderName;
	EMetaSoundBuilderResult                       outResult;
	uint8                                         Pad_5[0x3];
	class UMetaSoundPatchBuilder*                 ReturnValue;
};
static_assert(alignof(MetaSoundBuilderSubsystem_CreatePatchBuilder) == 0x000008, "Wrong alignment on MetaSoundBuilderSubsystem_CreatePatchBuilder");
static_assert(sizeof(MetaSoundBuilderSubsystem_CreatePatchBuilder) == 0x000010, "Wrong size on MetaSoundBuilderSubsystem_CreatePatchBuilder");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreatePatchBuilder, BuilderName) == 0x000000, "Member 'MetaSoundBuilderSubsystem_CreatePatchBuilder::BuilderName' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreatePatchBuilder, outResult) == 0x000004, "Member 'MetaSoundBuilderSubsystem_CreatePatchBuilder::outResult' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreatePatchBuilder, ReturnValue) == 0x000008, "Member 'MetaSoundBuilderSubsystem_CreatePatchBuilder::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderSubsystem_CreateSourceBuilder final
{
public:
	class FName                                   BuilderName;
	struct FMetaSoundBuilderNodeOutputHandle      OnPlayNodeOutput;
	struct FMetaSoundBuilderNodeInputHandle       OnFinishedNodeInput;
	uint8                                         Pad_44[0x4];
	TArray<struct FMetaSoundBuilderNodeInputHandle> AudioOutNodeInputs;
	EMetaSoundBuilderResult                       outResult;
	EMetaSoundOutputAudioFormat                   OutputFormat;
	bool                                          bIsOneShot;
	uint8                                         Pad_5B[0x5];
	class UMetaSoundSourceBuilder*                ReturnValue;
};
static_assert(alignof(MetaSoundBuilderSubsystem_CreateSourceBuilder) == 0x000008, "Wrong alignment on MetaSoundBuilderSubsystem_CreateSourceBuilder");
static_assert(sizeof(MetaSoundBuilderSubsystem_CreateSourceBuilder) == 0x000068, "Wrong size on MetaSoundBuilderSubsystem_CreateSourceBuilder");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateSourceBuilder, BuilderName) == 0x000000, "Member 'MetaSoundBuilderSubsystem_CreateSourceBuilder::BuilderName' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateSourceBuilder, OnPlayNodeOutput) == 0x000004, "Member 'MetaSoundBuilderSubsystem_CreateSourceBuilder::OnPlayNodeOutput' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateSourceBuilder, OnFinishedNodeInput) == 0x000024, "Member 'MetaSoundBuilderSubsystem_CreateSourceBuilder::OnFinishedNodeInput' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateSourceBuilder, AudioOutNodeInputs) == 0x000048, "Member 'MetaSoundBuilderSubsystem_CreateSourceBuilder::AudioOutNodeInputs' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateSourceBuilder, outResult) == 0x000058, "Member 'MetaSoundBuilderSubsystem_CreateSourceBuilder::outResult' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateSourceBuilder, OutputFormat) == 0x000059, "Member 'MetaSoundBuilderSubsystem_CreateSourceBuilder::OutputFormat' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateSourceBuilder, bIsOneShot) == 0x00005A, "Member 'MetaSoundBuilderSubsystem_CreateSourceBuilder::bIsOneShot' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateSourceBuilder, ReturnValue) == 0x000060, "Member 'MetaSoundBuilderSubsystem_CreateSourceBuilder::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral final
{
public:
	TArray<class FString>                         Value;
	class FName                                   DataType;
	uint8                                         Pad_14[0x4];
	struct FMetasoundFrontendLiteral              ReturnValue;
};
static_assert(alignof(MetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral) == 0x000008, "Wrong alignment on MetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral");
static_assert(sizeof(MetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral) == 0x000070, "Wrong size on MetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral, Value) == 0x000000, "Member 'MetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral::Value' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral, DataType) == 0x000010, "Member 'MetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral::DataType' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral, ReturnValue) == 0x000018, "Member 'MetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral final
{
public:
	class FString                                 Value;
	class FName                                   DataType;
	uint8                                         Pad_14[0x4];
	struct FMetasoundFrontendLiteral              ReturnValue;
};
static_assert(alignof(MetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral) == 0x000008, "Wrong alignment on MetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral");
static_assert(sizeof(MetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral) == 0x000070, "Wrong size on MetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral, Value) == 0x000000, "Member 'MetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral::Value' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral, DataType) == 0x000010, "Member 'MetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral::DataType' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral, ReturnValue) == 0x000018, "Member 'MetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderSubsystem_FindPatchBuilder final
{
public:
	class FName                                   BuilderName;
	uint8                                         Pad_4[0x4];
	class UMetaSoundPatchBuilder*                 ReturnValue;
};
static_assert(alignof(MetaSoundBuilderSubsystem_FindPatchBuilder) == 0x000008, "Wrong alignment on MetaSoundBuilderSubsystem_FindPatchBuilder");
static_assert(sizeof(MetaSoundBuilderSubsystem_FindPatchBuilder) == 0x000010, "Wrong size on MetaSoundBuilderSubsystem_FindPatchBuilder");
static_assert(offsetof(MetaSoundBuilderSubsystem_FindPatchBuilder, BuilderName) == 0x000000, "Member 'MetaSoundBuilderSubsystem_FindPatchBuilder::BuilderName' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_FindPatchBuilder, ReturnValue) == 0x000008, "Member 'MetaSoundBuilderSubsystem_FindPatchBuilder::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderSubsystem_FindSourceBuilder final
{
public:
	class FName                                   BuilderName;
	uint8                                         Pad_4[0x4];
	class UMetaSoundSourceBuilder*                ReturnValue;
};
static_assert(alignof(MetaSoundBuilderSubsystem_FindSourceBuilder) == 0x000008, "Wrong alignment on MetaSoundBuilderSubsystem_FindSourceBuilder");
static_assert(sizeof(MetaSoundBuilderSubsystem_FindSourceBuilder) == 0x000010, "Wrong size on MetaSoundBuilderSubsystem_FindSourceBuilder");
static_assert(offsetof(MetaSoundBuilderSubsystem_FindSourceBuilder, BuilderName) == 0x000000, "Member 'MetaSoundBuilderSubsystem_FindSourceBuilder::BuilderName' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_FindSourceBuilder, ReturnValue) == 0x000008, "Member 'MetaSoundBuilderSubsystem_FindSourceBuilder::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderSubsystem_RegisterPatchBuilder final
{
public:
	class FName                                   BuilderName;
	uint8                                         Pad_4[0x4];
	class UMetaSoundPatchBuilder*                 Builder;
};
static_assert(alignof(MetaSoundBuilderSubsystem_RegisterPatchBuilder) == 0x000008, "Wrong alignment on MetaSoundBuilderSubsystem_RegisterPatchBuilder");
static_assert(sizeof(MetaSoundBuilderSubsystem_RegisterPatchBuilder) == 0x000010, "Wrong size on MetaSoundBuilderSubsystem_RegisterPatchBuilder");
static_assert(offsetof(MetaSoundBuilderSubsystem_RegisterPatchBuilder, BuilderName) == 0x000000, "Member 'MetaSoundBuilderSubsystem_RegisterPatchBuilder::BuilderName' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_RegisterPatchBuilder, Builder) == 0x000008, "Member 'MetaSoundBuilderSubsystem_RegisterPatchBuilder::Builder' has a wrong offset!");

struct MetaSoundBuilderSubsystem_RegisterSourceBuilder final
{
public:
	class FName                                   BuilderName;
	uint8                                         Pad_4[0x4];
	class UMetaSoundSourceBuilder*                Builder;
};
static_assert(alignof(MetaSoundBuilderSubsystem_RegisterSourceBuilder) == 0x000008, "Wrong alignment on MetaSoundBuilderSubsystem_RegisterSourceBuilder");
static_assert(sizeof(MetaSoundBuilderSubsystem_RegisterSourceBuilder) == 0x000010, "Wrong size on MetaSoundBuilderSubsystem_RegisterSourceBuilder");
static_assert(offsetof(MetaSoundBuilderSubsystem_RegisterSourceBuilder, BuilderName) == 0x000000, "Member 'MetaSoundBuilderSubsystem_RegisterSourceBuilder::BuilderName' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_RegisterSourceBuilder, Builder) == 0x000008, "Member 'MetaSoundBuilderSubsystem_RegisterSourceBuilder::Builder' has a wrong offset!");

struct MetaSoundBuilderSubsystem_UnregisterPatchBuilder final
{
public:
	class FName                                   BuilderName;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(MetaSoundBuilderSubsystem_UnregisterPatchBuilder) == 0x000004, "Wrong alignment on MetaSoundBuilderSubsystem_UnregisterPatchBuilder");
static_assert(sizeof(MetaSoundBuilderSubsystem_UnregisterPatchBuilder) == 0x000008, "Wrong size on MetaSoundBuilderSubsystem_UnregisterPatchBuilder");
static_assert(offsetof(MetaSoundBuilderSubsystem_UnregisterPatchBuilder, BuilderName) == 0x000000, "Member 'MetaSoundBuilderSubsystem_UnregisterPatchBuilder::BuilderName' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_UnregisterPatchBuilder, ReturnValue) == 0x000004, "Member 'MetaSoundBuilderSubsystem_UnregisterPatchBuilder::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderSubsystem_UnregisterSourceBuilder final
{
public:
	class FName                                   BuilderName;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(MetaSoundBuilderSubsystem_UnregisterSourceBuilder) == 0x000004, "Wrong alignment on MetaSoundBuilderSubsystem_UnregisterSourceBuilder");
static_assert(sizeof(MetaSoundBuilderSubsystem_UnregisterSourceBuilder) == 0x000008, "Wrong size on MetaSoundBuilderSubsystem_UnregisterSourceBuilder");
static_assert(offsetof(MetaSoundBuilderSubsystem_UnregisterSourceBuilder, BuilderName) == 0x000000, "Member 'MetaSoundBuilderSubsystem_UnregisterSourceBuilder::BuilderName' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_UnregisterSourceBuilder, ReturnValue) == 0x000004, "Member 'MetaSoundBuilderSubsystem_UnregisterSourceBuilder::ReturnValue' has a wrong offset!");

struct MetaSoundBuilderSubsystem_IsInterfaceRegistered final
{
public:
	class FName                                   InInterfaceName;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(MetaSoundBuilderSubsystem_IsInterfaceRegistered) == 0x000004, "Wrong alignment on MetaSoundBuilderSubsystem_IsInterfaceRegistered");
static_assert(sizeof(MetaSoundBuilderSubsystem_IsInterfaceRegistered) == 0x000008, "Wrong size on MetaSoundBuilderSubsystem_IsInterfaceRegistered");
static_assert(offsetof(MetaSoundBuilderSubsystem_IsInterfaceRegistered, InInterfaceName) == 0x000000, "Member 'MetaSoundBuilderSubsystem_IsInterfaceRegistered::InInterfaceName' has a wrong offset!");
static_assert(offsetof(MetaSoundBuilderSubsystem_IsInterfaceRegistered, ReturnValue) == 0x000004, "Member 'MetaSoundBuilderSubsystem_IsInterfaceRegistered::ReturnValue' has a wrong offset!");

}
