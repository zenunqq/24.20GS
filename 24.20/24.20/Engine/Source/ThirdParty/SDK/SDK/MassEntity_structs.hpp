#pragma once

#include "Basic.hpp"

#include "StructUtils_structs.hpp"

namespace SDK
{

enum class EMassCommandOperationType : uint8
{
	None                                     = 0,
	Create                                   = 1,
	Add                                      = 2,
	Remove                                   = 3,
	ChangeComposition                        = 4,
	Set                                      = 5,
	Destroy                                  = 6,
	MAX                                      = 7,
};

enum class EMassObservedOperation : uint8
{
	Add                                      = 0,
	Remove                                   = 1,
	MAX                                      = 2,
};

enum class EProcessorExecutionFlags : uint8
{
	None                                     = 0,
	Standalone                               = 1,
	Server                                   = 2,
	Client                                   = 4,
	Editor                                   = 8,
	AllNetModes                              = 7,
	All                                      = 15,
	EProcessorExecutionFlags_MAX             = 16,
};

enum class EMassProcessingPhase : uint8
{
	PrePhysics                               = 0,
	StartPhysics                             = 1,
	DuringPhysics                            = 2,
	EndPhysics                               = 3,
	PostPhysics                              = 4,
	FrameEnd                                 = 5,
	MAX                                      = 6,
};

enum class EMassFragmentAccess : uint8
{
	None                                     = 0,
	ReadOnly                                 = 1,
	ReadWrite                                = 2,
	MAX                                      = 3,
};

enum class EMassFragmentPresence : uint8
{
	All                                      = 0,
	Any                                      = 1,
	None                                     = 2,
	Optional                                 = 3,
	MAX                                      = 4,
};

struct alignas(0x08) FMassFragmentRequirements
{
public:
	uint8                                         Pad_0[0x1E8];
};
static_assert(alignof(FMassFragmentRequirements) == 0x000008, "Wrong alignment on FMassFragmentRequirements");
static_assert(sizeof(FMassFragmentRequirements) == 0x0001E8, "Wrong size on FMassFragmentRequirements");

struct alignas(0x10) FMassEntityQuery final : public FMassFragmentRequirements
{
public:
	uint8                                         Pad_1E8[0xB8];
};
static_assert(alignof(FMassEntityQuery) == 0x000010, "Wrong alignment on FMassEntityQuery");
static_assert(sizeof(FMassEntityQuery) == 0x0002A0, "Wrong size on FMassEntityQuery");

#pragma pack(push, 0x1)
struct alignas(0x01) FMassFragment
{
};
#pragma pack(pop)
static_assert(alignof(FMassFragment) == 0x000001, "Wrong alignment on FMassFragment");
static_assert(sizeof(FMassFragment) == 0x000001, "Wrong size on FMassFragment");

struct FMassTag final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FMassTag) == 0x000001, "Wrong alignment on FMassTag");
static_assert(sizeof(FMassTag) == 0x000001, "Wrong size on FMassTag");

struct FMassChunkFragment final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FMassChunkFragment) == 0x000001, "Wrong alignment on FMassChunkFragment");
static_assert(sizeof(FMassChunkFragment) == 0x000001, "Wrong size on FMassChunkFragment");

#pragma pack(push, 0x1)
struct alignas(0x01) FMassSharedFragment
{
};
#pragma pack(pop)
static_assert(alignof(FMassSharedFragment) == 0x000001, "Wrong alignment on FMassSharedFragment");
static_assert(sizeof(FMassSharedFragment) == 0x000001, "Wrong size on FMassSharedFragment");

