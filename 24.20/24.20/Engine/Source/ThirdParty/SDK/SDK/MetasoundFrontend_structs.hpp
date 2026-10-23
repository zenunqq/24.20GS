#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class ESetParamResult : uint8
{
	Succeeded                                = 0,
	Failed                                   = 1,
	ESetParamResult_MAX                      = 2,
};

enum class EMetasoundFrontendVertexAccessType : uint32
{
	Reference                                = 0,
	Value                                    = 1,
	Unset                                    = 2,
	EMetasoundFrontendVertexAccessType_MAX   = 3,
};

enum class EMetasoundFrontendClassType : uint8
{
	External                                 = 0,
	Graph                                    = 1,
	Input                                    = 2,
	Output                                   = 3,
	Literal                                  = 4,
	Variable                                 = 5,
	VariableDeferredAccessor                 = 6,
	VariableAccessor                         = 7,
	VariableMutator                          = 8,
	Template                                 = 9,
	Invalid                                  = 10,
	EMetasoundFrontendClassType_MAX          = 11,
};

enum class EMetasoundFrontendNodeStyleDisplayVisibility : uint8
{
	Visible                                  = 0,
	Hidden                                   = 1,
	EMetasoundFrontendNodeStyleDisplayVisibility_MAX = 2,
};

enum class EMetasoundFrontendLiteralType : uint8
{
	None                                     = 0,
	Boolean                                  = 1,
	Integer                                  = 2,
	Float                                    = 3,
	String                                   = 4,
	UObject                                  = 5,
	NoneArray                                = 6,
	BooleanArray                             = 7,
	IntegerArray                             = 8,
	FloatArray                               = 9,
	StringArray                              = 10,
	UObjectArray                             = 11,
	Invalid                                  = 12,
	EMetasoundFrontendLiteralType_MAX        = 13,
};

struct FMetasoundFrontendVersionNumber final
{
public:
	int32                                         Major;
	int32                                         Minor;
};
static_assert(alignof(FMetasoundFrontendVersionNumber) == 0x000004, "Wrong alignment on FMetasoundFrontendVersionNumber");
static_assert(sizeof(FMetasoundFrontendVersionNumber) == 0x000008, "Wrong size on FMetasoundFrontendVersionNumber");
static_assert(offsetof(FMetasoundFrontendVersionNumber, Major) == 0x000000, "Member 'FMetasoundFrontendVersionNumber::Major' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendVersionNumber, Minor) == 0x000004, "Member 'FMetasoundFrontendVersionNumber::Minor' has a wrong offset!");

struct FMetasoundFrontendVersion final
{
public:
	class FName                                   Name;
	struct FMetasoundFrontendVersionNumber        Number;
};
static_assert(alignof(FMetasoundFrontendVersion) == 0x000004, "Wrong alignment on FMetasoundFrontendVersion");
static_assert(sizeof(FMetasoundFrontendVersion) == 0x00000C, "Wrong size on FMetasoundFrontendVersion");
static_assert(offsetof(FMetasoundFrontendVersion, Name) == 0x000000, "Member 'FMetasoundFrontendVersion::Name' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendVersion, Number) == 0x000004, "Member 'FMetasoundFrontendVersion::Number' has a wrong offset!");

struct FMetasoundFrontendVertex
{
public:
	class FName                                   Name;
	class FName                                   TypeName;
	struct FGuid                                  VertexID;
};
static_assert(alignof(FMetasoundFrontendVertex) == 0x000004, "Wrong alignment on FMetasoundFrontendVertex");
static_assert(sizeof(FMetasoundFrontendVertex) == 0x000018, "Wrong size on FMetasoundFrontendVertex");
static_assert(offsetof(FMetasoundFrontendVertex, Name) == 0x000000, "Member 'FMetasoundFrontendVertex::Name' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendVertex, TypeName) == 0x000004, "Member 'FMetasoundFrontendVertex::TypeName' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendVertex, VertexID) == 0x000008, "Member 'FMetasoundFrontendVertex::VertexID' has a wrong offset!");

struct FMetasoundFrontendVertexHandle
{
public:
	struct FGuid                                  NodeId;
	struct FGuid                                  VertexID;
};
static_assert(alignof(FMetasoundFrontendVertexHandle) == 0x000004, "Wrong alignment on FMetasoundFrontendVertexHandle");
static_assert(sizeof(FMetasoundFrontendVertexHandle) == 0x000020, "Wrong size on FMetasoundFrontendVertexHandle");
static_assert(offsetof(FMetasoundFrontendVertexHandle, NodeId) == 0x000000, "Member 'FMetasoundFrontendVertexHandle::NodeId' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendVertexHandle, VertexID) == 0x000010, "Member 'FMetasoundFrontendVertexHandle::VertexID' has a wrong offset!");

struct FMetasoundFrontendLiteral final
{
public:
	EMetasoundFrontendLiteralType                 Type;
	uint8                                         Pad_1[0x3];
	int32                                         AsNumDefault;
	TArray<bool>                                  AsBoolean;
	TArray<int32>                                 AsInteger;
	TArray<float>                                 AsFloat;
	TArray<class FString>                         AsString;
	TArray<class UObject*>                        AsUObject;
};
static_assert(alignof(FMetasoundFrontendLiteral) == 0x000008, "Wrong alignment on FMetasoundFrontendLiteral");
static_assert(sizeof(FMetasoundFrontendLiteral) == 0x000058, "Wrong size on FMetasoundFrontendLiteral");
static_assert(offsetof(FMetasoundFrontendLiteral, Type) == 0x000000, "Member 'FMetasoundFrontendLiteral::Type' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendLiteral, AsNumDefault) == 0x000004, "Member 'FMetasoundFrontendLiteral::AsNumDefault' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendLiteral, AsBoolean) == 0x000008, "Member 'FMetasoundFrontendLiteral::AsBoolean' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendLiteral, AsInteger) == 0x000018, "Member 'FMetasoundFrontendLiteral::AsInteger' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendLiteral, AsFloat) == 0x000028, "Member 'FMetasoundFrontendLiteral::AsFloat' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendLiteral, AsString) == 0x000038, "Member 'FMetasoundFrontendLiteral::AsString' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendLiteral, AsUObject) == 0x000048, "Member 'FMetasoundFrontendLiteral::AsUObject' has a wrong offset!");

