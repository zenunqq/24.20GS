#pragma once

#include "Basic.hpp"

#include "CustomizableObject_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct CustomizableObject_CreateInstance final
{
public:
	class UCustomizableObjectInstance*            ReturnValue;
};
static_assert(alignof(CustomizableObject_CreateInstance) == 0x000008, "Wrong alignment on CustomizableObject_CreateInstance");
static_assert(sizeof(CustomizableObject_CreateInstance) == 0x000008, "Wrong size on CustomizableObject_CreateInstance");
static_assert(offsetof(CustomizableObject_CreateInstance, ReturnValue) == 0x000000, "Member 'CustomizableObject_CreateInstance::ReturnValue' has a wrong offset!");

struct CustomizableObject_FindParameter final
{
public:
	class FString                                 Name_0;
	int32                                         ReturnValue;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(CustomizableObject_FindParameter) == 0x000008, "Wrong alignment on CustomizableObject_FindParameter");
static_assert(sizeof(CustomizableObject_FindParameter) == 0x000018, "Wrong size on CustomizableObject_FindParameter");
static_assert(offsetof(CustomizableObject_FindParameter, Name_0) == 0x000000, "Member 'CustomizableObject_FindParameter::Name_0' has a wrong offset!");
static_assert(offsetof(CustomizableObject_FindParameter, ReturnValue) == 0x000010, "Member 'CustomizableObject_FindParameter::ReturnValue' has a wrong offset!");

struct CustomizableObject_GetBoolParameterDefaultValue final
{
public:
	class FString                                 InParameterName;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(CustomizableObject_GetBoolParameterDefaultValue) == 0x000008, "Wrong alignment on CustomizableObject_GetBoolParameterDefaultValue");
