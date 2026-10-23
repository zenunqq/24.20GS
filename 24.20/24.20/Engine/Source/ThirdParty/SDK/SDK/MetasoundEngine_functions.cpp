#pragma once

#include "Basic.hpp"

#include "MetasoundEngine_classes.hpp"
#include "MetasoundEngine_parameters.hpp"

namespace SDK
{

class UMetasoundGeneratorHandle* UMetasoundGeneratorHandle::CreateMetaSoundGeneratorHandle(class UAudioComponent* OnComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MetasoundGeneratorHandle", "CreateMetaSoundGeneratorHandle");

	Params::MetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle Parms{};

	Parms.OnComponent = OnComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMetasoundGeneratorHandle::ApplyParameterPack(class UMetasoundParameterPack* pack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetasoundGeneratorHandle", "ApplyParameterPack");

	Params::MetasoundGeneratorHandle_ApplyParameterPack Parms{};

	Parms.pack = pack;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMetaSoundAssetSubsystem::RegisterAssetClassesInDirectories(const TArray<struct FMetaSoundAssetDirectory>& Directories)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundAssetSubsystem", "RegisterAssetClassesInDirectories");

	Params::MetaSoundAssetSubsystem_RegisterAssetClassesInDirectories Parms{};

	Parms.Directories = std::move(Directories);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMetaSoundAssetSubsystem::UnregisterAssetClassesInDirectories(const TArray<struct FMetaSoundAssetDirectory>& Directories)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundAssetSubsystem", "UnregisterAssetClassesInDirectories");

	Params::MetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories Parms{};

	Parms.Directories = std::move(Directories);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FMetaSoundBuilderNodeOutputHandle UMetaSoundBuilderBase::AddGraphInputNode(class FName Name_0, class FName DataType, const struct FMetasoundFrontendLiteral& DefaultValue, EMetaSoundBuilderResult* outResult, bool bIsConstructorInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "AddGraphInputNode");

	Params::MetaSoundBuilderBase_AddGraphInputNode Parms{};

	Parms.Name_0 = Name_0;
	Parms.DataType = DataType;
	Parms.DefaultValue = std::move(DefaultValue);
	Parms.bIsConstructorInput = bIsConstructorInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;

	return Parms.ReturnValue;
}

struct FMetaSoundBuilderNodeInputHandle UMetaSoundBuilderBase::AddGraphOutputNode(class FName Name_0, class FName DataType, const struct FMetasoundFrontendLiteral& DefaultValue, EMetaSoundBuilderResult* outResult, bool bIsConstructorInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "AddGraphOutputNode");

	Params::MetaSoundBuilderBase_AddGraphOutputNode Parms{};

	Parms.Name_0 = Name_0;
	Parms.DataType = DataType;
	Parms.DefaultValue = std::move(DefaultValue);
	Parms.bIsConstructorInput = bIsConstructorInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;

	return Parms.ReturnValue;
}

void UMetaSoundBuilderBase::AddInterface(class FName InterfaceName, EMetaSoundBuilderResult* outResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "AddInterface");

	Params::MetaSoundBuilderBase_AddInterface Parms{};

	Parms.InterfaceName = InterfaceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;
}

struct FMetaSoundNodeHandle UMetaSoundBuilderBase::AddNode(TScriptInterface<class IMetaSoundDocumentInterface> NodeClass, EMetaSoundBuilderResult* outResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "AddNode");

	Params::MetaSoundBuilderBase_AddNode Parms{};

	Parms.NodeClass = NodeClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;

	return Parms.ReturnValue;
}

TArray<struct FMetaSoundBuilderNodeOutputHandle> UMetaSoundBuilderBase::ConnectNodeInputsToMatchingGraphInterfaceInputs(const struct FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult* outResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "ConnectNodeInputsToMatchingGraphInterfaceInputs");

	Params::MetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs Parms{};

	Parms.NodeHandle = std::move(NodeHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;

	return Parms.ReturnValue;
}

void UMetaSoundBuilderBase::ConnectNodeInputToGraphInput(class FName GraphInputName, const struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult* outResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "ConnectNodeInputToGraphInput");

	Params::MetaSoundBuilderBase_ConnectNodeInputToGraphInput Parms{};

	Parms.GraphInputName = GraphInputName;
	Parms.NodeInputHandle = std::move(NodeInputHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;
}