struct FMetasoundFrontendVertexLiteral final
{
public:
	struct FGuid                                  VertexID;
	struct FMetasoundFrontendLiteral              Value;
};
static_assert(alignof(FMetasoundFrontendVertexLiteral) == 0x000008, "Wrong alignment on FMetasoundFrontendVertexLiteral");
static_assert(sizeof(FMetasoundFrontendVertexLiteral) == 0x000068, "Wrong size on FMetasoundFrontendVertexLiteral");
static_assert(offsetof(FMetasoundFrontendVertexLiteral, VertexID) == 0x000000, "Member 'FMetasoundFrontendVertexLiteral::VertexID' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendVertexLiteral, Value) == 0x000010, "Member 'FMetasoundFrontendVertexLiteral::Value' has a wrong offset!");

struct FMetasoundFrontendVariable final
{
public:
	class FName                                   Name;
	class FName                                   TypeName;
	struct FMetasoundFrontendLiteral              Literal;
	struct FGuid                                  ID;
	struct FGuid                                  VariableNodeID;
	struct FGuid                                  MutatorNodeID;
	TArray<struct FGuid>                          AccessorNodeIDs;
	TArray<struct FGuid>                          DeferredAccessorNodeIDs;
};
static_assert(alignof(FMetasoundFrontendVariable) == 0x000008, "Wrong alignment on FMetasoundFrontendVariable");
static_assert(sizeof(FMetasoundFrontendVariable) == 0x0000B0, "Wrong size on FMetasoundFrontendVariable");
static_assert(offsetof(FMetasoundFrontendVariable, Name) == 0x000000, "Member 'FMetasoundFrontendVariable::Name' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendVariable, TypeName) == 0x000004, "Member 'FMetasoundFrontendVariable::TypeName' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendVariable, Literal) == 0x000008, "Member 'FMetasoundFrontendVariable::Literal' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendVariable, ID) == 0x000060, "Member 'FMetasoundFrontendVariable::ID' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendVariable, VariableNodeID) == 0x000070, "Member 'FMetasoundFrontendVariable::VariableNodeID' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendVariable, MutatorNodeID) == 0x000080, "Member 'FMetasoundFrontendVariable::MutatorNodeID' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendVariable, AccessorNodeIDs) == 0x000090, "Member 'FMetasoundFrontendVariable::AccessorNodeIDs' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendVariable, DeferredAccessorNodeIDs) == 0x0000A0, "Member 'FMetasoundFrontendVariable::DeferredAccessorNodeIDs' has a wrong offset!");

