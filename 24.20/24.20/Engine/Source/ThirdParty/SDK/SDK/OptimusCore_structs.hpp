#pragma once

#include "Basic.hpp"

#include "ComputeFramework_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EOptimusDiagnosticLevel : uint8
{
	None                                     = 0,
	Info                                     = 1,
	Warning                                  = 2,
	Error                                    = 3,
	EOptimusDiagnosticLevel_MAX              = 4,
};

enum class EOptimusBufferWriteType : uint8
{
	Write                                    = 0,
	WriteAtomicAdd                           = 1,
	WriteAtomicMin                           = 2,
	WriteAtomicMax                           = 3,
	Count                                    = 4,
	EOptimusBufferWriteType_MAX              = 5,
};

enum class EOptimusSkinnedMeshExecDomain : uint8
{
	None                                     = 0,
	Vertex                                   = 1,
	Triangle                                 = 2,
	EOptimusSkinnedMeshExecDomain_MAX        = 3,
};

enum class EOptimusTerminalType : uint32
{
	Unknown                                  = 0,
	Entry                                    = 1,
	Return                                   = 2,
	EOptimusTerminalType_MAX                 = 3,
};

enum class EOptimusDataDomainType : uint32
{
	Dimensional                              = 0,
	Expression                               = 1,
	EOptimusDataDomainType_MAX               = 2,
};

enum class EOptimusDataTypeUsageFlags : uint8
{
	None                                     = 0,
	Resource                                 = 1,
	Variable                                 = 2,
	AnimAttributes                           = 4,
	EOptimusDataTypeUsageFlags_MAX           = 5,
};

enum class EOptimusDataTypeFlags : uint8
{
	None                                     = 0,
	IsStructType                             = 1,
	ShowElements                             = 2,
	EOptimusDataTypeFlags_MAX                = 3,
};

enum class EOptimusNodeGraphType : uint32
{
	Setup                                    = 0,
	Update                                   = 1,
	ExternalTrigger                          = 2,
	Function                                 = 3,
	SubGraph                                 = 4,
	Transient                                = 5,
	EOptimusNodeGraphType_MAX                = 6,
};

enum class EOptimusNodePinStorageType : uint8
{
	Value                                    = 0,
	Resource                                 = 1,
	EOptimusNodePinStorageType_MAX           = 2,
};

enum class EOptimusNodePinDirection : uint8
{
	Unknown                                  = 0,
	Input                                    = 1,
	Output                                   = 2,
	EOptimusNodePinDirection_MAX             = 3,
};

struct FOptimusExecutionDomain final
{
public:
	class FName                                   Name;
};
static_assert(alignof(FOptimusExecutionDomain) == 0x000004, "Wrong alignment on FOptimusExecutionDomain");
static_assert(sizeof(FOptimusExecutionDomain) == 0x000004, "Wrong size on FOptimusExecutionDomain");
static_assert(offsetof(FOptimusExecutionDomain, Name) == 0x000000, "Member 'FOptimusExecutionDomain::Name' has a wrong offset!");

struct FOptimusShaderText final
{
public:
	class FString                                 Declarations;
	class FString                                 ShaderText;
};
static_assert(alignof(FOptimusShaderText) == 0x000008, "Wrong alignment on FOptimusShaderText");
static_assert(sizeof(FOptimusShaderText) == 0x000020, "Wrong size on FOptimusShaderText");
static_assert(offsetof(FOptimusShaderText, Declarations) == 0x000000, "Member 'FOptimusShaderText::Declarations' has a wrong offset!");
static_assert(offsetof(FOptimusShaderText, ShaderText) == 0x000010, "Member 'FOptimusShaderText::ShaderText' has a wrong offset!");

struct FOptimusDataTypeRef final
{
public:
	class FName                                   TypeName;
	TWeakObjectPtr<class UObject>                 TypeObject;
};
static_assert(alignof(FOptimusDataTypeRef) == 0x000004, "Wrong alignment on FOptimusDataTypeRef");
static_assert(sizeof(FOptimusDataTypeRef) == 0x00000C, "Wrong size on FOptimusDataTypeRef");
static_assert(offsetof(FOptimusDataTypeRef, TypeName) == 0x000000, "Member 'FOptimusDataTypeRef::TypeName' has a wrong offset!");
static_assert(offsetof(FOptimusDataTypeRef, TypeObject) == 0x000004, "Member 'FOptimusDataTypeRef::TypeObject' has a wrong offset!");

struct FOptimus_ShaderBinding final
{
public:
	class FName                                   Name;
	struct FOptimusDataTypeRef                    DataType;
};
static_assert(alignof(FOptimus_ShaderBinding) == 0x000004, "Wrong alignment on FOptimus_ShaderBinding");
static_assert(sizeof(FOptimus_ShaderBinding) == 0x000010, "Wrong size on FOptimus_ShaderBinding");
static_assert(offsetof(FOptimus_ShaderBinding, Name) == 0x000000, "Member 'FOptimus_ShaderBinding::Name' has a wrong offset!");
static_assert(offsetof(FOptimus_ShaderBinding, DataType) == 0x000004, "Member 'FOptimus_ShaderBinding::DataType' has a wrong offset!");

