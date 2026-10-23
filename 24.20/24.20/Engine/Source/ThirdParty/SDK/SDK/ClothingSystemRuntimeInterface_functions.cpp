#pragma once

#include "Basic.hpp"

#include "ClothingSystemRuntimeInterface_classes.hpp"
#include "ClothingSystemRuntimeInterface_parameters.hpp"

namespace SDK
{

void UClothingSimulationInteractor::ClothConfigUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClothingSimulationInteractor", "ClothConfigUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UClothingSimulationInteractor::DisableGravityOverride()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClothingSimulationInteractor", "DisableGravityOverride");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UClothingSimulationInteractor::EnableGravityOverride(const struct FVector& InVector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClothingSimulationInteractor", "EnableGravityOverride");

	Params::ClothingSimulationInteractor_EnableGravityOverride Parms{};

	Parms.InVector = std::move(InVector);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UClothingSimulationInteractor::PhysicsAssetUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClothingSimulationInteractor", "PhysicsAssetUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UClothingSimulationInteractor::SetAnimDriveSpringStiffness(float InStiffness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClothingSimulationInteractor", "SetAnimDriveSpringStiffness");

	Params::ClothingSimulationInteractor_SetAnimDriveSpringStiffness Parms{};

	Parms.InStiffness = InStiffness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UClothingSimulationInteractor::SetMaxNumIterations(int32 MaxNumIterations)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClothingSimulationInteractor", "SetMaxNumIterations");

	Params::ClothingSimulationInteractor_SetMaxNumIterations Parms{};

	Parms.MaxNumIterations = MaxNumIterations;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UClothingSimulationInteractor::SetNumIterations(int32 NumIterations)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClothingSimulationInteractor", "SetNumIterations");

	Params::ClothingSimulationInteractor_SetNumIterations Parms{};

	Parms.NumIterations = NumIterations;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UClothingSimulationInteractor::SetNumSubsteps(int32 NumSubsteps)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClothingSimulationInteractor", "SetNumSubsteps");

	Params::ClothingSimulationInteractor_SetNumSubsteps Parms{};

	Parms.NumSubsteps = NumSubsteps;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UClothingInteractor* UClothingSimulationInteractor::GetClothingInteractor(const class FString& ClothingAssetName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClothingSimulationInteractor", "GetClothingInteractor");

	Params::ClothingSimulationInteractor_GetClothingInteractor Parms{};

	Parms.ClothingAssetName = std::move(ClothingAssetName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UClothingSimulationInteractor::GetNumCloths() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClothingSimulationInteractor", "GetNumCloths");

	Params::ClothingSimulationInteractor_GetNumCloths Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UClothingSimulationInteractor::GetNumDynamicParticles() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClothingSimulationInteractor", "GetNumDynamicParticles");

	Params::ClothingSimulationInteractor_GetNumDynamicParticles Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UClothingSimulationInteractor::GetNumIterations() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClothingSimulationInteractor", "GetNumIterations");

	Params::ClothingSimulationInteractor_GetNumIterations Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UClothingSimulationInteractor::GetNumKinematicParticles() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClothingSimulationInteractor", "GetNumKinematicParticles");

	Params::ClothingSimulationInteractor_GetNumKinematicParticles Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UClothingSimulationInteractor::GetNumSubsteps() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClothingSimulationInteractor", "GetNumSubsteps");

	Params::ClothingSimulationInteractor_GetNumSubsteps Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UClothingSimulationInteractor::GetSimulationTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClothingSimulationInteractor", "GetSimulationTime");

	Params::ClothingSimulationInteractor_GetSimulationTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