struct FMetasoundFrontendNodeInterface final
{
public:
	TArray<struct FMetasoundFrontendVertex>       Inputs;
	TArray<struct FMetasoundFrontendVertex>       Outputs;
	TArray<struct FMetasoundFrontendVertex>       Environment;
};
static_assert(alignof(FMetasoundFrontendNodeInterface) == 0x000008, "Wrong alignment on FMetasoundFrontendNodeInterface");
static_assert(sizeof(FMetasoundFrontendNodeInterface) == 0x000030, "Wrong size on FMetasoundFrontendNodeInterface");
static_assert(offsetof(FMetasoundFrontendNodeInterface, Inputs) == 0x000000, "Member 'FMetasoundFrontendNodeInterface::Inputs' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendNodeInterface, Outputs) == 0x000010, "Member 'FMetasoundFrontendNodeInterface::Outputs' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendNodeInterface, Environment) == 0x000020, "Member 'FMetasoundFrontendNodeInterface::Environment' has a wrong offset!");

struct FMetasoundFrontendNodeStyleDisplay final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FMetasoundFrontendNodeStyleDisplay) == 0x000001, "Wrong alignment on FMetasoundFrontendNodeStyleDisplay");
static_assert(sizeof(FMetasoundFrontendNodeStyleDisplay) == 0x000001, "Wrong size on FMetasoundFrontendNodeStyleDisplay");

struct FMetasoundFrontendNodeStyle final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FMetasoundFrontendNodeStyle) == 0x000001, "Wrong alignment on FMetasoundFrontendNodeStyle");
static_assert(sizeof(FMetasoundFrontendNodeStyle) == 0x000001, "Wrong size on FMetasoundFrontendNodeStyle");

struct FMetasoundFrontendNode final
{
public:
	struct FGuid                                  ID;
	struct FGuid                                  ClassID;
	class FName                                   Name;
	uint8                                         Pad_24[0x4];
	struct FMetasoundFrontendNodeInterface        Interface;
	TArray<struct FMetasoundFrontendVertexLiteral> InputLiterals;
};
static_assert(alignof(FMetasoundFrontendNode) == 0x000008, "Wrong alignment on FMetasoundFrontendNode");
static_assert(sizeof(FMetasoundFrontendNode) == 0x000068, "Wrong size on FMetasoundFrontendNode");
static_assert(offsetof(FMetasoundFrontendNode, ID) == 0x000000, "Member 'FMetasoundFrontendNode::ID' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendNode, ClassID) == 0x000010, "Member 'FMetasoundFrontendNode::ClassID' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendNode, Name) == 0x000020, "Member 'FMetasoundFrontendNode::Name' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendNode, Interface) == 0x000028, "Member 'FMetasoundFrontendNode::Interface' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendNode, InputLiterals) == 0x000058, "Member 'FMetasoundFrontendNode::InputLiterals' has a wrong offset!");

struct FMetasoundFrontendEdge final
{
public:
	struct FGuid                                  FromNodeID;
	struct FGuid                                  FromVertexID;
	struct FGuid                                  ToNodeID;
	struct FGuid                                  ToVertexID;
};
static_assert(alignof(FMetasoundFrontendEdge) == 0x000004, "Wrong alignment on FMetasoundFrontendEdge");
static_assert(sizeof(FMetasoundFrontendEdge) == 0x000040, "Wrong size on FMetasoundFrontendEdge");
static_assert(offsetof(FMetasoundFrontendEdge, FromNodeID) == 0x000000, "Member 'FMetasoundFrontendEdge::FromNodeID' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendEdge, FromVertexID) == 0x000010, "Member 'FMetasoundFrontendEdge::FromVertexID' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendEdge, ToNodeID) == 0x000020, "Member 'FMetasoundFrontendEdge::ToNodeID' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendEdge, ToVertexID) == 0x000030, "Member 'FMetasoundFrontendEdge::ToVertexID' has a wrong offset!");