struct alignas(0x08) FMassEntityHandle final
{
public:
	int32                                         Index;
	int32                                         SerialNumber;
};
static_assert(alignof(FMassEntityHandle) == 0x000008, "Wrong alignment on FMassEntityHandle");
static_assert(sizeof(FMassEntityHandle) == 0x000008, "Wrong size on FMassEntityHandle");
static_assert(offsetof(FMassEntityHandle, Index) == 0x000000, "Member 'FMassEntityHandle::Index' has a wrong offset!");
static_assert(offsetof(FMassEntityHandle, SerialNumber) == 0x000004, "Member 'FMassEntityHandle::SerialNumber' has a wrong offset!");

struct alignas(0x08) FMassEntityView final
{
public:
	uint8                                         Pad_0[0x20];
};
static_assert(alignof(FMassEntityView) == 0x000008, "Wrong alignment on FMassEntityView");
static_assert(sizeof(FMassEntityView) == 0x000020, "Wrong size on FMassEntityView");

struct FMassRuntimePipeline final
{
public:
	TArray<class UMassProcessor*>                 Processors;
};
static_assert(alignof(FMassRuntimePipeline) == 0x000008, "Wrong alignment on FMassRuntimePipeline");
static_assert(sizeof(FMassRuntimePipeline) == 0x000010, "Wrong size on FMassRuntimePipeline");
static_assert(offsetof(FMassRuntimePipeline, Processors) == 0x000000, "Member 'FMassRuntimePipeline::Processors' has a wrong offset!");

struct FMassObserversMap final
{
public:
	TMap<class UScriptStruct*, struct FMassRuntimePipeline> Container;
};
static_assert(alignof(FMassObserversMap) == 0x000008, "Wrong alignment on FMassObserversMap");
static_assert(sizeof(FMassObserversMap) == 0x000050, "Wrong size on FMassObserversMap");
static_assert(offsetof(FMassObserversMap, Container) == 0x000000, "Member 'FMassObserversMap::Container' has a wrong offset!");

struct FMassObserverManager final
{
public:
	uint8                                         Pad_0[0x80];
	struct FMassObserversMap                      FragmentObservers[0x2];
	struct FMassObserversMap                      TagObservers[0x2];
	uint8                                         Pad_1C0[0x8];
};
static_assert(alignof(FMassObserverManager) == 0x000008, "Wrong alignment on FMassObserverManager");
static_assert(sizeof(FMassObserverManager) == 0x0001C8, "Wrong size on FMassObserverManager");
static_assert(offsetof(FMassObserverManager, FragmentObservers) == 0x000080, "Member 'FMassObserverManager::FragmentObservers' has a wrong offset!");
static_assert(offsetof(FMassObserverManager, TagObservers) == 0x000120, "Member 'FMassObserverManager::TagObservers' has a wrong offset!");

struct FMassProcessorClassCollection final
{
public:
	TArray<TSubclassOf<class UMassProcessor>>     ClassCollection;
};
static_assert(alignof(FMassProcessorClassCollection) == 0x000008, "Wrong alignment on FMassProcessorClassCollection");
static_assert(sizeof(FMassProcessorClassCollection) == 0x000010, "Wrong size on FMassProcessorClassCollection");
static_assert(offsetof(FMassProcessorClassCollection, ClassCollection) == 0x000000, "Member 'FMassProcessorClassCollection::ClassCollection' has a wrong offset!");

struct FMassEntityObserverClassesMap final
{
public:
	TMap<class UScriptStruct*, struct FMassProcessorClassCollection> Container;
};
static_assert(alignof(FMassEntityObserverClassesMap) == 0x000008, "Wrong alignment on FMassEntityObserverClassesMap");
static_assert(sizeof(FMassEntityObserverClassesMap) == 0x000050, "Wrong size on FMassEntityObserverClassesMap");
static_assert(offsetof(FMassEntityObserverClassesMap, Container) == 0x000000, "Member 'FMassEntityObserverClassesMap::Container' has a wrong offset!");