struct FOptimusValidatedName final
{
public:
	class FName                                   Name;
};
static_assert(alignof(FOptimusValidatedName) == 0x000004, "Wrong alignment on FOptimusValidatedName");
static_assert(sizeof(FOptimusValidatedName) == 0x000004, "Wrong size on FOptimusValidatedName");
static_assert(offsetof(FOptimusValidatedName, Name) == 0x000000, "Member 'FOptimusValidatedName::Name' has a wrong offset!");

struct FOptimusDataDomain final
{
public:
	EOptimusDataDomainType                        Type;
	uint8                                         Pad_4[0x4];
	TArray<class FName>                           DimensionNames;
	int32                                         Multiplier;
	uint8                                         Pad_1C[0x4];
	class FString                                 Expression;
	TArray<class FName>                           LevelNames;
};
static_assert(alignof(FOptimusDataDomain) == 0x000008, "Wrong alignment on FOptimusDataDomain");
static_assert(sizeof(FOptimusDataDomain) == 0x000040, "Wrong size on FOptimusDataDomain");
static_assert(offsetof(FOptimusDataDomain, Type) == 0x000000, "Member 'FOptimusDataDomain::Type' has a wrong offset!");
static_assert(offsetof(FOptimusDataDomain, DimensionNames) == 0x000008, "Member 'FOptimusDataDomain::DimensionNames' has a wrong offset!");
static_assert(offsetof(FOptimusDataDomain, Multiplier) == 0x000018, "Member 'FOptimusDataDomain::Multiplier' has a wrong offset!");
static_assert(offsetof(FOptimusDataDomain, Expression) == 0x000020, "Member 'FOptimusDataDomain::Expression' has a wrong offset!");
static_assert(offsetof(FOptimusDataDomain, LevelNames) == 0x000030, "Member 'FOptimusDataDomain::LevelNames' has a wrong offset!");

struct FOptimusParameterBinding final
{
public:
	struct FOptimusValidatedName                  Name;
	struct FOptimusDataTypeRef                    DataType;
	struct FOptimusDataDomain                     DataDomain;
};
static_assert(alignof(FOptimusParameterBinding) == 0x000008, "Wrong alignment on FOptimusParameterBinding");
static_assert(sizeof(FOptimusParameterBinding) == 0x000050, "Wrong size on FOptimusParameterBinding");
static_assert(offsetof(FOptimusParameterBinding, Name) == 0x000000, "Member 'FOptimusParameterBinding::Name' has a wrong offset!");
static_assert(offsetof(FOptimusParameterBinding, DataType) == 0x000004, "Member 'FOptimusParameterBinding::DataType' has a wrong offset!");
static_assert(offsetof(FOptimusParameterBinding, DataDomain) == 0x000010, "Member 'FOptimusParameterBinding::DataDomain' has a wrong offset!");

struct alignas(0x08) FOptimusAction
{
public:
	uint8                                         Pad_0[0x18];
};
static_assert(alignof(FOptimusAction) == 0x000008, "Wrong alignment on FOptimusAction");
static_assert(sizeof(FOptimusAction) == 0x000018, "Wrong size on FOptimusAction");

struct FOptimusComponentBindingAction_RemoveBinding final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x20];
};
static_assert(alignof(FOptimusComponentBindingAction_RemoveBinding) == 0x000008, "Wrong alignment on FOptimusComponentBindingAction_RemoveBinding");
static_assert(sizeof(FOptimusComponentBindingAction_RemoveBinding) == 0x000038, "Wrong size on FOptimusComponentBindingAction_RemoveBinding");

struct FOptimusParameterBindingArray final
{
public:
	TArray<struct FOptimusParameterBinding>       InnerArray;
};
static_assert(alignof(FOptimusParameterBindingArray) == 0x000008, "Wrong alignment on FOptimusParameterBindingArray");
static_assert(sizeof(FOptimusParameterBindingArray) == 0x000010, "Wrong size on FOptimusParameterBindingArray");
static_assert(offsetof(FOptimusParameterBindingArray, InnerArray) == 0x000000, "Member 'FOptimusParameterBindingArray::InnerArray' has a wrong offset!");

