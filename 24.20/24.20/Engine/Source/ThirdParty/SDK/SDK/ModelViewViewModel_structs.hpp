#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EMVVMExecutionMode : uint8
{
	Immediate                                = 0,
	Delayed                                  = 1,
	Tick                                     = 2,
	EMVVMExecutionMode_MAX                   = 3,
};

enum class EMVVMBindingMode : uint8
{
	OneTimeToDestination                     = 0,
	OneWayToDestination                      = 1,
	TwoWay                                   = 2,
	OneTimeToSource                          = 3,
	OneWayToSource                           = 4,
	EMVVMBindingMode_MAX                     = 5,
};

struct FMVVMBindingName final
{
public:
	class FName                                   BindingName;
};
static_assert(alignof(FMVVMBindingName) == 0x000004, "Wrong alignment on FMVVMBindingName");
static_assert(sizeof(FMVVMBindingName) == 0x000004, "Wrong size on FMVVMBindingName");
static_assert(offsetof(FMVVMBindingName, BindingName) == 0x000000, "Member 'FMVVMBindingName::BindingName' has a wrong offset!");

struct FMVVMAvailableBinding final
{
public:
	struct FMVVMBindingName                       BindingName;
	bool                                          bIsReadable;
	bool                                          bIsWritable;
	bool                                          bHasNotify;
	uint8                                         Pad_7[0x1];
};
static_assert(alignof(FMVVMAvailableBinding) == 0x000004, "Wrong alignment on FMVVMAvailableBinding");
static_assert(sizeof(FMVVMAvailableBinding) == 0x000008, "Wrong size on FMVVMAvailableBinding");
static_assert(offsetof(FMVVMAvailableBinding, BindingName) == 0x000000, "Member 'FMVVMAvailableBinding::BindingName' has a wrong offset!");
static_assert(offsetof(FMVVMAvailableBinding, bIsReadable) == 0x000004, "Member 'FMVVMAvailableBinding::bIsReadable' has a wrong offset!");
static_assert(offsetof(FMVVMAvailableBinding, bIsWritable) == 0x000005, "Member 'FMVVMAvailableBinding::bIsWritable' has a wrong offset!");
static_assert(offsetof(FMVVMAvailableBinding, bHasNotify) == 0x000006, "Member 'FMVVMAvailableBinding::bHasNotify' has a wrong offset!");

struct FMVVMEventField final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FMVVMEventField) == 0x000001, "Wrong alignment on FMVVMEventField");
static_assert(sizeof(FMVVMEventField) == 0x000001, "Wrong size on FMVVMEventField");

struct FMVVMViewModelContext final
{
public:
	TSubclassOf<class UMVVMViewModelBase>         ContextClass;
	class FName                                   ContextName;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(FMVVMViewModelContext) == 0x000008, "Wrong alignment on FMVVMViewModelContext");
static_assert(sizeof(FMVVMViewModelContext) == 0x000010, "Wrong size on FMVVMViewModelContext");
static_assert(offsetof(FMVVMViewModelContext, ContextClass) == 0x000000, "Member 'FMVVMViewModelContext::ContextClass' has a wrong offset!");
static_assert(offsetof(FMVVMViewModelContext, ContextName) == 0x000008, "Member 'FMVVMViewModelContext::ContextName' has a wrong offset!");

struct FMVVMViewModelContextInstance final
{
public:
	struct FMVVMViewModelContext                  Context;
	class UMVVMViewModelBase*                     Instance;
};
static_assert(alignof(FMVVMViewModelContextInstance) == 0x000008, "Wrong alignment on FMVVMViewModelContextInstance");
static_assert(sizeof(FMVVMViewModelContextInstance) == 0x000018, "Wrong size on FMVVMViewModelContextInstance");
static_assert(offsetof(FMVVMViewModelContextInstance, Context) == 0x000000, "Member 'FMVVMViewModelContextInstance::Context' has a wrong offset!");
static_assert(offsetof(FMVVMViewModelContextInstance, Instance) == 0x000010, "Member 'FMVVMViewModelContextInstance::Instance' has a wrong offset!");

