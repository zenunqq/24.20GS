#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UChaosBlueprintLibraryBPLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void ClothControllerWriteToSimulation(const class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, class FString& ClothingAssetName, struct FClothCoreSettings& ClothCoreSettings, struct FClothParameters& ClothSettings, struct FVector& WindVelocity, struct FClothParameters* OutWorldSpaceClothSettings, struct FVector* OutWorldSpaceWindVelocity);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosBlueprintLibraryBPLibrary">();
	}
	static class UChaosBlueprintLibraryBPLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosBlueprintLibraryBPLibrary>();
	}
};
static_assert(alignof(UChaosBlueprintLibraryBPLibrary) == 0x000008, "Wrong alignment on UChaosBlueprintLibraryBPLibrary");
static_assert(sizeof(UChaosBlueprintLibraryBPLibrary) == 0x000028, "Wrong size on UChaosBlueprintLibraryBPLibrary");

}