struct FOptimusComputeGraphInfo final
{
public:
	EOptimusNodeGraphType                         GraphType;
	class FName                                   GraphName;
	class UOptimusComputeGraph*                   ComputeGraph;
};
static_assert(alignof(FOptimusComputeGraphInfo) == 0x000008, "Wrong alignment on FOptimusComputeGraphInfo");
static_assert(sizeof(FOptimusComputeGraphInfo) == 0x000010, "Wrong size on FOptimusComputeGraphInfo");
static_assert(offsetof(FOptimusComputeGraphInfo, GraphType) == 0x000000, "Member 'FOptimusComputeGraphInfo::GraphType' has a wrong offset!");
static_assert(offsetof(FOptimusComputeGraphInfo, GraphName) == 0x000004, "Member 'FOptimusComputeGraphInfo::GraphName' has a wrong offset!");
static_assert(offsetof(FOptimusComputeGraphInfo, ComputeGraph) == 0x000008, "Member 'FOptimusComputeGraphInfo::ComputeGraph' has a wrong offset!");

struct FOptimusCompoundAction final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x10];
};
static_assert(alignof(FOptimusCompoundAction) == 0x000008, "Wrong alignment on FOptimusCompoundAction");
static_assert(sizeof(FOptimusCompoundAction) == 0x000028, "Wrong size on FOptimusCompoundAction");

struct FOptimusComponentBindingAction_AddBinding final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x10];
};
static_assert(alignof(FOptimusComponentBindingAction_AddBinding) == 0x000008, "Wrong alignment on FOptimusComponentBindingAction_AddBinding");
static_assert(sizeof(FOptimusComponentBindingAction_AddBinding) == 0x000028, "Wrong size on FOptimusComponentBindingAction_AddBinding");

struct FOptimusComponentBindingAction_RenameBinding final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x8];
};
static_assert(alignof(FOptimusComponentBindingAction_RenameBinding) == 0x000008, "Wrong alignment on FOptimusComponentBindingAction_RenameBinding");
static_assert(sizeof(FOptimusComponentBindingAction_RenameBinding) == 0x000020, "Wrong size on FOptimusComponentBindingAction_RenameBinding");

struct FOptimusComponentBindingAction_SetComponentSource final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x18];
};
static_assert(alignof(FOptimusComponentBindingAction_SetComponentSource) == 0x000008, "Wrong alignment on FOptimusComponentBindingAction_SetComponentSource");
static_assert(sizeof(FOptimusComponentBindingAction_SetComponentSource) == 0x000030, "Wrong size on FOptimusComponentBindingAction_SetComponentSource");

struct FOptimusNodeAction_RenameNode final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x40];
};
static_assert(alignof(FOptimusNodeAction_RenameNode) == 0x000008, "Wrong alignment on FOptimusNodeAction_RenameNode");
static_assert(sizeof(FOptimusNodeAction_RenameNode) == 0x000058, "Wrong size on FOptimusNodeAction_RenameNode");

struct FOptimusNodeAction_MoveNode final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x30];
};
static_assert(alignof(FOptimusNodeAction_MoveNode) == 0x000008, "Wrong alignment on FOptimusNodeAction_MoveNode");
static_assert(sizeof(FOptimusNodeAction_MoveNode) == 0x000048, "Wrong size on FOptimusNodeAction_MoveNode");

struct FOptimusNodeAction_SetPinValue final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x30];
};
static_assert(alignof(FOptimusNodeAction_SetPinValue) == 0x000008, "Wrong alignment on FOptimusNodeAction_SetPinValue");
static_assert(sizeof(FOptimusNodeAction_SetPinValue) == 0x000048, "Wrong size on FOptimusNodeAction_SetPinValue");

struct FOptimusNodeAction_SetPinName final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x18];
};
static_assert(alignof(FOptimusNodeAction_SetPinName) == 0x000008, "Wrong alignment on FOptimusNodeAction_SetPinName");
static_assert(sizeof(FOptimusNodeAction_SetPinName) == 0x000030, "Wrong size on FOptimusNodeAction_SetPinName");

struct FOptimusNodeAction_SetPinType final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x18];
};
static_assert(alignof(FOptimusNodeAction_SetPinType) == 0x000008, "Wrong alignment on FOptimusNodeAction_SetPinType");
static_assert(sizeof(FOptimusNodeAction_SetPinType) == 0x000030, "Wrong size on FOptimusNodeAction_SetPinType");

struct FOptimusNodeAction_SetPinDataDomain final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x90];
};
static_assert(alignof(FOptimusNodeAction_SetPinDataDomain) == 0x000008, "Wrong alignment on FOptimusNodeAction_SetPinDataDomain");
static_assert(sizeof(FOptimusNodeAction_SetPinDataDomain) == 0x0000A8, "Wrong size on FOptimusNodeAction_SetPinDataDomain");

struct FOptimusNodeAction_ConnectAdderPin final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x38];
};
static_assert(alignof(FOptimusNodeAction_ConnectAdderPin) == 0x000008, "Wrong alignment on FOptimusNodeAction_ConnectAdderPin");
static_assert(sizeof(FOptimusNodeAction_ConnectAdderPin) == 0x000050, "Wrong size on FOptimusNodeAction_ConnectAdderPin");