TArray<struct FMetaSoundBuilderNodeInputHandle> UMetaSoundBuilderBase::ConnectNodeOutputsToMatchingGraphInterfaceOutputs(const struct FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult* outResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "ConnectNodeOutputsToMatchingGraphInterfaceOutputs");

	Params::MetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs Parms{};

	Parms.NodeHandle = std::move(NodeHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;

	return Parms.ReturnValue;
}

void UMetaSoundBuilderBase::ConnectNodeOutputToGraphOutput(class FName GraphOutputName, const struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, EMetaSoundBuilderResult* outResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "ConnectNodeOutputToGraphOutput");

	Params::MetaSoundBuilderBase_ConnectNodeOutputToGraphOutput Parms{};

	Parms.GraphOutputName = GraphOutputName;
	Parms.NodeOutputHandle = std::move(NodeOutputHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;
}

void UMetaSoundBuilderBase::ConnectNodes(const struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, const struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult* outResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "ConnectNodes");

	Params::MetaSoundBuilderBase_ConnectNodes Parms{};

	Parms.NodeOutputHandle = std::move(NodeOutputHandle);
	Parms.NodeInputHandle = std::move(NodeInputHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;
}

void UMetaSoundBuilderBase::ConnectNodesByInterfaceBindings(const struct FMetaSoundNodeHandle& FromNodeHandle, const struct FMetaSoundNodeHandle& ToNodeHandle, EMetaSoundBuilderResult* outResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "ConnectNodesByInterfaceBindings");

	Params::MetaSoundBuilderBase_ConnectNodesByInterfaceBindings Parms{};

	Parms.FromNodeHandle = std::move(FromNodeHandle);
	Parms.ToNodeHandle = std::move(ToNodeHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;
}

void UMetaSoundBuilderBase::DisconnectNodeInput(const struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult* outResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "DisconnectNodeInput");

	Params::MetaSoundBuilderBase_DisconnectNodeInput Parms{};

	Parms.NodeInputHandle = std::move(NodeInputHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;
}

void UMetaSoundBuilderBase::DisconnectNodeOutput(const struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, EMetaSoundBuilderResult* outResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "DisconnectNodeOutput");

	Params::MetaSoundBuilderBase_DisconnectNodeOutput Parms{};

	Parms.NodeOutputHandle = std::move(NodeOutputHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;
}

void UMetaSoundBuilderBase::DisconnectNodes(const struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, const struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult* outResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "DisconnectNodes");

	Params::MetaSoundBuilderBase_DisconnectNodes Parms{};

	Parms.NodeOutputHandle = std::move(NodeOutputHandle);
	Parms.NodeInputHandle = std::move(NodeInputHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;
}

void UMetaSoundBuilderBase::DisconnectNodesByInterfaceBindings(const struct FMetaSoundNodeHandle& FromNodeHandle, const struct FMetaSoundNodeHandle& ToNodeHandle, EMetaSoundBuilderResult* outResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "DisconnectNodesByInterfaceBindings");

	Params::MetaSoundBuilderBase_DisconnectNodesByInterfaceBindings Parms{};

	Parms.FromNodeHandle = std::move(FromNodeHandle);
	Parms.ToNodeHandle = std::move(ToNodeHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;
}

void UMetaSoundBuilderBase::RemoveInterface(class FName InterfaceName, EMetaSoundBuilderResult* outResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "RemoveInterface");

	Params::MetaSoundBuilderBase_RemoveInterface Parms{};

	Parms.InterfaceName = InterfaceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;
}

void UMetaSoundBuilderBase::RemoveNode(const struct FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult* outResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "RemoveNode");

	Params::MetaSoundBuilderBase_RemoveNode Parms{};

	Parms.NodeHandle = std::move(NodeHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;
}

void UMetaSoundBuilderBase::SetNodeInputDefault(const struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, const struct FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult* outResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "SetNodeInputDefault");

	Params::MetaSoundBuilderBase_SetNodeInputDefault Parms{};

	Parms.NodeInputHandle = std::move(NodeInputHandle);
	Parms.Literal = std::move(Literal);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;
}

