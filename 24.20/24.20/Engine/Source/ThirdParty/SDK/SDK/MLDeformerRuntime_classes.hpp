#pragma once

#include "Basic.hpp"

#include "MLDeformerFramework_classes.hpp"
#include "FortniteGame_classes.hpp"
#include "GameFeatures_classes.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UFortMLDeformerComponent final : public UMLDeformerComponent
{
public:
	class UMLDeformerAsset*                       RequestedMLDeformerAsset;
	class UMeshDeformer*                          RequestedMeshDeformerAsset;
	uint8                                         Pad_F0[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMLDeformerComponent">();
	}
	static class UFortMLDeformerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMLDeformerComponent>();
	}
};
static_assert(alignof(UFortMLDeformerComponent) == 0x000008, "Wrong alignment on UFortMLDeformerComponent");
static_assert(sizeof(UFortMLDeformerComponent) == 0x000100, "Wrong size on UFortMLDeformerComponent");
static_assert(offsetof(UFortMLDeformerComponent, RequestedMLDeformerAsset) == 0x0000E0, "Member 'UFortMLDeformerComponent::RequestedMLDeformerAsset' has a wrong offset!");
static_assert(offsetof(UFortMLDeformerComponent, RequestedMeshDeformerAsset) == 0x0000E8, "Member 'UFortMLDeformerComponent::RequestedMeshDeformerAsset' has a wrong offset!");

class UMLDeformerGameFeatureData final : public UFortGameFeatureData
{
public:
	bool                                          bDisableWhenOwnerIsNotViewTarget;
	bool                                          bShouldRampUpWeightWhenEnabled;
	uint8                                         Pad_522[0x2];
	float                                         WeightIncreasePerSecond;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MLDeformerGameFeatureData">();
	}
	static class UMLDeformerGameFeatureData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMLDeformerGameFeatureData>();
	}
};
static_assert(alignof(UMLDeformerGameFeatureData) == 0x000008, "Wrong alignment on UMLDeformerGameFeatureData");
static_assert(sizeof(UMLDeformerGameFeatureData) == 0x000528, "Wrong size on UMLDeformerGameFeatureData");
static_assert(offsetof(UMLDeformerGameFeatureData, bDisableWhenOwnerIsNotViewTarget) == 0x000520, "Member 'UMLDeformerGameFeatureData::bDisableWhenOwnerIsNotViewTarget' has a wrong offset!");
static_assert(offsetof(UMLDeformerGameFeatureData, bShouldRampUpWeightWhenEnabled) == 0x000521, "Member 'UMLDeformerGameFeatureData::bShouldRampUpWeightWhenEnabled' has a wrong offset!");
static_assert(offsetof(UMLDeformerGameFeatureData, WeightIncreasePerSecond) == 0x000524, "Member 'UMLDeformerGameFeatureData::WeightIncreasePerSecond' has a wrong offset!");

class UGameFeatureAction_LoadPrimaryDataAssets final : public UGameFeatureAction
{
public:
	TArray<class FName>                           AdditionalPrimaryAssetTypesToLoad;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureAction_LoadPrimaryDataAssets">();
	}
	static class UGameFeatureAction_LoadPrimaryDataAssets* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureAction_LoadPrimaryDataAssets>();
	}
};
static_assert(alignof(UGameFeatureAction_LoadPrimaryDataAssets) == 0x000008, "Wrong alignment on UGameFeatureAction_LoadPrimaryDataAssets");
static_assert(sizeof(UGameFeatureAction_LoadPrimaryDataAssets) == 0x000038, "Wrong size on UGameFeatureAction_LoadPrimaryDataAssets");
static_assert(offsetof(UGameFeatureAction_LoadPrimaryDataAssets, AdditionalPrimaryAssetTypesToLoad) == 0x000028, "Member 'UGameFeatureAction_LoadPrimaryDataAssets::AdditionalPrimaryAssetTypesToLoad' has a wrong offset!");

class UMLDeformerAssetMapping final : public UPrimaryDataAsset
{
public:
	TMap<TSoftObjectPtr<class UAthenaCharacterItemDefinition>, TSoftObjectPtr<class UMLDeformerAsset>> CharacterItemDefinitionToMLDeformerAssetMap;
	TMap<TSoftObjectPtr<class UCustomCharacterPart>, TSoftObjectPtr<class UMLDeformerAsset>> CharacterPartToMLDeformerAssetMap;
	TMap<TSoftObjectPtr<class UMLDeformerAsset>, TSoftObjectPtr<class UMeshDeformer>> MLDeformerToMeshDeformerAssetMap;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MLDeformerAssetMapping">();
	}
	static class UMLDeformerAssetMapping* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMLDeformerAssetMapping>();
	}
};
static_assert(alignof(UMLDeformerAssetMapping) == 0x000008, "Wrong alignment on UMLDeformerAssetMapping");
static_assert(sizeof(UMLDeformerAssetMapping) == 0x000120, "Wrong size on UMLDeformerAssetMapping");
static_assert(offsetof(UMLDeformerAssetMapping, CharacterItemDefinitionToMLDeformerAssetMap) == 0x000030, "Member 'UMLDeformerAssetMapping::CharacterItemDefinitionToMLDeformerAssetMap' has a wrong offset!");
static_assert(offsetof(UMLDeformerAssetMapping, CharacterPartToMLDeformerAssetMap) == 0x000080, "Member 'UMLDeformerAssetMapping::CharacterPartToMLDeformerAssetMap' has a wrong offset!");
static_assert(offsetof(UMLDeformerAssetMapping, MLDeformerToMeshDeformerAssetMap) == 0x0000D0, "Member 'UMLDeformerAssetMapping::MLDeformerToMeshDeformerAssetMap' has a wrong offset!");

class UMLDeformerComponentManager final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MLDeformerComponentManager">();
	}
	static class UMLDeformerComponentManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMLDeformerComponentManager>();
	}
};
static_assert(alignof(UMLDeformerComponentManager) == 0x000008, "Wrong alignment on UMLDeformerComponentManager");
static_assert(sizeof(UMLDeformerComponentManager) == 0x0000C8, "Wrong size on UMLDeformerComponentManager");

}