struct FOptimusNodeAction_AddRemovePin : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x98];
};
static_assert(alignof(FOptimusNodeAction_AddRemovePin) == 0x000008, "Wrong alignment on FOptimusNodeAction_AddRemovePin");
static_assert(sizeof(FOptimusNodeAction_AddRemovePin) == 0x0000B0, "Wrong size on FOptimusNodeAction_AddRemovePin");

struct FOptimusNodeAction_AddPin final : public FOptimusNodeAction_AddRemovePin
{
};
static_assert(alignof(FOptimusNodeAction_AddPin) == 0x000008, "Wrong alignment on FOptimusNodeAction_AddPin");
static_assert(sizeof(FOptimusNodeAction_AddPin) == 0x0000B0, "Wrong size on FOptimusNodeAction_AddPin");

struct FOptimusNodeAction_AddGroupingPin final : public FOptimusNodeAction_AddRemovePin
{
};
static_assert(alignof(FOptimusNodeAction_AddGroupingPin) == 0x000008, "Wrong alignment on FOptimusNodeAction_AddGroupingPin");
static_assert(sizeof(FOptimusNodeAction_AddGroupingPin) == 0x0000B0, "Wrong size on FOptimusNodeAction_AddGroupingPin");

struct FOptimusNodeAction_RemovePin final : public FOptimusNodeAction_AddRemovePin
{
};
static_assert(alignof(FOptimusNodeAction_RemovePin) == 0x000008, "Wrong alignment on FOptimusNodeAction_RemovePin");
static_assert(sizeof(FOptimusNodeAction_RemovePin) == 0x0000B0, "Wrong size on FOptimusNodeAction_RemovePin");

struct FOptimusNodeAction_MovePin final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x30];
};
static_assert(alignof(FOptimusNodeAction_MovePin) == 0x000008, "Wrong alignment on FOptimusNodeAction_MovePin");
static_assert(sizeof(FOptimusNodeAction_MovePin) == 0x000048, "Wrong size on FOptimusNodeAction_MovePin");

struct alignas(0x10) FOptimusNodeGraphAction_AddGraph final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x78];
};
static_assert(alignof(FOptimusNodeGraphAction_AddGraph) == 0x000010, "Wrong alignment on FOptimusNodeGraphAction_AddGraph");
static_assert(sizeof(FOptimusNodeGraphAction_AddGraph) == 0x000090, "Wrong size on FOptimusNodeGraphAction_AddGraph");

struct FOptimusNodeGraphAction_RemoveGraph final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x40];
};
static_assert(alignof(FOptimusNodeGraphAction_RemoveGraph) == 0x000008, "Wrong alignment on FOptimusNodeGraphAction_RemoveGraph");
static_assert(sizeof(FOptimusNodeGraphAction_RemoveGraph) == 0x000058, "Wrong size on FOptimusNodeGraphAction_RemoveGraph");

struct FOptimusNodeGraphAction_RenameGraph final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x18];
};
static_assert(alignof(FOptimusNodeGraphAction_RenameGraph) == 0x000008, "Wrong alignment on FOptimusNodeGraphAction_RenameGraph");
static_assert(sizeof(FOptimusNodeGraphAction_RenameGraph) == 0x000030, "Wrong size on FOptimusNodeGraphAction_RenameGraph");

struct alignas(0x10) FOptimusNodeGraphAction_AddNode final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x88];
};
static_assert(alignof(FOptimusNodeGraphAction_AddNode) == 0x000010, "Wrong alignment on FOptimusNodeGraphAction_AddNode");
static_assert(sizeof(FOptimusNodeGraphAction_AddNode) == 0x0000A0, "Wrong size on FOptimusNodeGraphAction_AddNode");

struct alignas(0x10) FOptimusNodeGraphAction_DuplicateNode final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x88];
};
static_assert(alignof(FOptimusNodeGraphAction_DuplicateNode) == 0x000010, "Wrong alignment on FOptimusNodeGraphAction_DuplicateNode");
static_assert(sizeof(FOptimusNodeGraphAction_DuplicateNode) == 0x0000A0, "Wrong size on FOptimusNodeGraphAction_DuplicateNode");

struct FOptimusNodeGraphAction_RemoveNode final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x48];
};
static_assert(alignof(FOptimusNodeGraphAction_RemoveNode) == 0x000008, "Wrong alignment on FOptimusNodeGraphAction_RemoveNode");
static_assert(sizeof(FOptimusNodeGraphAction_RemoveNode) == 0x000060, "Wrong size on FOptimusNodeGraphAction_RemoveNode");

struct FOptimusNodeGraphAction_AddRemoveLink : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x28];
};
static_assert(alignof(FOptimusNodeGraphAction_AddRemoveLink) == 0x000008, "Wrong alignment on FOptimusNodeGraphAction_AddRemoveLink");
static_assert(sizeof(FOptimusNodeGraphAction_AddRemoveLink) == 0x000040, "Wrong size on FOptimusNodeGraphAction_AddRemoveLink");

