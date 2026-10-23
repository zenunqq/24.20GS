#pragma once

#include "Basic.hpp"

#include "MeshCosmetics_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "CustomizableObject_classes.hpp"
#include "GameFeatures_classes.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UMeshCosmeticsApparelItemDefinition final : public UFortApparelItemDefinition
{
public:
	struct FCosmeticSlotSelector                  SlotValidWithin;
	uint8                                         Pad_7DA[0x6];
	struct FApparelCustomizableItemReference      Parameter;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsApparelItemDefinition">();
	}
	static class UMeshCosmeticsApparelItemDefinition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsApparelItemDefinition>();
	}
};
static_assert(alignof(UMeshCosmeticsApparelItemDefinition) == 0x000008, "Wrong alignment on UMeshCosmeticsApparelItemDefinition");
static_assert(sizeof(UMeshCosmeticsApparelItemDefinition) == 0x000800, "Wrong size on UMeshCosmeticsApparelItemDefinition");
static_assert(offsetof(UMeshCosmeticsApparelItemDefinition, SlotValidWithin) == 0x0007D8, "Member 'UMeshCosmeticsApparelItemDefinition::SlotValidWithin' has a wrong offset!");
static_assert(offsetof(UMeshCosmeticsApparelItemDefinition, Parameter) == 0x0007E0, "Member 'UMeshCosmeticsApparelItemDefinition::Parameter' has a wrong offset!");

class UMeshCosmeticsVariance_CompileObjects final : public UFortCosmeticStep
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsVariance_CompileObjects">();
	}
	static class UMeshCosmeticsVariance_CompileObjects* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsVariance_CompileObjects>();
	}
};
static_assert(alignof(UMeshCosmeticsVariance_CompileObjects) == 0x000008, "Wrong alignment on UMeshCosmeticsVariance_CompileObjects");
static_assert(sizeof(UMeshCosmeticsVariance_CompileObjects) == 0x000058, "Wrong size on UMeshCosmeticsVariance_CompileObjects");

class UFortCustomizableObjectSprayVariant final : public UFortCosmeticVariant
{
public:
	struct FGameplayTag                           ActiveSelectionTag;
	uint8                                         Pad_7C[0x4];
	class FString                                 EnabledParamName;
	class FString                                 ProjectorParamName;
	class FString                                 TextureParamName;
	class FString                                 SaturationParamName;
	class FString                                 WearParamName;
	struct FGameplayTagQuery                      TagQueryForShouldOverrideCODefaultsWithFixedLocationParameters;
	struct FCustomizableObjectSprayVariantFixedProperties FixedSprayLocation;
	struct FCustomizableObjectSprayVariantSelectablePayload DefaultSprayCustomization;
	struct FCustomizableObjectSprayVariantPayloadClamps SprayNumericConstraints;
	uint8                                         Pad_258[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCustomizableObjectSprayVariant">();
	}
	static class UFortCustomizableObjectSprayVariant* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCustomizableObjectSprayVariant>();
	}
};
static_assert(alignof(UFortCustomizableObjectSprayVariant) == 0x000008, "Wrong alignment on UFortCustomizableObjectSprayVariant");
static_assert(sizeof(UFortCustomizableObjectSprayVariant) == 0x000268, "Wrong size on UFortCustomizableObjectSprayVariant");
static_assert(offsetof(UFortCustomizableObjectSprayVariant, ActiveSelectionTag) == 0x000078, "Member 'UFortCustomizableObjectSprayVariant::ActiveSelectionTag' has a wrong offset!");
static_assert(offsetof(UFortCustomizableObjectSprayVariant, EnabledParamName) == 0x000080, "Member 'UFortCustomizableObjectSprayVariant::EnabledParamName' has a wrong offset!");
static_assert(offsetof(UFortCustomizableObjectSprayVariant, ProjectorParamName) == 0x000090, "Member 'UFortCustomizableObjectSprayVariant::ProjectorParamName' has a wrong offset!");
static_assert(offsetof(UFortCustomizableObjectSprayVariant, TextureParamName) == 0x0000A0, "Member 'UFortCustomizableObjectSprayVariant::TextureParamName' has a wrong offset!");
static_assert(offsetof(UFortCustomizableObjectSprayVariant, SaturationParamName) == 0x0000B0, "Member 'UFortCustomizableObjectSprayVariant::SaturationParamName' has a wrong offset!");
static_assert(offsetof(UFortCustomizableObjectSprayVariant, WearParamName) == 0x0000C0, "Member 'UFortCustomizableObjectSprayVariant::WearParamName' has a wrong offset!");
static_assert(offsetof(UFortCustomizableObjectSprayVariant, TagQueryForShouldOverrideCODefaultsWithFixedLocationParameters) == 0x0000D0, "Member 'UFortCustomizableObjectSprayVariant::TagQueryForShouldOverrideCODefaultsWithFixedLocationParameters' has a wrong offset!");
static_assert(offsetof(UFortCustomizableObjectSprayVariant, FixedSprayLocation) == 0x000118, "Member 'UFortCustomizableObjectSprayVariant::FixedSprayLocation' has a wrong offset!");
static_assert(offsetof(UFortCustomizableObjectSprayVariant, DefaultSprayCustomization) == 0x000180, "Member 'UFortCustomizableObjectSprayVariant::DefaultSprayCustomization' has a wrong offset!");
static_assert(offsetof(UFortCustomizableObjectSprayVariant, SprayNumericConstraints) == 0x000228, "Member 'UFortCustomizableObjectSprayVariant::SprayNumericConstraints' has a wrong offset!");

