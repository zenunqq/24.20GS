#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EComputeKernelFlags : uint8
{
	IsDefaultKernel                          = 1,
	IsolatedMemoryWrites                     = 2,
	EComputeKernelFlags_MAX                  = 3,
};

enum class EShaderFundamentalType : uint8
{
	Bool                                     = 0,
	Int                                      = 1,
	Uint                                     = 2,
	Float                                    = 3,
	Struct                                   = 4,
	None                                     = 255,
	EShaderFundamentalType_MAX               = 256,
};

enum class EShaderFundamentalDimensionType : uint8
{
	Scalar                                   = 0,
	Vector                                   = 1,
	Matrix                                   = 2,
	EShaderFundamentalDimensionType_MAX      = 3,
};

enum class EShaderParamBindingType : uint8
{
	None                                     = 0,
	ConstantParameter                        = 1,
	ReadOnlyResource                         = 2,
	ReadWriteResource                        = 3,
	EShaderParamBindingType_MAX              = 4,
};

enum class EShaderResourceType : uint8
{
	None                                     = 0,
	Texture1D                                = 1,
	Texture2D                                = 2,
	Texture3D                                = 3,
	TextureCube                              = 4,
	Buffer                                   = 5,
	StructuredBuffer                         = 6,
	ByteAddressBuffer                        = 7,
	EShaderResourceType_MAX                  = 8,
};

struct FComputeGraphEdge final
{
public:
	int32                                         KernelIndex;
	int32                                         KernelBindingIndex;
	int32                                         DataInterfaceIndex;
	int32                                         DataInterfaceBindingIndex;
	bool                                          bKernelInput;
	uint8                                         Pad_11[0x7];
	class FString                                 BindingFunctionNameOverride;
	class FString                                 BindingFunctionNamespace;
};
static_assert(alignof(FComputeGraphEdge) == 0x000008, "Wrong alignment on FComputeGraphEdge");
static_assert(sizeof(FComputeGraphEdge) == 0x000038, "Wrong size on FComputeGraphEdge");
static_assert(offsetof(FComputeGraphEdge, KernelIndex) == 0x000000, "Member 'FComputeGraphEdge::KernelIndex' has a wrong offset!");
static_assert(offsetof(FComputeGraphEdge, KernelBindingIndex) == 0x000004, "Member 'FComputeGraphEdge::KernelBindingIndex' has a wrong offset!");
static_assert(offsetof(FComputeGraphEdge, DataInterfaceIndex) == 0x000008, "Member 'FComputeGraphEdge::DataInterfaceIndex' has a wrong offset!");
static_assert(offsetof(FComputeGraphEdge, DataInterfaceBindingIndex) == 0x00000C, "Member 'FComputeGraphEdge::DataInterfaceBindingIndex' has a wrong offset!");
static_assert(offsetof(FComputeGraphEdge, bKernelInput) == 0x000010, "Member 'FComputeGraphEdge::bKernelInput' has a wrong offset!");
static_assert(offsetof(FComputeGraphEdge, BindingFunctionNameOverride) == 0x000018, "Member 'FComputeGraphEdge::BindingFunctionNameOverride' has a wrong offset!");
static_assert(offsetof(FComputeGraphEdge, BindingFunctionNamespace) == 0x000028, "Member 'FComputeGraphEdge::BindingFunctionNamespace' has a wrong offset!");

struct FComputeGraphInstance final
{
public:
	TArray<class UComputeDataProvider*>           DataProviders;
};
static_assert(alignof(FComputeGraphInstance) == 0x000008, "Wrong alignment on FComputeGraphInstance");
static_assert(sizeof(FComputeGraphInstance) == 0x000010, "Wrong size on FComputeGraphInstance");
static_assert(offsetof(FComputeGraphInstance, DataProviders) == 0x000000, "Member 'FComputeGraphInstance::DataProviders' has a wrong offset!");

struct FComputeKernelPermutationBool final
{
public:
	class FString                                 Name;
	bool                                          Value;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FComputeKernelPermutationBool) == 0x000008, "Wrong alignment on FComputeKernelPermutationBool");
static_assert(sizeof(FComputeKernelPermutationBool) == 0x000018, "Wrong size on FComputeKernelPermutationBool");
static_assert(offsetof(FComputeKernelPermutationBool, Name) == 0x000000, "Member 'FComputeKernelPermutationBool::Name' has a wrong offset!");
static_assert(offsetof(FComputeKernelPermutationBool, Value) == 0x000010, "Member 'FComputeKernelPermutationBool::Value' has a wrong offset!");

struct FComputeKernelPermutationSet final
{
public:
	TArray<struct FComputeKernelPermutationBool>  BooleanOptions;
};
static_assert(alignof(FComputeKernelPermutationSet) == 0x000008, "Wrong alignment on FComputeKernelPermutationSet");
static_assert(sizeof(FComputeKernelPermutationSet) == 0x000010, "Wrong size on FComputeKernelPermutationSet");
static_assert(offsetof(FComputeKernelPermutationSet, BooleanOptions) == 0x000000, "Member 'FComputeKernelPermutationSet::BooleanOptions' has a wrong offset!");

struct FComputeKernelDefinition final
{
public:
	class FString                                 Symbol;
	class FString                                 Define;
};
static_assert(alignof(FComputeKernelDefinition) == 0x000008, "Wrong alignment on FComputeKernelDefinition");
static_assert(sizeof(FComputeKernelDefinition) == 0x000020, "Wrong size on FComputeKernelDefinition");
static_assert(offsetof(FComputeKernelDefinition, Symbol) == 0x000000, "Member 'FComputeKernelDefinition::Symbol' has a wrong offset!");
static_assert(offsetof(FComputeKernelDefinition, Define) == 0x000010, "Member 'FComputeKernelDefinition::Define' has a wrong offset!");