struct FOptimusNodeGraphAction_AddLink final : public FOptimusNodeGraphAction_AddRemoveLink
{
};
static_assert(alignof(FOptimusNodeGraphAction_AddLink) == 0x000008, "Wrong alignment on FOptimusNodeGraphAction_AddLink");
static_assert(sizeof(FOptimusNodeGraphAction_AddLink) == 0x000040, "Wrong size on FOptimusNodeGraphAction_AddLink");

struct FOptimusNodeGraphAction_RemoveLink final : public FOptimusNodeGraphAction_AddRemoveLink
{
};
static_assert(alignof(FOptimusNodeGraphAction_RemoveLink) == 0x000008, "Wrong alignment on FOptimusNodeGraphAction_RemoveLink");
static_assert(sizeof(FOptimusNodeGraphAction_RemoveLink) == 0x000040, "Wrong size on FOptimusNodeGraphAction_RemoveLink");

struct FOptimusNodeGraphAction_PackageKernelFunction final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x90];
};
static_assert(alignof(FOptimusNodeGraphAction_PackageKernelFunction) == 0x000008, "Wrong alignment on FOptimusNodeGraphAction_PackageKernelFunction");
static_assert(sizeof(FOptimusNodeGraphAction_PackageKernelFunction) == 0x0000A8, "Wrong size on FOptimusNodeGraphAction_PackageKernelFunction");

struct FOptimusNodeGraphAction_UnpackageKernelFunction final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x48];
};
static_assert(alignof(FOptimusNodeGraphAction_UnpackageKernelFunction) == 0x000008, "Wrong alignment on FOptimusNodeGraphAction_UnpackageKernelFunction");
static_assert(sizeof(FOptimusNodeGraphAction_UnpackageKernelFunction) == 0x000060, "Wrong size on FOptimusNodeGraphAction_UnpackageKernelFunction");

struct FOptimusResourceAction_AddResource final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x50];
};
static_assert(alignof(FOptimusResourceAction_AddResource) == 0x000008, "Wrong alignment on FOptimusResourceAction_AddResource");
static_assert(sizeof(FOptimusResourceAction_AddResource) == 0x000068, "Wrong size on FOptimusResourceAction_AddResource");

struct FOptimusResourceAction_RemoveResource final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x20];
};
static_assert(alignof(FOptimusResourceAction_RemoveResource) == 0x000008, "Wrong alignment on FOptimusResourceAction_RemoveResource");
static_assert(sizeof(FOptimusResourceAction_RemoveResource) == 0x000038, "Wrong size on FOptimusResourceAction_RemoveResource");

struct FOptimusResourceAction_RenameResource final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x8];
};
static_assert(alignof(FOptimusResourceAction_RenameResource) == 0x000008, "Wrong alignment on FOptimusResourceAction_RenameResource");
static_assert(sizeof(FOptimusResourceAction_RenameResource) == 0x000020, "Wrong size on FOptimusResourceAction_RenameResource");

struct FOptimusResourceAction_SetDataType final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x20];
};
static_assert(alignof(FOptimusResourceAction_SetDataType) == 0x000008, "Wrong alignment on FOptimusResourceAction_SetDataType");
static_assert(sizeof(FOptimusResourceAction_SetDataType) == 0x000038, "Wrong size on FOptimusResourceAction_SetDataType");

struct FOptimusResourceAction_SetDataDomain final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x88];
};
static_assert(alignof(FOptimusResourceAction_SetDataDomain) == 0x000008, "Wrong alignment on FOptimusResourceAction_SetDataDomain");
static_assert(sizeof(FOptimusResourceAction_SetDataDomain) == 0x0000A0, "Wrong size on FOptimusResourceAction_SetDataDomain");

struct FOptimusVariableAction_AddVariable final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x10];
};
static_assert(alignof(FOptimusVariableAction_AddVariable) == 0x000008, "Wrong alignment on FOptimusVariableAction_AddVariable");
static_assert(sizeof(FOptimusVariableAction_AddVariable) == 0x000028, "Wrong size on FOptimusVariableAction_AddVariable");

struct FOptimusVariableAction_RemoveVariable final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x20];
};
static_assert(alignof(FOptimusVariableAction_RemoveVariable) == 0x000008, "Wrong alignment on FOptimusVariableAction_RemoveVariable");
static_assert(sizeof(FOptimusVariableAction_RemoveVariable) == 0x000038, "Wrong size on FOptimusVariableAction_RemoveVariable");

struct FOptimusVariableAction_RenameVariable final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x8];
};
static_assert(alignof(FOptimusVariableAction_RenameVariable) == 0x000008, "Wrong alignment on FOptimusVariableAction_RenameVariable");
static_assert(sizeof(FOptimusVariableAction_RenameVariable) == 0x000020, "Wrong size on FOptimusVariableAction_RenameVariable");