static_assert(sizeof(CustomizableObject_GetBoolParameterDefaultValue) == 0x000018, "Wrong size on CustomizableObject_GetBoolParameterDefaultValue");
static_assert(offsetof(CustomizableObject_GetBoolParameterDefaultValue, InParameterName) == 0x000000, "Member 'CustomizableObject_GetBoolParameterDefaultValue::InParameterName' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetBoolParameterDefaultValue, ReturnValue) == 0x000010, "Member 'CustomizableObject_GetBoolParameterDefaultValue::ReturnValue' has a wrong offset!");

struct CustomizableObject_GetColorParameterDefaultValue final
{
public:
	class FString                                 InParameterName;
	struct FLinearColor                           ReturnValue;
};
static_assert(alignof(CustomizableObject_GetColorParameterDefaultValue) == 0x000008, "Wrong alignment on CustomizableObject_GetColorParameterDefaultValue");
static_assert(sizeof(CustomizableObject_GetColorParameterDefaultValue) == 0x000020, "Wrong size on CustomizableObject_GetColorParameterDefaultValue");
static_assert(offsetof(CustomizableObject_GetColorParameterDefaultValue, InParameterName) == 0x000000, "Member 'CustomizableObject_GetColorParameterDefaultValue::InParameterName' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetColorParameterDefaultValue, ReturnValue) == 0x000010, "Member 'CustomizableObject_GetColorParameterDefaultValue::ReturnValue' has a wrong offset!");

struct CustomizableObject_GetComponentCount final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(CustomizableObject_GetComponentCount) == 0x000004, "Wrong alignment on CustomizableObject_GetComponentCount");
static_assert(sizeof(CustomizableObject_GetComponentCount) == 0x000004, "Wrong size on CustomizableObject_GetComponentCount");
static_assert(offsetof(CustomizableObject_GetComponentCount, ReturnValue) == 0x000000, "Member 'CustomizableObject_GetComponentCount::ReturnValue' has a wrong offset!");

struct CustomizableObject_GetFloatParameterDefaultValue final
{
public:
	class FString                                 InParameterName;
	float                                         ReturnValue;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(CustomizableObject_GetFloatParameterDefaultValue) == 0x000008, "Wrong alignment on CustomizableObject_GetFloatParameterDefaultValue");
static_assert(sizeof(CustomizableObject_GetFloatParameterDefaultValue) == 0x000018, "Wrong size on CustomizableObject_GetFloatParameterDefaultValue");
static_assert(offsetof(CustomizableObject_GetFloatParameterDefaultValue, InParameterName) == 0x000000, "Member 'CustomizableObject_GetFloatParameterDefaultValue::InParameterName' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetFloatParameterDefaultValue, ReturnValue) == 0x000010, "Member 'CustomizableObject_GetFloatParameterDefaultValue::ReturnValue' has a wrong offset!");

struct CustomizableObject_GetIntParameterAvailableOption final
{
public:
	int32                                         ParamIndex;
	int32                                         K;
	class FString                                 ReturnValue;
};
static_assert(alignof(CustomizableObject_GetIntParameterAvailableOption) == 0x000008, "Wrong alignment on CustomizableObject_GetIntParameterAvailableOption");
static_assert(sizeof(CustomizableObject_GetIntParameterAvailableOption) == 0x000018, "Wrong size on CustomizableObject_GetIntParameterAvailableOption");
static_assert(offsetof(CustomizableObject_GetIntParameterAvailableOption, ParamIndex) == 0x000000, "Member 'CustomizableObject_GetIntParameterAvailableOption::ParamIndex' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetIntParameterAvailableOption, K) == 0x000004, "Member 'CustomizableObject_GetIntParameterAvailableOption::K' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetIntParameterAvailableOption, ReturnValue) == 0x000008, "Member 'CustomizableObject_GetIntParameterAvailableOption::ReturnValue' has a wrong offset!");

struct CustomizableObject_GetIntParameterDefaultValue final
{
public:
	class FString                                 InParameterName;
	int32                                         ReturnValue;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(CustomizableObject_GetIntParameterDefaultValue) == 0x000008, "Wrong alignment on CustomizableObject_GetIntParameterDefaultValue");
static_assert(sizeof(CustomizableObject_GetIntParameterDefaultValue) == 0x000018, "Wrong size on CustomizableObject_GetIntParameterDefaultValue");
static_assert(offsetof(CustomizableObject_GetIntParameterDefaultValue, InParameterName) == 0x000000, "Member 'CustomizableObject_GetIntParameterDefaultValue::InParameterName' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetIntParameterDefaultValue, ReturnValue) == 0x000010, "Member 'CustomizableObject_GetIntParameterDefaultValue::ReturnValue' has a wrong offset!");

struct CustomizableObject_GetIntParameterNumOptions final
{
public:
	int32                                         ParamIndex;
	int32                                         ReturnValue;
};
static_assert(alignof(CustomizableObject_GetIntParameterNumOptions) == 0x000004, "Wrong alignment on CustomizableObject_GetIntParameterNumOptions");
static_assert(sizeof(CustomizableObject_GetIntParameterNumOptions) == 0x000008, "Wrong size on CustomizableObject_GetIntParameterNumOptions");
static_assert(offsetof(CustomizableObject_GetIntParameterNumOptions, ParamIndex) == 0x000000, "Member 'CustomizableObject_GetIntParameterNumOptions::ParamIndex' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetIntParameterNumOptions, ReturnValue) == 0x000004, "Member 'CustomizableObject_GetIntParameterNumOptions::ReturnValue' has a wrong offset!");

struct CustomizableObject_GetParameterCount final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(CustomizableObject_GetParameterCount) == 0x000004, "Wrong alignment on CustomizableObject_GetParameterCount");
static_assert(sizeof(CustomizableObject_GetParameterCount) == 0x000004, "Wrong size on CustomizableObject_GetParameterCount");
static_assert(offsetof(CustomizableObject_GetParameterCount, ReturnValue) == 0x000000, "Member 'CustomizableObject_GetParameterCount::ReturnValue' has a wrong offset!");

struct CustomizableObject_GetParameterDescriptionCount final
{
public:
	class FString                                 ParamName;
	int32                                         ReturnValue;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(CustomizableObject_GetParameterDescriptionCount) == 0x000008, "Wrong alignment on CustomizableObject_GetParameterDescriptionCount");
static_assert(sizeof(CustomizableObject_GetParameterDescriptionCount) == 0x000018, "Wrong size on CustomizableObject_GetParameterDescriptionCount");
static_assert(offsetof(CustomizableObject_GetParameterDescriptionCount, ParamName) == 0x000000, "Member 'CustomizableObject_GetParameterDescriptionCount::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetParameterDescriptionCount, ReturnValue) == 0x000010, "Member 'CustomizableObject_GetParameterDescriptionCount::ReturnValue' has a wrong offset!");

struct CustomizableObject_GetParameterName final
{
public:
	int32                                         ParamIndex;
	uint8                                         Pad_4[0x4];
	class FString                                 ReturnValue;
};
static_assert(alignof(CustomizableObject_GetParameterName) == 0x000008, "Wrong alignment on CustomizableObject_GetParameterName");
static_assert(sizeof(CustomizableObject_GetParameterName) == 0x000018, "Wrong size on CustomizableObject_GetParameterName");
static_assert(offsetof(CustomizableObject_GetParameterName, ParamIndex) == 0x000000, "Member 'CustomizableObject_GetParameterName::ParamIndex' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetParameterName, ReturnValue) == 0x000008, "Member 'CustomizableObject_GetParameterName::ReturnValue' has a wrong offset!");

struct CustomizableObject_GetParameterType final
{
public:
	int32                                         ParamIndex;
	EMutableParameterType                         ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(CustomizableObject_GetParameterType) == 0x000004, "Wrong alignment on CustomizableObject_GetParameterType");
static_assert(sizeof(CustomizableObject_GetParameterType) == 0x000008, "Wrong size on CustomizableObject_GetParameterType");
static_assert(offsetof(CustomizableObject_GetParameterType, ParamIndex) == 0x000000, "Member 'CustomizableObject_GetParameterType::ParamIndex' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetParameterType, ReturnValue) == 0x000004, "Member 'CustomizableObject_GetParameterType::ReturnValue' has a wrong offset!");

struct CustomizableObject_GetParameterTypeByName final
{
public:
	class FString                                 Name_0;
	EMutableParameterType                         ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(CustomizableObject_GetParameterTypeByName) == 0x000008, "Wrong alignment on CustomizableObject_GetParameterTypeByName");
static_assert(sizeof(CustomizableObject_GetParameterTypeByName) == 0x000018, "Wrong size on CustomizableObject_GetParameterTypeByName");
static_assert(offsetof(CustomizableObject_GetParameterTypeByName, Name_0) == 0x000000, "Member 'CustomizableObject_GetParameterTypeByName::Name_0' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetParameterTypeByName, ReturnValue) == 0x000010, "Member 'CustomizableObject_GetParameterTypeByName::ReturnValue' has a wrong offset!");

struct CustomizableObject_GetParameterUIMetadata final
{
public:
	class FString                                 ParamName;
	struct FParameterUIData                       ReturnValue;
};
static_assert(alignof(CustomizableObject_GetParameterUIMetadata) == 0x000008, "Wrong alignment on CustomizableObject_GetParameterUIMetadata");
static_assert(sizeof(CustomizableObject_GetParameterUIMetadata) == 0x000188, "Wrong size on CustomizableObject_GetParameterUIMetadata");
static_assert(offsetof(CustomizableObject_GetParameterUIMetadata, ParamName) == 0x000000, "Member 'CustomizableObject_GetParameterUIMetadata::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetParameterUIMetadata, ReturnValue) == 0x000010, "Member 'CustomizableObject_GetParameterUIMetadata::ReturnValue' has a wrong offset!");

struct CustomizableObject_GetParameterUIMetadataFromIndex final
{
public:
	int32                                         ParamIndex;
	uint8                                         Pad_4[0x4];
	struct FParameterUIData                       ReturnValue;
};
static_assert(alignof(CustomizableObject_GetParameterUIMetadataFromIndex) == 0x000008, "Wrong alignment on CustomizableObject_GetParameterUIMetadataFromIndex");
static_assert(sizeof(CustomizableObject_GetParameterUIMetadataFromIndex) == 0x000180, "Wrong size on CustomizableObject_GetParameterUIMetadataFromIndex");
static_assert(offsetof(CustomizableObject_GetParameterUIMetadataFromIndex, ParamIndex) == 0x000000, "Member 'CustomizableObject_GetParameterUIMetadataFromIndex::ParamIndex' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetParameterUIMetadataFromIndex, ReturnValue) == 0x000008, "Member 'CustomizableObject_GetParameterUIMetadataFromIndex::ReturnValue' has a wrong offset!");

struct CustomizableObject_GetProjectorParameterDefaultValue final
{
public:
	class FString                                 InParameterName;
	struct FVector3f                              OutPos;
	struct FVector3f                              OutDirection;
	struct FVector3f                              OutUp;
	struct FVector3f                              OutScale;
	float                                         OutAngle;
	ECustomizableObjectProjectorType              OutType;
	uint8                                         Pad_45[0x3];
};
static_assert(alignof(CustomizableObject_GetProjectorParameterDefaultValue) == 0x000008, "Wrong alignment on CustomizableObject_GetProjectorParameterDefaultValue");
static_assert(sizeof(CustomizableObject_GetProjectorParameterDefaultValue) == 0x000048, "Wrong size on CustomizableObject_GetProjectorParameterDefaultValue");
static_assert(offsetof(CustomizableObject_GetProjectorParameterDefaultValue, InParameterName) == 0x000000, "Member 'CustomizableObject_GetProjectorParameterDefaultValue::InParameterName' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetProjectorParameterDefaultValue, OutPos) == 0x000010, "Member 'CustomizableObject_GetProjectorParameterDefaultValue::OutPos' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetProjectorParameterDefaultValue, OutDirection) == 0x00001C, "Member 'CustomizableObject_GetProjectorParameterDefaultValue::OutDirection' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetProjectorParameterDefaultValue, OutUp) == 0x000028, "Member 'CustomizableObject_GetProjectorParameterDefaultValue::OutUp' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetProjectorParameterDefaultValue, OutScale) == 0x000034, "Member 'CustomizableObject_GetProjectorParameterDefaultValue::OutScale' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetProjectorParameterDefaultValue, OutAngle) == 0x000040, "Member 'CustomizableObject_GetProjectorParameterDefaultValue::OutAngle' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetProjectorParameterDefaultValue, OutType) == 0x000044, "Member 'CustomizableObject_GetProjectorParameterDefaultValue::OutType' has a wrong offset!");

struct CustomizableObject_GetStateCount final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(CustomizableObject_GetStateCount) == 0x000004, "Wrong alignment on CustomizableObject_GetStateCount");
static_assert(sizeof(CustomizableObject_GetStateCount) == 0x000004, "Wrong size on CustomizableObject_GetStateCount");
static_assert(offsetof(CustomizableObject_GetStateCount, ReturnValue) == 0x000000, "Member 'CustomizableObject_GetStateCount::ReturnValue' has a wrong offset!");

struct CustomizableObject_GetStateName final
{
public:
	int32                                         StateIndex;
	uint8                                         Pad_4[0x4];
	class FString                                 ReturnValue;
};
static_assert(alignof(CustomizableObject_GetStateName) == 0x000008, "Wrong alignment on CustomizableObject_GetStateName");
static_assert(sizeof(CustomizableObject_GetStateName) == 0x000018, "Wrong size on CustomizableObject_GetStateName");
static_assert(offsetof(CustomizableObject_GetStateName, StateIndex) == 0x000000, "Member 'CustomizableObject_GetStateName::StateIndex' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetStateName, ReturnValue) == 0x000008, "Member 'CustomizableObject_GetStateName::ReturnValue' has a wrong offset!");

struct CustomizableObject_GetStateParameterCount final
{
public:
	class FString                                 StateName;
	int32                                         ReturnValue;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(CustomizableObject_GetStateParameterCount) == 0x000008, "Wrong alignment on CustomizableObject_GetStateParameterCount");
static_assert(sizeof(CustomizableObject_GetStateParameterCount) == 0x000018, "Wrong size on CustomizableObject_GetStateParameterCount");
static_assert(offsetof(CustomizableObject_GetStateParameterCount, StateName) == 0x000000, "Member 'CustomizableObject_GetStateParameterCount::StateName' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetStateParameterCount, ReturnValue) == 0x000010, "Member 'CustomizableObject_GetStateParameterCount::ReturnValue' has a wrong offset!");

struct CustomizableObject_GetStateParameterName final
{
public:
	class FString                                 StateName;
	int32                                         ParameterIndex;
	uint8                                         Pad_14[0x4];
	class FString                                 ReturnValue;
};
static_assert(alignof(CustomizableObject_GetStateParameterName) == 0x000008, "Wrong alignment on CustomizableObject_GetStateParameterName");
static_assert(sizeof(CustomizableObject_GetStateParameterName) == 0x000028, "Wrong size on CustomizableObject_GetStateParameterName");
static_assert(offsetof(CustomizableObject_GetStateParameterName, StateName) == 0x000000, "Member 'CustomizableObject_GetStateParameterName::StateName' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetStateParameterName, ParameterIndex) == 0x000010, "Member 'CustomizableObject_GetStateParameterName::ParameterIndex' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetStateParameterName, ReturnValue) == 0x000018, "Member 'CustomizableObject_GetStateParameterName::ReturnValue' has a wrong offset!");

struct CustomizableObject_GetStateUIMetadata final
{
public:
	class FString                                 StateName;
	struct FParameterUIData                       ReturnValue;
};
static_assert(alignof(CustomizableObject_GetStateUIMetadata) == 0x000008, "Wrong alignment on CustomizableObject_GetStateUIMetadata");
static_assert(sizeof(CustomizableObject_GetStateUIMetadata) == 0x000188, "Wrong size on CustomizableObject_GetStateUIMetadata");
static_assert(offsetof(CustomizableObject_GetStateUIMetadata, StateName) == 0x000000, "Member 'CustomizableObject_GetStateUIMetadata::StateName' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetStateUIMetadata, ReturnValue) == 0x000010, "Member 'CustomizableObject_GetStateUIMetadata::ReturnValue' has a wrong offset!");

struct CustomizableObject_GetStateUIMetadataFromIndex final
{
public:
	int32                                         StateIndex;
	uint8                                         Pad_4[0x4];
	struct FParameterUIData                       ReturnValue;
};
static_assert(alignof(CustomizableObject_GetStateUIMetadataFromIndex) == 0x000008, "Wrong alignment on CustomizableObject_GetStateUIMetadataFromIndex");
static_assert(sizeof(CustomizableObject_GetStateUIMetadataFromIndex) == 0x000180, "Wrong size on CustomizableObject_GetStateUIMetadataFromIndex");
static_assert(offsetof(CustomizableObject_GetStateUIMetadataFromIndex, StateIndex) == 0x000000, "Member 'CustomizableObject_GetStateUIMetadataFromIndex::StateIndex' has a wrong offset!");
static_assert(offsetof(CustomizableObject_GetStateUIMetadataFromIndex, ReturnValue) == 0x000008, "Member 'CustomizableObject_GetStateUIMetadataFromIndex::ReturnValue' has a wrong offset!");

struct CustomizableObject_IsCompiled final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(CustomizableObject_IsCompiled) == 0x000001, "Wrong alignment on CustomizableObject_IsCompiled");
static_assert(sizeof(CustomizableObject_IsCompiled) == 0x000001, "Wrong size on CustomizableObject_IsCompiled");
static_assert(offsetof(CustomizableObject_IsCompiled, ReturnValue) == 0x000000, "Member 'CustomizableObject_IsCompiled::ReturnValue' has a wrong offset!");

struct CustomizableObject_IsParameterMultidimensional final
{
public:
	class FString                                 InParameterName;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(CustomizableObject_IsParameterMultidimensional) == 0x000008, "Wrong alignment on CustomizableObject_IsParameterMultidimensional");
static_assert(sizeof(CustomizableObject_IsParameterMultidimensional) == 0x000018, "Wrong size on CustomizableObject_IsParameterMultidimensional");
static_assert(offsetof(CustomizableObject_IsParameterMultidimensional, InParameterName) == 0x000000, "Member 'CustomizableObject_IsParameterMultidimensional::InParameterName' has a wrong offset!");
static_assert(offsetof(CustomizableObject_IsParameterMultidimensional, ReturnValue) == 0x000010, "Member 'CustomizableObject_IsParameterMultidimensional::ReturnValue' has a wrong offset!");

struct DGGUI_GetCustomizableSkeletalComponent final
{
public:
	class UCustomizableSkeletalComponent*         ReturnValue;
};
static_assert(alignof(DGGUI_GetCustomizableSkeletalComponent) == 0x000008, "Wrong alignment on DGGUI_GetCustomizableSkeletalComponent");
static_assert(sizeof(DGGUI_GetCustomizableSkeletalComponent) == 0x000008, "Wrong size on DGGUI_GetCustomizableSkeletalComponent");
static_assert(offsetof(DGGUI_GetCustomizableSkeletalComponent, ReturnValue) == 0x000000, "Member 'DGGUI_GetCustomizableSkeletalComponent::ReturnValue' has a wrong offset!");

struct DGGUI_SetCustomizableSkeletalComponent final
{
public:
	class UCustomizableSkeletalComponent*         CustomizableSkeletalComponent;
};
static_assert(alignof(DGGUI_SetCustomizableSkeletalComponent) == 0x000008, "Wrong alignment on DGGUI_SetCustomizableSkeletalComponent");
static_assert(sizeof(DGGUI_SetCustomizableSkeletalComponent) == 0x000008, "Wrong size on DGGUI_SetCustomizableSkeletalComponent");
static_assert(offsetof(DGGUI_SetCustomizableSkeletalComponent, CustomizableSkeletalComponent) == 0x000000, "Member 'DGGUI_SetCustomizableSkeletalComponent::CustomizableSkeletalComponent' has a wrong offset!");

struct CustomizableObjectInstance_AddValueToFloatRange final
{
public:
	class FString                                 ParamName;
	int32                                         ReturnValue;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(CustomizableObjectInstance_AddValueToFloatRange) == 0x000008, "Wrong alignment on CustomizableObjectInstance_AddValueToFloatRange");
static_assert(sizeof(CustomizableObjectInstance_AddValueToFloatRange) == 0x000018, "Wrong size on CustomizableObjectInstance_AddValueToFloatRange");
static_assert(offsetof(CustomizableObjectInstance_AddValueToFloatRange, ParamName) == 0x000000, "Member 'CustomizableObjectInstance_AddValueToFloatRange::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_AddValueToFloatRange, ReturnValue) == 0x000010, "Member 'CustomizableObjectInstance_AddValueToFloatRange::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_AddValueToIntRange final
{
public:
	class FString                                 ParamName;
	int32                                         ReturnValue;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(CustomizableObjectInstance_AddValueToIntRange) == 0x000008, "Wrong alignment on CustomizableObjectInstance_AddValueToIntRange");
static_assert(sizeof(CustomizableObjectInstance_AddValueToIntRange) == 0x000018, "Wrong size on CustomizableObjectInstance_AddValueToIntRange");
static_assert(offsetof(CustomizableObjectInstance_AddValueToIntRange, ParamName) == 0x000000, "Member 'CustomizableObjectInstance_AddValueToIntRange::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_AddValueToIntRange, ReturnValue) == 0x000010, "Member 'CustomizableObjectInstance_AddValueToIntRange::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_AddValueToProjectorRange final
{
public:
	class FString                                 ParamName;
	int32                                         ReturnValue;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(CustomizableObjectInstance_AddValueToProjectorRange) == 0x000008, "Wrong alignment on CustomizableObjectInstance_AddValueToProjectorRange");
static_assert(sizeof(CustomizableObjectInstance_AddValueToProjectorRange) == 0x000018, "Wrong size on CustomizableObjectInstance_AddValueToProjectorRange");
static_assert(offsetof(CustomizableObjectInstance_AddValueToProjectorRange, ParamName) == 0x000000, "Member 'CustomizableObjectInstance_AddValueToProjectorRange::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_AddValueToProjectorRange, ReturnValue) == 0x000010, "Member 'CustomizableObjectInstance_AddValueToProjectorRange::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_Clone final
{
public:
	class UCustomizableObjectInstance*            ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_Clone) == 0x000008, "Wrong alignment on CustomizableObjectInstance_Clone");
static_assert(sizeof(CustomizableObjectInstance_Clone) == 0x000008, "Wrong size on CustomizableObjectInstance_Clone");
static_assert(offsetof(CustomizableObjectInstance_Clone, ReturnValue) == 0x000000, "Member 'CustomizableObjectInstance_Clone::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_CloneStatic final
{
public:
	class UObject*                                Outer_0;
	class UCustomizableObjectInstance*            ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_CloneStatic) == 0x000008, "Wrong alignment on CustomizableObjectInstance_CloneStatic");
static_assert(sizeof(CustomizableObjectInstance_CloneStatic) == 0x000010, "Wrong size on CustomizableObjectInstance_CloneStatic");
static_assert(offsetof(CustomizableObjectInstance_CloneStatic, Outer_0) == 0x000000, "Member 'CustomizableObjectInstance_CloneStatic::Outer_0' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_CloneStatic, ReturnValue) == 0x000008, "Member 'CustomizableObjectInstance_CloneStatic::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_CreateMultiLayerProjector final
{
public:
	class FName                                   ProjectorParamName;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(CustomizableObjectInstance_CreateMultiLayerProjector) == 0x000004, "Wrong alignment on CustomizableObjectInstance_CreateMultiLayerProjector");
static_assert(sizeof(CustomizableObjectInstance_CreateMultiLayerProjector) == 0x000008, "Wrong size on CustomizableObjectInstance_CreateMultiLayerProjector");
static_assert(offsetof(CustomizableObjectInstance_CreateMultiLayerProjector, ProjectorParamName) == 0x000000, "Member 'CustomizableObjectInstance_CreateMultiLayerProjector::ProjectorParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_CreateMultiLayerProjector, ReturnValue) == 0x000004, "Member 'CustomizableObjectInstance_CreateMultiLayerProjector::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_GetBoolParameters final
{
public:
	TArray<struct FCustomizableObjectBoolParameterValue> ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_GetBoolParameters) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetBoolParameters");
static_assert(sizeof(CustomizableObjectInstance_GetBoolParameters) == 0x000010, "Wrong size on CustomizableObjectInstance_GetBoolParameters");
static_assert(offsetof(CustomizableObjectInstance_GetBoolParameters, ReturnValue) == 0x000000, "Member 'CustomizableObjectInstance_GetBoolParameters::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_GetFloatParameters final
{
public:
	TArray<struct FCustomizableObjectFloatParameterValue> ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_GetFloatParameters) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetFloatParameters");
static_assert(sizeof(CustomizableObjectInstance_GetFloatParameters) == 0x000010, "Wrong size on CustomizableObjectInstance_GetFloatParameters");
static_assert(offsetof(CustomizableObjectInstance_GetFloatParameters, ReturnValue) == 0x000000, "Member 'CustomizableObjectInstance_GetFloatParameters::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_GetIntParameters final
{
public:
	TArray<struct FCustomizableObjectIntParameterValue> ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_GetIntParameters) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetIntParameters");
static_assert(sizeof(CustomizableObjectInstance_GetIntParameters) == 0x000010, "Wrong size on CustomizableObjectInstance_GetIntParameters");
static_assert(offsetof(CustomizableObjectInstance_GetIntParameters, ReturnValue) == 0x000000, "Member 'CustomizableObjectInstance_GetIntParameters::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_GetParameterDescription final
{
public:
	class FString                                 ParamName;
	int32                                         DescIndex;
	uint8                                         Pad_14[0x4];
	class UTexture2D*                             ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_GetParameterDescription) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetParameterDescription");
static_assert(sizeof(CustomizableObjectInstance_GetParameterDescription) == 0x000020, "Wrong size on CustomizableObjectInstance_GetParameterDescription");
static_assert(offsetof(CustomizableObjectInstance_GetParameterDescription, ParamName) == 0x000000, "Member 'CustomizableObjectInstance_GetParameterDescription::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetParameterDescription, DescIndex) == 0x000010, "Member 'CustomizableObjectInstance_GetParameterDescription::DescIndex' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetParameterDescription, ReturnValue) == 0x000018, "Member 'CustomizableObjectInstance_GetParameterDescription::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_GetProjectorParameters final
{
public:
	TArray<struct FCustomizableObjectProjectorParameterValue> ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_GetProjectorParameters) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetProjectorParameters");
static_assert(sizeof(CustomizableObjectInstance_GetProjectorParameters) == 0x000010, "Wrong size on CustomizableObjectInstance_GetProjectorParameters");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorParameters, ReturnValue) == 0x000000, "Member 'CustomizableObjectInstance_GetProjectorParameters::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_GetTextureParameters final
{
public:
	TArray<struct FCustomizableObjectTextureParameterValue> ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_GetTextureParameters) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetTextureParameters");
static_assert(sizeof(CustomizableObjectInstance_GetTextureParameters) == 0x000010, "Wrong size on CustomizableObjectInstance_GetTextureParameters");
static_assert(offsetof(CustomizableObjectInstance_GetTextureParameters, ReturnValue) == 0x000000, "Member 'CustomizableObjectInstance_GetTextureParameters::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_GetVectorParameters final
{
public:
	TArray<struct FCustomizableObjectVectorParameterValue> ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_GetVectorParameters) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetVectorParameters");
static_assert(sizeof(CustomizableObjectInstance_GetVectorParameters) == 0x000010, "Wrong size on CustomizableObjectInstance_GetVectorParameters");
static_assert(offsetof(CustomizableObjectInstance_GetVectorParameters, ReturnValue) == 0x000000, "Member 'CustomizableObjectInstance_GetVectorParameters::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_MultilayerProjectorCreateLayer final
{
public:
	class FName                                   ProjectorParamName;
	int32                                         Index_0;
};
static_assert(alignof(CustomizableObjectInstance_MultilayerProjectorCreateLayer) == 0x000004, "Wrong alignment on CustomizableObjectInstance_MultilayerProjectorCreateLayer");
static_assert(sizeof(CustomizableObjectInstance_MultilayerProjectorCreateLayer) == 0x000008, "Wrong size on CustomizableObjectInstance_MultilayerProjectorCreateLayer");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorCreateLayer, ProjectorParamName) == 0x000000, "Member 'CustomizableObjectInstance_MultilayerProjectorCreateLayer::ProjectorParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorCreateLayer, Index_0) == 0x000004, "Member 'CustomizableObjectInstance_MultilayerProjectorCreateLayer::Index_0' has a wrong offset!");

struct CustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer final
{
public:
	class FName                                   ProjectorParamName;
	class FName                                   ID;
};
static_assert(alignof(CustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer) == 0x000004, "Wrong alignment on CustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer");
static_assert(sizeof(CustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer) == 0x000008, "Wrong size on CustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer, ProjectorParamName) == 0x000000, "Member 'CustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer::ProjectorParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer, ID) == 0x000004, "Member 'CustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer::ID' has a wrong offset!");

struct CustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer final
{
public:
	class FName                                   ProjectorParamName;
	class FName                                   ID;
	struct FMultilayerProjectorVirtualLayer       ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer) == 0x000008, "Wrong alignment on CustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer");
static_assert(sizeof(CustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer) == 0x000090, "Wrong size on CustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer, ProjectorParamName) == 0x000000, "Member 'CustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer::ProjectorParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer, ID) == 0x000004, "Member 'CustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer::ID' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer, ReturnValue) == 0x000008, "Member 'CustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_MultilayerProjectorRemoveLayerAt final
{
public:
	class FName                                   ProjectorParamName;
	int32                                         Index_0;
};
static_assert(alignof(CustomizableObjectInstance_MultilayerProjectorRemoveLayerAt) == 0x000004, "Wrong alignment on CustomizableObjectInstance_MultilayerProjectorRemoveLayerAt");
static_assert(sizeof(CustomizableObjectInstance_MultilayerProjectorRemoveLayerAt) == 0x000008, "Wrong size on CustomizableObjectInstance_MultilayerProjectorRemoveLayerAt");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorRemoveLayerAt, ProjectorParamName) == 0x000000, "Member 'CustomizableObjectInstance_MultilayerProjectorRemoveLayerAt::ProjectorParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorRemoveLayerAt, Index_0) == 0x000004, "Member 'CustomizableObjectInstance_MultilayerProjectorRemoveLayerAt::Index_0' has a wrong offset!");

struct CustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer final
{
public:
	class FName                                   ProjectorParamName;
	class FName                                   ID;
};
static_assert(alignof(CustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer) == 0x000004, "Wrong alignment on CustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer");
static_assert(sizeof(CustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer) == 0x000008, "Wrong size on CustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer, ProjectorParamName) == 0x000000, "Member 'CustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer::ProjectorParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer, ID) == 0x000004, "Member 'CustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer::ID' has a wrong offset!");

struct CustomizableObjectInstance_MultilayerProjectorUpdateLayer final
{
public:
	class FName                                   ProjectorParamName;
	int32                                         Index_0;
	struct FMultilayerProjectorLayer              Layer;
};
static_assert(alignof(CustomizableObjectInstance_MultilayerProjectorUpdateLayer) == 0x000008, "Wrong alignment on CustomizableObjectInstance_MultilayerProjectorUpdateLayer");
static_assert(sizeof(CustomizableObjectInstance_MultilayerProjectorUpdateLayer) == 0x000088, "Wrong size on CustomizableObjectInstance_MultilayerProjectorUpdateLayer");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorUpdateLayer, ProjectorParamName) == 0x000000, "Member 'CustomizableObjectInstance_MultilayerProjectorUpdateLayer::ProjectorParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorUpdateLayer, Index_0) == 0x000004, "Member 'CustomizableObjectInstance_MultilayerProjectorUpdateLayer::Index_0' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorUpdateLayer, Layer) == 0x000008, "Member 'CustomizableObjectInstance_MultilayerProjectorUpdateLayer::Layer' has a wrong offset!");

struct CustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer final
{
public:
	class FName                                   ProjectorParamName;
	class FName                                   ID;
	struct FMultilayerProjectorVirtualLayer       Layer;
};
static_assert(alignof(CustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer) == 0x000008, "Wrong alignment on CustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer");
static_assert(sizeof(CustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer) == 0x000090, "Wrong size on CustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer, ProjectorParamName) == 0x000000, "Member 'CustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer::ProjectorParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer, ID) == 0x000004, "Member 'CustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer::ID' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer, Layer) == 0x000008, "Member 'CustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer::Layer' has a wrong offset!");

struct CustomizableObjectInstance_RemoveMultilayerProjector final
{
public:
	class FName                                   ProjectorParamName;
};
static_assert(alignof(CustomizableObjectInstance_RemoveMultilayerProjector) == 0x000004, "Wrong alignment on CustomizableObjectInstance_RemoveMultilayerProjector");
static_assert(sizeof(CustomizableObjectInstance_RemoveMultilayerProjector) == 0x000004, "Wrong size on CustomizableObjectInstance_RemoveMultilayerProjector");
static_assert(offsetof(CustomizableObjectInstance_RemoveMultilayerProjector, ProjectorParamName) == 0x000000, "Member 'CustomizableObjectInstance_RemoveMultilayerProjector::ProjectorParamName' has a wrong offset!");

struct CustomizableObjectInstance_RemoveValueFromFloatRange final
{
public:
	class FString                                 ParamName;
	int32                                         ReturnValue;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(CustomizableObjectInstance_RemoveValueFromFloatRange) == 0x000008, "Wrong alignment on CustomizableObjectInstance_RemoveValueFromFloatRange");
static_assert(sizeof(CustomizableObjectInstance_RemoveValueFromFloatRange) == 0x000018, "Wrong size on CustomizableObjectInstance_RemoveValueFromFloatRange");
static_assert(offsetof(CustomizableObjectInstance_RemoveValueFromFloatRange, ParamName) == 0x000000, "Member 'CustomizableObjectInstance_RemoveValueFromFloatRange::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_RemoveValueFromFloatRange, ReturnValue) == 0x000010, "Member 'CustomizableObjectInstance_RemoveValueFromFloatRange::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_RemoveValueFromIntRange final
{
public:
	class FString                                 ParamName;
	int32                                         ReturnValue;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(CustomizableObjectInstance_RemoveValueFromIntRange) == 0x000008, "Wrong alignment on CustomizableObjectInstance_RemoveValueFromIntRange");
static_assert(sizeof(CustomizableObjectInstance_RemoveValueFromIntRange) == 0x000018, "Wrong size on CustomizableObjectInstance_RemoveValueFromIntRange");
static_assert(offsetof(CustomizableObjectInstance_RemoveValueFromIntRange, ParamName) == 0x000000, "Member 'CustomizableObjectInstance_RemoveValueFromIntRange::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_RemoveValueFromIntRange, ReturnValue) == 0x000010, "Member 'CustomizableObjectInstance_RemoveValueFromIntRange::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_RemoveValueFromProjectorRange final
{
public:
	class FString                                 ParamName;
	int32                                         ReturnValue;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(CustomizableObjectInstance_RemoveValueFromProjectorRange) == 0x000008, "Wrong alignment on CustomizableObjectInstance_RemoveValueFromProjectorRange");
static_assert(sizeof(CustomizableObjectInstance_RemoveValueFromProjectorRange) == 0x000018, "Wrong size on CustomizableObjectInstance_RemoveValueFromProjectorRange");
static_assert(offsetof(CustomizableObjectInstance_RemoveValueFromProjectorRange, ParamName) == 0x000000, "Member 'CustomizableObjectInstance_RemoveValueFromProjectorRange::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_RemoveValueFromProjectorRange, ReturnValue) == 0x000010, "Member 'CustomizableObjectInstance_RemoveValueFromProjectorRange::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_SetBoolParameterSelectedOption final
{
public:
	class FString                                 BoolParamName;
	bool                                          BoolValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(CustomizableObjectInstance_SetBoolParameterSelectedOption) == 0x000008, "Wrong alignment on CustomizableObjectInstance_SetBoolParameterSelectedOption");
static_assert(sizeof(CustomizableObjectInstance_SetBoolParameterSelectedOption) == 0x000018, "Wrong size on CustomizableObjectInstance_SetBoolParameterSelectedOption");
static_assert(offsetof(CustomizableObjectInstance_SetBoolParameterSelectedOption, BoolParamName) == 0x000000, "Member 'CustomizableObjectInstance_SetBoolParameterSelectedOption::BoolParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_SetBoolParameterSelectedOption, BoolValue) == 0x000010, "Member 'CustomizableObjectInstance_SetBoolParameterSelectedOption::BoolValue' has a wrong offset!");

struct CustomizableObjectInstance_SetBuildParameterDecorations final
{
public:
	bool                                          Value;
};
static_assert(alignof(CustomizableObjectInstance_SetBuildParameterDecorations) == 0x000001, "Wrong alignment on CustomizableObjectInstance_SetBuildParameterDecorations");
static_assert(sizeof(CustomizableObjectInstance_SetBuildParameterDecorations) == 0x000001, "Wrong size on CustomizableObjectInstance_SetBuildParameterDecorations");
static_assert(offsetof(CustomizableObjectInstance_SetBuildParameterDecorations, Value) == 0x000000, "Member 'CustomizableObjectInstance_SetBuildParameterDecorations::Value' has a wrong offset!");

struct CustomizableObjectInstance_SetColorParameterSelectedOption final
{
public:
	class FString                                 ColorParamName;
	struct FLinearColor                           ColorValue;
};
static_assert(alignof(CustomizableObjectInstance_SetColorParameterSelectedOption) == 0x000008, "Wrong alignment on CustomizableObjectInstance_SetColorParameterSelectedOption");
static_assert(sizeof(CustomizableObjectInstance_SetColorParameterSelectedOption) == 0x000020, "Wrong size on CustomizableObjectInstance_SetColorParameterSelectedOption");
static_assert(offsetof(CustomizableObjectInstance_SetColorParameterSelectedOption, ColorParamName) == 0x000000, "Member 'CustomizableObjectInstance_SetColorParameterSelectedOption::ColorParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_SetColorParameterSelectedOption, ColorValue) == 0x000010, "Member 'CustomizableObjectInstance_SetColorParameterSelectedOption::ColorValue' has a wrong offset!");

struct CustomizableObjectInstance_SetCurrentState final
{
public:
	class FString                                 StateName;
};
static_assert(alignof(CustomizableObjectInstance_SetCurrentState) == 0x000008, "Wrong alignment on CustomizableObjectInstance_SetCurrentState");
static_assert(sizeof(CustomizableObjectInstance_SetCurrentState) == 0x000010, "Wrong size on CustomizableObjectInstance_SetCurrentState");
static_assert(offsetof(CustomizableObjectInstance_SetCurrentState, StateName) == 0x000000, "Member 'CustomizableObjectInstance_SetCurrentState::StateName' has a wrong offset!");

struct CustomizableObjectInstance_SetFloatParameterSelectedOption final
{
public:
	class FString                                 FloatParamName;
	float                                         FloatValue;
	int32                                         RangeIndex;
};
static_assert(alignof(CustomizableObjectInstance_SetFloatParameterSelectedOption) == 0x000008, "Wrong alignment on CustomizableObjectInstance_SetFloatParameterSelectedOption");
static_assert(sizeof(CustomizableObjectInstance_SetFloatParameterSelectedOption) == 0x000018, "Wrong size on CustomizableObjectInstance_SetFloatParameterSelectedOption");
static_assert(offsetof(CustomizableObjectInstance_SetFloatParameterSelectedOption, FloatParamName) == 0x000000, "Member 'CustomizableObjectInstance_SetFloatParameterSelectedOption::FloatParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_SetFloatParameterSelectedOption, FloatValue) == 0x000010, "Member 'CustomizableObjectInstance_SetFloatParameterSelectedOption::FloatValue' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_SetFloatParameterSelectedOption, RangeIndex) == 0x000014, "Member 'CustomizableObjectInstance_SetFloatParameterSelectedOption::RangeIndex' has a wrong offset!");

struct CustomizableObjectInstance_SetIntParameterSelectedOption final
{
public:
	class FString                                 ParamName;
	class FString                                 SelectedOptionName;
	int32                                         RangeIndex;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(CustomizableObjectInstance_SetIntParameterSelectedOption) == 0x000008, "Wrong alignment on CustomizableObjectInstance_SetIntParameterSelectedOption");
static_assert(sizeof(CustomizableObjectInstance_SetIntParameterSelectedOption) == 0x000028, "Wrong size on CustomizableObjectInstance_SetIntParameterSelectedOption");
static_assert(offsetof(CustomizableObjectInstance_SetIntParameterSelectedOption, ParamName) == 0x000000, "Member 'CustomizableObjectInstance_SetIntParameterSelectedOption::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_SetIntParameterSelectedOption, SelectedOptionName) == 0x000010, "Member 'CustomizableObjectInstance_SetIntParameterSelectedOption::SelectedOptionName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_SetIntParameterSelectedOption, RangeIndex) == 0x000020, "Member 'CustomizableObjectInstance_SetIntParameterSelectedOption::RangeIndex' has a wrong offset!");

struct CustomizableObjectInstance_SetObject final
{
public:
	class UCustomizableObject*                    InObject;
};
static_assert(alignof(CustomizableObjectInstance_SetObject) == 0x000008, "Wrong alignment on CustomizableObjectInstance_SetObject");
static_assert(sizeof(CustomizableObjectInstance_SetObject) == 0x000008, "Wrong size on CustomizableObjectInstance_SetObject");
static_assert(offsetof(CustomizableObjectInstance_SetObject, InObject) == 0x000000, "Member 'CustomizableObjectInstance_SetObject::InObject' has a wrong offset!");

struct CustomizableObjectInstance_SetProjectorValue final
{
public:
	class FString                                 ProjectorParamName;
	struct FVector                                OutPos;
	struct FVector                                OutDirection;
	struct FVector                                OutUp;
	struct FVector                                OutScale;
	float                                         OutAngle;
	int32                                         RangeIndex;
};
static_assert(alignof(CustomizableObjectInstance_SetProjectorValue) == 0x000008, "Wrong alignment on CustomizableObjectInstance_SetProjectorValue");
static_assert(sizeof(CustomizableObjectInstance_SetProjectorValue) == 0x000078, "Wrong size on CustomizableObjectInstance_SetProjectorValue");
static_assert(offsetof(CustomizableObjectInstance_SetProjectorValue, ProjectorParamName) == 0x000000, "Member 'CustomizableObjectInstance_SetProjectorValue::ProjectorParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_SetProjectorValue, OutPos) == 0x000010, "Member 'CustomizableObjectInstance_SetProjectorValue::OutPos' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_SetProjectorValue, OutDirection) == 0x000028, "Member 'CustomizableObjectInstance_SetProjectorValue::OutDirection' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_SetProjectorValue, OutUp) == 0x000040, "Member 'CustomizableObjectInstance_SetProjectorValue::OutUp' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_SetProjectorValue, OutScale) == 0x000058, "Member 'CustomizableObjectInstance_SetProjectorValue::OutScale' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_SetProjectorValue, OutAngle) == 0x000070, "Member 'CustomizableObjectInstance_SetProjectorValue::OutAngle' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_SetProjectorValue, RangeIndex) == 0x000074, "Member 'CustomizableObjectInstance_SetProjectorValue::RangeIndex' has a wrong offset!");

struct CustomizableObjectInstance_SetReplacePhysicsAssets final
{
public:
	bool                                          bReplaceEnabled;
};
static_assert(alignof(CustomizableObjectInstance_SetReplacePhysicsAssets) == 0x000001, "Wrong alignment on CustomizableObjectInstance_SetReplacePhysicsAssets");
static_assert(sizeof(CustomizableObjectInstance_SetReplacePhysicsAssets) == 0x000001, "Wrong size on CustomizableObjectInstance_SetReplacePhysicsAssets");
static_assert(offsetof(CustomizableObjectInstance_SetReplacePhysicsAssets, bReplaceEnabled) == 0x000000, "Member 'CustomizableObjectInstance_SetReplacePhysicsAssets::bReplaceEnabled' has a wrong offset!");

struct CustomizableObjectInstance_SetTextureParameterSelectedOptionT final
{
public:
	class FString                                 TextureParamName;
	class UTexture2D*                             TextureValue;
	int32                                         RangeIndex;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(CustomizableObjectInstance_SetTextureParameterSelectedOptionT) == 0x000008, "Wrong alignment on CustomizableObjectInstance_SetTextureParameterSelectedOptionT");
static_assert(sizeof(CustomizableObjectInstance_SetTextureParameterSelectedOptionT) == 0x000020, "Wrong size on CustomizableObjectInstance_SetTextureParameterSelectedOptionT");
static_assert(offsetof(CustomizableObjectInstance_SetTextureParameterSelectedOptionT, TextureParamName) == 0x000000, "Member 'CustomizableObjectInstance_SetTextureParameterSelectedOptionT::TextureParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_SetTextureParameterSelectedOptionT, TextureValue) == 0x000010, "Member 'CustomizableObjectInstance_SetTextureParameterSelectedOptionT::TextureValue' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_SetTextureParameterSelectedOptionT, RangeIndex) == 0x000018, "Member 'CustomizableObjectInstance_SetTextureParameterSelectedOptionT::RangeIndex' has a wrong offset!");

struct CustomizableObjectInstance_SetVectorParameterSelectedOption final
{
public:
	class FString                                 VectorParamName;
	struct FLinearColor                           VectorValue;
};
static_assert(alignof(CustomizableObjectInstance_SetVectorParameterSelectedOption) == 0x000008, "Wrong alignment on CustomizableObjectInstance_SetVectorParameterSelectedOption");
static_assert(sizeof(CustomizableObjectInstance_SetVectorParameterSelectedOption) == 0x000020, "Wrong size on CustomizableObjectInstance_SetVectorParameterSelectedOption");
static_assert(offsetof(CustomizableObjectInstance_SetVectorParameterSelectedOption, VectorParamName) == 0x000000, "Member 'CustomizableObjectInstance_SetVectorParameterSelectedOption::VectorParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_SetVectorParameterSelectedOption, VectorValue) == 0x000010, "Member 'CustomizableObjectInstance_SetVectorParameterSelectedOption::VectorValue' has a wrong offset!");

struct CustomizableObjectInstance_UpdateSkeletalMeshAsync final
{
public:
	bool                                          bIgnoreCloseDist;
	bool                                          bForceHighPriority;
};
static_assert(alignof(CustomizableObjectInstance_UpdateSkeletalMeshAsync) == 0x000001, "Wrong alignment on CustomizableObjectInstance_UpdateSkeletalMeshAsync");
static_assert(sizeof(CustomizableObjectInstance_UpdateSkeletalMeshAsync) == 0x000002, "Wrong size on CustomizableObjectInstance_UpdateSkeletalMeshAsync");
static_assert(offsetof(CustomizableObjectInstance_UpdateSkeletalMeshAsync, bIgnoreCloseDist) == 0x000000, "Member 'CustomizableObjectInstance_UpdateSkeletalMeshAsync::bIgnoreCloseDist' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_UpdateSkeletalMeshAsync, bForceHighPriority) == 0x000001, "Member 'CustomizableObjectInstance_UpdateSkeletalMeshAsync::bForceHighPriority' has a wrong offset!");

struct CustomizableObjectInstance_FindBoolParameterNameIndex final
{
public:
	class FString                                 ParamName;
	int32                                         ReturnValue;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(CustomizableObjectInstance_FindBoolParameterNameIndex) == 0x000008, "Wrong alignment on CustomizableObjectInstance_FindBoolParameterNameIndex");
static_assert(sizeof(CustomizableObjectInstance_FindBoolParameterNameIndex) == 0x000018, "Wrong size on CustomizableObjectInstance_FindBoolParameterNameIndex");
static_assert(offsetof(CustomizableObjectInstance_FindBoolParameterNameIndex, ParamName) == 0x000000, "Member 'CustomizableObjectInstance_FindBoolParameterNameIndex::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_FindBoolParameterNameIndex, ReturnValue) == 0x000010, "Member 'CustomizableObjectInstance_FindBoolParameterNameIndex::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_FindFloatParameterNameIndex final
{
public:
	class FString                                 ParamName;
	int32                                         ReturnValue;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(CustomizableObjectInstance_FindFloatParameterNameIndex) == 0x000008, "Wrong alignment on CustomizableObjectInstance_FindFloatParameterNameIndex");
static_assert(sizeof(CustomizableObjectInstance_FindFloatParameterNameIndex) == 0x000018, "Wrong size on CustomizableObjectInstance_FindFloatParameterNameIndex");
static_assert(offsetof(CustomizableObjectInstance_FindFloatParameterNameIndex, ParamName) == 0x000000, "Member 'CustomizableObjectInstance_FindFloatParameterNameIndex::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_FindFloatParameterNameIndex, ReturnValue) == 0x000010, "Member 'CustomizableObjectInstance_FindFloatParameterNameIndex::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_FindIntParameterNameIndex final
{
public:
	class FString                                 ParamName;
	int32                                         ReturnValue;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(CustomizableObjectInstance_FindIntParameterNameIndex) == 0x000008, "Wrong alignment on CustomizableObjectInstance_FindIntParameterNameIndex");
static_assert(sizeof(CustomizableObjectInstance_FindIntParameterNameIndex) == 0x000018, "Wrong size on CustomizableObjectInstance_FindIntParameterNameIndex");
static_assert(offsetof(CustomizableObjectInstance_FindIntParameterNameIndex, ParamName) == 0x000000, "Member 'CustomizableObjectInstance_FindIntParameterNameIndex::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_FindIntParameterNameIndex, ReturnValue) == 0x000010, "Member 'CustomizableObjectInstance_FindIntParameterNameIndex::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_FindProjectorParameterNameIndex final
{
public:
	class FString                                 ParamName;
	int32                                         ReturnValue;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(CustomizableObjectInstance_FindProjectorParameterNameIndex) == 0x000008, "Wrong alignment on CustomizableObjectInstance_FindProjectorParameterNameIndex");
static_assert(sizeof(CustomizableObjectInstance_FindProjectorParameterNameIndex) == 0x000018, "Wrong size on CustomizableObjectInstance_FindProjectorParameterNameIndex");
static_assert(offsetof(CustomizableObjectInstance_FindProjectorParameterNameIndex, ParamName) == 0x000000, "Member 'CustomizableObjectInstance_FindProjectorParameterNameIndex::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_FindProjectorParameterNameIndex, ReturnValue) == 0x000010, "Member 'CustomizableObjectInstance_FindProjectorParameterNameIndex::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_FindVectorParameterNameIndex final
{
public:
	class FString                                 ParamName;
	int32                                         ReturnValue;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(CustomizableObjectInstance_FindVectorParameterNameIndex) == 0x000008, "Wrong alignment on CustomizableObjectInstance_FindVectorParameterNameIndex");
static_assert(sizeof(CustomizableObjectInstance_FindVectorParameterNameIndex) == 0x000018, "Wrong size on CustomizableObjectInstance_FindVectorParameterNameIndex");
static_assert(offsetof(CustomizableObjectInstance_FindVectorParameterNameIndex, ParamName) == 0x000000, "Member 'CustomizableObjectInstance_FindVectorParameterNameIndex::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_FindVectorParameterNameIndex, ReturnValue) == 0x000010, "Member 'CustomizableObjectInstance_FindVectorParameterNameIndex::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_ForEachAnimInstance final
{
public:
	int32                                         ComponentIndex;
	TDelegate<void(int32 SlotIndex, TSubclassOf<class UAnimInstance> AnimInstClass)> Delegate;
};
static_assert(alignof(CustomizableObjectInstance_ForEachAnimInstance) == 0x000004, "Wrong alignment on CustomizableObjectInstance_ForEachAnimInstance");
static_assert(sizeof(CustomizableObjectInstance_ForEachAnimInstance) == 0x000010, "Wrong size on CustomizableObjectInstance_ForEachAnimInstance");
static_assert(offsetof(CustomizableObjectInstance_ForEachAnimInstance, ComponentIndex) == 0x000000, "Member 'CustomizableObjectInstance_ForEachAnimInstance::ComponentIndex' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_ForEachAnimInstance, Delegate) == 0x000004, "Member 'CustomizableObjectInstance_ForEachAnimInstance::Delegate' has a wrong offset!");

struct CustomizableObjectInstance_GetAnimationGameplayTags final
{
public:
	struct FGameplayTagContainer                  ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_GetAnimationGameplayTags) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetAnimationGameplayTags");
static_assert(sizeof(CustomizableObjectInstance_GetAnimationGameplayTags) == 0x000020, "Wrong size on CustomizableObjectInstance_GetAnimationGameplayTags");
static_assert(offsetof(CustomizableObjectInstance_GetAnimationGameplayTags, ReturnValue) == 0x000000, "Member 'CustomizableObjectInstance_GetAnimationGameplayTags::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_GetAnimBP final
{
public:
	int32                                         ComponentIndex;
	int32                                         SlotIndex;
	TSubclassOf<class UAnimInstance>              ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_GetAnimBP) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetAnimBP");
static_assert(sizeof(CustomizableObjectInstance_GetAnimBP) == 0x000010, "Wrong size on CustomizableObjectInstance_GetAnimBP");
static_assert(offsetof(CustomizableObjectInstance_GetAnimBP, ComponentIndex) == 0x000000, "Member 'CustomizableObjectInstance_GetAnimBP::ComponentIndex' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetAnimBP, SlotIndex) == 0x000004, "Member 'CustomizableObjectInstance_GetAnimBP::SlotIndex' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetAnimBP, ReturnValue) == 0x000008, "Member 'CustomizableObjectInstance_GetAnimBP::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_GetBoolParameterSelectedOption final
{
public:
	class FString                                 BoolParamName;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(CustomizableObjectInstance_GetBoolParameterSelectedOption) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetBoolParameterSelectedOption");
static_assert(sizeof(CustomizableObjectInstance_GetBoolParameterSelectedOption) == 0x000018, "Wrong size on CustomizableObjectInstance_GetBoolParameterSelectedOption");
static_assert(offsetof(CustomizableObjectInstance_GetBoolParameterSelectedOption, BoolParamName) == 0x000000, "Member 'CustomizableObjectInstance_GetBoolParameterSelectedOption::BoolParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetBoolParameterSelectedOption, ReturnValue) == 0x000010, "Member 'CustomizableObjectInstance_GetBoolParameterSelectedOption::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_GetBuildParameterDecorations final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_GetBuildParameterDecorations) == 0x000001, "Wrong alignment on CustomizableObjectInstance_GetBuildParameterDecorations");
static_assert(sizeof(CustomizableObjectInstance_GetBuildParameterDecorations) == 0x000001, "Wrong size on CustomizableObjectInstance_GetBuildParameterDecorations");
static_assert(offsetof(CustomizableObjectInstance_GetBuildParameterDecorations, ReturnValue) == 0x000000, "Member 'CustomizableObjectInstance_GetBuildParameterDecorations::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_GetColorParameterSelectedOption final
{
public:
	class FString                                 ColorParamName;
	struct FLinearColor                           ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_GetColorParameterSelectedOption) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetColorParameterSelectedOption");
static_assert(sizeof(CustomizableObjectInstance_GetColorParameterSelectedOption) == 0x000020, "Wrong size on CustomizableObjectInstance_GetColorParameterSelectedOption");
static_assert(offsetof(CustomizableObjectInstance_GetColorParameterSelectedOption, ColorParamName) == 0x000000, "Member 'CustomizableObjectInstance_GetColorParameterSelectedOption::ColorParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetColorParameterSelectedOption, ReturnValue) == 0x000010, "Member 'CustomizableObjectInstance_GetColorParameterSelectedOption::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_GetCurrentState final
{
public:
	class FString                                 ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_GetCurrentState) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetCurrentState");
static_assert(sizeof(CustomizableObjectInstance_GetCurrentState) == 0x000010, "Wrong size on CustomizableObjectInstance_GetCurrentState");
static_assert(offsetof(CustomizableObjectInstance_GetCurrentState, ReturnValue) == 0x000000, "Member 'CustomizableObjectInstance_GetCurrentState::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_GetCustomizableObject final
{
public:
	class UCustomizableObject*                    ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_GetCustomizableObject) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetCustomizableObject");
static_assert(sizeof(CustomizableObjectInstance_GetCustomizableObject) == 0x000008, "Wrong size on CustomizableObjectInstance_GetCustomizableObject");
static_assert(offsetof(CustomizableObjectInstance_GetCustomizableObject, ReturnValue) == 0x000000, "Member 'CustomizableObjectInstance_GetCustomizableObject::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_GetFloatParameterSelectedOption final
{
public:
	class FString                                 FloatParamName;
	int32                                         RangeIndex;
	float                                         ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_GetFloatParameterSelectedOption) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetFloatParameterSelectedOption");
static_assert(sizeof(CustomizableObjectInstance_GetFloatParameterSelectedOption) == 0x000018, "Wrong size on CustomizableObjectInstance_GetFloatParameterSelectedOption");
static_assert(offsetof(CustomizableObjectInstance_GetFloatParameterSelectedOption, FloatParamName) == 0x000000, "Member 'CustomizableObjectInstance_GetFloatParameterSelectedOption::FloatParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetFloatParameterSelectedOption, RangeIndex) == 0x000010, "Member 'CustomizableObjectInstance_GetFloatParameterSelectedOption::RangeIndex' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetFloatParameterSelectedOption, ReturnValue) == 0x000014, "Member 'CustomizableObjectInstance_GetFloatParameterSelectedOption::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_GetIntParameterSelectedOption final
{
public:
	class FString                                 ParamName;
	int32                                         RangeIndex;
	uint8                                         Pad_14[0x4];
	class FString                                 ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_GetIntParameterSelectedOption) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetIntParameterSelectedOption");
static_assert(sizeof(CustomizableObjectInstance_GetIntParameterSelectedOption) == 0x000028, "Wrong size on CustomizableObjectInstance_GetIntParameterSelectedOption");
static_assert(offsetof(CustomizableObjectInstance_GetIntParameterSelectedOption, ParamName) == 0x000000, "Member 'CustomizableObjectInstance_GetIntParameterSelectedOption::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetIntParameterSelectedOption, RangeIndex) == 0x000010, "Member 'CustomizableObjectInstance_GetIntParameterSelectedOption::RangeIndex' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetIntParameterSelectedOption, ReturnValue) == 0x000018, "Member 'CustomizableObjectInstance_GetIntParameterSelectedOption::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_GetProjectorAngle final
{
public:
	class FString                                 ParamName;
	int32                                         RangeIndex;
	float                                         ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_GetProjectorAngle) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetProjectorAngle");
static_assert(sizeof(CustomizableObjectInstance_GetProjectorAngle) == 0x000018, "Wrong size on CustomizableObjectInstance_GetProjectorAngle");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorAngle, ParamName) == 0x000000, "Member 'CustomizableObjectInstance_GetProjectorAngle::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorAngle, RangeIndex) == 0x000010, "Member 'CustomizableObjectInstance_GetProjectorAngle::RangeIndex' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorAngle, ReturnValue) == 0x000014, "Member 'CustomizableObjectInstance_GetProjectorAngle::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_GetProjectorDirection final
{
public:
	class FString                                 ParamName;
	int32                                         RangeIndex;
	uint8                                         Pad_14[0x4];
	struct FVector                                ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_GetProjectorDirection) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetProjectorDirection");
static_assert(sizeof(CustomizableObjectInstance_GetProjectorDirection) == 0x000030, "Wrong size on CustomizableObjectInstance_GetProjectorDirection");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorDirection, ParamName) == 0x000000, "Member 'CustomizableObjectInstance_GetProjectorDirection::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorDirection, RangeIndex) == 0x000010, "Member 'CustomizableObjectInstance_GetProjectorDirection::RangeIndex' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorDirection, ReturnValue) == 0x000018, "Member 'CustomizableObjectInstance_GetProjectorDirection::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_GetProjectorParameterType final
{
public:
	class FString                                 ParamName;
	int32                                         RangeIndex;
	ECustomizableObjectProjectorType              ReturnValue;
	uint8                                         Pad_15[0x3];
};
static_assert(alignof(CustomizableObjectInstance_GetProjectorParameterType) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetProjectorParameterType");
static_assert(sizeof(CustomizableObjectInstance_GetProjectorParameterType) == 0x000018, "Wrong size on CustomizableObjectInstance_GetProjectorParameterType");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorParameterType, ParamName) == 0x000000, "Member 'CustomizableObjectInstance_GetProjectorParameterType::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorParameterType, RangeIndex) == 0x000010, "Member 'CustomizableObjectInstance_GetProjectorParameterType::RangeIndex' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorParameterType, ReturnValue) == 0x000014, "Member 'CustomizableObjectInstance_GetProjectorParameterType::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_GetProjectorPosition final
{
public:
	class FString                                 ParamName;
	int32                                         RangeIndex;
	uint8                                         Pad_14[0x4];
	struct FVector                                ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_GetProjectorPosition) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetProjectorPosition");
static_assert(sizeof(CustomizableObjectInstance_GetProjectorPosition) == 0x000030, "Wrong size on CustomizableObjectInstance_GetProjectorPosition");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorPosition, ParamName) == 0x000000, "Member 'CustomizableObjectInstance_GetProjectorPosition::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorPosition, RangeIndex) == 0x000010, "Member 'CustomizableObjectInstance_GetProjectorPosition::RangeIndex' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorPosition, ReturnValue) == 0x000018, "Member 'CustomizableObjectInstance_GetProjectorPosition::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_GetProjectorScale final
{
public:
	class FString                                 ParamName;
	int32                                         RangeIndex;
	uint8                                         Pad_14[0x4];
	struct FVector                                ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_GetProjectorScale) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetProjectorScale");
static_assert(sizeof(CustomizableObjectInstance_GetProjectorScale) == 0x000030, "Wrong size on CustomizableObjectInstance_GetProjectorScale");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorScale, ParamName) == 0x000000, "Member 'CustomizableObjectInstance_GetProjectorScale::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorScale, RangeIndex) == 0x000010, "Member 'CustomizableObjectInstance_GetProjectorScale::RangeIndex' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorScale, ReturnValue) == 0x000018, "Member 'CustomizableObjectInstance_GetProjectorScale::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_GetProjectorUp final
{
public:
	class FString                                 ParamName;
	int32                                         RangeIndex;
	uint8                                         Pad_14[0x4];
	struct FVector                                ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_GetProjectorUp) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetProjectorUp");
static_assert(sizeof(CustomizableObjectInstance_GetProjectorUp) == 0x000030, "Wrong size on CustomizableObjectInstance_GetProjectorUp");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorUp, ParamName) == 0x000000, "Member 'CustomizableObjectInstance_GetProjectorUp::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorUp, RangeIndex) == 0x000010, "Member 'CustomizableObjectInstance_GetProjectorUp::RangeIndex' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorUp, ReturnValue) == 0x000018, "Member 'CustomizableObjectInstance_GetProjectorUp::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_GetProjectorValue final
{
public:
	class FString                                 ProjectorParamName;
	struct FVector                                OutPos;
	struct FVector                                OutDirection;
	struct FVector                                OutUp;
	struct FVector                                OutScale;
	float                                         OutAngle;
	ECustomizableObjectProjectorType              OutType;
	uint8                                         Pad_75[0x3];
	int32                                         RangeIndex;
	uint8                                         Pad_7C[0x4];
};
static_assert(alignof(CustomizableObjectInstance_GetProjectorValue) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetProjectorValue");
static_assert(sizeof(CustomizableObjectInstance_GetProjectorValue) == 0x000080, "Wrong size on CustomizableObjectInstance_GetProjectorValue");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorValue, ProjectorParamName) == 0x000000, "Member 'CustomizableObjectInstance_GetProjectorValue::ProjectorParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorValue, OutPos) == 0x000010, "Member 'CustomizableObjectInstance_GetProjectorValue::OutPos' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorValue, OutDirection) == 0x000028, "Member 'CustomizableObjectInstance_GetProjectorValue::OutDirection' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorValue, OutUp) == 0x000040, "Member 'CustomizableObjectInstance_GetProjectorValue::OutUp' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorValue, OutScale) == 0x000058, "Member 'CustomizableObjectInstance_GetProjectorValue::OutScale' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorValue, OutAngle) == 0x000070, "Member 'CustomizableObjectInstance_GetProjectorValue::OutAngle' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorValue, OutType) == 0x000074, "Member 'CustomizableObjectInstance_GetProjectorValue::OutType' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorValue, RangeIndex) == 0x000078, "Member 'CustomizableObjectInstance_GetProjectorValue::RangeIndex' has a wrong offset!");

struct CustomizableObjectInstance_GetProjectorValueRange final
{
public:
	class FString                                 ParamName;
	int32                                         ReturnValue;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(CustomizableObjectInstance_GetProjectorValueRange) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetProjectorValueRange");
static_assert(sizeof(CustomizableObjectInstance_GetProjectorValueRange) == 0x000018, "Wrong size on CustomizableObjectInstance_GetProjectorValueRange");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorValueRange, ParamName) == 0x000000, "Member 'CustomizableObjectInstance_GetProjectorValueRange::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetProjectorValueRange, ReturnValue) == 0x000010, "Member 'CustomizableObjectInstance_GetProjectorValueRange::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_GetSkeletalMesh final
{
public:
	int32                                         ComponentIndex;
	uint8                                         Pad_4[0x4];
	class USkeletalMesh*                          ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_GetSkeletalMesh) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetSkeletalMesh");
static_assert(sizeof(CustomizableObjectInstance_GetSkeletalMesh) == 0x000010, "Wrong size on CustomizableObjectInstance_GetSkeletalMesh");
static_assert(offsetof(CustomizableObjectInstance_GetSkeletalMesh, ComponentIndex) == 0x000000, "Member 'CustomizableObjectInstance_GetSkeletalMesh::ComponentIndex' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetSkeletalMesh, ReturnValue) == 0x000008, "Member 'CustomizableObjectInstance_GetSkeletalMesh::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_GetTextureParameterSelectedOptionT final
{
public:
	class FString                                 TextureParamName;
	int32                                         RangeIndex;
	uint8                                         Pad_14[0x4];
	class UTexture2D*                             ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_GetTextureParameterSelectedOptionT) == 0x000008, "Wrong alignment on CustomizableObjectInstance_GetTextureParameterSelectedOptionT");
static_assert(sizeof(CustomizableObjectInstance_GetTextureParameterSelectedOptionT) == 0x000020, "Wrong size on CustomizableObjectInstance_GetTextureParameterSelectedOptionT");
static_assert(offsetof(CustomizableObjectInstance_GetTextureParameterSelectedOptionT, TextureParamName) == 0x000000, "Member 'CustomizableObjectInstance_GetTextureParameterSelectedOptionT::TextureParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetTextureParameterSelectedOptionT, RangeIndex) == 0x000010, "Member 'CustomizableObjectInstance_GetTextureParameterSelectedOptionT::RangeIndex' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_GetTextureParameterSelectedOptionT, ReturnValue) == 0x000018, "Member 'CustomizableObjectInstance_GetTextureParameterSelectedOptionT::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_HasAnyParameters final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_HasAnyParameters) == 0x000001, "Wrong alignment on CustomizableObjectInstance_HasAnyParameters");
static_assert(sizeof(CustomizableObjectInstance_HasAnyParameters) == 0x000001, "Wrong size on CustomizableObjectInstance_HasAnyParameters");
static_assert(offsetof(CustomizableObjectInstance_HasAnyParameters, ReturnValue) == 0x000000, "Member 'CustomizableObjectInstance_HasAnyParameters::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_HasAnySkeletalMesh final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_HasAnySkeletalMesh) == 0x000001, "Wrong alignment on CustomizableObjectInstance_HasAnySkeletalMesh");
static_assert(sizeof(CustomizableObjectInstance_HasAnySkeletalMesh) == 0x000001, "Wrong size on CustomizableObjectInstance_HasAnySkeletalMesh");
static_assert(offsetof(CustomizableObjectInstance_HasAnySkeletalMesh, ReturnValue) == 0x000000, "Member 'CustomizableObjectInstance_HasAnySkeletalMesh::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_IsParameterRelevant final
{
public:
	class FString                                 ParamName;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(CustomizableObjectInstance_IsParameterRelevant) == 0x000008, "Wrong alignment on CustomizableObjectInstance_IsParameterRelevant");
static_assert(sizeof(CustomizableObjectInstance_IsParameterRelevant) == 0x000018, "Wrong size on CustomizableObjectInstance_IsParameterRelevant");
static_assert(offsetof(CustomizableObjectInstance_IsParameterRelevant, ParamName) == 0x000000, "Member 'CustomizableObjectInstance_IsParameterRelevant::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_IsParameterRelevant, ReturnValue) == 0x000010, "Member 'CustomizableObjectInstance_IsParameterRelevant::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_IsParamMultidimensional final
{
public:
	class FString                                 ParamName;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(CustomizableObjectInstance_IsParamMultidimensional) == 0x000008, "Wrong alignment on CustomizableObjectInstance_IsParamMultidimensional");
static_assert(sizeof(CustomizableObjectInstance_IsParamMultidimensional) == 0x000018, "Wrong size on CustomizableObjectInstance_IsParamMultidimensional");
static_assert(offsetof(CustomizableObjectInstance_IsParamMultidimensional, ParamName) == 0x000000, "Member 'CustomizableObjectInstance_IsParamMultidimensional::ParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_IsParamMultidimensional, ReturnValue) == 0x000010, "Member 'CustomizableObjectInstance_IsParamMultidimensional::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_MultilayerProjectorGetLayer final
{
public:
	class FName                                   ProjectorParamName;
	int32                                         Index_0;
	struct FMultilayerProjectorLayer              ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_MultilayerProjectorGetLayer) == 0x000008, "Wrong alignment on CustomizableObjectInstance_MultilayerProjectorGetLayer");
static_assert(sizeof(CustomizableObjectInstance_MultilayerProjectorGetLayer) == 0x000088, "Wrong size on CustomizableObjectInstance_MultilayerProjectorGetLayer");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorGetLayer, ProjectorParamName) == 0x000000, "Member 'CustomizableObjectInstance_MultilayerProjectorGetLayer::ProjectorParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorGetLayer, Index_0) == 0x000004, "Member 'CustomizableObjectInstance_MultilayerProjectorGetLayer::Index_0' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorGetLayer, ReturnValue) == 0x000008, "Member 'CustomizableObjectInstance_MultilayerProjectorGetLayer::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_MultilayerProjectorGetVirtualLayer final
{
public:
	class FName                                   ProjectorParamName;
	class FName                                   ID;
	struct FMultilayerProjectorVirtualLayer       ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_MultilayerProjectorGetVirtualLayer) == 0x000008, "Wrong alignment on CustomizableObjectInstance_MultilayerProjectorGetVirtualLayer");
static_assert(sizeof(CustomizableObjectInstance_MultilayerProjectorGetVirtualLayer) == 0x000090, "Wrong size on CustomizableObjectInstance_MultilayerProjectorGetVirtualLayer");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorGetVirtualLayer, ProjectorParamName) == 0x000000, "Member 'CustomizableObjectInstance_MultilayerProjectorGetVirtualLayer::ProjectorParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorGetVirtualLayer, ID) == 0x000004, "Member 'CustomizableObjectInstance_MultilayerProjectorGetVirtualLayer::ID' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorGetVirtualLayer, ReturnValue) == 0x000008, "Member 'CustomizableObjectInstance_MultilayerProjectorGetVirtualLayer::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_MultilayerProjectorGetVirtualLayers final
{
public:
	class FName                                   ProjectorParamName;
	uint8                                         Pad_4[0x4];
	TArray<class FName>                           ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_MultilayerProjectorGetVirtualLayers) == 0x000008, "Wrong alignment on CustomizableObjectInstance_MultilayerProjectorGetVirtualLayers");
static_assert(sizeof(CustomizableObjectInstance_MultilayerProjectorGetVirtualLayers) == 0x000018, "Wrong size on CustomizableObjectInstance_MultilayerProjectorGetVirtualLayers");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorGetVirtualLayers, ProjectorParamName) == 0x000000, "Member 'CustomizableObjectInstance_MultilayerProjectorGetVirtualLayers::ProjectorParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorGetVirtualLayers, ReturnValue) == 0x000008, "Member 'CustomizableObjectInstance_MultilayerProjectorGetVirtualLayers::ReturnValue' has a wrong offset!");

struct CustomizableObjectInstance_MultilayerProjectorNumLayers final
{
public:
	class FName                                   ProjectorParamName;
	int32                                         ReturnValue;
};
static_assert(alignof(CustomizableObjectInstance_MultilayerProjectorNumLayers) == 0x000004, "Wrong alignment on CustomizableObjectInstance_MultilayerProjectorNumLayers");
static_assert(sizeof(CustomizableObjectInstance_MultilayerProjectorNumLayers) == 0x000008, "Wrong size on CustomizableObjectInstance_MultilayerProjectorNumLayers");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorNumLayers, ProjectorParamName) == 0x000000, "Member 'CustomizableObjectInstance_MultilayerProjectorNumLayers::ProjectorParamName' has a wrong offset!");
static_assert(offsetof(CustomizableObjectInstance_MultilayerProjectorNumLayers, ReturnValue) == 0x000004, "Member 'CustomizableObjectInstance_MultilayerProjectorNumLayers::ReturnValue' has a wrong offset!");

struct CustomizableObjectSystem_GetInstance final
{
public:
	class UCustomizableObjectSystem*              ReturnValue;
};
static_assert(alignof(CustomizableObjectSystem_GetInstance) == 0x000008, "Wrong alignment on CustomizableObjectSystem_GetInstance");
static_assert(sizeof(CustomizableObjectSystem_GetInstance) == 0x000008, "Wrong size on CustomizableObjectSystem_GetInstance");
static_assert(offsetof(CustomizableObjectSystem_GetInstance, ReturnValue) == 0x000000, "Member 'CustomizableObjectSystem_GetInstance::ReturnValue' has a wrong offset!");

struct CustomizableObjectSystem_SetReleaseMutableTexturesImmediately final
{
public:
	bool                                          bReleaseTextures;
};
static_assert(alignof(CustomizableObjectSystem_SetReleaseMutableTexturesImmediately) == 0x000001, "Wrong alignment on CustomizableObjectSystem_SetReleaseMutableTexturesImmediately");
static_assert(sizeof(CustomizableObjectSystem_SetReleaseMutableTexturesImmediately) == 0x000001, "Wrong size on CustomizableObjectSystem_SetReleaseMutableTexturesImmediately");
static_assert(offsetof(CustomizableObjectSystem_SetReleaseMutableTexturesImmediately, bReleaseTextures) == 0x000000, "Member 'CustomizableObjectSystem_SetReleaseMutableTexturesImmediately::bReleaseTextures' has a wrong offset!");

struct CustomizableObjectSystem_GetAverageBuildTime final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(CustomizableObjectSystem_GetAverageBuildTime) == 0x000004, "Wrong alignment on CustomizableObjectSystem_GetAverageBuildTime");
static_assert(sizeof(CustomizableObjectSystem_GetAverageBuildTime) == 0x000004, "Wrong size on CustomizableObjectSystem_GetAverageBuildTime");
static_assert(offsetof(CustomizableObjectSystem_GetAverageBuildTime, ReturnValue) == 0x000000, "Member 'CustomizableObjectSystem_GetAverageBuildTime::ReturnValue' has a wrong offset!");

struct CustomizableObjectSystem_GetNumInstances final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(CustomizableObjectSystem_GetNumInstances) == 0x000004, "Wrong alignment on CustomizableObjectSystem_GetNumInstances");
static_assert(sizeof(CustomizableObjectSystem_GetNumInstances) == 0x000004, "Wrong size on CustomizableObjectSystem_GetNumInstances");
static_assert(offsetof(CustomizableObjectSystem_GetNumInstances, ReturnValue) == 0x000000, "Member 'CustomizableObjectSystem_GetNumInstances::ReturnValue' has a wrong offset!");

struct CustomizableObjectSystem_GetNumPendingInstances final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(CustomizableObjectSystem_GetNumPendingInstances) == 0x000004, "Wrong alignment on CustomizableObjectSystem_GetNumPendingInstances");
static_assert(sizeof(CustomizableObjectSystem_GetNumPendingInstances) == 0x000004, "Wrong size on CustomizableObjectSystem_GetNumPendingInstances");
static_assert(offsetof(CustomizableObjectSystem_GetNumPendingInstances, ReturnValue) == 0x000000, "Member 'CustomizableObjectSystem_GetNumPendingInstances::ReturnValue' has a wrong offset!");

struct CustomizableObjectSystem_GetPluginVersion final
{
public:
	class FString                                 ReturnValue;
};
static_assert(alignof(CustomizableObjectSystem_GetPluginVersion) == 0x000008, "Wrong alignment on CustomizableObjectSystem_GetPluginVersion");
static_assert(sizeof(CustomizableObjectSystem_GetPluginVersion) == 0x000010, "Wrong size on CustomizableObjectSystem_GetPluginVersion");
static_assert(offsetof(CustomizableObjectSystem_GetPluginVersion, ReturnValue) == 0x000000, "Member 'CustomizableObjectSystem_GetPluginVersion::ReturnValue' has a wrong offset!");

struct CustomizableObjectSystem_GetTextureMemoryUsed final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(CustomizableObjectSystem_GetTextureMemoryUsed) == 0x000004, "Wrong alignment on CustomizableObjectSystem_GetTextureMemoryUsed");
static_assert(sizeof(CustomizableObjectSystem_GetTextureMemoryUsed) == 0x000004, "Wrong size on CustomizableObjectSystem_GetTextureMemoryUsed");
static_assert(offsetof(CustomizableObjectSystem_GetTextureMemoryUsed, ReturnValue) == 0x000000, "Member 'CustomizableObjectSystem_GetTextureMemoryUsed::ReturnValue' has a wrong offset!");

struct CustomizableObjectSystem_GetTotalInstances final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(CustomizableObjectSystem_GetTotalInstances) == 0x000004, "Wrong alignment on CustomizableObjectSystem_GetTotalInstances");
static_assert(sizeof(CustomizableObjectSystem_GetTotalInstances) == 0x000004, "Wrong size on CustomizableObjectSystem_GetTotalInstances");
static_assert(offsetof(CustomizableObjectSystem_GetTotalInstances, ReturnValue) == 0x000000, "Member 'CustomizableObjectSystem_GetTotalInstances::ReturnValue' has a wrong offset!");

struct CustomizableSkeletalComponent_UpdateSkeletalMeshAsync final
{
public:
	bool                                          bNeverSkipUpdate;
};
static_assert(alignof(CustomizableSkeletalComponent_UpdateSkeletalMeshAsync) == 0x000001, "Wrong alignment on CustomizableSkeletalComponent_UpdateSkeletalMeshAsync");
static_assert(sizeof(CustomizableSkeletalComponent_UpdateSkeletalMeshAsync) == 0x000001, "Wrong size on CustomizableSkeletalComponent_UpdateSkeletalMeshAsync");
static_assert(offsetof(CustomizableSkeletalComponent_UpdateSkeletalMeshAsync, bNeverSkipUpdate) == 0x000000, "Member 'CustomizableSkeletalComponent_UpdateSkeletalMeshAsync::bNeverSkipUpdate' has a wrong offset!");

}