struct FMetasoundFrontendEdgeStyleLiteralColorPair final
{
public:
	struct FMetasoundFrontendLiteral              Value;
	struct FLinearColor                           Color;
};
static_assert(alignof(FMetasoundFrontendEdgeStyleLiteralColorPair) == 0x000008, "Wrong alignment on FMetasoundFrontendEdgeStyleLiteralColorPair");
static_assert(sizeof(FMetasoundFrontendEdgeStyleLiteralColorPair) == 0x000068, "Wrong size on FMetasoundFrontendEdgeStyleLiteralColorPair");
static_assert(offsetof(FMetasoundFrontendEdgeStyleLiteralColorPair, Value) == 0x000000, "Member 'FMetasoundFrontendEdgeStyleLiteralColorPair::Value' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendEdgeStyleLiteralColorPair, Color) == 0x000058, "Member 'FMetasoundFrontendEdgeStyleLiteralColorPair::Color' has a wrong offset!");

struct FMetasoundFrontendEdgeStyle final
{
public:
	struct FGuid                                  NodeId;
	class FName                                   OutputName;
	uint8                                         Pad_14[0x4];
	TArray<struct FMetasoundFrontendEdgeStyleLiteralColorPair> LiteralColorPairs;
};
static_assert(alignof(FMetasoundFrontendEdgeStyle) == 0x000008, "Wrong alignment on FMetasoundFrontendEdgeStyle");
static_assert(sizeof(FMetasoundFrontendEdgeStyle) == 0x000028, "Wrong size on FMetasoundFrontendEdgeStyle");
static_assert(offsetof(FMetasoundFrontendEdgeStyle, NodeId) == 0x000000, "Member 'FMetasoundFrontendEdgeStyle::NodeId' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendEdgeStyle, OutputName) == 0x000010, "Member 'FMetasoundFrontendEdgeStyle::OutputName' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendEdgeStyle, LiteralColorPairs) == 0x000018, "Member 'FMetasoundFrontendEdgeStyle::LiteralColorPairs' has a wrong offset!");

struct FMetasoundFrontendGraphStyle final
{
public:
	bool                                          bIsGraphEditable;
	uint8                                         Pad_1[0x7];
	TArray<struct FMetasoundFrontendEdgeStyle>    EdgeStyles;
};
static_assert(alignof(FMetasoundFrontendGraphStyle) == 0x000008, "Wrong alignment on FMetasoundFrontendGraphStyle");
static_assert(sizeof(FMetasoundFrontendGraphStyle) == 0x000018, "Wrong size on FMetasoundFrontendGraphStyle");
static_assert(offsetof(FMetasoundFrontendGraphStyle, bIsGraphEditable) == 0x000000, "Member 'FMetasoundFrontendGraphStyle::bIsGraphEditable' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendGraphStyle, EdgeStyles) == 0x000008, "Member 'FMetasoundFrontendGraphStyle::EdgeStyles' has a wrong offset!");

struct FMetasoundFrontendGraph final
{
public:
	TArray<struct FMetasoundFrontendNode>         Nodes;
	TArray<struct FMetasoundFrontendEdge>         Edges;
	TArray<struct FMetasoundFrontendVariable>     Variables;
};
static_assert(alignof(FMetasoundFrontendGraph) == 0x000008, "Wrong alignment on FMetasoundFrontendGraph");
static_assert(sizeof(FMetasoundFrontendGraph) == 0x000030, "Wrong size on FMetasoundFrontendGraph");
static_assert(offsetof(FMetasoundFrontendGraph, Nodes) == 0x000000, "Member 'FMetasoundFrontendGraph::Nodes' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendGraph, Edges) == 0x000010, "Member 'FMetasoundFrontendGraph::Edges' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendGraph, Variables) == 0x000020, "Member 'FMetasoundFrontendGraph::Variables' has a wrong offset!");

struct FMetasoundFrontendVertexMetadata final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FMetasoundFrontendVertexMetadata) == 0x000001, "Wrong alignment on FMetasoundFrontendVertexMetadata");
static_assert(sizeof(FMetasoundFrontendVertexMetadata) == 0x000001, "Wrong size on FMetasoundFrontendVertexMetadata");