struct FMVVMViewSource final
{
public:
	class UObject*                                Source;
	class FName                                   SourceName;
	int32                                         RegisteredCout;
	bool                                          bCreatedSource;
	bool                                          bSetManually;
	bool                                          bAssignedToUserWidgetProperty;
	uint8                                         Pad_13[0x5];
};
static_assert(alignof(FMVVMViewSource) == 0x000008, "Wrong alignment on FMVVMViewSource");
static_assert(sizeof(FMVVMViewSource) == 0x000018, "Wrong size on FMVVMViewSource");
static_assert(offsetof(FMVVMViewSource, Source) == 0x000000, "Member 'FMVVMViewSource::Source' has a wrong offset!");
static_assert(offsetof(FMVVMViewSource, SourceName) == 0x000008, "Member 'FMVVMViewSource::SourceName' has a wrong offset!");
static_assert(offsetof(FMVVMViewSource, RegisteredCout) == 0x00000C, "Member 'FMVVMViewSource::RegisteredCout' has a wrong offset!");
static_assert(offsetof(FMVVMViewSource, bCreatedSource) == 0x000010, "Member 'FMVVMViewSource::bCreatedSource' has a wrong offset!");
static_assert(offsetof(FMVVMViewSource, bSetManually) == 0x000011, "Member 'FMVVMViewSource::bSetManually' has a wrong offset!");
static_assert(offsetof(FMVVMViewSource, bAssignedToUserWidgetProperty) == 0x000012, "Member 'FMVVMViewSource::bAssignedToUserWidgetProperty' has a wrong offset!");

struct FMVVMVCompiledFields final
{
public:
	class UStruct*                                ClassOrScriptStruct;
	int16                                         LibraryStartIndex;
	int16                                         NumberOfProperties;
	int16                                         NumberOfFunctions;
	int16                                         NumberOfFieldIds;
};
static_assert(alignof(FMVVMVCompiledFields) == 0x000008, "Wrong alignment on FMVVMVCompiledFields");
static_assert(sizeof(FMVVMVCompiledFields) == 0x000010, "Wrong size on FMVVMVCompiledFields");
static_assert(offsetof(FMVVMVCompiledFields, ClassOrScriptStruct) == 0x000000, "Member 'FMVVMVCompiledFields::ClassOrScriptStruct' has a wrong offset!");
static_assert(offsetof(FMVVMVCompiledFields, LibraryStartIndex) == 0x000008, "Member 'FMVVMVCompiledFields::LibraryStartIndex' has a wrong offset!");
static_assert(offsetof(FMVVMVCompiledFields, NumberOfProperties) == 0x00000A, "Member 'FMVVMVCompiledFields::NumberOfProperties' has a wrong offset!");
static_assert(offsetof(FMVVMVCompiledFields, NumberOfFunctions) == 0x00000C, "Member 'FMVVMVCompiledFields::NumberOfFunctions' has a wrong offset!");
static_assert(offsetof(FMVVMVCompiledFields, NumberOfFieldIds) == 0x00000E, "Member 'FMVVMVCompiledFields::NumberOfFieldIds' has a wrong offset!");

struct FMVVMVCompiledFieldPath final
{
public:
	int16                                         StartIndex;
	int16                                         Num;
};
static_assert(alignof(FMVVMVCompiledFieldPath) == 0x000002, "Wrong alignment on FMVVMVCompiledFieldPath");
static_assert(sizeof(FMVVMVCompiledFieldPath) == 0x000004, "Wrong size on FMVVMVCompiledFieldPath");
static_assert(offsetof(FMVVMVCompiledFieldPath, StartIndex) == 0x000000, "Member 'FMVVMVCompiledFieldPath::StartIndex' has a wrong offset!");
static_assert(offsetof(FMVVMVCompiledFieldPath, Num) == 0x000002, "Member 'FMVVMVCompiledFieldPath::Num' has a wrong offset!");

struct FMVVMVCompiledFieldId final
{
public:
	int16                                         FieldIdIndex;
};
static_assert(alignof(FMVVMVCompiledFieldId) == 0x000002, "Wrong alignment on FMVVMVCompiledFieldId");
static_assert(sizeof(FMVVMVCompiledFieldId) == 0x000002, "Wrong size on FMVVMVCompiledFieldId");
static_assert(offsetof(FMVVMVCompiledFieldId, FieldIdIndex) == 0x000000, "Member 'FMVVMVCompiledFieldId::FieldIdIndex' has a wrong offset!");