struct FMassProcessingPhaseConfig final
{
public:
	class FName                                   PhaseName;
	uint8                                         Pad_4[0x4];
	TSubclassOf<class UMassCompositeProcessor>    PhaseGroupClass;
	TArray<class UMassProcessor*>                 ProcessorCDOs;
};
static_assert(alignof(FMassProcessingPhaseConfig) == 0x000008, "Wrong alignment on FMassProcessingPhaseConfig");
static_assert(sizeof(FMassProcessingPhaseConfig) == 0x000020, "Wrong size on FMassProcessingPhaseConfig");
static_assert(offsetof(FMassProcessingPhaseConfig, PhaseName) == 0x000000, "Member 'FMassProcessingPhaseConfig::PhaseName' has a wrong offset!");
static_assert(offsetof(FMassProcessingPhaseConfig, PhaseGroupClass) == 0x000008, "Member 'FMassProcessingPhaseConfig::PhaseGroupClass' has a wrong offset!");
static_assert(offsetof(FMassProcessingPhaseConfig, ProcessorCDOs) == 0x000010, "Member 'FMassProcessingPhaseConfig::ProcessorCDOs' has a wrong offset!");

struct FProcessorAuxDataBase final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FProcessorAuxDataBase) == 0x000001, "Wrong alignment on FProcessorAuxDataBase");
static_assert(sizeof(FProcessorAuxDataBase) == 0x000001, "Wrong size on FProcessorAuxDataBase");

struct FMassProcessingContext final
{
public:
	uint8                                         Pad_0[0x10];
	float                                         DeltaSeconds;
	uint8                                         Pad_14[0x4];
	struct FInstancedStruct                       AuxData;
	bool                                          bFlushCommandBuffer;
	uint8                                         Pad_29[0x17];
};
static_assert(alignof(FMassProcessingContext) == 0x000008, "Wrong alignment on FMassProcessingContext");
static_assert(sizeof(FMassProcessingContext) == 0x000040, "Wrong size on FMassProcessingContext");
static_assert(offsetof(FMassProcessingContext, DeltaSeconds) == 0x000010, "Member 'FMassProcessingContext::DeltaSeconds' has a wrong offset!");
static_assert(offsetof(FMassProcessingContext, AuxData) == 0x000018, "Member 'FMassProcessingContext::AuxData' has a wrong offset!");
static_assert(offsetof(FMassProcessingContext, bFlushCommandBuffer) == 0x000028, "Member 'FMassProcessingContext::bFlushCommandBuffer' has a wrong offset!");

struct FMassProcessorExecutionOrder final
{
public:
	class FName                                   ExecuteInGroup;
	uint8                                         Pad_4[0x4];
	TArray<class FName>                           ExecuteBefore;
	TArray<class FName>                           ExecuteAfter;
};
static_assert(alignof(FMassProcessorExecutionOrder) == 0x000008, "Wrong alignment on FMassProcessorExecutionOrder");
static_assert(sizeof(FMassProcessorExecutionOrder) == 0x000028, "Wrong size on FMassProcessorExecutionOrder");
static_assert(offsetof(FMassProcessorExecutionOrder, ExecuteInGroup) == 0x000000, "Member 'FMassProcessorExecutionOrder::ExecuteInGroup' has a wrong offset!");
static_assert(offsetof(FMassProcessorExecutionOrder, ExecuteBefore) == 0x000008, "Member 'FMassProcessorExecutionOrder::ExecuteBefore' has a wrong offset!");
static_assert(offsetof(FMassProcessorExecutionOrder, ExecuteAfter) == 0x000018, "Member 'FMassProcessorExecutionOrder::ExecuteAfter' has a wrong offset!");

struct alignas(0x08) FMassSubsystemRequirements final
{
public:
	uint8                                         Pad_0[0x48];
};
static_assert(alignof(FMassSubsystemRequirements) == 0x000008, "Wrong alignment on FMassSubsystemRequirements");
static_assert(sizeof(FMassSubsystemRequirements) == 0x000048, "Wrong size on FMassSubsystemRequirements");

}
