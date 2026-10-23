#pragma once

#include "Basic.hpp"

#include "MLDeformerFramework_classes.hpp"
#include "MLDeformerFramework_parameters.hpp"

namespace SDK
{

void UMLDeformerComponent::SetDeformerAsset(class UMLDeformerAsset* InDeformerAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MLDeformerComponent", "SetDeformerAsset");

	Params::MLDeformerComponent_SetDeformerAsset Parms{};

	Parms.InDeformerAsset = InDeformerAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMLDeformerComponent::SetWeight(float NormalizedWeightValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MLDeformerComponent", "SetWeight");

	Params::MLDeformerComponent_SetWeight Parms{};

	Parms.NormalizedWeightValue = NormalizedWeightValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMLDeformerComponent::UpdateSkeletalMeshComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MLDeformerComponent", "UpdateSkeletalMeshComponent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class USkeletalMeshComponent* UMLDeformerComponent::FindSkeletalMeshComponent(const class UMLDeformerAsset* Asset) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MLDeformerComponent", "FindSkeletalMeshComponent");

	Params::MLDeformerComponent_FindSkeletalMeshComponent Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMLDeformerAsset* UMLDeformerComponent::GetDeformerAsset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MLDeformerComponent", "GetDeformerAsset");

	Params::MLDeformerComponent_GetDeformerAsset Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class USkeletalMeshComponent* UMLDeformerComponent::GetSkeletalMeshComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MLDeformerComponent", "GetSkeletalMeshComponent");

	Params::MLDeformerComponent_GetSkeletalMeshComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMLDeformerComponent::GetWeight() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MLDeformerComponent", "GetWeight");

	Params::MLDeformerComponent_GetWeight Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMLDeformerMorphModel::SetMorphTargetDeltaFloats(const TArray<float>& Deltas)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MLDeformerMorphModel", "SetMorphTargetDeltaFloats");

	Params::MLDeformerMorphModel_SetMorphTargetDeltaFloats Parms{};

	Parms.Deltas = std::move(Deltas);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMLDeformerMorphModel::SetMorphTargetDeltas(const TArray<struct FVector3f>& Deltas)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MLDeformerMorphModel", "SetMorphTargetDeltas");

	Params::MLDeformerMorphModel_SetMorphTargetDeltas Parms{};

	Parms.Deltas = std::move(Deltas);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
