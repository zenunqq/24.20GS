#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "NiagaraCore_structs.hpp"

namespace SDK
{

enum class ENiagaraMipMapGenerationType : uint8
{
	Unfiltered                               = 0,
	Linear                                   = 1,
	Blur1                                    = 2,
	Blur2                                    = 3,
	Blur3                                    = 4,
	Blur4                                    = 5,
	ENiagaraMipMapGenerationType_MAX         = 6,
};

enum class ENiagaraGpuDispatchType : uint8
{
	OneD                                     = 0,
	TwoD                                     = 1,
	ThreeD                                   = 2,
	Custom                                   = 3,
	ENiagaraGpuDispatchType_MAX              = 4,
};

enum class ENiagaraSimStageExecuteBehavior : uint8
{
	Always                                   = 0,
	OnSimulationReset                        = 1,
	NotOnSimulationReset                     = 2,
	ENiagaraSimStageExecuteBehavior_MAX      = 3,
};

enum class EFNiagaraCompileEventSeverity : uint8
{
	Log                                      = 0,
	Display                                  = 1,
	Warning                                  = 2,
	Error                                    = 3,
	FNiagaraCompileEventSeverity_MAX         = 4,
};

enum class EFNiagaraCompileEventSource : uint8
{
	Unset                                    = 0,
	ScriptDependency                         = 1,
	FNiagaraCompileEventSource_MAX           = 2,
};

struct FSimulationStageMetaData final
{
public:
	class FName                                   SimulationStageName;
	class FName                                   EnabledBinding;
	class FName                                   ElementCountXBinding;
	class FName                                   ElementCountYBinding;
	class FName                                   ElementCountZBinding;
	class FName                                   IterationSource;
	ENiagaraSimStageExecuteBehavior               ExecuteBehavior;
	uint8                                         Pad_19[0x3];
	uint8                                         bWritesParticles : 1;
	uint8                                         bPartialParticleUpdate : 1;
	uint8                                         bParticleIterationStateEnabled : 1;
	uint8                                         bOverrideElementCount : 1;
	uint8                                         Pad_1D[0x3];
	class FName                                   ParticleIterationStateBinding;
	uint8                                         Pad_24[0x4];
	struct FIntPoint                              ParticleIterationStateRange;
	TArray<class FName>                           OutputDestinations;
	TArray<class FName>                           InputDataInterfaces;
	int32                                         NumIterations;
	class FName                                   NumIterationsBinding;
	ENiagaraGpuDispatchType                       GpuDispatchType;
	uint8                                         Pad_59[0x3];
	struct FIntVector                             GpuDispatchNumThreads;
};
static_assert(alignof(FSimulationStageMetaData) == 0x000008, "Wrong alignment on FSimulationStageMetaData");
static_assert(sizeof(FSimulationStageMetaData) == 0x000068, "Wrong size on FSimulationStageMetaData");
static_assert(offsetof(FSimulationStageMetaData, SimulationStageName) == 0x000000, "Member 'FSimulationStageMetaData::SimulationStageName' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, EnabledBinding) == 0x000004, "Member 'FSimulationStageMetaData::EnabledBinding' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, ElementCountXBinding) == 0x000008, "Member 'FSimulationStageMetaData::ElementCountXBinding' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, ElementCountYBinding) == 0x00000C, "Member 'FSimulationStageMetaData::ElementCountYBinding' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, ElementCountZBinding) == 0x000010, "Member 'FSimulationStageMetaData::ElementCountZBinding' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, IterationSource) == 0x000014, "Member 'FSimulationStageMetaData::IterationSource' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, ExecuteBehavior) == 0x000018, "Member 'FSimulationStageMetaData::ExecuteBehavior' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, ParticleIterationStateBinding) == 0x000020, "Member 'FSimulationStageMetaData::ParticleIterationStateBinding' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, ParticleIterationStateRange) == 0x000028, "Member 'FSimulationStageMetaData::ParticleIterationStateRange' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, OutputDestinations) == 0x000030, "Member 'FSimulationStageMetaData::OutputDestinations' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, InputDataInterfaces) == 0x000040, "Member 'FSimulationStageMetaData::InputDataInterfaces' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, NumIterations) == 0x000050, "Member 'FSimulationStageMetaData::NumIterations' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, NumIterationsBinding) == 0x000054, "Member 'FSimulationStageMetaData::NumIterationsBinding' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, GpuDispatchType) == 0x000058, "Member 'FSimulationStageMetaData::GpuDispatchType' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, GpuDispatchNumThreads) == 0x00005C, "Member 'FSimulationStageMetaData::GpuDispatchNumThreads' has a wrong offset!");

struct FNiagaraCompileEvent final
{
public:
	EFNiagaraCompileEventSeverity                 Severity;
	uint8                                         Pad_1[0x7];
	class FString                                 message;
	class FString                                 ShortDescription;
	bool                                          bDismissable;
	uint8                                         Pad_29[0x3];
	struct FGuid                                  NodeGUID;
	struct FGuid                                  PinGuid;
	uint8                                         Pad_4C[0x4];
	TArray<struct FGuid>                          StackGuids;
	EFNiagaraCompileEventSource                   Source;
	uint8                                         Pad_61[0x7];
};
static_assert(alignof(FNiagaraCompileEvent) == 0x000008, "Wrong alignment on FNiagaraCompileEvent");
static_assert(sizeof(FNiagaraCompileEvent) == 0x000068, "Wrong size on FNiagaraCompileEvent");
static_assert(offsetof(FNiagaraCompileEvent, Severity) == 0x000000, "Member 'FNiagaraCompileEvent::Severity' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileEvent, message) == 0x000008, "Member 'FNiagaraCompileEvent::message' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileEvent, ShortDescription) == 0x000018, "Member 'FNiagaraCompileEvent::ShortDescription' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileEvent, bDismissable) == 0x000028, "Member 'FNiagaraCompileEvent::bDismissable' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileEvent, NodeGUID) == 0x00002C, "Member 'FNiagaraCompileEvent::NodeGUID' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileEvent, PinGuid) == 0x00003C, "Member 'FNiagaraCompileEvent::PinGuid' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileEvent, StackGuids) == 0x000050, "Member 'FNiagaraCompileEvent::StackGuids' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileEvent, Source) == 0x000060, "Member 'FNiagaraCompileEvent::Source' has a wrong offset!");