struct FMetasoundFrontendClassVertex : public FMetasoundFrontendVertex
{
public:
	struct FGuid                                  NodeId;
	EMetasoundFrontendVertexAccessType            AccessType;
};
static_assert(alignof(FMetasoundFrontendClassVertex) == 0x000004, "Wrong alignment on FMetasoundFrontendClassVertex");
static_assert(sizeof(FMetasoundFrontendClassVertex) == 0x00002C, "Wrong size on FMetasoundFrontendClassVertex");
static_assert(offsetof(FMetasoundFrontendClassVertex, NodeId) == 0x000018, "Member 'FMetasoundFrontendClassVertex::NodeId' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendClassVertex, AccessType) == 0x000028, "Member 'FMetasoundFrontendClassVertex::AccessType' has a wrong offset!");

struct FMetasoundFrontendClassStyleDisplay final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FMetasoundFrontendClassStyleDisplay) == 0x000001, "Wrong alignment on FMetasoundFrontendClassStyleDisplay");
static_assert(sizeof(FMetasoundFrontendClassStyleDisplay) == 0x000001, "Wrong size on FMetasoundFrontendClassStyleDisplay");

struct FMetasoundFrontendClassInput final : public FMetasoundFrontendClassVertex
{
public:
	uint8                                         Pad_2C[0x4];
	struct FMetasoundFrontendLiteral              DefaultLiteral;
};
static_assert(alignof(FMetasoundFrontendClassInput) == 0x000008, "Wrong alignment on FMetasoundFrontendClassInput");
static_assert(sizeof(FMetasoundFrontendClassInput) == 0x000088, "Wrong size on FMetasoundFrontendClassInput");
static_assert(offsetof(FMetasoundFrontendClassInput, DefaultLiteral) == 0x000030, "Member 'FMetasoundFrontendClassInput::DefaultLiteral' has a wrong offset!");

struct FMetasoundFrontendClassVariable final : public FMetasoundFrontendClassVertex
{
public:
	uint8                                         Pad_2C[0x4];
	struct FMetasoundFrontendLiteral              DefaultLiteral;
};
static_assert(alignof(FMetasoundFrontendClassVariable) == 0x000008, "Wrong alignment on FMetasoundFrontendClassVariable");
static_assert(sizeof(FMetasoundFrontendClassVariable) == 0x000088, "Wrong size on FMetasoundFrontendClassVariable");
static_assert(offsetof(FMetasoundFrontendClassVariable, DefaultLiteral) == 0x000030, "Member 'FMetasoundFrontendClassVariable::DefaultLiteral' has a wrong offset!");

struct FMetasoundFrontendClassOutput final : public FMetasoundFrontendClassVertex
{
};
static_assert(alignof(FMetasoundFrontendClassOutput) == 0x000004, "Wrong alignment on FMetasoundFrontendClassOutput");
static_assert(sizeof(FMetasoundFrontendClassOutput) == 0x00002C, "Wrong size on FMetasoundFrontendClassOutput");

struct FMetasoundFrontendClassEnvironmentVariable final
{
public:
	class FName                                   Name;
	class FName                                   TypeName;
	bool                                          bIsRequired;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(FMetasoundFrontendClassEnvironmentVariable) == 0x000004, "Wrong alignment on FMetasoundFrontendClassEnvironmentVariable");
static_assert(sizeof(FMetasoundFrontendClassEnvironmentVariable) == 0x00000C, "Wrong size on FMetasoundFrontendClassEnvironmentVariable");
static_assert(offsetof(FMetasoundFrontendClassEnvironmentVariable, Name) == 0x000000, "Member 'FMetasoundFrontendClassEnvironmentVariable::Name' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendClassEnvironmentVariable, TypeName) == 0x000004, "Member 'FMetasoundFrontendClassEnvironmentVariable::TypeName' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendClassEnvironmentVariable, bIsRequired) == 0x000008, "Member 'FMetasoundFrontendClassEnvironmentVariable::bIsRequired' has a wrong offset!");