struct FOptimusVariableAction_SetDataType final : public FOptimusAction
{
public:
	uint8                                         Pad_18[0x20];
};
static_assert(alignof(FOptimusVariableAction_SetDataType) == 0x000008, "Wrong alignment on FOptimusVariableAction_SetDataType");
static_assert(sizeof(FOptimusVariableAction_SetDataType) == 0x000038, "Wrong size on FOptimusVariableAction_SetDataType");

struct FOptimusAnimAttributeDescription final
{
public:
	class FString                                 Name;
	class FName                                   BoneName;
	struct FOptimusDataTypeRef                    DataType;
	class UOptimusValueContainer*                 DefaultValue;
	class FString                                 HlslId;
	class FName                                   PinName;
	uint8                                         Pad_3C[0x4];
};
static_assert(alignof(FOptimusAnimAttributeDescription) == 0x000008, "Wrong alignment on FOptimusAnimAttributeDescription");
static_assert(sizeof(FOptimusAnimAttributeDescription) == 0x000040, "Wrong size on FOptimusAnimAttributeDescription");
static_assert(offsetof(FOptimusAnimAttributeDescription, Name) == 0x000000, "Member 'FOptimusAnimAttributeDescription::Name' has a wrong offset!");
static_assert(offsetof(FOptimusAnimAttributeDescription, BoneName) == 0x000010, "Member 'FOptimusAnimAttributeDescription::BoneName' has a wrong offset!");
static_assert(offsetof(FOptimusAnimAttributeDescription, DataType) == 0x000014, "Member 'FOptimusAnimAttributeDescription::DataType' has a wrong offset!");
static_assert(offsetof(FOptimusAnimAttributeDescription, DefaultValue) == 0x000020, "Member 'FOptimusAnimAttributeDescription::DefaultValue' has a wrong offset!");
static_assert(offsetof(FOptimusAnimAttributeDescription, HlslId) == 0x000028, "Member 'FOptimusAnimAttributeDescription::HlslId' has a wrong offset!");
static_assert(offsetof(FOptimusAnimAttributeDescription, PinName) == 0x000038, "Member 'FOptimusAnimAttributeDescription::PinName' has a wrong offset!");

struct FOptimusAnimAttributeArray final
{
public:
	TArray<struct FOptimusAnimAttributeDescription> InnerArray;
};
static_assert(alignof(FOptimusAnimAttributeArray) == 0x000008, "Wrong alignment on FOptimusAnimAttributeArray");
static_assert(sizeof(FOptimusAnimAttributeArray) == 0x000010, "Wrong size on FOptimusAnimAttributeArray");
static_assert(offsetof(FOptimusAnimAttributeArray, InnerArray) == 0x000000, "Member 'FOptimusAnimAttributeArray::InnerArray' has a wrong offset!");

struct FOptimusDebugDrawParameters final
{
public:
	bool                                          bForceEnable;
	uint8                                         Pad_1[0x3];
	int32                                         MaxLineCount;
	int32                                         MaxTriangleCount;
	int32                                         MaxCharacterCount;
	int32                                         FontSize;
};
static_assert(alignof(FOptimusDebugDrawParameters) == 0x000004, "Wrong alignment on FOptimusDebugDrawParameters");
static_assert(sizeof(FOptimusDebugDrawParameters) == 0x000014, "Wrong size on FOptimusDebugDrawParameters");
static_assert(offsetof(FOptimusDebugDrawParameters, bForceEnable) == 0x000000, "Member 'FOptimusDebugDrawParameters::bForceEnable' has a wrong offset!");
static_assert(offsetof(FOptimusDebugDrawParameters, MaxLineCount) == 0x000004, "Member 'FOptimusDebugDrawParameters::MaxLineCount' has a wrong offset!");
static_assert(offsetof(FOptimusDebugDrawParameters, MaxTriangleCount) == 0x000008, "Member 'FOptimusDebugDrawParameters::MaxTriangleCount' has a wrong offset!");
static_assert(offsetof(FOptimusDebugDrawParameters, MaxCharacterCount) == 0x00000C, "Member 'FOptimusDebugDrawParameters::MaxCharacterCount' has a wrong offset!");
static_assert(offsetof(FOptimusDebugDrawParameters, FontSize) == 0x000010, "Member 'FOptimusDebugDrawParameters::FontSize' has a wrong offset!");

struct FOptimusGraphVariableDescription final
{
public:
	class FString                                 Name;
	struct FShaderValueTypeHandle                 ValueType;
	TArray<uint8>                                 Value;
	int32                                         Offset;
	uint8                                         Pad_2C[0x4];
};
static_assert(alignof(FOptimusGraphVariableDescription) == 0x000008, "Wrong alignment on FOptimusGraphVariableDescription");
static_assert(sizeof(FOptimusGraphVariableDescription) == 0x000030, "Wrong size on FOptimusGraphVariableDescription");
static_assert(offsetof(FOptimusGraphVariableDescription, Name) == 0x000000, "Member 'FOptimusGraphVariableDescription::Name' has a wrong offset!");
static_assert(offsetof(FOptimusGraphVariableDescription, ValueType) == 0x000010, "Member 'FOptimusGraphVariableDescription::ValueType' has a wrong offset!");
static_assert(offsetof(FOptimusGraphVariableDescription, Value) == 0x000018, "Member 'FOptimusGraphVariableDescription::Value' has a wrong offset!");
static_assert(offsetof(FOptimusGraphVariableDescription, Offset) == 0x000028, "Member 'FOptimusGraphVariableDescription::Offset' has a wrong offset!");

