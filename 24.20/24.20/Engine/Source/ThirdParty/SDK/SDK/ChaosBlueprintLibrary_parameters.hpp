#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct ChaosBlueprintLibraryBPLibrary_ClothControllerWriteToSimulation final
{
public:
	const class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance;
	class FString                                 ClothingAssetName;
	struct FClothCoreSettings                     ClothCoreSettings;
	struct FClothParameters                       ClothSettings;
	struct FVector                                WindVelocity;
	struct FClothParameters                       OutWorldSpaceClothSettings;
	struct FVector                                OutWorldSpaceWindVelocity;
};
static_assert(alignof(ChaosBlueprintLibraryBPLibrary_ClothControllerWriteToSimulation) == 0x000008, "Wrong alignment on ChaosBlueprintLibraryBPLibrary_ClothControllerWriteToSimulation");
static_assert(sizeof(ChaosBlueprintLibraryBPLibrary_ClothControllerWriteToSimulation) == 0x000188, "Wrong size on ChaosBlueprintLibraryBPLibrary_ClothControllerWriteToSimulation");
static_assert(offsetof(ChaosBlueprintLibraryBPLibrary_ClothControllerWriteToSimulation, CharacterPartAnimInstance) == 0x000000, "Member 'ChaosBlueprintLibraryBPLibrary_ClothControllerWriteToSimulation::CharacterPartAnimInstance' has a wrong offset!");
static_assert(offsetof(ChaosBlueprintLibraryBPLibrary_ClothControllerWriteToSimulation, ClothingAssetName) == 0x000008, "Member 'ChaosBlueprintLibraryBPLibrary_ClothControllerWriteToSimulation::ClothingAssetName' has a wrong offset!");
static_assert(offsetof(ChaosBlueprintLibraryBPLibrary_ClothControllerWriteToSimulation, ClothCoreSettings) == 0x000018, "Member 'ChaosBlueprintLibraryBPLibrary_ClothControllerWriteToSimulation::ClothCoreSettings' has a wrong offset!");
static_assert(offsetof(ChaosBlueprintLibraryBPLibrary_ClothControllerWriteToSimulation, ClothSettings) == 0x000098, "Member 'ChaosBlueprintLibraryBPLibrary_ClothControllerWriteToSimulation::ClothSettings' has a wrong offset!");
static_assert(offsetof(ChaosBlueprintLibraryBPLibrary_ClothControllerWriteToSimulation, WindVelocity) == 0x0000F8, "Member 'ChaosBlueprintLibraryBPLibrary_ClothControllerWriteToSimulation::WindVelocity' has a wrong offset!");
static_assert(offsetof(ChaosBlueprintLibraryBPLibrary_ClothControllerWriteToSimulation, OutWorldSpaceClothSettings) == 0x000110, "Member 'ChaosBlueprintLibraryBPLibrary_ClothControllerWriteToSimulation::OutWorldSpaceClothSettings' has a wrong offset!");
static_assert(offsetof(ChaosBlueprintLibraryBPLibrary_ClothControllerWriteToSimulation, OutWorldSpaceWindVelocity) == 0x000170, "Member 'ChaosBlueprintLibraryBPLibrary_ClothControllerWriteToSimulation::OutWorldSpaceWindVelocity' has a wrong offset!");

}