struct FComputeKernelDefinitionSet final
{
public:
	TArray<struct FComputeKernelDefinition>       Defines;
};
static_assert(alignof(FComputeKernelDefinitionSet) == 0x000008, "Wrong alignment on FComputeKernelDefinitionSet");
static_assert(sizeof(FComputeKernelDefinitionSet) == 0x000010, "Wrong size on FComputeKernelDefinitionSet");
static_assert(offsetof(FComputeKernelDefinitionSet, Defines) == 0x000000, "Member 'FComputeKernelDefinitionSet::Defines' has a wrong offset!");

struct FComputeKernelPermutationVector final
{
public:
	TMap<class FString, uint32>                   Permutations;
	uint32                                        BitCount;
	uint8                                         Pad_54[0x4];
};
static_assert(alignof(FComputeKernelPermutationVector) == 0x000008, "Wrong alignment on FComputeKernelPermutationVector");
static_assert(sizeof(FComputeKernelPermutationVector) == 0x000058, "Wrong size on FComputeKernelPermutationVector");
static_assert(offsetof(FComputeKernelPermutationVector, Permutations) == 0x000000, "Member 'FComputeKernelPermutationVector::Permutations' has a wrong offset!");
static_assert(offsetof(FComputeKernelPermutationVector, BitCount) == 0x000050, "Member 'FComputeKernelPermutationVector::BitCount' has a wrong offset!");

struct alignas(0x08) FShaderValueTypeHandle final
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FShaderValueTypeHandle) == 0x000008, "Wrong alignment on FShaderValueTypeHandle");
static_assert(sizeof(FShaderValueTypeHandle) == 0x000008, "Wrong size on FShaderValueTypeHandle");

struct alignas(0x08) FShaderValueType final
{
public:
	EShaderFundamentalType                        Type;
	EShaderFundamentalDimensionType               DimensionType;
	uint8                                         Pad_2[0x2];
	class FName                                   Name;
	bool                                          bIsDynamicArray;
	uint8                                         Pad_9[0x17];
};
static_assert(alignof(FShaderValueType) == 0x000008, "Wrong alignment on FShaderValueType");
static_assert(sizeof(FShaderValueType) == 0x000020, "Wrong size on FShaderValueType");
static_assert(offsetof(FShaderValueType, Type) == 0x000000, "Member 'FShaderValueType::Type' has a wrong offset!");
static_assert(offsetof(FShaderValueType, DimensionType) == 0x000001, "Member 'FShaderValueType::DimensionType' has a wrong offset!");
static_assert(offsetof(FShaderValueType, Name) == 0x000004, "Member 'FShaderValueType::Name' has a wrong offset!");
static_assert(offsetof(FShaderValueType, bIsDynamicArray) == 0x000008, "Member 'FShaderValueType::bIsDynamicArray' has a wrong offset!");

struct FShaderParamTypeDefinition final
{
public:
	class FString                                 TypeDeclaration;
	class FString                                 Name;
	struct FShaderValueTypeHandle                 ValueType;
	uint16                                        ArrayElementCount;
	EShaderParamBindingType                       BindingType;
	EShaderResourceType                           ResourceType;
	uint8                                         Pad_2C[0x4];
};
static_assert(alignof(FShaderParamTypeDefinition) == 0x000008, "Wrong alignment on FShaderParamTypeDefinition");
static_assert(sizeof(FShaderParamTypeDefinition) == 0x000030, "Wrong size on FShaderParamTypeDefinition");
static_assert(offsetof(FShaderParamTypeDefinition, TypeDeclaration) == 0x000000, "Member 'FShaderParamTypeDefinition::TypeDeclaration' has a wrong offset!");
static_assert(offsetof(FShaderParamTypeDefinition, Name) == 0x000010, "Member 'FShaderParamTypeDefinition::Name' has a wrong offset!");
static_assert(offsetof(FShaderParamTypeDefinition, ValueType) == 0x000020, "Member 'FShaderParamTypeDefinition::ValueType' has a wrong offset!");
static_assert(offsetof(FShaderParamTypeDefinition, ArrayElementCount) == 0x000028, "Member 'FShaderParamTypeDefinition::ArrayElementCount' has a wrong offset!");
static_assert(offsetof(FShaderParamTypeDefinition, BindingType) == 0x00002A, "Member 'FShaderParamTypeDefinition::BindingType' has a wrong offset!");
static_assert(offsetof(FShaderParamTypeDefinition, ResourceType) == 0x00002B, "Member 'FShaderParamTypeDefinition::ResourceType' has a wrong offset!");

struct FShaderFunctionDefinition final
{
public:
	class FString                                 Name;
	TArray<struct FShaderParamTypeDefinition>     ParamTypes;
	bool                                          bHasReturnType;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FShaderFunctionDefinition) == 0x000008, "Wrong alignment on FShaderFunctionDefinition");
static_assert(sizeof(FShaderFunctionDefinition) == 0x000028, "Wrong size on FShaderFunctionDefinition");
static_assert(offsetof(FShaderFunctionDefinition, Name) == 0x000000, "Member 'FShaderFunctionDefinition::Name' has a wrong offset!");
static_assert(offsetof(FShaderFunctionDefinition, ParamTypes) == 0x000010, "Member 'FShaderFunctionDefinition::ParamTypes' has a wrong offset!");
static_assert(offsetof(FShaderFunctionDefinition, bHasReturnType) == 0x000020, "Member 'FShaderFunctionDefinition::bHasReturnType' has a wrong offset!");

}