class UFortCustomizableObjectParameterVariant final : public UFortCosmeticVariantBackedByArray
{
public:
	TArray<struct FCustomizableObjectParamsVariantDef> ParameterOptions;

public:
	static void ApplyVariants(class AActor* Actor, const struct FFortAthenaLoadout& Loadout);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCustomizableObjectParameterVariant">();
	}
	static class UFortCustomizableObjectParameterVariant* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCustomizableObjectParameterVariant>();
	}
};
static_assert(alignof(UFortCustomizableObjectParameterVariant) == 0x000008, "Wrong alignment on UFortCustomizableObjectParameterVariant");
static_assert(sizeof(UFortCustomizableObjectParameterVariant) == 0x000088, "Wrong size on UFortCustomizableObjectParameterVariant");
static_assert(offsetof(UFortCustomizableObjectParameterVariant, ParameterOptions) == 0x000078, "Member 'UFortCustomizableObjectParameterVariant::ParameterOptions' has a wrong offset!");

class UMeshCosmeticsStep_ComponentRemoval final : public UFortCosmeticStep
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsStep_ComponentRemoval">();
	}
	static class UMeshCosmeticsStep_ComponentRemoval* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsStep_ComponentRemoval>();
	}
};
static_assert(alignof(UMeshCosmeticsStep_ComponentRemoval) == 0x000008, "Wrong alignment on UMeshCosmeticsStep_ComponentRemoval");
static_assert(sizeof(UMeshCosmeticsStep_ComponentRemoval) == 0x000058, "Wrong size on UMeshCosmeticsStep_ComponentRemoval");

class UMeshCosmeticsOption_ApplyCustomizableObject final : public UFortCosmeticFlowOption
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsOption_ApplyCustomizableObject">();
	}
	static class UMeshCosmeticsOption_ApplyCustomizableObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsOption_ApplyCustomizableObject>();
	}
};
static_assert(alignof(UMeshCosmeticsOption_ApplyCustomizableObject) == 0x000008, "Wrong alignment on UMeshCosmeticsOption_ApplyCustomizableObject");
static_assert(sizeof(UMeshCosmeticsOption_ApplyCustomizableObject) == 0x000030, "Wrong size on UMeshCosmeticsOption_ApplyCustomizableObject");

class UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents final : public UFortCosmeticStep
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsStep_RemoveCustomizableSkeletalComponents">();
	}
	static class UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents>();
	}
};
static_assert(alignof(UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents) == 0x000008, "Wrong alignment on UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents");
static_assert(sizeof(UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents) == 0x000058, "Wrong size on UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents");

class UMeshCosmeticsVariance_ApplyParameters final : public UFortCosmeticStep
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsVariance_ApplyParameters">();
	}
	static class UMeshCosmeticsVariance_ApplyParameters* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsVariance_ApplyParameters>();
	}
};
static_assert(alignof(UMeshCosmeticsVariance_ApplyParameters) == 0x000008, "Wrong alignment on UMeshCosmeticsVariance_ApplyParameters");
static_assert(sizeof(UMeshCosmeticsVariance_ApplyParameters) == 0x000058, "Wrong size on UMeshCosmeticsVariance_ApplyParameters");

class UMeshCosmeticsVariance_ManageComponents final : public UFortCosmeticStep
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsVariance_ManageComponents">();
	}
	static class UMeshCosmeticsVariance_ManageComponents* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsVariance_ManageComponents>();
	}
};
static_assert(alignof(UMeshCosmeticsVariance_ManageComponents) == 0x000008, "Wrong alignment on UMeshCosmeticsVariance_ManageComponents");
static_assert(sizeof(UMeshCosmeticsVariance_ManageComponents) == 0x000058, "Wrong size on UMeshCosmeticsVariance_ManageComponents");