bool UMetaSoundBuilderBase::ContainsNode(const struct FMetaSoundNodeHandle& Node) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "ContainsNode");

	Params::MetaSoundBuilderBase_ContainsNode Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMetaSoundBuilderBase::ContainsNodeInput(const struct FMetaSoundBuilderNodeInputHandle& Input) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "ContainsNodeInput");

	Params::MetaSoundBuilderBase_ContainsNodeInput Parms{};

	Parms.Input = std::move(Input);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMetaSoundBuilderBase::ContainsNodeOutput(const struct FMetaSoundBuilderNodeOutputHandle& Output) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "ContainsNodeOutput");

	Params::MetaSoundBuilderBase_ContainsNodeOutput Parms{};

	Parms.Output = std::move(Output);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMetaSoundNodeHandle UMetaSoundBuilderBase::FindGraphInputNode(class FName InputName, EMetaSoundBuilderResult* outResult) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindGraphInputNode");

	Params::MetaSoundBuilderBase_FindGraphInputNode Parms{};

	Parms.InputName = InputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;

	return Parms.ReturnValue;
}

struct FMetaSoundNodeHandle UMetaSoundBuilderBase::FindGraphOutputNode(class FName OutputName, EMetaSoundBuilderResult* outResult) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindGraphOutputNode");

	Params::MetaSoundBuilderBase_FindGraphOutputNode Parms{};

	Parms.OutputName = OutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;

	return Parms.ReturnValue;
}

TArray<struct FMetaSoundNodeHandle> UMetaSoundBuilderBase::FindInterfaceInputNodes(class FName InterfaceName, EMetaSoundBuilderResult* outResult) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindInterfaceInputNodes");

	Params::MetaSoundBuilderBase_FindInterfaceInputNodes Parms{};

	Parms.InterfaceName = InterfaceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;

	return Parms.ReturnValue;
}

TArray<struct FMetaSoundNodeHandle> UMetaSoundBuilderBase::FindInterfaceOutputNodes(class FName InterfaceName, EMetaSoundBuilderResult* outResult) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindInterfaceOutputNodes");

	Params::MetaSoundBuilderBase_FindInterfaceOutputNodes Parms{};

	Parms.InterfaceName = InterfaceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;

	return Parms.ReturnValue;
}

struct FMetasoundFrontendVersion UMetaSoundBuilderBase::FindNodeClassVersion(const struct FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult* outResult) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindNodeClassVersion");

	Params::MetaSoundBuilderBase_FindNodeClassVersion Parms{};

	Parms.NodeHandle = std::move(NodeHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;

	return Parms.ReturnValue;
}

struct FMetaSoundBuilderNodeInputHandle UMetaSoundBuilderBase::FindNodeInputByName(const struct FMetaSoundNodeHandle& NodeHandle, class FName InputName, EMetaSoundBuilderResult* outResult) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindNodeInputByName");

	Params::MetaSoundBuilderBase_FindNodeInputByName Parms{};

	Parms.NodeHandle = std::move(NodeHandle);
	Parms.InputName = InputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;

	return Parms.ReturnValue;
}

struct FMetaSoundNodeHandle UMetaSoundBuilderBase::FindNodeInputParent(const struct FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult* outResult) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindNodeInputParent");

	Params::MetaSoundBuilderBase_FindNodeInputParent Parms{};

	Parms.InputHandle = std::move(InputHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;

	return Parms.ReturnValue;
}

TArray<struct FMetaSoundBuilderNodeInputHandle> UMetaSoundBuilderBase::FindNodeInputs(const struct FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult* outResult) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindNodeInputs");

	Params::MetaSoundBuilderBase_FindNodeInputs Parms{};

	Parms.NodeHandle = std::move(NodeHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;

	return Parms.ReturnValue;
}

TArray<struct FMetaSoundBuilderNodeInputHandle> UMetaSoundBuilderBase::FindNodeInputsByDataType(const struct FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult* outResult, class FName DataType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindNodeInputsByDataType");

	Params::MetaSoundBuilderBase_FindNodeInputsByDataType Parms{};

	Parms.NodeHandle = std::move(NodeHandle);
	Parms.DataType = DataType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;

	return Parms.ReturnValue;
}