struct FMVVMCompiledLoadedPropertyOrFunctionIndex final
{
public:
	int16                                         Index;
	uint8                                         bIsObjectProperty : 1;
	uint8                                         bIsScriptStructProperty : 1;
	uint8                                         bIsProperty : 1;
	uint8                                         Pad_3[0x1];
};
static_assert(alignof(FMVVMCompiledLoadedPropertyOrFunctionIndex) == 0x000002, "Wrong alignment on FMVVMCompiledLoadedPropertyOrFunctionIndex");
static_assert(sizeof(FMVVMCompiledLoadedPropertyOrFunctionIndex) == 0x000004, "Wrong size on FMVVMCompiledLoadedPropertyOrFunctionIndex");
static_assert(offsetof(FMVVMCompiledLoadedPropertyOrFunctionIndex, Index) == 0x000000, "Member 'FMVVMCompiledLoadedPropertyOrFunctionIndex::Index' has a wrong offset!");

struct FMVVMVCompiledBinding final
{
public:
	struct FMVVMVCompiledFieldPath                SourceFieldPath;
	struct FMVVMVCompiledFieldPath                DestinationFieldPath;
	struct FMVVMVCompiledFieldPath                ConversionFunctionFieldPath;
};
static_assert(alignof(FMVVMVCompiledBinding) == 0x000002, "Wrong alignment on FMVVMVCompiledBinding");
static_assert(sizeof(FMVVMVCompiledBinding) == 0x00000C, "Wrong size on FMVVMVCompiledBinding");
static_assert(offsetof(FMVVMVCompiledBinding, SourceFieldPath) == 0x000000, "Member 'FMVVMVCompiledBinding::SourceFieldPath' has a wrong offset!");
static_assert(offsetof(FMVVMVCompiledBinding, DestinationFieldPath) == 0x000004, "Member 'FMVVMVCompiledBinding::DestinationFieldPath' has a wrong offset!");
static_assert(offsetof(FMVVMVCompiledBinding, ConversionFunctionFieldPath) == 0x000008, "Member 'FMVVMVCompiledBinding::ConversionFunctionFieldPath' has a wrong offset!");

struct FMVVMCompiledBindingLibrary final
{
public:
	uint8                                         Pad_0[0x10];
	TArray<class UFunction*>                      LoadedFunctions;
	uint8                                         Pad_20[0x10];
	TArray<struct FMVVMCompiledLoadedPropertyOrFunctionIndex> FieldPaths;
	TArray<struct FMVVMVCompiledFields>           CompiledFields;
	TArray<class FName>                           CompiledFieldNames;
};
static_assert(alignof(FMVVMCompiledBindingLibrary) == 0x000008, "Wrong alignment on FMVVMCompiledBindingLibrary");
static_assert(sizeof(FMVVMCompiledBindingLibrary) == 0x000060, "Wrong size on FMVVMCompiledBindingLibrary");
static_assert(offsetof(FMVVMCompiledBindingLibrary, LoadedFunctions) == 0x000010, "Member 'FMVVMCompiledBindingLibrary::LoadedFunctions' has a wrong offset!");
static_assert(offsetof(FMVVMCompiledBindingLibrary, FieldPaths) == 0x000030, "Member 'FMVVMCompiledBindingLibrary::FieldPaths' has a wrong offset!");
static_assert(offsetof(FMVVMCompiledBindingLibrary, CompiledFields) == 0x000040, "Member 'FMVVMCompiledBindingLibrary::CompiledFields' has a wrong offset!");
static_assert(offsetof(FMVVMCompiledBindingLibrary, CompiledFieldNames) == 0x000050, "Member 'FMVVMCompiledBindingLibrary::CompiledFieldNames' has a wrong offset!");

struct FMVVMViewModelCollection final
{
public:
	TArray<struct FMVVMViewModelContextInstance>  ViewModelInstances;
	uint8                                         Pad_10[0x18];
};
static_assert(alignof(FMVVMViewModelCollection) == 0x000008, "Wrong alignment on FMVVMViewModelCollection");
static_assert(sizeof(FMVVMViewModelCollection) == 0x000028, "Wrong size on FMVVMViewModelCollection");
static_assert(offsetof(FMVVMViewModelCollection, ViewModelInstances) == 0x000000, "Member 'FMVVMViewModelCollection::ViewModelInstances' has a wrong offset!");