class UMeshCosmeticsVariance_ProcessVariantAssets final : public UFortCosmeticStep
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsVariance_ProcessVariantAssets">();
	}
	static class UMeshCosmeticsVariance_ProcessVariantAssets* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsVariance_ProcessVariantAssets>();
	}
};
static_assert(alignof(UMeshCosmeticsVariance_ProcessVariantAssets) == 0x000008, "Wrong alignment on UMeshCosmeticsVariance_ProcessVariantAssets");
static_assert(sizeof(UMeshCosmeticsVariance_ProcessVariantAssets) == 0x000058, "Wrong size on UMeshCosmeticsVariance_ProcessVariantAssets");

class UMeshCosmeticsStep_ChooseParameters final : public UFortCosmeticStep
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsStep_ChooseParameters">();
	}
	static class UMeshCosmeticsStep_ChooseParameters* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsStep_ChooseParameters>();
	}
};
static_assert(alignof(UMeshCosmeticsStep_ChooseParameters) == 0x000008, "Wrong alignment on UMeshCosmeticsStep_ChooseParameters");
static_assert(sizeof(UMeshCosmeticsStep_ChooseParameters) == 0x000058, "Wrong size on UMeshCosmeticsStep_ChooseParameters");

class UMeshCosmeticsStep_CommitChosenParams final : public UFortCosmeticStep
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsStep_CommitChosenParams">();
	}
	static class UMeshCosmeticsStep_CommitChosenParams* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsStep_CommitChosenParams>();
	}
};
static_assert(alignof(UMeshCosmeticsStep_CommitChosenParams) == 0x000008, "Wrong alignment on UMeshCosmeticsStep_CommitChosenParams");
static_assert(sizeof(UMeshCosmeticsStep_CommitChosenParams) == 0x000058, "Wrong size on UMeshCosmeticsStep_CommitChosenParams");

class UMeshCosmeticsStep_HandleGeneratedMesh final : public UFortCosmeticStep
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsStep_HandleGeneratedMesh">();
	}
	static class UMeshCosmeticsStep_HandleGeneratedMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsStep_HandleGeneratedMesh>();
	}
};
static_assert(alignof(UMeshCosmeticsStep_HandleGeneratedMesh) == 0x000008, "Wrong alignment on UMeshCosmeticsStep_HandleGeneratedMesh");
static_assert(sizeof(UMeshCosmeticsStep_HandleGeneratedMesh) == 0x000058, "Wrong size on UMeshCosmeticsStep_HandleGeneratedMesh");

class UMeshCosmeticsStep_PlaceComponent final : public UFortCosmeticStep
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsStep_PlaceComponent">();
	}
	static class UMeshCosmeticsStep_PlaceComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsStep_PlaceComponent>();
	}
};
static_assert(alignof(UMeshCosmeticsStep_PlaceComponent) == 0x000008, "Wrong alignment on UMeshCosmeticsStep_PlaceComponent");
static_assert(sizeof(UMeshCosmeticsStep_PlaceComponent) == 0x000058, "Wrong size on UMeshCosmeticsStep_PlaceComponent");

class UGameFeatureAction_MeshCosmeticsCompileSchemaDepenencies final : public UGameFeatureAction
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureAction_MeshCosmeticsCompileSchemaDepenencies">();
	}
	static class UGameFeatureAction_MeshCosmeticsCompileSchemaDepenencies* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureAction_MeshCosmeticsCompileSchemaDepenencies>();
	}
};
static_assert(alignof(UGameFeatureAction_MeshCosmeticsCompileSchemaDepenencies) == 0x000008, "Wrong alignment on UGameFeatureAction_MeshCosmeticsCompileSchemaDepenencies");
static_assert(sizeof(UGameFeatureAction_MeshCosmeticsCompileSchemaDepenencies) == 0x000028, "Wrong size on UGameFeatureAction_MeshCosmeticsCompileSchemaDepenencies");

class UInstanceCache_FortGameInstance final : public UGameInstanceSubsystem
{
public:
	void OnGameInstanceWorldChanged(class UWorld* OldWorld, class UWorld* NewWorld);
	void OnGamePhaseChanged(EAthenaGamePhase GamePhase);
	void OnGameStateChanged(class AGameStateBase* InGameState);