struct FMetaSoundBuilderNodeOutputHandle UMetaSoundBuilderBase::FindNodeOutputByName(const struct FMetaSoundNodeHandle& NodeHandle, class FName OutputName, EMetaSoundBuilderResult* outResult) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindNodeOutputByName");

	Params::MetaSoundBuilderBase_FindNodeOutputByName Parms{};

	Parms.NodeHandle = std::move(NodeHandle);
	Parms.OutputName = OutputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;

	return Parms.ReturnValue;
}

struct FMetaSoundNodeHandle UMetaSoundBuilderBase::FindNodeOutputParent(const struct FMetaSoundBuilderNodeOutputHandle& OutputHandle, EMetaSoundBuilderResult* outResult) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindNodeOutputParent");

	Params::MetaSoundBuilderBase_FindNodeOutputParent Parms{};

	Parms.OutputHandle = std::move(OutputHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;

	return Parms.ReturnValue;
}

TArray<struct FMetaSoundBuilderNodeOutputHandle> UMetaSoundBuilderBase::FindNodeOutputs(const struct FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult* outResult) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindNodeOutputs");

	Params::MetaSoundBuilderBase_FindNodeOutputs Parms{};

	Parms.NodeHandle = std::move(NodeHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;

	return Parms.ReturnValue;
}

TArray<struct FMetaSoundBuilderNodeOutputHandle> UMetaSoundBuilderBase::FindNodeOutputsByDataType(const struct FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult* outResult, class FName DataType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "FindNodeOutputsByDataType");

	Params::MetaSoundBuilderBase_FindNodeOutputsByDataType Parms{};

	Parms.NodeHandle = std::move(NodeHandle);
	Parms.DataType = DataType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;

	return Parms.ReturnValue;
}

void UMetaSoundBuilderBase::GetNodeInputData(const struct FMetaSoundBuilderNodeInputHandle& InputHandle, class FName* Name_0, class FName* DataType, EMetaSoundBuilderResult* outResult) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "GetNodeInputData");

	Params::MetaSoundBuilderBase_GetNodeInputData Parms{};

	Parms.InputHandle = std::move(InputHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Name_0 != nullptr)
		*Name_0 = Parms.Name_0;

	if (DataType != nullptr)
		*DataType = Parms.DataType;

	if (outResult != nullptr)
		*outResult = Parms.outResult;
}

void UMetaSoundBuilderBase::GetNodeOutputData(const struct FMetaSoundBuilderNodeOutputHandle& OutputHandle, class FName* Name_0, class FName* DataType, EMetaSoundBuilderResult* outResult) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "GetNodeOutputData");

	Params::MetaSoundBuilderBase_GetNodeOutputData Parms{};

	Parms.OutputHandle = std::move(OutputHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Name_0 != nullptr)
		*Name_0 = Parms.Name_0;

	if (DataType != nullptr)
		*DataType = Parms.DataType;

	if (outResult != nullptr)
		*outResult = Parms.outResult;
}