struct FMVVMViewClass_SourceCreator final
{
public:
	TSubclassOf<class UObject>                    ExpectedSourceType;
	class UMVVMViewModelContextResolver*          Resolver;
	struct FMVVMViewModelContext                  GlobalViewModelInstance;
	struct FMVVMVCompiledFieldPath                FieldPath;
	class FName                                   PropertyName;
	bool                                          bCreateInstance;
	bool                                          bIsUserWidgetProperty;
	bool                                          bOptional;
	uint8                                         Pad_2B[0x5];
};
static_assert(alignof(FMVVMViewClass_SourceCreator) == 0x000008, "Wrong alignment on FMVVMViewClass_SourceCreator");
static_assert(sizeof(FMVVMViewClass_SourceCreator) == 0x000030, "Wrong size on FMVVMViewClass_SourceCreator");
static_assert(offsetof(FMVVMViewClass_SourceCreator, ExpectedSourceType) == 0x000000, "Member 'FMVVMViewClass_SourceCreator::ExpectedSourceType' has a wrong offset!");
static_assert(offsetof(FMVVMViewClass_SourceCreator, Resolver) == 0x000008, "Member 'FMVVMViewClass_SourceCreator::Resolver' has a wrong offset!");
static_assert(offsetof(FMVVMViewClass_SourceCreator, GlobalViewModelInstance) == 0x000010, "Member 'FMVVMViewClass_SourceCreator::GlobalViewModelInstance' has a wrong offset!");
static_assert(offsetof(FMVVMViewClass_SourceCreator, FieldPath) == 0x000020, "Member 'FMVVMViewClass_SourceCreator::FieldPath' has a wrong offset!");
static_assert(offsetof(FMVVMViewClass_SourceCreator, PropertyName) == 0x000024, "Member 'FMVVMViewClass_SourceCreator::PropertyName' has a wrong offset!");
static_assert(offsetof(FMVVMViewClass_SourceCreator, bCreateInstance) == 0x000028, "Member 'FMVVMViewClass_SourceCreator::bCreateInstance' has a wrong offset!");
static_assert(offsetof(FMVVMViewClass_SourceCreator, bIsUserWidgetProperty) == 0x000029, "Member 'FMVVMViewClass_SourceCreator::bIsUserWidgetProperty' has a wrong offset!");
static_assert(offsetof(FMVVMViewClass_SourceCreator, bOptional) == 0x00002A, "Member 'FMVVMViewClass_SourceCreator::bOptional' has a wrong offset!");

struct FMVVMViewClass_CompiledBinding final
{
public:
	struct FMVVMVCompiledFieldId                  FieldId;
	uint8                                         Pad_2[0x2];
	class FName                                   SourcePropertyName;
	struct FMVVMVCompiledBinding                  Binding;
	EMVVMExecutionMode                            ExecutionMode;
	uint8                                         Flags;
	uint8                                         Pad_16[0x2];
};
static_assert(alignof(FMVVMViewClass_CompiledBinding) == 0x000004, "Wrong alignment on FMVVMViewClass_CompiledBinding");
static_assert(sizeof(FMVVMViewClass_CompiledBinding) == 0x000018, "Wrong size on FMVVMViewClass_CompiledBinding");
static_assert(offsetof(FMVVMViewClass_CompiledBinding, FieldId) == 0x000000, "Member 'FMVVMViewClass_CompiledBinding::FieldId' has a wrong offset!");
static_assert(offsetof(FMVVMViewClass_CompiledBinding, SourcePropertyName) == 0x000004, "Member 'FMVVMViewClass_CompiledBinding::SourcePropertyName' has a wrong offset!");
static_assert(offsetof(FMVVMViewClass_CompiledBinding, Binding) == 0x000008, "Member 'FMVVMViewClass_CompiledBinding::Binding' has a wrong offset!");
static_assert(offsetof(FMVVMViewClass_CompiledBinding, ExecutionMode) == 0x000014, "Member 'FMVVMViewClass_CompiledBinding::ExecutionMode' has a wrong offset!");
static_assert(offsetof(FMVVMViewClass_CompiledBinding, Flags) == 0x000015, "Member 'FMVVMViewClass_CompiledBinding::Flags' has a wrong offset!");

}