struct FOptimusSecondaryInputBindingsGroup final
{
public:
	struct FOptimusValidatedName                  GroupName;
	uint8                                         Pad_4[0x4];
	struct FOptimusParameterBindingArray          BindingArray;
};
static_assert(alignof(FOptimusSecondaryInputBindingsGroup) == 0x000008, "Wrong alignment on FOptimusSecondaryInputBindingsGroup");
static_assert(sizeof(FOptimusSecondaryInputBindingsGroup) == 0x000018, "Wrong size on FOptimusSecondaryInputBindingsGroup");
static_assert(offsetof(FOptimusSecondaryInputBindingsGroup, GroupName) == 0x000000, "Member 'FOptimusSecondaryInputBindingsGroup::GroupName' has a wrong offset!");
static_assert(offsetof(FOptimusSecondaryInputBindingsGroup, BindingArray) == 0x000008, "Member 'FOptimusSecondaryInputBindingsGroup::BindingArray' has a wrong offset!");

struct FOptimusNode_GetVariable_DuplicationInfo final
{
public:
	class FName                                   VariableName;
	struct FOptimusDataTypeRef                    DataType;
	class FString                                 DefaultValue;
};
static_assert(alignof(FOptimusNode_GetVariable_DuplicationInfo) == 0x000008, "Wrong alignment on FOptimusNode_GetVariable_DuplicationInfo");
static_assert(sizeof(FOptimusNode_GetVariable_DuplicationInfo) == 0x000020, "Wrong size on FOptimusNode_GetVariable_DuplicationInfo");
static_assert(offsetof(FOptimusNode_GetVariable_DuplicationInfo, VariableName) == 0x000000, "Member 'FOptimusNode_GetVariable_DuplicationInfo::VariableName' has a wrong offset!");
static_assert(offsetof(FOptimusNode_GetVariable_DuplicationInfo, DataType) == 0x000004, "Member 'FOptimusNode_GetVariable_DuplicationInfo::DataType' has a wrong offset!");
static_assert(offsetof(FOptimusNode_GetVariable_DuplicationInfo, DefaultValue) == 0x000010, "Member 'FOptimusNode_GetVariable_DuplicationInfo::DefaultValue' has a wrong offset!");

struct FOptimusNode_ResourceAccessorBase_DuplicationInfo final
{
public:
	class FName                                   ResourceName;
	struct FOptimusDataTypeRef                    DataType;
	struct FOptimusDataDomain                     DataDomain;
};
static_assert(alignof(FOptimusNode_ResourceAccessorBase_DuplicationInfo) == 0x000008, "Wrong alignment on FOptimusNode_ResourceAccessorBase_DuplicationInfo");
static_assert(sizeof(FOptimusNode_ResourceAccessorBase_DuplicationInfo) == 0x000050, "Wrong size on FOptimusNode_ResourceAccessorBase_DuplicationInfo");
static_assert(offsetof(FOptimusNode_ResourceAccessorBase_DuplicationInfo, ResourceName) == 0x000000, "Member 'FOptimusNode_ResourceAccessorBase_DuplicationInfo::ResourceName' has a wrong offset!");
static_assert(offsetof(FOptimusNode_ResourceAccessorBase_DuplicationInfo, DataType) == 0x000004, "Member 'FOptimusNode_ResourceAccessorBase_DuplicationInfo::DataType' has a wrong offset!");
static_assert(offsetof(FOptimusNode_ResourceAccessorBase_DuplicationInfo, DataDomain) == 0x000010, "Member 'FOptimusNode_ResourceAccessorBase_DuplicationInfo::DataDomain' has a wrong offset!");