bool UMetaSoundBuilderBase::InterfaceIsDeclared(class FName InterfaceName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "InterfaceIsDeclared");

	Params::MetaSoundBuilderBase_InterfaceIsDeclared Parms{};

	Parms.InterfaceName = InterfaceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMetaSoundBuilderBase::NodeInputIsConnected(const struct FMetaSoundBuilderNodeInputHandle& InputHandle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "NodeInputIsConnected");

	Params::MetaSoundBuilderBase_NodeInputIsConnected Parms{};

	Parms.InputHandle = std::move(InputHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMetaSoundBuilderBase::NodeOutputIsConnected(const struct FMetaSoundBuilderNodeOutputHandle& OutputHandle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "NodeOutputIsConnected");

	Params::MetaSoundBuilderBase_NodeOutputIsConnected Parms{};

	Parms.OutputHandle = std::move(OutputHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMetaSoundBuilderBase::NodesAreConnected(const struct FMetaSoundBuilderNodeOutputHandle& OutputHandle, const struct FMetaSoundBuilderNodeInputHandle& InputHandle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderBase", "NodesAreConnected");

	Params::MetaSoundBuilderBase_NodesAreConnected Parms{};

	Parms.OutputHandle = std::move(OutputHandle);
	Parms.InputHandle = std::move(InputHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TScriptInterface<class IMetaSoundDocumentInterface> UMetaSoundPatchBuilder::Build(class UObject* Parent, const struct FMetaSoundBuilderOptions& Options) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundPatchBuilder", "Build");

	Params::MetaSoundPatchBuilder_Build Parms{};

	Parms.Parent = Parent;
	Parms.Options = std::move(Options);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMetaSoundSourceBuilder::Audition(class UObject* Parent, class UAudioComponent* AudioComponent, TDelegate<void(class UMetasoundGeneratorHandle* GeneratorHandle)> OnCreateGenerator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundSourceBuilder", "Audition");

	Params::MetaSoundSourceBuilder_Audition Parms{};

	Parms.Parent = Parent;
	Parms.AudioComponent = AudioComponent;
	Parms.OnCreateGenerator = OnCreateGenerator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMetaSoundSourceBuilder::SetFormat(EMetaSoundOutputAudioFormat OutputFormat, EMetaSoundBuilderResult* outResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundSourceBuilder", "SetFormat");

	Params::MetaSoundSourceBuilder_SetFormat Parms{};

	Parms.OutputFormat = OutputFormat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;
}

TScriptInterface<class IMetaSoundDocumentInterface> UMetaSoundSourceBuilder::Build(class UObject* Parent, const struct FMetaSoundBuilderOptions& Options) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundSourceBuilder", "Build");

	Params::MetaSoundSourceBuilder_Build Parms{};

	Parms.Parent = Parent;
	Parms.Options = std::move(Options);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateBoolArrayMetaSoundLiteral(const TArray<bool>& Value, class FName* DataType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateBoolArrayMetaSoundLiteral");

	Params::MetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral Parms{};

	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (DataType != nullptr)
		*DataType = Parms.DataType;

	return Parms.ReturnValue;
}

struct FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateBoolMetaSoundLiteral(bool Value, class FName* DataType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateBoolMetaSoundLiteral");

	Params::MetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (DataType != nullptr)
		*DataType = Parms.DataType;

	return Parms.ReturnValue;
}

struct FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateFloatArrayMetaSoundLiteral(const TArray<float>& Value, class FName* DataType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateFloatArrayMetaSoundLiteral");

	Params::MetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral Parms{};

	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (DataType != nullptr)
		*DataType = Parms.DataType;

	return Parms.ReturnValue;
}

struct FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateFloatMetaSoundLiteral(float Value, class FName* DataType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateFloatMetaSoundLiteral");

	Params::MetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (DataType != nullptr)
		*DataType = Parms.DataType;

	return Parms.ReturnValue;
}

struct FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateIntArrayMetaSoundLiteral(const TArray<int32>& Value, class FName* DataType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateIntArrayMetaSoundLiteral");

	Params::MetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral Parms{};

	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (DataType != nullptr)
		*DataType = Parms.DataType;

	return Parms.ReturnValue;
}

struct FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateIntMetaSoundLiteral(int32 Value, class FName* DataType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateIntMetaSoundLiteral");

	Params::MetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (DataType != nullptr)
		*DataType = Parms.DataType;

	return Parms.ReturnValue;
}

struct FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateMetaSoundLiteralFromParam(const struct FAudioParameter& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateMetaSoundLiteralFromParam");

	Params::MetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam Parms{};

	Parms.Param = std::move(Param);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateObjectArrayMetaSoundLiteral(const TArray<class UObject*>& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateObjectArrayMetaSoundLiteral");

	Params::MetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral Parms{};

	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateObjectMetaSoundLiteral(class UObject* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateObjectMetaSoundLiteral");

	Params::MetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMetaSoundPatchBuilder* UMetaSoundBuilderSubsystem::CreatePatchBuilder(class FName BuilderName, EMetaSoundBuilderResult* outResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreatePatchBuilder");

	Params::MetaSoundBuilderSubsystem_CreatePatchBuilder Parms{};

	Parms.BuilderName = BuilderName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;

	return Parms.ReturnValue;
}

class UMetaSoundSourceBuilder* UMetaSoundBuilderSubsystem::CreateSourceBuilder(class FName BuilderName, struct FMetaSoundBuilderNodeOutputHandle* OnPlayNodeOutput, struct FMetaSoundBuilderNodeInputHandle* OnFinishedNodeInput, TArray<struct FMetaSoundBuilderNodeInputHandle>* AudioOutNodeInputs, EMetaSoundBuilderResult* outResult, EMetaSoundOutputAudioFormat OutputFormat, bool bIsOneShot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateSourceBuilder");

	Params::MetaSoundBuilderSubsystem_CreateSourceBuilder Parms{};

	Parms.BuilderName = BuilderName;
	Parms.OutputFormat = OutputFormat;
	Parms.bIsOneShot = bIsOneShot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OnPlayNodeOutput != nullptr)
		*OnPlayNodeOutput = std::move(Parms.OnPlayNodeOutput);

	if (OnFinishedNodeInput != nullptr)
		*OnFinishedNodeInput = std::move(Parms.OnFinishedNodeInput);

	if (AudioOutNodeInputs != nullptr)
		*AudioOutNodeInputs = std::move(Parms.AudioOutNodeInputs);

	if (outResult != nullptr)
		*outResult = Parms.outResult;

	return Parms.ReturnValue;
}

struct FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateStringArrayMetaSoundLiteral(const TArray<class FString>& Value, class FName* DataType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateStringArrayMetaSoundLiteral");

	Params::MetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral Parms{};

	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (DataType != nullptr)
		*DataType = Parms.DataType;

	return Parms.ReturnValue;
}

struct FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateStringMetaSoundLiteral(const class FString& Value, class FName* DataType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "CreateStringMetaSoundLiteral");

	Params::MetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral Parms{};

	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (DataType != nullptr)
		*DataType = Parms.DataType;

	return Parms.ReturnValue;
}

class UMetaSoundPatchBuilder* UMetaSoundBuilderSubsystem::FindPatchBuilder(class FName BuilderName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "FindPatchBuilder");

	Params::MetaSoundBuilderSubsystem_FindPatchBuilder Parms{};

	Parms.BuilderName = BuilderName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMetaSoundSourceBuilder* UMetaSoundBuilderSubsystem::FindSourceBuilder(class FName BuilderName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "FindSourceBuilder");

	Params::MetaSoundBuilderSubsystem_FindSourceBuilder Parms{};

	Parms.BuilderName = BuilderName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMetaSoundBuilderSubsystem::RegisterPatchBuilder(class FName BuilderName, class UMetaSoundPatchBuilder* Builder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "RegisterPatchBuilder");

	Params::MetaSoundBuilderSubsystem_RegisterPatchBuilder Parms{};

	Parms.BuilderName = BuilderName;
	Parms.Builder = Builder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMetaSoundBuilderSubsystem::RegisterSourceBuilder(class FName BuilderName, class UMetaSoundSourceBuilder* Builder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "RegisterSourceBuilder");

	Params::MetaSoundBuilderSubsystem_RegisterSourceBuilder Parms{};

	Parms.BuilderName = BuilderName;
	Parms.Builder = Builder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UMetaSoundBuilderSubsystem::UnregisterPatchBuilder(class FName BuilderName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "UnregisterPatchBuilder");

	Params::MetaSoundBuilderSubsystem_UnregisterPatchBuilder Parms{};

	Parms.BuilderName = BuilderName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMetaSoundBuilderSubsystem::UnregisterSourceBuilder(class FName BuilderName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "UnregisterSourceBuilder");

	Params::MetaSoundBuilderSubsystem_UnregisterSourceBuilder Parms{};

	Parms.BuilderName = BuilderName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMetaSoundBuilderSubsystem::IsInterfaceRegistered(class FName InInterfaceName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetaSoundBuilderSubsystem", "IsInterfaceRegistered");

	Params::MetaSoundBuilderSubsystem_IsInterfaceRegistered Parms{};

	Parms.InInterfaceName = InInterfaceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
