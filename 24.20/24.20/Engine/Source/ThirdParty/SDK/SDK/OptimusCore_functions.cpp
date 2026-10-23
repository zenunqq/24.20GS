#pragma once

#include "Basic.hpp"

#include "OptimusCore_classes.hpp"
#include "OptimusCore_parameters.hpp"

namespace SDK
{

bool UOptimusNode::SetGraphPosition(const struct FVector2D& InPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNode", "SetGraphPosition");

	Params::OptimusNode_SetGraphPosition Parms{};

	Parms.InPosition = std::move(InPosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UOptimusNode::GetDisplayName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNode", "GetDisplayName");

	Params::OptimusNode_GetDisplayName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D UOptimusNode::GetGraphPosition() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNode", "GetGraphPosition");

	Params::OptimusNode_GetGraphPosition Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FName UOptimusNode::GetNodeCategory() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNode", "GetNodeCategory");

	Params::OptimusNode_GetNodeCategory Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FName UOptimusNode::GetNodeName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNode", "GetNodeName");

	Params::OptimusNode_GetNodeName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<class UOptimusComponentSourceBinding*> UOptimusDeformer::GetComponentBindings() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusDeformer", "GetComponentBindings");

	Params::OptimusDeformer_GetComponentBindings Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<class UOptimusResourceDescription*> UOptimusDeformer::GetResources() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusDeformer", "GetResources");

	Params::OptimusDeformer_GetResources Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<class UOptimusVariableDescription*> UOptimusDeformer::GetVariables() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusDeformer", "GetVariables");

	Params::OptimusDeformer_GetVariables Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UOptimusDeformerInstance::EnqueueTriggerGraph(class FName InTriggerGraphName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusDeformerInstance", "EnqueueTriggerGraph");

	Params::OptimusDeformerInstance_EnqueueTriggerGraph Parms{};

	Parms.InTriggerGraphName = InTriggerGraphName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UOptimusDeformerInstance::SetBoolVariable(class FName InVariableName, bool InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusDeformerInstance", "SetBoolVariable");

	Params::OptimusDeformerInstance_SetBoolVariable Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UOptimusDeformerInstance::SetFloatVariable(class FName InVariableName, double InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusDeformerInstance", "SetFloatVariable");

	Params::OptimusDeformerInstance_SetFloatVariable Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UOptimusDeformerInstance::SetIntVariable(class FName InVariableName, int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusDeformerInstance", "SetIntVariable");

	Params::OptimusDeformerInstance_SetIntVariable Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UOptimusDeformerInstance::SetVector4Variable(class FName InVariableName, const struct FVector4& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusDeformerInstance", "SetVector4Variable");

	Params::OptimusDeformerInstance_SetVector4Variable Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UOptimusDeformerInstance::SetVectorVariable(class FName InVariableName, const struct FVector& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusDeformerInstance", "SetVectorVariable");

	Params::OptimusDeformerInstance_SetVectorVariable Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<class UOptimusVariableDescription*> UOptimusDeformerInstance::GetVariables() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusDeformerInstance", "GetVariables");

	Params::OptimusDeformerInstance_GetVariables Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UOptimusNode* UOptimusNodeGraph::AddComponentBindingGetNode(class UOptimusComponentSourceBinding* InComponentBinding, const struct FVector2D& InPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "AddComponentBindingGetNode");

	Params::OptimusNodeGraph_AddComponentBindingGetNode Parms{};

	Parms.InComponentBinding = InComponentBinding;
	Parms.InPosition = std::move(InPosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UOptimusNode* UOptimusNodeGraph::AddDataInterfaceNode(const TSubclassOf<class UOptimusComputeDataInterface> InDataInterfaceClass, const struct FVector2D& InPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "AddDataInterfaceNode");

	Params::OptimusNodeGraph_AddDataInterfaceNode Parms{};

	Parms.InDataInterfaceClass = InDataInterfaceClass;
	Parms.InPosition = std::move(InPosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UOptimusNodeGraph::AddLink(class UOptimusNodePin* InNodeOutputPin, class UOptimusNodePin* InNodeInputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "AddLink");

	Params::OptimusNodeGraph_AddLink Parms{};

	Parms.InNodeOutputPin = InNodeOutputPin;
	Parms.InNodeInputPin = InNodeInputPin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UOptimusNode* UOptimusNodeGraph::AddNode(const TSubclassOf<class UOptimusNode> InNodeClass, const struct FVector2D& InPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "AddNode");

	Params::OptimusNodeGraph_AddNode Parms{};

	Parms.InNodeClass = InNodeClass;
	Parms.InPosition = std::move(InPosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UOptimusNode* UOptimusNodeGraph::AddResourceGetNode(class UOptimusResourceDescription* InResourceDesc, const struct FVector2D& InPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "AddResourceGetNode");

	Params::OptimusNodeGraph_AddResourceGetNode Parms{};

	Parms.InResourceDesc = InResourceDesc;
	Parms.InPosition = std::move(InPosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UOptimusNode* UOptimusNodeGraph::AddResourceNode(class UOptimusResourceDescription* InResourceDesc, const struct FVector2D& InPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "AddResourceNode");

	Params::OptimusNodeGraph_AddResourceNode Parms{};

	Parms.InResourceDesc = InResourceDesc;
	Parms.InPosition = std::move(InPosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UOptimusNode* UOptimusNodeGraph::AddResourceSetNode(class UOptimusResourceDescription* InResourceDesc, const struct FVector2D& InPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "AddResourceSetNode");

	Params::OptimusNodeGraph_AddResourceSetNode Parms{};

	Parms.InResourceDesc = InResourceDesc;
	Parms.InPosition = std::move(InPosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UOptimusNode* UOptimusNodeGraph::AddValueNode(const struct FOptimusDataTypeRef& InDataTypeRef, const struct FVector2D& InPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "AddValueNode");

	Params::OptimusNodeGraph_AddValueNode Parms{};

	Parms.InDataTypeRef = std::move(InDataTypeRef);
	Parms.InPosition = std::move(InPosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UOptimusNode* UOptimusNodeGraph::AddVariableGetNode(class UOptimusVariableDescription* InVariableDesc, const struct FVector2D& InPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "AddVariableGetNode");

	Params::OptimusNodeGraph_AddVariableGetNode Parms{};

	Parms.InVariableDesc = InVariableDesc;
	Parms.InPosition = std::move(InPosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UOptimusNode* UOptimusNodeGraph::CollapseNodesToFunction(const TArray<class UOptimusNode*>& InNodes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "CollapseNodesToFunction");

	Params::OptimusNodeGraph_CollapseNodesToFunction Parms{};

	Parms.InNodes = std::move(InNodes);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UOptimusNode* UOptimusNodeGraph::CollapseNodesToSubGraph(const TArray<class UOptimusNode*>& InNodes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "CollapseNodesToSubGraph");

	Params::OptimusNodeGraph_CollapseNodesToSubGraph Parms{};

	Parms.InNodes = std::move(InNodes);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UOptimusNode* UOptimusNodeGraph::ConvertCustomKernelToFunction(class UOptimusNode* InCustomKernel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "ConvertCustomKernelToFunction");

	Params::OptimusNodeGraph_ConvertCustomKernelToFunction Parms{};

	Parms.InCustomKernel = InCustomKernel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UOptimusNode* UOptimusNodeGraph::ConvertFunctionToCustomKernel(class UOptimusNode* InKernelFunction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "ConvertFunctionToCustomKernel");

	Params::OptimusNodeGraph_ConvertFunctionToCustomKernel Parms{};

	Parms.InKernelFunction = InKernelFunction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UOptimusNode* UOptimusNodeGraph::DuplicateNode(class UOptimusNode* InNode, const struct FVector2D& InPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "DuplicateNode");

	Params::OptimusNodeGraph_DuplicateNode Parms{};

	Parms.InNode = InNode;
	Parms.InPosition = std::move(InPosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UOptimusNodeGraph::DuplicateNodes(const TArray<class UOptimusNode*>& InNodes, const struct FVector2D& InPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "DuplicateNodes");

	Params::OptimusNodeGraph_DuplicateNodes Parms{};

	Parms.InNodes = std::move(InNodes);
	Parms.InPosition = std::move(InPosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UOptimusNode*> UOptimusNodeGraph::ExpandCollapsedNodes(class UOptimusNode* InFunctionNode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "ExpandCollapsedNodes");

	Params::OptimusNodeGraph_ExpandCollapsedNodes Parms{};

	Parms.InFunctionNode = InFunctionNode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UOptimusNodeGraph::MoveGraph(class UOptimusNodeGraph* InGraph, int32 InInsertBefore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "MoveGraph");

	Params::OptimusNodeGraph_MoveGraph Parms{};

	Parms.InGraph = InGraph;
	Parms.InInsertBefore = InInsertBefore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UOptimusNodeGraph::RemoveAllLinks(class UOptimusNodePin* InNodePin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "RemoveAllLinks");

	Params::OptimusNodeGraph_RemoveAllLinks Parms{};

	Parms.InNodePin = InNodePin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UOptimusNodeGraph::RemoveLink(class UOptimusNodePin* InNodeOutputPin, class UOptimusNodePin* InNodeInputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "RemoveLink");

	Params::OptimusNodeGraph_RemoveLink Parms{};

	Parms.InNodeOutputPin = InNodeOutputPin;
	Parms.InNodeInputPin = InNodeInputPin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UOptimusNodeGraph::RemoveNode(class UOptimusNode* InNode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "RemoveNode");

	Params::OptimusNodeGraph_RemoveNode Parms{};

	Parms.InNode = InNode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UOptimusNodeGraph::RemoveNodes(const TArray<class UOptimusNode*>& InNodes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "RemoveNodes");

	Params::OptimusNodeGraph_RemoveNodes Parms{};

	Parms.InNodes = std::move(InNodes);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UOptimusNodeGraph::RenameGraph(class UOptimusNodeGraph* InGraph, const class FString& InNewName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "RenameGraph");

	Params::OptimusNodeGraph_RenameGraph Parms{};

	Parms.InGraph = InGraph;
	Parms.InNewName = std::move(InNewName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UOptimusNodeGraph::GetGraphIndex() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "GetGraphIndex");

	Params::OptimusNodeGraph_GetGraphIndex Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<class UOptimusNodeGraph*> UOptimusNodeGraph::GetGraphs() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "GetGraphs");

	Params::OptimusNodeGraph_GetGraphs Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EOptimusNodeGraphType UOptimusNodeGraph::GetGraphType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "GetGraphType");

	Params::OptimusNodeGraph_GetGraphType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UOptimusNodeGraph::IsCustomKernel(class UOptimusNode* InNode) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "IsCustomKernel");

	Params::OptimusNodeGraph_IsCustomKernel Parms{};

	Parms.InNode = InNode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UOptimusNodeGraph::IsExecutionGraph() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "IsExecutionGraph");

	Params::OptimusNodeGraph_IsExecutionGraph Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UOptimusNodeGraph::IsFunctionGraph() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "IsFunctionGraph");

	Params::OptimusNodeGraph_IsFunctionGraph Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UOptimusNodeGraph::IsFunctionReference(class UOptimusNode* InNode) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "IsFunctionReference");

	Params::OptimusNodeGraph_IsFunctionReference Parms{};

	Parms.InNode = InNode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UOptimusNodeGraph::IsKernelFunction(class UOptimusNode* InNode) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "IsKernelFunction");

	Params::OptimusNodeGraph_IsKernelFunction Parms{};

	Parms.InNode = InNode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UOptimusNodeGraph::IsSubGraphReference(class UOptimusNode* InNode) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptimusNodeGraph", "IsSubGraphReference");

	Params::OptimusNodeGraph_IsSubGraphReference Parms{};

	Parms.InNode = InNode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
