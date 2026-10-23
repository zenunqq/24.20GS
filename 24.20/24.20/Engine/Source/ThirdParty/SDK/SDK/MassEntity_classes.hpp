#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "DeveloperSettings_classes.hpp"
#include "MassEntity_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UMassModuleSettings : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassModuleSettings">();
	}
	static class UMassModuleSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassModuleSettings>();
	}
};
static_assert(alignof(UMassModuleSettings) == 0x000008, "Wrong alignment on UMassModuleSettings");
static_assert(sizeof(UMassModuleSettings) == 0x000028, "Wrong size on UMassModuleSettings");

class UMassEntitySettings final : public UMassModuleSettings
{
public:
	class FString                                 DumpDependencyGraphFileName;
	struct FMassProcessingPhaseConfig             ProcessingPhasesConfig[0x6];
	TArray<class UMassProcessor*>                 ProcessorCDOs;
	uint8                                         Pad_108[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassEntitySettings">();
	}
	static class UMassEntitySettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassEntitySettings>();
	}
};
static_assert(alignof(UMassEntitySettings) == 0x000008, "Wrong alignment on UMassEntitySettings");
static_assert(sizeof(UMassEntitySettings) == 0x000110, "Wrong size on UMassEntitySettings");
static_assert(offsetof(UMassEntitySettings, DumpDependencyGraphFileName) == 0x000028, "Member 'UMassEntitySettings::DumpDependencyGraphFileName' has a wrong offset!");
static_assert(offsetof(UMassEntitySettings, ProcessingPhasesConfig) == 0x000038, "Member 'UMassEntitySettings::ProcessingPhasesConfig' has a wrong offset!");
static_assert(offsetof(UMassEntitySettings, ProcessorCDOs) == 0x0000F8, "Member 'UMassEntitySettings::ProcessorCDOs' has a wrong offset!");

class UMassEntitySubsystem final : public UWorldSubsystem
{
public:
	uint8                                         Pad_30[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassEntitySubsystem">();
	}
	static class UMassEntitySubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassEntitySubsystem>();
	}
};
static_assert(alignof(UMassEntitySubsystem) == 0x000008, "Wrong alignment on UMassEntitySubsystem");
static_assert(sizeof(UMassEntitySubsystem) == 0x000040, "Wrong size on UMassEntitySubsystem");

class UMassProcessor : public UObject
{
public:
	int32                                         ExecutionFlags;
	EMassProcessingPhase                          ProcessingPhase;
	uint8                                         Pad_2D[0x3];
	struct FMassProcessorExecutionOrder           ExecutionOrder;
	bool                                          bAutoRegisterWithProcessingPhases;
	uint8                                         Pad_59[0x2];
	bool                                          bRequiresGameThreadExecution;
	uint8                                         Pad_5C[0x5C];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassProcessor">();
	}
	static class UMassProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassProcessor>();
	}
};
static_assert(alignof(UMassProcessor) == 0x000008, "Wrong alignment on UMassProcessor");
static_assert(sizeof(UMassProcessor) == 0x0000B8, "Wrong size on UMassProcessor");
static_assert(offsetof(UMassProcessor, ExecutionFlags) == 0x000028, "Member 'UMassProcessor::ExecutionFlags' has a wrong offset!");
static_assert(offsetof(UMassProcessor, ProcessingPhase) == 0x00002C, "Member 'UMassProcessor::ProcessingPhase' has a wrong offset!");
static_assert(offsetof(UMassProcessor, ExecutionOrder) == 0x000030, "Member 'UMassProcessor::ExecutionOrder' has a wrong offset!");
static_assert(offsetof(UMassProcessor, bAutoRegisterWithProcessingPhases) == 0x000058, "Member 'UMassProcessor::bAutoRegisterWithProcessingPhases' has a wrong offset!");
static_assert(offsetof(UMassProcessor, bRequiresGameThreadExecution) == 0x00005B, "Member 'UMassProcessor::bRequiresGameThreadExecution' has a wrong offset!");

class UMassObserverProcessor final : public UMassProcessor
{
public:
	class UScriptStruct*                          ObservedType;
	uint8                                         Pad_C0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassObserverProcessor">();
	}
	static class UMassObserverProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassObserverProcessor>();
	}
};
static_assert(alignof(UMassObserverProcessor) == 0x000008, "Wrong alignment on UMassObserverProcessor");
static_assert(sizeof(UMassObserverProcessor) == 0x0000C8, "Wrong size on UMassObserverProcessor");
static_assert(offsetof(UMassObserverProcessor, ObservedType) == 0x0000B8, "Member 'UMassObserverProcessor::ObservedType' has a wrong offset!");

class UMassObserverRegistry final : public UObject
{
public:
	struct FMassEntityObserverClassesMap          FragmentObservers[0x2];
	struct FMassEntityObserverClassesMap          TagObservers[0x2];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassObserverRegistry">();
	}
	static class UMassObserverRegistry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassObserverRegistry>();
	}
};
static_assert(alignof(UMassObserverRegistry) == 0x000008, "Wrong alignment on UMassObserverRegistry");
static_assert(sizeof(UMassObserverRegistry) == 0x000168, "Wrong size on UMassObserverRegistry");
static_assert(offsetof(UMassObserverRegistry, FragmentObservers) == 0x000028, "Member 'UMassObserverRegistry::FragmentObservers' has a wrong offset!");
static_assert(offsetof(UMassObserverRegistry, TagObservers) == 0x0000C8, "Member 'UMassObserverRegistry::TagObservers' has a wrong offset!");

class UMassCompositeProcessor final : public UMassProcessor
{
public:
	struct FMassRuntimePipeline                   ChildPipeline;
	class FName                                   GroupName;
	uint8                                         Pad_CC[0x24];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassCompositeProcessor">();
	}
	static class UMassCompositeProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassCompositeProcessor>();
	}
};
static_assert(alignof(UMassCompositeProcessor) == 0x000008, "Wrong alignment on UMassCompositeProcessor");
static_assert(sizeof(UMassCompositeProcessor) == 0x0000F0, "Wrong size on UMassCompositeProcessor");
static_assert(offsetof(UMassCompositeProcessor, ChildPipeline) == 0x0000B8, "Member 'UMassCompositeProcessor::ChildPipeline' has a wrong offset!");
static_assert(offsetof(UMassCompositeProcessor, GroupName) == 0x0000C8, "Member 'UMassCompositeProcessor::GroupName' has a wrong offset!");

class UMassSettings final : public UDeveloperSettings
{
public:
	TMap<class FName, class UMassModuleSettings*> ModuleSettings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MassSettings">();
	}
	static class UMassSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMassSettings>();
	}
};
static_assert(alignof(UMassSettings) == 0x000008, "Wrong alignment on UMassSettings");
static_assert(sizeof(UMassSettings) == 0x000080, "Wrong size on UMassSettings");
static_assert(offsetof(UMassSettings, ModuleSettings) == 0x000030, "Member 'UMassSettings::ModuleSettings' has a wrong offset!");

}