struct FMetasoundFrontendInterfaceStyle final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FMetasoundFrontendInterfaceStyle) == 0x000001, "Wrong alignment on FMetasoundFrontendInterfaceStyle");
static_assert(sizeof(FMetasoundFrontendInterfaceStyle) == 0x000001, "Wrong size on FMetasoundFrontendInterfaceStyle");

struct FMetasoundFrontendClassInterface
{
public:
	TArray<struct FMetasoundFrontendClassInput>   Inputs;
	TArray<struct FMetasoundFrontendClassOutput>  Outputs;
	TArray<struct FMetasoundFrontendClassEnvironmentVariable> Environment;
	struct FGuid                                  ChangeID;
};
static_assert(alignof(FMetasoundFrontendClassInterface) == 0x000008, "Wrong alignment on FMetasoundFrontendClassInterface");
static_assert(sizeof(FMetasoundFrontendClassInterface) == 0x000040, "Wrong size on FMetasoundFrontendClassInterface");
static_assert(offsetof(FMetasoundFrontendClassInterface, Inputs) == 0x000000, "Member 'FMetasoundFrontendClassInterface::Inputs' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendClassInterface, Outputs) == 0x000010, "Member 'FMetasoundFrontendClassInterface::Outputs' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendClassInterface, Environment) == 0x000020, "Member 'FMetasoundFrontendClassInterface::Environment' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendClassInterface, ChangeID) == 0x000030, "Member 'FMetasoundFrontendClassInterface::ChangeID' has a wrong offset!");

struct FMetasoundFrontendInterfaceBindingConnection final
{
public:
	class FName                                   OutputName;
	class FName                                   InputName;
};
static_assert(alignof(FMetasoundFrontendInterfaceBindingConnection) == 0x000004, "Wrong alignment on FMetasoundFrontendInterfaceBindingConnection");
static_assert(sizeof(FMetasoundFrontendInterfaceBindingConnection) == 0x000008, "Wrong size on FMetasoundFrontendInterfaceBindingConnection");
static_assert(offsetof(FMetasoundFrontendInterfaceBindingConnection, OutputName) == 0x000000, "Member 'FMetasoundFrontendInterfaceBindingConnection::OutputName' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendInterfaceBindingConnection, InputName) == 0x000004, "Member 'FMetasoundFrontendInterfaceBindingConnection::InputName' has a wrong offset!");

struct FMetasoundFrontendInterfaceBinding final
{
public:
	struct FMetasoundFrontendVersion              Version;
	int32                                         ConnectionPriority;
	TArray<struct FMetasoundFrontendInterfaceBindingConnection> Connections;
};
static_assert(alignof(FMetasoundFrontendInterfaceBinding) == 0x000008, "Wrong alignment on FMetasoundFrontendInterfaceBinding");
static_assert(sizeof(FMetasoundFrontendInterfaceBinding) == 0x000020, "Wrong size on FMetasoundFrontendInterfaceBinding");
static_assert(offsetof(FMetasoundFrontendInterfaceBinding, Version) == 0x000000, "Member 'FMetasoundFrontendInterfaceBinding::Version' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendInterfaceBinding, ConnectionPriority) == 0x00000C, "Member 'FMetasoundFrontendInterfaceBinding::ConnectionPriority' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendInterfaceBinding, Connections) == 0x000010, "Member 'FMetasoundFrontendInterfaceBinding::Connections' has a wrong offset!");

struct FMetasoundFrontendInterface final : public FMetasoundFrontendClassInterface
{
public:
	struct FMetasoundFrontendVersion              Version;
	uint8                                         Pad_4C[0x4];
};
static_assert(alignof(FMetasoundFrontendInterface) == 0x000008, "Wrong alignment on FMetasoundFrontendInterface");
static_assert(sizeof(FMetasoundFrontendInterface) == 0x000050, "Wrong size on FMetasoundFrontendInterface");
static_assert(offsetof(FMetasoundFrontendInterface, Version) == 0x000040, "Member 'FMetasoundFrontendInterface::Version' has a wrong offset!");