	void OnPreLoadMap(const struct FWorldContext& WorldContext, const class FString& MapName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InstanceCache_FortGameInstance">();
	}
	static class UInstanceCache_FortGameInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInstanceCache_FortGameInstance>();
	}
};
static_assert(alignof(UInstanceCache_FortGameInstance) == 0x000008, "Wrong alignment on UInstanceCache_FortGameInstance");
static_assert(sizeof(UInstanceCache_FortGameInstance) == 0x000030, "Wrong size on UInstanceCache_FortGameInstance");

class IMeshCosmeticTagInterface final : public IInterface
{
public:
	void OnPostCustomizationAnimGameplayTags_BP(const struct FGameplayTagContainer& GameplayTags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticTagInterface">();
	}
	static class IMeshCosmeticTagInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMeshCosmeticTagInterface>();
	}
};
static_assert(alignof(IMeshCosmeticTagInterface) == 0x000008, "Wrong alignment on IMeshCosmeticTagInterface");
static_assert(sizeof(IMeshCosmeticTagInterface) == 0x000028, "Wrong size on IMeshCosmeticTagInterface");

class UFortCustomizableInstanceLODManagement final : public UCustomizableInstanceLODManagementBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCustomizableInstanceLODManagement">();
	}
	static class UFortCustomizableInstanceLODManagement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCustomizableInstanceLODManagement>();
	}
};
static_assert(alignof(UFortCustomizableInstanceLODManagement) == 0x000008, "Wrong alignment on UFortCustomizableInstanceLODManagement");
static_assert(sizeof(UFortCustomizableInstanceLODManagement) == 0x000028, "Wrong size on UFortCustomizableInstanceLODManagement");

class UMeshCosmeticsLayoutSchema final : public UFortApparelLayoutItemDefinition
{
public:
	TMap<struct FCosmeticSlotSelector, struct FCosmeticsLayoutSlot> SlotDataConfig;
	TMap<struct FCosmeticSlotSelector, TSoftObjectPtr<class UCustomizableObject>> SlottedCustomizableObjects;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsLayoutSchema">();
	}
	static class UMeshCosmeticsLayoutSchema* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsLayoutSchema>();
	}
};
static_assert(alignof(UMeshCosmeticsLayoutSchema) == 0x000008, "Wrong alignment on UMeshCosmeticsLayoutSchema");
static_assert(sizeof(UMeshCosmeticsLayoutSchema) == 0x000448, "Wrong size on UMeshCosmeticsLayoutSchema");
static_assert(offsetof(UMeshCosmeticsLayoutSchema, SlotDataConfig) == 0x0003A8, "Member 'UMeshCosmeticsLayoutSchema::SlotDataConfig' has a wrong offset!");
static_assert(offsetof(UMeshCosmeticsLayoutSchema, SlottedCustomizableObjects) == 0x0003F8, "Member 'UMeshCosmeticsLayoutSchema::SlottedCustomizableObjects' has a wrong offset!");

class UMeshCosmeticsAppliedSchemaData final : public UFortCosmeticItemAdditionalData
{
public:
	TSoftObjectPtr<class UMeshCosmeticsLayoutSchema> SchemaAsset;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsAppliedSchemaData">();
	}
	static class UMeshCosmeticsAppliedSchemaData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsAppliedSchemaData>();
	}
};
static_assert(alignof(UMeshCosmeticsAppliedSchemaData) == 0x000008, "Wrong alignment on UMeshCosmeticsAppliedSchemaData");
static_assert(sizeof(UMeshCosmeticsAppliedSchemaData) == 0x000050, "Wrong size on UMeshCosmeticsAppliedSchemaData");
static_assert(offsetof(UMeshCosmeticsAppliedSchemaData, SchemaAsset) == 0x000028, "Member 'UMeshCosmeticsAppliedSchemaData::SchemaAsset' has a wrong offset!");

class UMeshCosmeticsSupportedSchemaData final : public UFortCosmeticItemAdditionalData
{
public:
	TArray<TSoftObjectPtr<class UMeshCosmeticsLayoutSchema>> SupportedSchemas;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsSupportedSchemaData">();
	}
	static class UMeshCosmeticsSupportedSchemaData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsSupportedSchemaData>();
	}
};
static_assert(alignof(UMeshCosmeticsSupportedSchemaData) == 0x000008, "Wrong alignment on UMeshCosmeticsSupportedSchemaData");
static_assert(sizeof(UMeshCosmeticsSupportedSchemaData) == 0x000038, "Wrong size on UMeshCosmeticsSupportedSchemaData");
static_assert(offsetof(UMeshCosmeticsSupportedSchemaData, SupportedSchemas) == 0x000028, "Member 'UMeshCosmeticsSupportedSchemaData::SupportedSchemas' has a wrong offset!");

}