struct FNiagaraDataInterfaceGeneratedFunction final
{
public:
	uint8                                         Pad_0[0x28];
	TArray<struct FNiagaraVariableCommonReference> VariadicInputs;
	TArray<struct FNiagaraVariableCommonReference> VariadicOutputs;
};
static_assert(alignof(FNiagaraDataInterfaceGeneratedFunction) == 0x000008, "Wrong alignment on FNiagaraDataInterfaceGeneratedFunction");
static_assert(sizeof(FNiagaraDataInterfaceGeneratedFunction) == 0x000048, "Wrong size on FNiagaraDataInterfaceGeneratedFunction");
static_assert(offsetof(FNiagaraDataInterfaceGeneratedFunction, VariadicInputs) == 0x000028, "Member 'FNiagaraDataInterfaceGeneratedFunction::VariadicInputs' has a wrong offset!");
static_assert(offsetof(FNiagaraDataInterfaceGeneratedFunction, VariadicOutputs) == 0x000038, "Member 'FNiagaraDataInterfaceGeneratedFunction::VariadicOutputs' has a wrong offset!");

struct FNiagaraDataInterfaceGPUParamInfo final
{
public:
	class FString                                 DataInterfaceHLSLSymbol;
	class FString                                 DIClassName;
	uint32                                        ShaderParametersOffset;
	uint8                                         Pad_24[0x4];
	TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;
};
static_assert(alignof(FNiagaraDataInterfaceGPUParamInfo) == 0x000008, "Wrong alignment on FNiagaraDataInterfaceGPUParamInfo");
static_assert(sizeof(FNiagaraDataInterfaceGPUParamInfo) == 0x000038, "Wrong size on FNiagaraDataInterfaceGPUParamInfo");
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, DataInterfaceHLSLSymbol) == 0x000000, "Member 'FNiagaraDataInterfaceGPUParamInfo::DataInterfaceHLSLSymbol' has a wrong offset!");
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, DIClassName) == 0x000010, "Member 'FNiagaraDataInterfaceGPUParamInfo::DIClassName' has a wrong offset!");
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, ShaderParametersOffset) == 0x000020, "Member 'FNiagaraDataInterfaceGPUParamInfo::ShaderParametersOffset' has a wrong offset!");
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, GeneratedFunctions) == 0x000028, "Member 'FNiagaraDataInterfaceGPUParamInfo::GeneratedFunctions' has a wrong offset!");

struct FNiagaraShaderScriptExternalConstant final
{
public:
	class FName                                   Type;
	uint8                                         Pad_4[0x4];
	class FString                                 Name;
};
static_assert(alignof(FNiagaraShaderScriptExternalConstant) == 0x000008, "Wrong alignment on FNiagaraShaderScriptExternalConstant");
static_assert(sizeof(FNiagaraShaderScriptExternalConstant) == 0x000018, "Wrong size on FNiagaraShaderScriptExternalConstant");
static_assert(offsetof(FNiagaraShaderScriptExternalConstant, Type) == 0x000000, "Member 'FNiagaraShaderScriptExternalConstant::Type' has a wrong offset!");
static_assert(offsetof(FNiagaraShaderScriptExternalConstant, Name) == 0x000008, "Member 'FNiagaraShaderScriptExternalConstant::Name' has a wrong offset!");

struct FNiagaraShaderScriptParametersMetadata final
{
public:
	TArray<struct FNiagaraDataInterfaceGPUParamInfo> DataInterfaceParamInfo;
	TArray<class FString>                         LooseMetadataNames;
	bool                                          bExternalConstantsInterpolated;
	uint8                                         Pad_21[0x7];
	TArray<struct FNiagaraShaderScriptExternalConstant> ExternalConstants;
	uint8                                         Pad_38[0x20];
};
static_assert(alignof(FNiagaraShaderScriptParametersMetadata) == 0x000008, "Wrong alignment on FNiagaraShaderScriptParametersMetadata");
static_assert(sizeof(FNiagaraShaderScriptParametersMetadata) == 0x000058, "Wrong size on FNiagaraShaderScriptParametersMetadata");
static_assert(offsetof(FNiagaraShaderScriptParametersMetadata, DataInterfaceParamInfo) == 0x000000, "Member 'FNiagaraShaderScriptParametersMetadata::DataInterfaceParamInfo' has a wrong offset!");
static_assert(offsetof(FNiagaraShaderScriptParametersMetadata, LooseMetadataNames) == 0x000010, "Member 'FNiagaraShaderScriptParametersMetadata::LooseMetadataNames' has a wrong offset!");
static_assert(offsetof(FNiagaraShaderScriptParametersMetadata, bExternalConstantsInterpolated) == 0x000020, "Member 'FNiagaraShaderScriptParametersMetadata::bExternalConstantsInterpolated' has a wrong offset!");
static_assert(offsetof(FNiagaraShaderScriptParametersMetadata, ExternalConstants) == 0x000028, "Member 'FNiagaraShaderScriptParametersMetadata::ExternalConstants' has a wrong offset!");

}