struct FMetasoundFrontendClassName final
{
public:
	class FName                                   Namespace;
	class FName                                   Name;
	class FName                                   Variant;
};
static_assert(alignof(FMetasoundFrontendClassName) == 0x000004, "Wrong alignment on FMetasoundFrontendClassName");
static_assert(sizeof(FMetasoundFrontendClassName) == 0x00000C, "Wrong size on FMetasoundFrontendClassName");
static_assert(offsetof(FMetasoundFrontendClassName, Namespace) == 0x000000, "Member 'FMetasoundFrontendClassName::Namespace' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendClassName, Name) == 0x000004, "Member 'FMetasoundFrontendClassName::Name' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendClassName, Variant) == 0x000008, "Member 'FMetasoundFrontendClassName::Variant' has a wrong offset!");

struct FMetasoundFrontendClassMetadata final
{
public:
	struct FMetasoundFrontendClassName            ClassName;
	struct FMetasoundFrontendVersionNumber        Version;
	EMetasoundFrontendClassType                   Type;
	bool                                          bIsDeprecated;
	bool                                          bAutoUpdateManagesInterface;
	uint8                                         Pad_17[0x1];
	struct FGuid                                  ChangeID;
};
static_assert(alignof(FMetasoundFrontendClassMetadata) == 0x000004, "Wrong alignment on FMetasoundFrontendClassMetadata");
static_assert(sizeof(FMetasoundFrontendClassMetadata) == 0x000028, "Wrong size on FMetasoundFrontendClassMetadata");
static_assert(offsetof(FMetasoundFrontendClassMetadata, ClassName) == 0x000000, "Member 'FMetasoundFrontendClassMetadata::ClassName' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendClassMetadata, Version) == 0x00000C, "Member 'FMetasoundFrontendClassMetadata::Version' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendClassMetadata, Type) == 0x000014, "Member 'FMetasoundFrontendClassMetadata::Type' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendClassMetadata, bIsDeprecated) == 0x000015, "Member 'FMetasoundFrontendClassMetadata::bIsDeprecated' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendClassMetadata, bAutoUpdateManagesInterface) == 0x000016, "Member 'FMetasoundFrontendClassMetadata::bAutoUpdateManagesInterface' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendClassMetadata, ChangeID) == 0x000018, "Member 'FMetasoundFrontendClassMetadata::ChangeID' has a wrong offset!");

struct FMetasoundFrontendClassStyle final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FMetasoundFrontendClassStyle) == 0x000001, "Wrong alignment on FMetasoundFrontendClassStyle");
static_assert(sizeof(FMetasoundFrontendClassStyle) == 0x000001, "Wrong size on FMetasoundFrontendClassStyle");

struct FMetasoundFrontendClass
{
public:
	uint8                                         Pad_0[0x8];
	struct FGuid                                  ID;
	struct FMetasoundFrontendClassMetadata        MetaData;
	struct FMetasoundFrontendClassInterface       Interface;
};
static_assert(alignof(FMetasoundFrontendClass) == 0x000008, "Wrong alignment on FMetasoundFrontendClass");
static_assert(sizeof(FMetasoundFrontendClass) == 0x000080, "Wrong size on FMetasoundFrontendClass");
static_assert(offsetof(FMetasoundFrontendClass, ID) == 0x000008, "Member 'FMetasoundFrontendClass::ID' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendClass, MetaData) == 0x000018, "Member 'FMetasoundFrontendClass::MetaData' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendClass, Interface) == 0x000040, "Member 'FMetasoundFrontendClass::Interface' has a wrong offset!");

