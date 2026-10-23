#pragma once

#include "Basic.hpp"

#include "CustomizableObject_classes.hpp"
#include "CustomizableObject_parameters.hpp"

namespace SDK
{

class UCustomizableObjectInstance* UCustomizableObject::CreateInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "CreateInstance");

	Params::CustomizableObject_CreateInstance Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCustomizableObject::LoadMaskOutCache()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "LoadMaskOutCache");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCustomizableObject::UnloadMaskOutCache()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "UnloadMaskOutCache");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

int32 UCustomizableObject::FindParameter(const class FString& Name_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "FindParameter");

	Params::CustomizableObject_FindParameter Parms{};

	Parms.Name_0 = std::move(Name_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCustomizableObject::GetBoolParameterDefaultValue(const class FString& InParameterName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "GetBoolParameterDefaultValue");

	Params::CustomizableObject_GetBoolParameterDefaultValue Parms{};

	Parms.InParameterName = std::move(InParameterName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FLinearColor UCustomizableObject::GetColorParameterDefaultValue(const class FString& InParameterName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "GetColorParameterDefaultValue");

	Params::CustomizableObject_GetColorParameterDefaultValue Parms{};

	Parms.InParameterName = std::move(InParameterName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCustomizableObject::GetComponentCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "GetComponentCount");

	Params::CustomizableObject_GetComponentCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UCustomizableObject::GetFloatParameterDefaultValue(const class FString& InParameterName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "GetFloatParameterDefaultValue");

	Params::CustomizableObject_GetFloatParameterDefaultValue Parms{};

	Parms.InParameterName = std::move(InParameterName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UCustomizableObject::GetIntParameterAvailableOption(int32 ParamIndex, int32 K) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "GetIntParameterAvailableOption");

	Params::CustomizableObject_GetIntParameterAvailableOption Parms{};

	Parms.ParamIndex = ParamIndex;
	Parms.K = K;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCustomizableObject::GetIntParameterDefaultValue(const class FString& InParameterName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "GetIntParameterDefaultValue");

	Params::CustomizableObject_GetIntParameterDefaultValue Parms{};

	Parms.InParameterName = std::move(InParameterName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCustomizableObject::GetIntParameterNumOptions(int32 ParamIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "GetIntParameterNumOptions");

	Params::CustomizableObject_GetIntParameterNumOptions Parms{};

	Parms.ParamIndex = ParamIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCustomizableObject::GetParameterCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "GetParameterCount");

	Params::CustomizableObject_GetParameterCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCustomizableObject::GetParameterDescriptionCount(const class FString& ParamName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "GetParameterDescriptionCount");

	Params::CustomizableObject_GetParameterDescriptionCount Parms{};

	Parms.ParamName = std::move(ParamName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UCustomizableObject::GetParameterName(int32 ParamIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "GetParameterName");

	Params::CustomizableObject_GetParameterName Parms{};

	Parms.ParamIndex = ParamIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EMutableParameterType UCustomizableObject::GetParameterType(int32 ParamIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "GetParameterType");

	Params::CustomizableObject_GetParameterType Parms{};

	Parms.ParamIndex = ParamIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EMutableParameterType UCustomizableObject::GetParameterTypeByName(const class FString& Name_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "GetParameterTypeByName");

	Params::CustomizableObject_GetParameterTypeByName Parms{};

	Parms.Name_0 = std::move(Name_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FParameterUIData UCustomizableObject::GetParameterUIMetadata(const class FString& ParamName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "GetParameterUIMetadata");

	Params::CustomizableObject_GetParameterUIMetadata Parms{};

	Parms.ParamName = std::move(ParamName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FParameterUIData UCustomizableObject::GetParameterUIMetadataFromIndex(int32 ParamIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "GetParameterUIMetadataFromIndex");

	Params::CustomizableObject_GetParameterUIMetadataFromIndex Parms{};

	Parms.ParamIndex = ParamIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCustomizableObject::GetProjectorParameterDefaultValue(const class FString& InParameterName, struct FVector3f* OutPos, struct FVector3f* OutDirection, struct FVector3f* OutUp, struct FVector3f* OutScale, float* OutAngle, ECustomizableObjectProjectorType* OutType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "GetProjectorParameterDefaultValue");

	Params::CustomizableObject_GetProjectorParameterDefaultValue Parms{};

	Parms.InParameterName = std::move(InParameterName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPos != nullptr)
		*OutPos = std::move(Parms.OutPos);

	if (OutDirection != nullptr)
		*OutDirection = std::move(Parms.OutDirection);

	if (OutUp != nullptr)
		*OutUp = std::move(Parms.OutUp);

	if (OutScale != nullptr)
		*OutScale = std::move(Parms.OutScale);

	if (OutAngle != nullptr)
		*OutAngle = Parms.OutAngle;

	if (OutType != nullptr)
		*OutType = Parms.OutType;
}

int32 UCustomizableObject::GetStateCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "GetStateCount");

	Params::CustomizableObject_GetStateCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UCustomizableObject::GetStateName(int32 StateIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "GetStateName");

	Params::CustomizableObject_GetStateName Parms{};

	Parms.StateIndex = StateIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCustomizableObject::GetStateParameterCount(const class FString& StateName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "GetStateParameterCount");

	Params::CustomizableObject_GetStateParameterCount Parms{};

	Parms.StateName = std::move(StateName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UCustomizableObject::GetStateParameterName(const class FString& StateName, int32 ParameterIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "GetStateParameterName");

	Params::CustomizableObject_GetStateParameterName Parms{};

	Parms.StateName = std::move(StateName);
	Parms.ParameterIndex = ParameterIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FParameterUIData UCustomizableObject::GetStateUIMetadata(const class FString& StateName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "GetStateUIMetadata");

	Params::CustomizableObject_GetStateUIMetadata Parms{};

	Parms.StateName = std::move(StateName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FParameterUIData UCustomizableObject::GetStateUIMetadataFromIndex(int32 StateIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "GetStateUIMetadataFromIndex");

	Params::CustomizableObject_GetStateUIMetadataFromIndex Parms{};

	Parms.StateIndex = StateIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCustomizableObject::IsCompiled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "IsCompiled");

	Params::CustomizableObject_IsCompiled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCustomizableObject::IsParameterMultidimensional(const class FString& InParameterName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObject", "IsParameterMultidimensional");

	Params::CustomizableObject_IsParameterMultidimensional Parms{};

	Parms.InParameterName = std::move(InParameterName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UCustomizableSkeletalComponent* UDGGUI::GetCustomizableSkeletalComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DGGUI", "GetCustomizableSkeletalComponent");

	Params::DGGUI_GetCustomizableSkeletalComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UDGGUI::SetCustomizableSkeletalComponent(class UCustomizableSkeletalComponent* CustomizableSkeletalComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DGGUI", "SetCustomizableSkeletalComponent");

	Params::DGGUI_SetCustomizableSkeletalComponent Parms{};

	Parms.CustomizableSkeletalComponent = CustomizableSkeletalComponent;

	UObject::ProcessEvent(Func, &Parms);
}

int32 UCustomizableObjectInstance::AddValueToFloatRange(const class FString& ParamName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "AddValueToFloatRange");

	Params::CustomizableObjectInstance_AddValueToFloatRange Parms{};

	Parms.ParamName = std::move(ParamName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCustomizableObjectInstance::AddValueToIntRange(const class FString& ParamName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "AddValueToIntRange");

	Params::CustomizableObjectInstance_AddValueToIntRange Parms{};

	Parms.ParamName = std::move(ParamName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCustomizableObjectInstance::AddValueToProjectorRange(const class FString& ParamName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "AddValueToProjectorRange");

	Params::CustomizableObjectInstance_AddValueToProjectorRange Parms{};

	Parms.ParamName = std::move(ParamName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UCustomizableObjectInstance* UCustomizableObjectInstance::Clone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "Clone");

	Params::CustomizableObjectInstance_Clone Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UCustomizableObjectInstance* UCustomizableObjectInstance::CloneStatic(class UObject* Outer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "CloneStatic");

	Params::CustomizableObjectInstance_CloneStatic Parms{};

	Parms.Outer_0 = Outer_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCustomizableObjectInstance::CreateMultiLayerProjector(const class FName& ProjectorParamName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "CreateMultiLayerProjector");

	Params::CustomizableObjectInstance_CreateMultiLayerProjector Parms{};

	Parms.ProjectorParamName = ProjectorParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FCustomizableObjectBoolParameterValue> UCustomizableObjectInstance::GetBoolParameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetBoolParameters");

	Params::CustomizableObjectInstance_GetBoolParameters Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FCustomizableObjectFloatParameterValue> UCustomizableObjectInstance::GetFloatParameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetFloatParameters");

	Params::CustomizableObjectInstance_GetFloatParameters Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FCustomizableObjectIntParameterValue> UCustomizableObjectInstance::GetIntParameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetIntParameters");

	Params::CustomizableObjectInstance_GetIntParameters Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UTexture2D* UCustomizableObjectInstance::GetParameterDescription(const class FString& ParamName, int32 DescIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetParameterDescription");

	Params::CustomizableObjectInstance_GetParameterDescription Parms{};

	Parms.ParamName = std::move(ParamName);
	Parms.DescIndex = DescIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FCustomizableObjectProjectorParameterValue> UCustomizableObjectInstance::GetProjectorParameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorParameters");

	Params::CustomizableObjectInstance_GetProjectorParameters Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FCustomizableObjectTextureParameterValue> UCustomizableObjectInstance::GetTextureParameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetTextureParameters");

	Params::CustomizableObjectInstance_GetTextureParameters Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FCustomizableObjectVectorParameterValue> UCustomizableObjectInstance::GetVectorParameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetVectorParameters");

	Params::CustomizableObjectInstance_GetVectorParameters Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCustomizableObjectInstance::MultilayerProjectorCreateLayer(const class FName& ProjectorParamName, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "MultilayerProjectorCreateLayer");

	Params::CustomizableObjectInstance_MultilayerProjectorCreateLayer Parms{};

	Parms.ProjectorParamName = ProjectorParamName;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCustomizableObjectInstance::MultilayerProjectorCreateVirtualLayer(const class FName& ProjectorParamName, const class FName& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "MultilayerProjectorCreateVirtualLayer");

	Params::CustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer Parms{};

	Parms.ProjectorParamName = ProjectorParamName;
	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FMultilayerProjectorVirtualLayer UCustomizableObjectInstance::MultilayerProjectorFindOrCreateVirtualLayer(const class FName& ProjectorParamName, const class FName& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "MultilayerProjectorFindOrCreateVirtualLayer");

	Params::CustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer Parms{};

	Parms.ProjectorParamName = ProjectorParamName;
	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCustomizableObjectInstance::MultilayerProjectorRemoveLayerAt(const class FName& ProjectorParamName, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "MultilayerProjectorRemoveLayerAt");

	Params::CustomizableObjectInstance_MultilayerProjectorRemoveLayerAt Parms{};

	Parms.ProjectorParamName = ProjectorParamName;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCustomizableObjectInstance::MultilayerProjectorRemoveVirtualLayer(const class FName& ProjectorParamName, const class FName& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "MultilayerProjectorRemoveVirtualLayer");

	Params::CustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer Parms{};

	Parms.ProjectorParamName = ProjectorParamName;
	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCustomizableObjectInstance::MultilayerProjectorUpdateLayer(const class FName& ProjectorParamName, int32 Index_0, const struct FMultilayerProjectorLayer& Layer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "MultilayerProjectorUpdateLayer");

	Params::CustomizableObjectInstance_MultilayerProjectorUpdateLayer Parms{};

	Parms.ProjectorParamName = ProjectorParamName;
	Parms.Index_0 = Index_0;
	Parms.Layer = std::move(Layer);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCustomizableObjectInstance::MultilayerProjectorUpdateVirtualLayer(const class FName& ProjectorParamName, const class FName& ID, const struct FMultilayerProjectorVirtualLayer& Layer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "MultilayerProjectorUpdateVirtualLayer");

	Params::CustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer Parms{};

	Parms.ProjectorParamName = ProjectorParamName;
	Parms.ID = ID;
	Parms.Layer = std::move(Layer);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCustomizableObjectInstance::RemoveMultilayerProjector(const class FName& ProjectorParamName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "RemoveMultilayerProjector");

	Params::CustomizableObjectInstance_RemoveMultilayerProjector Parms{};

	Parms.ProjectorParamName = ProjectorParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UCustomizableObjectInstance::RemoveValueFromFloatRange(const class FString& ParamName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "RemoveValueFromFloatRange");

	Params::CustomizableObjectInstance_RemoveValueFromFloatRange Parms{};

	Parms.ParamName = std::move(ParamName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCustomizableObjectInstance::RemoveValueFromIntRange(const class FString& ParamName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "RemoveValueFromIntRange");

	Params::CustomizableObjectInstance_RemoveValueFromIntRange Parms{};

	Parms.ParamName = std::move(ParamName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCustomizableObjectInstance::RemoveValueFromProjectorRange(const class FString& ParamName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "RemoveValueFromProjectorRange");

	Params::CustomizableObjectInstance_RemoveValueFromProjectorRange Parms{};

	Parms.ParamName = std::move(ParamName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCustomizableObjectInstance::SetBoolParameterSelectedOption(const class FString& BoolParamName, bool BoolValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "SetBoolParameterSelectedOption");

	Params::CustomizableObjectInstance_SetBoolParameterSelectedOption Parms{};

	Parms.BoolParamName = std::move(BoolParamName);
	Parms.BoolValue = BoolValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCustomizableObjectInstance::SetBuildParameterDecorations(bool Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "SetBuildParameterDecorations");

	Params::CustomizableObjectInstance_SetBuildParameterDecorations Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCustomizableObjectInstance::SetColorParameterSelectedOption(const class FString& ColorParamName, const struct FLinearColor& ColorValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "SetColorParameterSelectedOption");

	Params::CustomizableObjectInstance_SetColorParameterSelectedOption Parms{};

	Parms.ColorParamName = std::move(ColorParamName);
	Parms.ColorValue = std::move(ColorValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCustomizableObjectInstance::SetCurrentState(const class FString& StateName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "SetCurrentState");

	Params::CustomizableObjectInstance_SetCurrentState Parms{};

	Parms.StateName = std::move(StateName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCustomizableObjectInstance::SetFloatParameterSelectedOption(const class FString& FloatParamName, float FloatValue, int32 RangeIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "SetFloatParameterSelectedOption");

	Params::CustomizableObjectInstance_SetFloatParameterSelectedOption Parms{};

	Parms.FloatParamName = std::move(FloatParamName);
	Parms.FloatValue = FloatValue;
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCustomizableObjectInstance::SetIntParameterSelectedOption(const class FString& ParamName, const class FString& SelectedOptionName, int32 RangeIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "SetIntParameterSelectedOption");

	Params::CustomizableObjectInstance_SetIntParameterSelectedOption Parms{};

	Parms.ParamName = std::move(ParamName);
	Parms.SelectedOptionName = std::move(SelectedOptionName);
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCustomizableObjectInstance::SetObject(class UCustomizableObject* InObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "SetObject");

	Params::CustomizableObjectInstance_SetObject Parms{};

	Parms.InObject = InObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCustomizableObjectInstance::SetProjectorValue(const class FString& ProjectorParamName, const struct FVector& OutPos, const struct FVector& OutDirection, const struct FVector& OutUp, const struct FVector& OutScale, float OutAngle, int32 RangeIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "SetProjectorValue");

	Params::CustomizableObjectInstance_SetProjectorValue Parms{};

	Parms.ProjectorParamName = std::move(ProjectorParamName);
	Parms.OutPos = std::move(OutPos);
	Parms.OutDirection = std::move(OutDirection);
	Parms.OutUp = std::move(OutUp);
	Parms.OutScale = std::move(OutScale);
	Parms.OutAngle = OutAngle;
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCustomizableObjectInstance::SetRandomValues()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "SetRandomValues");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCustomizableObjectInstance::SetReplacePhysicsAssets(bool bReplaceEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "SetReplacePhysicsAssets");

	Params::CustomizableObjectInstance_SetReplacePhysicsAssets Parms{};

	Parms.bReplaceEnabled = bReplaceEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCustomizableObjectInstance::SetTextureParameterSelectedOptionT(const class FString& TextureParamName, class UTexture2D* TextureValue, int32 RangeIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "SetTextureParameterSelectedOptionT");

	Params::CustomizableObjectInstance_SetTextureParameterSelectedOptionT Parms{};

	Parms.TextureParamName = std::move(TextureParamName);
	Parms.TextureValue = TextureValue;
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCustomizableObjectInstance::SetVectorParameterSelectedOption(const class FString& VectorParamName, const struct FLinearColor& VectorValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "SetVectorParameterSelectedOption");

	Params::CustomizableObjectInstance_SetVectorParameterSelectedOption Parms{};

	Parms.VectorParamName = std::move(VectorParamName);
	Parms.VectorValue = std::move(VectorValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCustomizableObjectInstance::UpdateSkeletalMeshAsync(bool bIgnoreCloseDist, bool bForceHighPriority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "UpdateSkeletalMeshAsync");

	Params::CustomizableObjectInstance_UpdateSkeletalMeshAsync Parms{};

	Parms.bIgnoreCloseDist = bIgnoreCloseDist;
	Parms.bForceHighPriority = bForceHighPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UCustomizableObjectInstance::FindBoolParameterNameIndex(const class FString& ParamName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "FindBoolParameterNameIndex");

	Params::CustomizableObjectInstance_FindBoolParameterNameIndex Parms{};

	Parms.ParamName = std::move(ParamName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCustomizableObjectInstance::FindFloatParameterNameIndex(const class FString& ParamName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "FindFloatParameterNameIndex");

	Params::CustomizableObjectInstance_FindFloatParameterNameIndex Parms{};

	Parms.ParamName = std::move(ParamName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCustomizableObjectInstance::FindIntParameterNameIndex(const class FString& ParamName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "FindIntParameterNameIndex");

	Params::CustomizableObjectInstance_FindIntParameterNameIndex Parms{};

	Parms.ParamName = std::move(ParamName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCustomizableObjectInstance::FindProjectorParameterNameIndex(const class FString& ParamName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "FindProjectorParameterNameIndex");

	Params::CustomizableObjectInstance_FindProjectorParameterNameIndex Parms{};

	Parms.ParamName = std::move(ParamName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCustomizableObjectInstance::FindVectorParameterNameIndex(const class FString& ParamName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "FindVectorParameterNameIndex");

	Params::CustomizableObjectInstance_FindVectorParameterNameIndex Parms{};

	Parms.ParamName = std::move(ParamName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCustomizableObjectInstance::ForEachAnimInstance(int32 ComponentIndex, TDelegate<void(int32 SlotIndex, TSubclassOf<class UAnimInstance> AnimInstClass)> Delegate) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "ForEachAnimInstance");

	Params::CustomizableObjectInstance_ForEachAnimInstance Parms{};

	Parms.ComponentIndex = ComponentIndex;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

const struct FGameplayTagContainer UCustomizableObjectInstance::GetAnimationGameplayTags() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetAnimationGameplayTags");

	Params::CustomizableObjectInstance_GetAnimationGameplayTags Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TSubclassOf<class UAnimInstance> UCustomizableObjectInstance::GetAnimBP(int32 ComponentIndex, int32 SlotIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetAnimBP");

	Params::CustomizableObjectInstance_GetAnimBP Parms{};

	Parms.ComponentIndex = ComponentIndex;
	Parms.SlotIndex = SlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCustomizableObjectInstance::GetBoolParameterSelectedOption(const class FString& BoolParamName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetBoolParameterSelectedOption");

	Params::CustomizableObjectInstance_GetBoolParameterSelectedOption Parms{};

	Parms.BoolParamName = std::move(BoolParamName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCustomizableObjectInstance::GetBuildParameterDecorations() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetBuildParameterDecorations");

	Params::CustomizableObjectInstance_GetBuildParameterDecorations Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FLinearColor UCustomizableObjectInstance::GetColorParameterSelectedOption(const class FString& ColorParamName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetColorParameterSelectedOption");

	Params::CustomizableObjectInstance_GetColorParameterSelectedOption Parms{};

	Parms.ColorParamName = std::move(ColorParamName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UCustomizableObjectInstance::GetCurrentState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetCurrentState");

	Params::CustomizableObjectInstance_GetCurrentState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UCustomizableObject* UCustomizableObjectInstance::GetCustomizableObject() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetCustomizableObject");

	Params::CustomizableObjectInstance_GetCustomizableObject Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UCustomizableObjectInstance::GetFloatParameterSelectedOption(const class FString& FloatParamName, int32 RangeIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetFloatParameterSelectedOption");

	Params::CustomizableObjectInstance_GetFloatParameterSelectedOption Parms{};

	Parms.FloatParamName = std::move(FloatParamName);
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UCustomizableObjectInstance::GetIntParameterSelectedOption(const class FString& ParamName, int32 RangeIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetIntParameterSelectedOption");

	Params::CustomizableObjectInstance_GetIntParameterSelectedOption Parms{};

	Parms.ParamName = std::move(ParamName);
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UCustomizableObjectInstance::GetProjectorAngle(const class FString& ParamName, int32 RangeIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorAngle");

	Params::CustomizableObjectInstance_GetProjectorAngle Parms{};

	Parms.ParamName = std::move(ParamName);
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UCustomizableObjectInstance::GetProjectorDirection(const class FString& ParamName, int32 RangeIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorDirection");

	Params::CustomizableObjectInstance_GetProjectorDirection Parms{};

	Parms.ParamName = std::move(ParamName);
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ECustomizableObjectProjectorType UCustomizableObjectInstance::GetProjectorParameterType(const class FString& ParamName, int32 RangeIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorParameterType");

	Params::CustomizableObjectInstance_GetProjectorParameterType Parms{};

	Parms.ParamName = std::move(ParamName);
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UCustomizableObjectInstance::GetProjectorPosition(const class FString& ParamName, int32 RangeIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorPosition");

	Params::CustomizableObjectInstance_GetProjectorPosition Parms{};

	Parms.ParamName = std::move(ParamName);
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UCustomizableObjectInstance::GetProjectorScale(const class FString& ParamName, int32 RangeIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorScale");

	Params::CustomizableObjectInstance_GetProjectorScale Parms{};

	Parms.ParamName = std::move(ParamName);
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UCustomizableObjectInstance::GetProjectorUp(const class FString& ParamName, int32 RangeIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorUp");

	Params::CustomizableObjectInstance_GetProjectorUp Parms{};

	Parms.ParamName = std::move(ParamName);
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCustomizableObjectInstance::GetProjectorValue(const class FString& ProjectorParamName, struct FVector* OutPos, struct FVector* OutDirection, struct FVector* OutUp, struct FVector* OutScale, float* OutAngle, ECustomizableObjectProjectorType* OutType, int32 RangeIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorValue");

	Params::CustomizableObjectInstance_GetProjectorValue Parms{};

	Parms.ProjectorParamName = std::move(ProjectorParamName);
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPos != nullptr)
		*OutPos = std::move(Parms.OutPos);

	if (OutDirection != nullptr)
		*OutDirection = std::move(Parms.OutDirection);

	if (OutUp != nullptr)
		*OutUp = std::move(Parms.OutUp);

	if (OutScale != nullptr)
		*OutScale = std::move(Parms.OutScale);

	if (OutAngle != nullptr)
		*OutAngle = Parms.OutAngle;

	if (OutType != nullptr)
		*OutType = Parms.OutType;
}

int32 UCustomizableObjectInstance::GetProjectorValueRange(const class FString& ParamName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetProjectorValueRange");

	Params::CustomizableObjectInstance_GetProjectorValueRange Parms{};

	Parms.ParamName = std::move(ParamName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class USkeletalMesh* UCustomizableObjectInstance::GetSkeletalMesh(int32 ComponentIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetSkeletalMesh");

	Params::CustomizableObjectInstance_GetSkeletalMesh Parms{};

	Parms.ComponentIndex = ComponentIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UTexture2D* UCustomizableObjectInstance::GetTextureParameterSelectedOptionT(const class FString& TextureParamName, int32 RangeIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "GetTextureParameterSelectedOptionT");

	Params::CustomizableObjectInstance_GetTextureParameterSelectedOptionT Parms{};

	Parms.TextureParamName = std::move(TextureParamName);
	Parms.RangeIndex = RangeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCustomizableObjectInstance::HasAnyParameters() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "HasAnyParameters");

	Params::CustomizableObjectInstance_HasAnyParameters Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCustomizableObjectInstance::HasAnySkeletalMesh() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "HasAnySkeletalMesh");

	Params::CustomizableObjectInstance_HasAnySkeletalMesh Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCustomizableObjectInstance::IsParameterRelevant(const class FString& ParamName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "IsParameterRelevant");

	Params::CustomizableObjectInstance_IsParameterRelevant Parms{};

	Parms.ParamName = std::move(ParamName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCustomizableObjectInstance::IsParamMultidimensional(const class FString& ParamName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "IsParamMultidimensional");

	Params::CustomizableObjectInstance_IsParamMultidimensional Parms{};

	Parms.ParamName = std::move(ParamName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMultilayerProjectorLayer UCustomizableObjectInstance::MultilayerProjectorGetLayer(const class FName& ProjectorParamName, int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "MultilayerProjectorGetLayer");

	Params::CustomizableObjectInstance_MultilayerProjectorGetLayer Parms{};

	Parms.ProjectorParamName = ProjectorParamName;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMultilayerProjectorVirtualLayer UCustomizableObjectInstance::MultilayerProjectorGetVirtualLayer(const class FName& ProjectorParamName, const class FName& ID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "MultilayerProjectorGetVirtualLayer");

	Params::CustomizableObjectInstance_MultilayerProjectorGetVirtualLayer Parms{};

	Parms.ProjectorParamName = ProjectorParamName;
	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class FName> UCustomizableObjectInstance::MultilayerProjectorGetVirtualLayers(const class FName& ProjectorParamName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "MultilayerProjectorGetVirtualLayers");

	Params::CustomizableObjectInstance_MultilayerProjectorGetVirtualLayers Parms{};

	Parms.ProjectorParamName = ProjectorParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCustomizableObjectInstance::MultilayerProjectorNumLayers(const class FName& ProjectorParamName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectInstance", "MultilayerProjectorNumLayers");

	Params::CustomizableObjectInstance_MultilayerProjectorNumLayers Parms{};

	Parms.ProjectorParamName = ProjectorParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UCustomizableObjectSystem* UCustomizableObjectSystem::GetInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CustomizableObjectSystem", "GetInstance");

	Params::CustomizableObjectSystem_GetInstance Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCustomizableObjectSystem::SetReleaseMutableTexturesImmediately(bool bReleaseTextures)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectSystem", "SetReleaseMutableTexturesImmediately");

	Params::CustomizableObjectSystem_SetReleaseMutableTexturesImmediately Parms{};

	Parms.bReleaseTextures = bReleaseTextures;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UCustomizableObjectSystem::GetAverageBuildTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectSystem", "GetAverageBuildTime");

	Params::CustomizableObjectSystem_GetAverageBuildTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCustomizableObjectSystem::GetNumInstances() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectSystem", "GetNumInstances");

	Params::CustomizableObjectSystem_GetNumInstances Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCustomizableObjectSystem::GetNumPendingInstances() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectSystem", "GetNumPendingInstances");

	Params::CustomizableObjectSystem_GetNumPendingInstances Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UCustomizableObjectSystem::GetPluginVersion() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectSystem", "GetPluginVersion");

	Params::CustomizableObjectSystem_GetPluginVersion Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCustomizableObjectSystem::GetTextureMemoryUsed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectSystem", "GetTextureMemoryUsed");

	Params::CustomizableObjectSystem_GetTextureMemoryUsed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCustomizableObjectSystem::GetTotalInstances() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectSystem", "GetTotalInstances");

	Params::CustomizableObjectSystem_GetTotalInstances Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCustomizableSkeletalComponent::UpdateSkeletalMeshAsync(bool bNeverSkipUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableSkeletalComponent", "UpdateSkeletalMeshAsync");

	Params::CustomizableSkeletalComponent_UpdateSkeletalMeshAsync Parms{};

	Parms.bNeverSkipUpdate = bNeverSkipUpdate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