struct FOptimusDataType final
{
public:
	class FName                                   TypeName;
	uint8                                         Pad_4[0x4];
	class FText                                   DisplayName;
	struct FShaderValueTypeHandle                 ShaderValueType;
	int32                                         ShaderValueSize;
	class FName                                   TypeCategory;
	TWeakObjectPtr<class UObject>                 TypeObject;
	bool                                          bHasCustomPinColor;
	uint8                                         Pad_39[0x3];
	struct FLinearColor                           CustomPinColor;
	EOptimusDataTypeUsageFlags                    UsageFlags;
	EOptimusDataTypeFlags                         TypeFlags;
	uint8                                         Pad_4E[0x2];
};
static_assert(alignof(FOptimusDataType) == 0x000008, "Wrong alignment on FOptimusDataType");
static_assert(sizeof(FOptimusDataType) == 0x000050, "Wrong size on FOptimusDataType");
static_assert(offsetof(FOptimusDataType, TypeName) == 0x000000, "Member 'FOptimusDataType::TypeName' has a wrong offset!");
static_assert(offsetof(FOptimusDataType, DisplayName) == 0x000008, "Member 'FOptimusDataType::DisplayName' has a wrong offset!");
static_assert(offsetof(FOptimusDataType, ShaderValueType) == 0x000020, "Member 'FOptimusDataType::ShaderValueType' has a wrong offset!");
static_assert(offsetof(FOptimusDataType, ShaderValueSize) == 0x000028, "Member 'FOptimusDataType::ShaderValueSize' has a wrong offset!");
static_assert(offsetof(FOptimusDataType, TypeCategory) == 0x00002C, "Member 'FOptimusDataType::TypeCategory' has a wrong offset!");
static_assert(offsetof(FOptimusDataType, TypeObject) == 0x000030, "Member 'FOptimusDataType::TypeObject' has a wrong offset!");
static_assert(offsetof(FOptimusDataType, bHasCustomPinColor) == 0x000038, "Member 'FOptimusDataType::bHasCustomPinColor' has a wrong offset!");
static_assert(offsetof(FOptimusDataType, CustomPinColor) == 0x00003C, "Member 'FOptimusDataType::CustomPinColor' has a wrong offset!");
static_assert(offsetof(FOptimusDataType, UsageFlags) == 0x00004C, "Member 'FOptimusDataType::UsageFlags' has a wrong offset!");
static_assert(offsetof(FOptimusDataType, TypeFlags) == 0x00004D, "Member 'FOptimusDataType::TypeFlags' has a wrong offset!");

struct FOptimusDeformerInstanceExecInfo final
{
public:
	class FName                                   GraphName;
	EOptimusNodeGraphType                         GraphType;
	class UComputeGraph*                          ComputeGraph;
	struct FComputeGraphInstance                  ComputeGraphInstance;
};
static_assert(alignof(FOptimusDeformerInstanceExecInfo) == 0x000008, "Wrong alignment on FOptimusDeformerInstanceExecInfo");
static_assert(sizeof(FOptimusDeformerInstanceExecInfo) == 0x000020, "Wrong size on FOptimusDeformerInstanceExecInfo");
static_assert(offsetof(FOptimusDeformerInstanceExecInfo, GraphName) == 0x000000, "Member 'FOptimusDeformerInstanceExecInfo::GraphName' has a wrong offset!");
static_assert(offsetof(FOptimusDeformerInstanceExecInfo, GraphType) == 0x000004, "Member 'FOptimusDeformerInstanceExecInfo::GraphType' has a wrong offset!");
static_assert(offsetof(FOptimusDeformerInstanceExecInfo, ComputeGraph) == 0x000008, "Member 'FOptimusDeformerInstanceExecInfo::ComputeGraph' has a wrong offset!");
static_assert(offsetof(FOptimusDeformerInstanceExecInfo, ComputeGraphInstance) == 0x000010, "Member 'FOptimusDeformerInstanceExecInfo::ComputeGraphInstance' has a wrong offset!");

struct FOptimusDeformerInstanceComponentBinding final
{
public:
	class FName                                   ProviderName;
	class FName                                   ComponentName;
};
static_assert(alignof(FOptimusDeformerInstanceComponentBinding) == 0x000004, "Wrong alignment on FOptimusDeformerInstanceComponentBinding");
static_assert(sizeof(FOptimusDeformerInstanceComponentBinding) == 0x000008, "Wrong size on FOptimusDeformerInstanceComponentBinding");
static_assert(offsetof(FOptimusDeformerInstanceComponentBinding, ProviderName) == 0x000000, "Member 'FOptimusDeformerInstanceComponentBinding::ProviderName' has a wrong offset!");
static_assert(offsetof(FOptimusDeformerInstanceComponentBinding, ComponentName) == 0x000004, "Member 'FOptimusDeformerInstanceComponentBinding::ComponentName' has a wrong offset!");

struct FOptimusVariableMetaDataEntry final
{
public:
	class FName                                   Key;
	uint8                                         Pad_4[0x4];
	class FString                                 Value;
};
static_assert(alignof(FOptimusVariableMetaDataEntry) == 0x000008, "Wrong alignment on FOptimusVariableMetaDataEntry");
static_assert(sizeof(FOptimusVariableMetaDataEntry) == 0x000018, "Wrong size on FOptimusVariableMetaDataEntry");
static_assert(offsetof(FOptimusVariableMetaDataEntry, Key) == 0x000000, "Member 'FOptimusVariableMetaDataEntry::Key' has a wrong offset!");
static_assert(offsetof(FOptimusVariableMetaDataEntry, Value) == 0x000008, "Member 'FOptimusVariableMetaDataEntry::Value' has a wrong offset!");

}