struct FMetasoundFrontendGraphClassPresetOptions final
{
public:
	bool                                          bIsPreset;
	uint8                                         Pad_1[0x7];
	TSet<class FName>                             InputsInheritingDefault;
};
static_assert(alignof(FMetasoundFrontendGraphClassPresetOptions) == 0x000008, "Wrong alignment on FMetasoundFrontendGraphClassPresetOptions");
static_assert(sizeof(FMetasoundFrontendGraphClassPresetOptions) == 0x000058, "Wrong size on FMetasoundFrontendGraphClassPresetOptions");
static_assert(offsetof(FMetasoundFrontendGraphClassPresetOptions, bIsPreset) == 0x000000, "Member 'FMetasoundFrontendGraphClassPresetOptions::bIsPreset' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendGraphClassPresetOptions, InputsInheritingDefault) == 0x000008, "Member 'FMetasoundFrontendGraphClassPresetOptions::InputsInheritingDefault' has a wrong offset!");

struct FMetasoundFrontendGraphClass final : public FMetasoundFrontendClass
{
public:
	struct FMetasoundFrontendGraph                Graph;
	struct FMetasoundFrontendGraphClassPresetOptions PresetOptions;
};
static_assert(alignof(FMetasoundFrontendGraphClass) == 0x000008, "Wrong alignment on FMetasoundFrontendGraphClass");
static_assert(sizeof(FMetasoundFrontendGraphClass) == 0x000108, "Wrong size on FMetasoundFrontendGraphClass");
static_assert(offsetof(FMetasoundFrontendGraphClass, Graph) == 0x000080, "Member 'FMetasoundFrontendGraphClass::Graph' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendGraphClass, PresetOptions) == 0x0000B0, "Member 'FMetasoundFrontendGraphClass::PresetOptions' has a wrong offset!");

struct FMetasoundFrontendDocumentMetadata final
{
public:
	struct FMetasoundFrontendVersion              Version;
};
static_assert(alignof(FMetasoundFrontendDocumentMetadata) == 0x000004, "Wrong alignment on FMetasoundFrontendDocumentMetadata");
static_assert(sizeof(FMetasoundFrontendDocumentMetadata) == 0x00000C, "Wrong size on FMetasoundFrontendDocumentMetadata");
static_assert(offsetof(FMetasoundFrontendDocumentMetadata, Version) == 0x000000, "Member 'FMetasoundFrontendDocumentMetadata::Version' has a wrong offset!");

struct FMetasoundFrontendDocument final
{
public:
	uint8                                         Pad_0[0x10];
	struct FMetasoundFrontendDocumentMetadata     MetaData;
	uint8                                         Pad_1C[0x4];
	TSet<struct FMetasoundFrontendVersion>        Interfaces;
	struct FMetasoundFrontendGraphClass           RootGraph;
	TArray<struct FMetasoundFrontendGraphClass>   Subgraphs;
	TArray<struct FMetasoundFrontendClass>        Dependencies;
	struct FMetasoundFrontendVersion              ArchetypeVersion;
	uint8                                         Pad_1A4[0x4];
	TArray<struct FMetasoundFrontendVersion>      InterfaceVersions;
};
static_assert(alignof(FMetasoundFrontendDocument) == 0x000008, "Wrong alignment on FMetasoundFrontendDocument");
static_assert(sizeof(FMetasoundFrontendDocument) == 0x0001B8, "Wrong size on FMetasoundFrontendDocument");
static_assert(offsetof(FMetasoundFrontendDocument, MetaData) == 0x000010, "Member 'FMetasoundFrontendDocument::MetaData' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendDocument, Interfaces) == 0x000020, "Member 'FMetasoundFrontendDocument::Interfaces' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendDocument, RootGraph) == 0x000070, "Member 'FMetasoundFrontendDocument::RootGraph' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendDocument, Subgraphs) == 0x000178, "Member 'FMetasoundFrontendDocument::Subgraphs' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendDocument, Dependencies) == 0x000188, "Member 'FMetasoundFrontendDocument::Dependencies' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendDocument, ArchetypeVersion) == 0x000198, "Member 'FMetasoundFrontendDocument::ArchetypeVersion' has a wrong offset!");
static_assert(offsetof(FMetasoundFrontendDocument, InterfaceVersions) == 0x0001A8, "Member 'FMetasoundFrontendDocument::InterfaceVersions' has a wrong offset!");

struct FMetaSoundFrontendDocumentBuilder final
{
public:
	TScriptInterface<class IMetaSoundDocumentInterface> DocumentInterface;
	uint8                                         Pad_10[0x8];
};
static_assert(alignof(FMetaSoundFrontendDocumentBuilder) == 0x000008, "Wrong alignment on FMetaSoundFrontendDocumentBuilder");
static_assert(sizeof(FMetaSoundFrontendDocumentBuilder) == 0x000018, "Wrong size on FMetaSoundFrontendDocumentBuilder");
static_assert(offsetof(FMetaSoundFrontendDocumentBuilder, DocumentInterface) == 0x000000, "Member 'FMetaSoundFrontendDocumentBuilder::DocumentInterface' has a wrong offset!");

}
