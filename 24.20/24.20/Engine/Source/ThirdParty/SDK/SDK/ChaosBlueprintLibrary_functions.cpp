#pragma once

#include "Basic.hpp"

#include "ChaosBlueprintLibrary_classes.hpp"
#include "ChaosBlueprintLibrary_parameters.hpp"

namespace SDK
{

void UChaosBlueprintLibraryBPLibrary::ClothControllerWriteToSimulation(const class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, class FString& ClothingAssetName, struct FClothCoreSettings& ClothCoreSettings, struct FClothParameters& ClothSettings, struct FVector& WindVelocity, struct FClothParameters* OutWorldSpaceClothSettings, struct FVector* OutWorldSpaceWindVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ChaosBlueprintLibraryBPLibrary", "ClothControllerWriteToSimulation");

	Params::ChaosBlueprintLibraryBPLibrary_ClothControllerWriteToSimulation Parms{};

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.ClothingAssetName = std::move(ClothingAssetName);
	Parms.ClothCoreSettings = std::move(ClothCoreSettings);
	Parms.ClothSettings = std::move(ClothSettings);
	Parms.WindVelocity = std::move(WindVelocity);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	ClothingAssetName = std::move(Parms.ClothingAssetName);
	ClothCoreSettings = std::move(Parms.ClothCoreSettings);
	ClothSettings = std::move(Parms.ClothSettings);
	WindVelocity = std::move(Parms.WindVelocity);

	if (OutWorldSpaceClothSettings != nullptr)
		*OutWorldSpaceClothSettings = std::move(Parms.OutWorldSpaceClothSettings);

	if (OutWorldSpaceWindVelocity != nullptr)
		*OutWorldSpaceWindVelocity = std::move(Parms.OutWorldSpaceWindVelocity);
}

}
