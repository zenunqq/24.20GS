#pragma once

#include "Basic.hpp"

#include "Procedural_classes.hpp"
#include "Procedural_parameters.hpp"

namespace SDK
{

float UProceduralParameterModifier::GetContribution() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralParameterModifier", "GetContribution");

	Params::ProceduralParameterModifier_GetContribution Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UHISMBuilderSettings::SetOverriddenLightMapRes(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HISMBuilderSettings", "SetOverriddenLightMapRes");

	Params::HISMBuilderSettings_SetOverriddenLightMapRes Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UHISMBuilderSettings::GetOverriddenLightMapRes() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HISMBuilderSettings", "GetOverriddenLightMapRes");

	Params::HISMBuilderSettings_GetOverriddenLightMapRes Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UProceduralGenerationComponent* UProceduralGenerationContext::GetGenerationComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralGenerationContext", "GetGenerationComponent");

	Params::ProceduralGenerationContext_GetGenerationComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AVolume* UProceduralGenerationContext::GetGenerationVolume() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralGenerationContext", "GetGenerationVolume");

	Params::ProceduralGenerationContext_GetGenerationVolume Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AProceduralGenerationVolume::ClearGeneratedContent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralGenerationVolume", "ClearGeneratedContent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AProceduralGenerationVolume::Generate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralGenerationVolume", "Generate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UProceduralGeneratorContext::ClearGeneratedContent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralGeneratorContext", "ClearGeneratedContent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UProceduralGeneratorContext::Generate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralGeneratorContext", "Generate");

	Params::ProceduralGeneratorContext_Generate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UProceduralGeneratorContext::GetOrCreateGeneratorContext(class UProceduralGenerator* Generator_0, class UProceduralGeneratorContext** Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralGeneratorContext", "GetOrCreateGeneratorContext");

	Params::ProceduralGeneratorContext_GetOrCreateGeneratorContext Parms{};

	Parms.Generator_0 = Generator_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = Parms.Context;
}

void UProceduralGeneratorContext::OnClearGeneratedContent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralGeneratorContext", "OnClearGeneratedContent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UProceduralGeneratorContext::OnGenerate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralGeneratorContext", "OnGenerate");

	Params::ProceduralGeneratorContext_OnGenerate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UProceduralGeneratorContext*> UProceduralGeneratorContext::GetGeneratedContexts() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralGeneratorContext", "GetGeneratedContexts");

	Params::ProceduralGeneratorContext_GetGeneratedContexts Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UProceduralGeneratorContext::OnDrawVisualization() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralGeneratorContext", "OnDrawVisualization");

	UObject::ProcessEvent(Func, nullptr);
}

void UProceduralPointCloud::Empty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralPointCloud", "Empty");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

TArray<struct FProceduralPointCloudPoint> UProceduralPointCloud::GetPointsByTag(class FName InTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralPointCloud", "GetPointsByTag");

	Params::ProceduralPointCloud_GetPointsByTag Parms{};

	Parms.InTag = InTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UProceduralRotationMapModifier::SetPitchMax(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralRotationMapModifier", "SetPitchMax");

	Params::ProceduralRotationMapModifier_SetPitchMax Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UProceduralRotationMapModifier::SetPitchMin(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralRotationMapModifier", "SetPitchMin");

	Params::ProceduralRotationMapModifier_SetPitchMin Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UProceduralRotationMapModifier::SetRollMax(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralRotationMapModifier", "SetRollMax");

	Params::ProceduralRotationMapModifier_SetRollMax Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UProceduralRotationMapModifier::SetRollMin(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralRotationMapModifier", "SetRollMin");

	Params::ProceduralRotationMapModifier_SetRollMin Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UProceduralRotationMapModifier::SetYawMax(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralRotationMapModifier", "SetYawMax");

	Params::ProceduralRotationMapModifier_SetYawMax Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UProceduralRotationMapModifier::SetYawMin(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralRotationMapModifier", "SetYawMin");

	Params::ProceduralRotationMapModifier_SetYawMin Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UProceduralRotationMapModifier::GetPitchMax() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralRotationMapModifier", "GetPitchMax");

	Params::ProceduralRotationMapModifier_GetPitchMax Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UProceduralRotationMapModifier::GetPitchMin() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralRotationMapModifier", "GetPitchMin");

	Params::ProceduralRotationMapModifier_GetPitchMin Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UProceduralRotationMapModifier::GetRollMax() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralRotationMapModifier", "GetRollMax");

	Params::ProceduralRotationMapModifier_GetRollMax Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UProceduralRotationMapModifier::GetRollMin() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralRotationMapModifier", "GetRollMin");

	Params::ProceduralRotationMapModifier_GetRollMin Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UProceduralRotationMapModifier::GetYawMax() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralRotationMapModifier", "GetYawMax");

	Params::ProceduralRotationMapModifier_GetYawMax Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UProceduralRotationMapModifier::GetYawMin() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralRotationMapModifier", "GetYawMin");

	Params::ProceduralRotationMapModifier_GetYawMin Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UProceduralRotationNoiseModifier::SetRandomPitchMax(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralRotationNoiseModifier", "SetRandomPitchMax");

	Params::ProceduralRotationNoiseModifier_SetRandomPitchMax Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UProceduralRotationNoiseModifier::SetRandomPitchMin(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralRotationNoiseModifier", "SetRandomPitchMin");

	Params::ProceduralRotationNoiseModifier_SetRandomPitchMin Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UProceduralRotationNoiseModifier::SetRandomRollMax(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralRotationNoiseModifier", "SetRandomRollMax");

	Params::ProceduralRotationNoiseModifier_SetRandomRollMax Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UProceduralRotationNoiseModifier::SetRandomRollMin(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralRotationNoiseModifier", "SetRandomRollMin");

	Params::ProceduralRotationNoiseModifier_SetRandomRollMin Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UProceduralRotationNoiseModifier::SetRandomYawMax(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralRotationNoiseModifier", "SetRandomYawMax");

	Params::ProceduralRotationNoiseModifier_SetRandomYawMax Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UProceduralRotationNoiseModifier::SetRandomYawMin(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralRotationNoiseModifier", "SetRandomYawMin");

	Params::ProceduralRotationNoiseModifier_SetRandomYawMin Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UProceduralRotationNoiseModifier::GetRandomPitchMax() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralRotationNoiseModifier", "GetRandomPitchMax");

	Params::ProceduralRotationNoiseModifier_GetRandomPitchMax Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UProceduralRotationNoiseModifier::GetRandomPitchMin() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralRotationNoiseModifier", "GetRandomPitchMin");

	Params::ProceduralRotationNoiseModifier_GetRandomPitchMin Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UProceduralRotationNoiseModifier::GetRandomRollMax() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralRotationNoiseModifier", "GetRandomRollMax");

	Params::ProceduralRotationNoiseModifier_GetRandomRollMax Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UProceduralRotationNoiseModifier::GetRandomRollMin() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralRotationNoiseModifier", "GetRandomRollMin");

	Params::ProceduralRotationNoiseModifier_GetRandomRollMin Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UProceduralRotationNoiseModifier::GetRandomYawMax() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralRotationNoiseModifier", "GetRandomYawMax");

	Params::ProceduralRotationNoiseModifier_GetRandomYawMax Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UProceduralRotationNoiseModifier::GetRandomYawMin() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralRotationNoiseModifier", "GetRandomYawMin");

	Params::ProceduralRotationNoiseModifier_GetRandomYawMin Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UProceduralScaleMapModifier::SetRemapScaleMax(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralScaleMapModifier", "SetRemapScaleMax");

	Params::ProceduralScaleMapModifier_SetRemapScaleMax Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UProceduralScaleMapModifier::SetRemapScaleMin(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralScaleMapModifier", "SetRemapScaleMin");

	Params::ProceduralScaleMapModifier_SetRemapScaleMin Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UProceduralScaleMapModifier::GetRemapScaleMax() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralScaleMapModifier", "GetRemapScaleMax");

	Params::ProceduralScaleMapModifier_GetRemapScaleMax Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UProceduralScaleMapModifier::GetRemapScaleMin() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralScaleMapModifier", "GetRemapScaleMin");

	Params::ProceduralScaleMapModifier_GetRemapScaleMin Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UProceduralScaleNoiseModifier::SetScaleMax(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralScaleNoiseModifier", "SetScaleMax");

	Params::ProceduralScaleNoiseModifier_SetScaleMax Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UProceduralScaleNoiseModifier::SetScaleMin(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralScaleNoiseModifier", "SetScaleMin");

	Params::ProceduralScaleNoiseModifier_SetScaleMin Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UProceduralScaleNoiseModifier::GetScaleMax() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralScaleNoiseModifier", "GetScaleMax");

	Params::ProceduralScaleNoiseModifier_GetScaleMax Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UProceduralScaleNoiseModifier::GetScaleMin() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralScaleNoiseModifier", "GetScaleMin");

	Params::ProceduralScaleNoiseModifier_GetScaleMin Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UProceduralScatterSettings::SetSourcePointDistanceMax(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralScatterSettings", "SetSourcePointDistanceMax");

	Params::ProceduralScatterSettings_SetSourcePointDistanceMax Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UProceduralScatterSettings::SetSourcePointDistanceMin(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralScatterSettings", "SetSourcePointDistanceMin");

	Params::ProceduralScatterSettings_SetSourcePointDistanceMin Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UProceduralScatterSettings::GetSourcePointDistanceMax() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralScatterSettings", "GetSourcePointDistanceMax");

	Params::ProceduralScatterSettings_GetSourcePointDistanceMax Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UProceduralScatterSettings::GetSourcePointDistanceMin() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralScatterSettings", "GetSourcePointDistanceMin");

	Params::ProceduralScatterSettings_GetSourcePointDistanceMin Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UProceduralSurfaceHeightMap::SetHeightRangeMax(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralSurfaceHeightMap", "SetHeightRangeMax");

	Params::ProceduralSurfaceHeightMap_SetHeightRangeMax Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UProceduralSurfaceHeightMap::SetHeightRangeMin(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralSurfaceHeightMap", "SetHeightRangeMin");

	Params::ProceduralSurfaceHeightMap_SetHeightRangeMin Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UProceduralSurfaceHeightMap::GetHeightRangeMax() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralSurfaceHeightMap", "GetHeightRangeMax");

	Params::ProceduralSurfaceHeightMap_GetHeightRangeMax Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UProceduralSurfaceHeightMap::GetHeightRangeMin() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralSurfaceHeightMap", "GetHeightRangeMin");

	Params::ProceduralSurfaceHeightMap_GetHeightRangeMin Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UProceduralSurfaceHeightMap::GetValue(float InHeight) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralSurfaceHeightMap", "GetValue");

	Params::ProceduralSurfaceHeightMap_GetValue Parms{};

	Parms.InHeight = InHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UProceduralSurfaceSlopeAngleMap::SetSlopeAngleRangeMax(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralSurfaceSlopeAngleMap", "SetSlopeAngleRangeMax");

	Params::ProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMax Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UProceduralSurfaceSlopeAngleMap::SetSlopeAngleRangeMin(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralSurfaceSlopeAngleMap", "SetSlopeAngleRangeMin");

	Params::ProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMin Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UProceduralSurfaceSlopeAngleMap::GetSlopeAngleRangeMax() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralSurfaceSlopeAngleMap", "GetSlopeAngleRangeMax");

	Params::ProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMax Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UProceduralSurfaceSlopeAngleMap::GetSlopeAngleRangeMin() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralSurfaceSlopeAngleMap", "GetSlopeAngleRangeMin");

	Params::ProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMin Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UProceduralSurfaceSlopeAngleMap::GetValue(float InSlopeAngle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralSurfaceSlopeAngleMap", "GetValue");

	Params::ProceduralSurfaceSlopeAngleMap_GetValue Parms{};

	Parms.InSlopeAngle = InSlopeAngle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
