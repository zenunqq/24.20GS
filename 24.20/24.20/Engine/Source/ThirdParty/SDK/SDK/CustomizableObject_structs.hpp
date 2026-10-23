#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ClothingSystemRuntimeCommon_structs.hpp"
#include "Engine_structs.hpp"
#include "MutableRuntime_structs.hpp"

namespace SDK
{

enum class EMutableParameterType : uint8
{
	None                                     = 0,
	Bool                                     = 1,
	Int                                      = 2,
	Float                                    = 3,
	Color                                    = 4,
	Projector                                = 5,
	Texture                                  = 6,
	EMutableParameterType_MAX                = 7,
};

enum class ECustomizableObjectGroupType : uint8
{
	COGT_TOGGLE                              = 0,
	COGT_ALL                                 = 1,
	COGT_ONE                                 = 2,
	COGT_ONE_OR_NONE                         = 3,
	COGT_MAX                                 = 4,
};

enum class EMutableCompileMeshType : uint8
{
	Full                                     = 0,
	Local                                    = 1,
	LocalAndChildren                         = 2,
	AddWorkingSetNoChildren                  = 3,
	AddWorkingSetAndChildren                 = 4,
	EMutableCompileMeshType_MAX              = 5,
};

enum class ECustomizableObjectProjectorType : uint8
{
	Planar                                   = 0,
	Cylindrical                              = 1,
	Wrapping                                 = 2,
	ECustomizableObjectProjectorType_MAX     = 3,
};

enum class ECustomizableObjectRelevancy : uint8
{
	All                                      = 0,
	ClientOnly                               = 1,
	ECustomizableObjectRelevancy_MAX         = 2,
};

enum class ECustomizableObjectCompilationState : uint8
{
	None                                     = 0,
	InProgress                               = 1,
	Completed                                = 2,
	Failed                                   = 3,
	ECustomizableObjectCompilationState_MAX  = 4,
};

struct FGeneratedTexture final
{
public:
	int32                                         ID;
	uint8                                         Pad_4[0x4];
	class FString                                 Name;
	class UTexture2D*                             Texture;
};
static_assert(alignof(FGeneratedTexture) == 0x000008, "Wrong alignment on FGeneratedTexture");
static_assert(sizeof(FGeneratedTexture) == 0x000020, "Wrong size on FGeneratedTexture");
static_assert(offsetof(FGeneratedTexture, ID) == 0x000000, "Member 'FGeneratedTexture::ID' has a wrong offset!");
static_assert(offsetof(FGeneratedTexture, Name) == 0x000008, "Member 'FGeneratedTexture::Name' has a wrong offset!");
static_assert(offsetof(FGeneratedTexture, Texture) == 0x000018, "Member 'FGeneratedTexture::Texture' has a wrong offset!");

struct FGeneratedMaterial final
{
public:
	TArray<struct FGeneratedTexture>              Textures;
};
static_assert(alignof(FGeneratedMaterial) == 0x000008, "Wrong alignment on FGeneratedMaterial");
static_assert(sizeof(FGeneratedMaterial) == 0x000010, "Wrong size on FGeneratedMaterial");
static_assert(offsetof(FGeneratedMaterial, Textures) == 0x000000, "Member 'FGeneratedMaterial::Textures' has a wrong offset!");

struct FParameterDecorations final
{
public:
	TArray<class UTexture2D*>                     Images;
};
static_assert(alignof(FParameterDecorations) == 0x000008, "Wrong alignment on FParameterDecorations");
static_assert(sizeof(FParameterDecorations) == 0x000010, "Wrong size on FParameterDecorations");
static_assert(offsetof(FParameterDecorations, Images) == 0x000000, "Member 'FParameterDecorations::Images' has a wrong offset!");

struct FReferencedPhysicsAssets final
{
public:
	uint8                                         Pad_0[0x10];
	TArray<class UPhysicsAsset*>                  PhysicsAssetsToMerge;
	uint8                                         Pad_20[0x10];
	TArray<class UPhysicsAsset*>                  AdditionalPhysicsAssets;
};
static_assert(alignof(FReferencedPhysicsAssets) == 0x000008, "Wrong alignment on FReferencedPhysicsAssets");
static_assert(sizeof(FReferencedPhysicsAssets) == 0x000040, "Wrong size on FReferencedPhysicsAssets");
static_assert(offsetof(FReferencedPhysicsAssets, PhysicsAssetsToMerge) == 0x000010, "Member 'FReferencedPhysicsAssets::PhysicsAssetsToMerge' has a wrong offset!");
static_assert(offsetof(FReferencedPhysicsAssets, AdditionalPhysicsAssets) == 0x000030, "Member 'FReferencedPhysicsAssets::AdditionalPhysicsAssets' has a wrong offset!");

struct FReferencedSkeletons final
{
public:
	TArray<int32>                                 SkeletonsToLoad;
	TArray<class USkeleton*>                      SkeletonsToMerge;
};
static_assert(alignof(FReferencedSkeletons) == 0x000008, "Wrong alignment on FReferencedSkeletons");
static_assert(sizeof(FReferencedSkeletons) == 0x000020, "Wrong size on FReferencedSkeletons");
static_assert(offsetof(FReferencedSkeletons, SkeletonsToLoad) == 0x000000, "Member 'FReferencedSkeletons::SkeletonsToLoad' has a wrong offset!");
static_assert(offsetof(FReferencedSkeletons, SkeletonsToMerge) == 0x000010, "Member 'FReferencedSkeletons::SkeletonsToMerge' has a wrong offset!");

struct FCustomizableInstanceComponentData final
{
public:
	uint8                                         Pad_0[0x8];
	TMap<int32, TSoftClassPtr<class UClass>>      AnimSlotToBP;
	struct FReferencedSkeletons                   Skeletons;
	struct FReferencedPhysicsAssets               PhysicsAssets;
	uint8                                         Pad_B8[0x20];
};
static_assert(alignof(FCustomizableInstanceComponentData) == 0x000008, "Wrong alignment on FCustomizableInstanceComponentData");
static_assert(sizeof(FCustomizableInstanceComponentData) == 0x0000D8, "Wrong size on FCustomizableInstanceComponentData");
static_assert(offsetof(FCustomizableInstanceComponentData, AnimSlotToBP) == 0x000008, "Member 'FCustomizableInstanceComponentData::AnimSlotToBP' has a wrong offset!");
static_assert(offsetof(FCustomizableInstanceComponentData, Skeletons) == 0x000058, "Member 'FCustomizableInstanceComponentData::Skeletons' has a wrong offset!");
static_assert(offsetof(FCustomizableInstanceComponentData, PhysicsAssets) == 0x000078, "Member 'FCustomizableInstanceComponentData::PhysicsAssets' has a wrong offset!");

struct FAnimInstanceOverridePhysicsAsset final
{
public:
	int32                                         PropertyIndex;
	uint8                                         Pad_4[0x4];
	class UPhysicsAsset*                          PhysicsAsset;
};
static_assert(alignof(FAnimInstanceOverridePhysicsAsset) == 0x000008, "Wrong alignment on FAnimInstanceOverridePhysicsAsset");
static_assert(sizeof(FAnimInstanceOverridePhysicsAsset) == 0x000010, "Wrong size on FAnimInstanceOverridePhysicsAsset");
static_assert(offsetof(FAnimInstanceOverridePhysicsAsset, PropertyIndex) == 0x000000, "Member 'FAnimInstanceOverridePhysicsAsset::PropertyIndex' has a wrong offset!");
static_assert(offsetof(FAnimInstanceOverridePhysicsAsset, PhysicsAsset) == 0x000008, "Member 'FAnimInstanceOverridePhysicsAsset::PhysicsAsset' has a wrong offset!");

struct FAnimBpGeneratedPhysicsAssets final
{
public:
	TArray<struct FAnimInstanceOverridePhysicsAsset> AnimInstancePropertyIndexAndPhysicsAssets;
};
static_assert(alignof(FAnimBpGeneratedPhysicsAssets) == 0x000008, "Wrong alignment on FAnimBpGeneratedPhysicsAssets");
static_assert(sizeof(FAnimBpGeneratedPhysicsAssets) == 0x000010, "Wrong size on FAnimBpGeneratedPhysicsAssets");
static_assert(offsetof(FAnimBpGeneratedPhysicsAssets, AnimInstancePropertyIndexAndPhysicsAssets) == 0x000000, "Member 'FAnimBpGeneratedPhysicsAssets::AnimInstancePropertyIndexAndPhysicsAssets' has a wrong offset!");

struct FCustomizableObjectClothConfigData final
{
public:
	class FString                                 ClassPath;
	class FName                                   ConfigName;
	uint8                                         Pad_14[0x4];
	TArray<uint8>                                 ConfigBytes;
};
static_assert(alignof(FCustomizableObjectClothConfigData) == 0x000008, "Wrong alignment on FCustomizableObjectClothConfigData");
static_assert(sizeof(FCustomizableObjectClothConfigData) == 0x000028, "Wrong size on FCustomizableObjectClothConfigData");
static_assert(offsetof(FCustomizableObjectClothConfigData, ClassPath) == 0x000000, "Member 'FCustomizableObjectClothConfigData::ClassPath' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectClothConfigData, ConfigName) == 0x000010, "Member 'FCustomizableObjectClothConfigData::ConfigName' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectClothConfigData, ConfigBytes) == 0x000018, "Member 'FCustomizableObjectClothConfigData::ConfigBytes' has a wrong offset!");

struct FCustomizableObjectClothingAssetData final
{
public:
	TArray<struct FClothLODDataCommon>            LodData;
	TArray<int32>                                 LodMap;
	TArray<class FName>                           UsedBoneNames;
	TArray<int32>                                 UsedBoneIndices;
	int32                                         ReferenceBoneIndex;
	uint8                                         Pad_44[0x4];
	TArray<struct FCustomizableObjectClothConfigData> ConfigsData;
	class FString                                 PhysicsAssetPath;
	class FName                                   Name;
	struct FGuid                                  OriginalAssetGuid;
	uint8                                         Pad_7C[0x4];
};
static_assert(alignof(FCustomizableObjectClothingAssetData) == 0x000008, "Wrong alignment on FCustomizableObjectClothingAssetData");
static_assert(sizeof(FCustomizableObjectClothingAssetData) == 0x000080, "Wrong size on FCustomizableObjectClothingAssetData");
static_assert(offsetof(FCustomizableObjectClothingAssetData, LodData) == 0x000000, "Member 'FCustomizableObjectClothingAssetData::LodData' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectClothingAssetData, LodMap) == 0x000010, "Member 'FCustomizableObjectClothingAssetData::LodMap' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectClothingAssetData, UsedBoneNames) == 0x000020, "Member 'FCustomizableObjectClothingAssetData::UsedBoneNames' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectClothingAssetData, UsedBoneIndices) == 0x000030, "Member 'FCustomizableObjectClothingAssetData::UsedBoneIndices' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectClothingAssetData, ReferenceBoneIndex) == 0x000040, "Member 'FCustomizableObjectClothingAssetData::ReferenceBoneIndex' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectClothingAssetData, ConfigsData) == 0x000048, "Member 'FCustomizableObjectClothingAssetData::ConfigsData' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectClothingAssetData, PhysicsAssetPath) == 0x000058, "Member 'FCustomizableObjectClothingAssetData::PhysicsAssetPath' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectClothingAssetData, Name) == 0x000068, "Member 'FCustomizableObjectClothingAssetData::Name' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectClothingAssetData, OriginalAssetGuid) == 0x00006C, "Member 'FCustomizableObjectClothingAssetData::OriginalAssetGuid' has a wrong offset!");

struct FCustomizableObjectBoolParameterValue final
{
public:
	class FString                                 ParameterName;
	bool                                          ParameterValue;
	uint8                                         Pad_11[0x7];
	class FString                                 UID;
};
static_assert(alignof(FCustomizableObjectBoolParameterValue) == 0x000008, "Wrong alignment on FCustomizableObjectBoolParameterValue");
static_assert(sizeof(FCustomizableObjectBoolParameterValue) == 0x000028, "Wrong size on FCustomizableObjectBoolParameterValue");
static_assert(offsetof(FCustomizableObjectBoolParameterValue, ParameterName) == 0x000000, "Member 'FCustomizableObjectBoolParameterValue::ParameterName' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectBoolParameterValue, ParameterValue) == 0x000010, "Member 'FCustomizableObjectBoolParameterValue::ParameterValue' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectBoolParameterValue, UID) == 0x000018, "Member 'FCustomizableObjectBoolParameterValue::UID' has a wrong offset!");

struct FCustomizableObjectIntParameterValue final
{
public:
	class FString                                 ParameterName;
	class FString                                 ParameterValueName;
	class FString                                 UID;
	TArray<class FString>                         ParameterRangeValueNames;
};
static_assert(alignof(FCustomizableObjectIntParameterValue) == 0x000008, "Wrong alignment on FCustomizableObjectIntParameterValue");
static_assert(sizeof(FCustomizableObjectIntParameterValue) == 0x000040, "Wrong size on FCustomizableObjectIntParameterValue");
static_assert(offsetof(FCustomizableObjectIntParameterValue, ParameterName) == 0x000000, "Member 'FCustomizableObjectIntParameterValue::ParameterName' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectIntParameterValue, ParameterValueName) == 0x000010, "Member 'FCustomizableObjectIntParameterValue::ParameterValueName' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectIntParameterValue, UID) == 0x000020, "Member 'FCustomizableObjectIntParameterValue::UID' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectIntParameterValue, ParameterRangeValueNames) == 0x000030, "Member 'FCustomizableObjectIntParameterValue::ParameterRangeValueNames' has a wrong offset!");

struct FCustomizableObjectFloatParameterValue final
{
public:
	class FString                                 ParameterName;
	float                                         ParameterValue;
	uint8                                         Pad_14[0x4];
	class FString                                 UID;
	TArray<float>                                 ParameterRangeValues;
};
static_assert(alignof(FCustomizableObjectFloatParameterValue) == 0x000008, "Wrong alignment on FCustomizableObjectFloatParameterValue");
static_assert(sizeof(FCustomizableObjectFloatParameterValue) == 0x000038, "Wrong size on FCustomizableObjectFloatParameterValue");
static_assert(offsetof(FCustomizableObjectFloatParameterValue, ParameterName) == 0x000000, "Member 'FCustomizableObjectFloatParameterValue::ParameterName' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectFloatParameterValue, ParameterValue) == 0x000010, "Member 'FCustomizableObjectFloatParameterValue::ParameterValue' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectFloatParameterValue, UID) == 0x000018, "Member 'FCustomizableObjectFloatParameterValue::UID' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectFloatParameterValue, ParameterRangeValues) == 0x000028, "Member 'FCustomizableObjectFloatParameterValue::ParameterRangeValues' has a wrong offset!");

struct FAnimBpOverridePhysicsAssetsInfo final
{
public:
	TSoftClassPtr<class UClass>                   AnimInstanceClass;
	TSoftObjectPtr<class UPhysicsAsset>           SourceAsset;
	int32                                         PropertyIndex;
	uint8                                         Pad_54[0x4];
};
static_assert(alignof(FAnimBpOverridePhysicsAssetsInfo) == 0x000008, "Wrong alignment on FAnimBpOverridePhysicsAssetsInfo");
static_assert(sizeof(FAnimBpOverridePhysicsAssetsInfo) == 0x000058, "Wrong size on FAnimBpOverridePhysicsAssetsInfo");
static_assert(offsetof(FAnimBpOverridePhysicsAssetsInfo, AnimInstanceClass) == 0x000000, "Member 'FAnimBpOverridePhysicsAssetsInfo::AnimInstanceClass' has a wrong offset!");
static_assert(offsetof(FAnimBpOverridePhysicsAssetsInfo, SourceAsset) == 0x000028, "Member 'FAnimBpOverridePhysicsAssetsInfo::SourceAsset' has a wrong offset!");
static_assert(offsetof(FAnimBpOverridePhysicsAssetsInfo, PropertyIndex) == 0x000050, "Member 'FAnimBpOverridePhysicsAssetsInfo::PropertyIndex' has a wrong offset!");

struct FCustomizableObjectTextureParameterValue final
{
public:
	class FString                                 ParameterName;
	uint64                                        ParameterValue;
	class FString                                 UID;
	TArray<uint64>                                ParameterRangeValues;
};
static_assert(alignof(FCustomizableObjectTextureParameterValue) == 0x000008, "Wrong alignment on FCustomizableObjectTextureParameterValue");
static_assert(sizeof(FCustomizableObjectTextureParameterValue) == 0x000038, "Wrong size on FCustomizableObjectTextureParameterValue");
static_assert(offsetof(FCustomizableObjectTextureParameterValue, ParameterName) == 0x000000, "Member 'FCustomizableObjectTextureParameterValue::ParameterName' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectTextureParameterValue, ParameterValue) == 0x000010, "Member 'FCustomizableObjectTextureParameterValue::ParameterValue' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectTextureParameterValue, UID) == 0x000018, "Member 'FCustomizableObjectTextureParameterValue::UID' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectTextureParameterValue, ParameterRangeValues) == 0x000028, "Member 'FCustomizableObjectTextureParameterValue::ParameterRangeValues' has a wrong offset!");

struct FCustomizableObjectVectorParameterValue final
{
public:
	class FString                                 ParameterName;
	struct FLinearColor                           ParameterValue;
	class FString                                 UID;
};
static_assert(alignof(FCustomizableObjectVectorParameterValue) == 0x000008, "Wrong alignment on FCustomizableObjectVectorParameterValue");
static_assert(sizeof(FCustomizableObjectVectorParameterValue) == 0x000030, "Wrong size on FCustomizableObjectVectorParameterValue");
static_assert(offsetof(FCustomizableObjectVectorParameterValue, ParameterName) == 0x000000, "Member 'FCustomizableObjectVectorParameterValue::ParameterName' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectVectorParameterValue, ParameterValue) == 0x000010, "Member 'FCustomizableObjectVectorParameterValue::ParameterValue' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectVectorParameterValue, UID) == 0x000020, "Member 'FCustomizableObjectVectorParameterValue::UID' has a wrong offset!");

struct FCustomizableObjectProjector final
{
public:
	struct FVector3f                              Position;
	struct FVector3f                              Direction;
	struct FVector3f                              Up;
	struct FVector3f                              Scale;
	ECustomizableObjectProjectorType              ProjectionType;
	uint8                                         Pad_31[0x3];
	float                                         Angle;
};
static_assert(alignof(FCustomizableObjectProjector) == 0x000004, "Wrong alignment on FCustomizableObjectProjector");
static_assert(sizeof(FCustomizableObjectProjector) == 0x000038, "Wrong size on FCustomizableObjectProjector");
static_assert(offsetof(FCustomizableObjectProjector, Position) == 0x000000, "Member 'FCustomizableObjectProjector::Position' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectProjector, Direction) == 0x00000C, "Member 'FCustomizableObjectProjector::Direction' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectProjector, Up) == 0x000018, "Member 'FCustomizableObjectProjector::Up' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectProjector, Scale) == 0x000024, "Member 'FCustomizableObjectProjector::Scale' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectProjector, ProjectionType) == 0x000030, "Member 'FCustomizableObjectProjector::ProjectionType' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectProjector, Angle) == 0x000034, "Member 'FCustomizableObjectProjector::Angle' has a wrong offset!");

struct FCustomizableObjectProjectorParameterValue final
{
public:
	class FString                                 ParameterName;
	struct FCustomizableObjectProjector           Value;
	class FString                                 UID;
	TArray<struct FCustomizableObjectProjector>   RangeValues;
};
static_assert(alignof(FCustomizableObjectProjectorParameterValue) == 0x000008, "Wrong alignment on FCustomizableObjectProjectorParameterValue");
static_assert(sizeof(FCustomizableObjectProjectorParameterValue) == 0x000068, "Wrong size on FCustomizableObjectProjectorParameterValue");
static_assert(offsetof(FCustomizableObjectProjectorParameterValue, ParameterName) == 0x000000, "Member 'FCustomizableObjectProjectorParameterValue::ParameterName' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectProjectorParameterValue, Value) == 0x000010, "Member 'FCustomizableObjectProjectorParameterValue::Value' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectProjectorParameterValue, UID) == 0x000048, "Member 'FCustomizableObjectProjectorParameterValue::UID' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectProjectorParameterValue, RangeValues) == 0x000058, "Member 'FCustomizableObjectProjectorParameterValue::RangeValues' has a wrong offset!");

struct FProfileParameterDat final
{
public:
	class FString                                 ProfileName;
	TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters;
	TArray<struct FCustomizableObjectIntParameterValue> IntParameters;
	TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters;
	TArray<struct FCustomizableObjectTextureParameterValue> TextureParameters;
	TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters;
	TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters;
};
static_assert(alignof(FProfileParameterDat) == 0x000008, "Wrong alignment on FProfileParameterDat");
static_assert(sizeof(FProfileParameterDat) == 0x000070, "Wrong size on FProfileParameterDat");
static_assert(offsetof(FProfileParameterDat, ProfileName) == 0x000000, "Member 'FProfileParameterDat::ProfileName' has a wrong offset!");
static_assert(offsetof(FProfileParameterDat, BoolParameters) == 0x000010, "Member 'FProfileParameterDat::BoolParameters' has a wrong offset!");
static_assert(offsetof(FProfileParameterDat, IntParameters) == 0x000020, "Member 'FProfileParameterDat::IntParameters' has a wrong offset!");
static_assert(offsetof(FProfileParameterDat, FloatParameters) == 0x000030, "Member 'FProfileParameterDat::FloatParameters' has a wrong offset!");
static_assert(offsetof(FProfileParameterDat, TextureParameters) == 0x000040, "Member 'FProfileParameterDat::TextureParameters' has a wrong offset!");
static_assert(offsetof(FProfileParameterDat, VectorParameters) == 0x000050, "Member 'FProfileParameterDat::VectorParameters' has a wrong offset!");
static_assert(offsetof(FProfileParameterDat, ProjectorParameters) == 0x000060, "Member 'FProfileParameterDat::ProjectorParameters' has a wrong offset!");

struct FMutableParamUIMetadata final
{
public:
	class FString                                 ObjectFriendlyName;
	class FString                                 UISectionName;
	int32                                         UIOrder;
	uint8                                         Pad_24[0x4];
	TSoftObjectPtr<class UTexture2D>              UIThumbnail;
	TMap<class FString, class FString>            ExtraInformation;
	TMap<class FString, TSoftObjectPtr<class UObject>> ExtraAssets;
	float                                         MinimumValue;
	float                                         MaximumValue;
};
static_assert(alignof(FMutableParamUIMetadata) == 0x000008, "Wrong alignment on FMutableParamUIMetadata");
static_assert(sizeof(FMutableParamUIMetadata) == 0x0000F8, "Wrong size on FMutableParamUIMetadata");
static_assert(offsetof(FMutableParamUIMetadata, ObjectFriendlyName) == 0x000000, "Member 'FMutableParamUIMetadata::ObjectFriendlyName' has a wrong offset!");
static_assert(offsetof(FMutableParamUIMetadata, UISectionName) == 0x000010, "Member 'FMutableParamUIMetadata::UISectionName' has a wrong offset!");
static_assert(offsetof(FMutableParamUIMetadata, UIOrder) == 0x000020, "Member 'FMutableParamUIMetadata::UIOrder' has a wrong offset!");
static_assert(offsetof(FMutableParamUIMetadata, UIThumbnail) == 0x000028, "Member 'FMutableParamUIMetadata::UIThumbnail' has a wrong offset!");
static_assert(offsetof(FMutableParamUIMetadata, ExtraInformation) == 0x000050, "Member 'FMutableParamUIMetadata::ExtraInformation' has a wrong offset!");
static_assert(offsetof(FMutableParamUIMetadata, ExtraAssets) == 0x0000A0, "Member 'FMutableParamUIMetadata::ExtraAssets' has a wrong offset!");
static_assert(offsetof(FMutableParamUIMetadata, MinimumValue) == 0x0000F0, "Member 'FMutableParamUIMetadata::MinimumValue' has a wrong offset!");
static_assert(offsetof(FMutableParamUIMetadata, MaximumValue) == 0x0000F4, "Member 'FMutableParamUIMetadata::MaximumValue' has a wrong offset!");

struct FIntegerParameterUIData final
{
public:
	class FString                                 Name;
	struct FMutableParamUIMetadata                ParamUIMetadata;
};
static_assert(alignof(FIntegerParameterUIData) == 0x000008, "Wrong alignment on FIntegerParameterUIData");
static_assert(sizeof(FIntegerParameterUIData) == 0x000108, "Wrong size on FIntegerParameterUIData");
static_assert(offsetof(FIntegerParameterUIData, Name) == 0x000000, "Member 'FIntegerParameterUIData::Name' has a wrong offset!");
static_assert(offsetof(FIntegerParameterUIData, ParamUIMetadata) == 0x000010, "Member 'FIntegerParameterUIData::ParamUIMetadata' has a wrong offset!");

struct FMutableModelParameterValue final
{
public:
	class FString                                 Name;
	int32                                         Value;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FMutableModelParameterValue) == 0x000008, "Wrong alignment on FMutableModelParameterValue");
static_assert(sizeof(FMutableModelParameterValue) == 0x000018, "Wrong size on FMutableModelParameterValue");
static_assert(offsetof(FMutableModelParameterValue, Name) == 0x000000, "Member 'FMutableModelParameterValue::Name' has a wrong offset!");
static_assert(offsetof(FMutableModelParameterValue, Value) == 0x000010, "Member 'FMutableModelParameterValue::Value' has a wrong offset!");

struct FMutableModelParameterProperties final
{
public:
	uint8                                         Pad_0[0x10];
	EMutableParameterType                         Type;
	uint8                                         Pad_11[0x3];
	int32                                         ImageDescriptionCount;
	TArray<struct FMutableModelParameterValue>    PossibleValues;
};
static_assert(alignof(FMutableModelParameterProperties) == 0x000008, "Wrong alignment on FMutableModelParameterProperties");
static_assert(sizeof(FMutableModelParameterProperties) == 0x000028, "Wrong size on FMutableModelParameterProperties");
static_assert(offsetof(FMutableModelParameterProperties, Type) == 0x000010, "Member 'FMutableModelParameterProperties::Type' has a wrong offset!");
static_assert(offsetof(FMutableModelParameterProperties, ImageDescriptionCount) == 0x000014, "Member 'FMutableModelParameterProperties::ImageDescriptionCount' has a wrong offset!");
static_assert(offsetof(FMutableModelParameterProperties, PossibleValues) == 0x000018, "Member 'FMutableModelParameterProperties::PossibleValues' has a wrong offset!");

struct FParameterUIData final
{
public:
	class FString                                 Name;
	struct FMutableParamUIMetadata                ParamUIMetadata;
	EMutableParameterType                         Type;
	uint8                                         Pad_109[0x7];
	TArray<struct FIntegerParameterUIData>        ArrayIntegerParameterOption;
	ECustomizableObjectGroupType                  IntegerParameterGroupType;
	ETextureCompressionStrategy                   TextureCompressionStrategy;
	bool                                          bLiveUpdateMode;
	bool                                          bReuseInstanceTextures;
	uint8                                         Pad_124[0x4];
	TMap<class FString, class FString>            ForcedParameterValues;
};
static_assert(alignof(FParameterUIData) == 0x000008, "Wrong alignment on FParameterUIData");
static_assert(sizeof(FParameterUIData) == 0x000178, "Wrong size on FParameterUIData");
static_assert(offsetof(FParameterUIData, Name) == 0x000000, "Member 'FParameterUIData::Name' has a wrong offset!");
static_assert(offsetof(FParameterUIData, ParamUIMetadata) == 0x000010, "Member 'FParameterUIData::ParamUIMetadata' has a wrong offset!");
static_assert(offsetof(FParameterUIData, Type) == 0x000108, "Member 'FParameterUIData::Type' has a wrong offset!");
static_assert(offsetof(FParameterUIData, ArrayIntegerParameterOption) == 0x000110, "Member 'FParameterUIData::ArrayIntegerParameterOption' has a wrong offset!");
static_assert(offsetof(FParameterUIData, IntegerParameterGroupType) == 0x000120, "Member 'FParameterUIData::IntegerParameterGroupType' has a wrong offset!");
static_assert(offsetof(FParameterUIData, TextureCompressionStrategy) == 0x000121, "Member 'FParameterUIData::TextureCompressionStrategy' has a wrong offset!");
static_assert(offsetof(FParameterUIData, bLiveUpdateMode) == 0x000122, "Member 'FParameterUIData::bLiveUpdateMode' has a wrong offset!");
static_assert(offsetof(FParameterUIData, bReuseInstanceTextures) == 0x000123, "Member 'FParameterUIData::bReuseInstanceTextures' has a wrong offset!");
static_assert(offsetof(FParameterUIData, ForcedParameterValues) == 0x000128, "Member 'FParameterUIData::ForcedParameterValues' has a wrong offset!");

struct FFParameterOptionsTags final
{
public:
	TArray<class FString>                         Tags;
};
static_assert(alignof(FFParameterOptionsTags) == 0x000008, "Wrong alignment on FFParameterOptionsTags");
static_assert(sizeof(FFParameterOptionsTags) == 0x000010, "Wrong size on FFParameterOptionsTags");
static_assert(offsetof(FFParameterOptionsTags, Tags) == 0x000000, "Member 'FFParameterOptionsTags::Tags' has a wrong offset!");

struct FParameterTags final
{
public:
	TArray<class FString>                         Tags;
	TMap<class FString, struct FFParameterOptionsTags> ParameterOptions;
};
static_assert(alignof(FParameterTags) == 0x000008, "Wrong alignment on FParameterTags");
static_assert(sizeof(FParameterTags) == 0x000060, "Wrong size on FParameterTags");
static_assert(offsetof(FParameterTags, Tags) == 0x000000, "Member 'FParameterTags::Tags' has a wrong offset!");
static_assert(offsetof(FParameterTags, ParameterOptions) == 0x000010, "Member 'FParameterTags::ParameterOptions' has a wrong offset!");

struct alignas(0x08) FCompilationOptions final
{
public:
	bool                                          bTextureCompression;
	uint8                                         Pad_1[0x3];
	int32                                         OptimizationLevel;
	bool                                          bUseParallelCompilation;
	bool                                          bUseDiskCompilation;
	uint8                                         Pad_A[0x26];
};
static_assert(alignof(FCompilationOptions) == 0x000008, "Wrong alignment on FCompilationOptions");
static_assert(sizeof(FCompilationOptions) == 0x000030, "Wrong size on FCompilationOptions");
static_assert(offsetof(FCompilationOptions, bTextureCompression) == 0x000000, "Member 'FCompilationOptions::bTextureCompression' has a wrong offset!");
static_assert(offsetof(FCompilationOptions, OptimizationLevel) == 0x000004, "Member 'FCompilationOptions::OptimizationLevel' has a wrong offset!");
static_assert(offsetof(FCompilationOptions, bUseParallelCompilation) == 0x000008, "Member 'FCompilationOptions::bUseParallelCompilation' has a wrong offset!");
static_assert(offsetof(FCompilationOptions, bUseDiskCompilation) == 0x000009, "Member 'FCompilationOptions::bUseDiskCompilation' has a wrong offset!");

struct FMutableModelImageProperties final
{
public:
	class FString                                 TextureParameterName;
	ETextureFilter                                Filter;
	uint8                                         Pad_11[0x3];
	uint8                                         SRGB : 1;
	uint8                                         FlipGreenChannel : 1;
	uint8                                         Pad_15[0x3];
	int32                                         LODBias;
	ETextureGroup                                 LODGroup;
	ETextureAddress                               AddressX;
	ETextureAddress                               AddressY;
	uint8                                         Pad_1F[0x1];
};
static_assert(alignof(FMutableModelImageProperties) == 0x000008, "Wrong alignment on FMutableModelImageProperties");
static_assert(sizeof(FMutableModelImageProperties) == 0x000020, "Wrong size on FMutableModelImageProperties");
static_assert(offsetof(FMutableModelImageProperties, TextureParameterName) == 0x000000, "Member 'FMutableModelImageProperties::TextureParameterName' has a wrong offset!");
static_assert(offsetof(FMutableModelImageProperties, Filter) == 0x000010, "Member 'FMutableModelImageProperties::Filter' has a wrong offset!");
static_assert(offsetof(FMutableModelImageProperties, LODBias) == 0x000018, "Member 'FMutableModelImageProperties::LODBias' has a wrong offset!");
static_assert(offsetof(FMutableModelImageProperties, LODGroup) == 0x00001C, "Member 'FMutableModelImageProperties::LODGroup' has a wrong offset!");
static_assert(offsetof(FMutableModelImageProperties, AddressX) == 0x00001D, "Member 'FMutableModelImageProperties::AddressX' has a wrong offset!");
static_assert(offsetof(FMutableModelImageProperties, AddressY) == 0x00001E, "Member 'FMutableModelImageProperties::AddressY' has a wrong offset!");

struct FMaskOutTexture final
{
public:
	int32                                         SizeX;
	int32                                         SizeY;
	TArray<uint32>                                Data;
};
static_assert(alignof(FMaskOutTexture) == 0x000008, "Wrong alignment on FMaskOutTexture");
static_assert(sizeof(FMaskOutTexture) == 0x000018, "Wrong size on FMaskOutTexture");
static_assert(offsetof(FMaskOutTexture, SizeX) == 0x000000, "Member 'FMaskOutTexture::SizeX' has a wrong offset!");
static_assert(offsetof(FMaskOutTexture, SizeY) == 0x000004, "Member 'FMaskOutTexture::SizeY' has a wrong offset!");
static_assert(offsetof(FMaskOutTexture, Data) == 0x000008, "Member 'FMaskOutTexture::Data' has a wrong offset!");

struct FMorphTargetInfo final
{
public:
	class FName                                   Name;
	int32                                         LodNum;
};
static_assert(alignof(FMorphTargetInfo) == 0x000004, "Wrong alignment on FMorphTargetInfo");
static_assert(sizeof(FMorphTargetInfo) == 0x000008, "Wrong size on FMorphTargetInfo");
static_assert(offsetof(FMorphTargetInfo, Name) == 0x000000, "Member 'FMorphTargetInfo::Name' has a wrong offset!");
static_assert(offsetof(FMorphTargetInfo, LodNum) == 0x000004, "Member 'FMorphTargetInfo::LodNum' has a wrong offset!");

struct FMorphTargetVertexData final
{
public:
	struct FVector3f                              PositionDelta;
	struct FVector3f                              TangentZDelta;
	int32                                         MorphIndex;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(FMorphTargetVertexData) == 0x000004, "Wrong alignment on FMorphTargetVertexData");
static_assert(sizeof(FMorphTargetVertexData) == 0x000020, "Wrong size on FMorphTargetVertexData");
static_assert(offsetof(FMorphTargetVertexData, PositionDelta) == 0x000000, "Member 'FMorphTargetVertexData::PositionDelta' has a wrong offset!");
static_assert(offsetof(FMorphTargetVertexData, TangentZDelta) == 0x00000C, "Member 'FMorphTargetVertexData::TangentZDelta' has a wrong offset!");
static_assert(offsetof(FMorphTargetVertexData, MorphIndex) == 0x000018, "Member 'FMorphTargetVertexData::MorphIndex' has a wrong offset!");

struct FCustomizableObjectMeshToMeshVertData final
{
public:
	float                                         PositionBaryCoordsAndDist[0x4];
	float                                         NormalBaryCoordsAndDist[0x4];
	float                                         TangentBaryCoordsAndDist[0x4];
	uint16                                        SourceMeshVertIndices[0x4];
	float                                         Weight;
	int16                                         SourceAssetIndex;
	int16                                         SourceAssetLodIndex;
};
static_assert(alignof(FCustomizableObjectMeshToMeshVertData) == 0x000004, "Wrong alignment on FCustomizableObjectMeshToMeshVertData");
static_assert(sizeof(FCustomizableObjectMeshToMeshVertData) == 0x000040, "Wrong size on FCustomizableObjectMeshToMeshVertData");
static_assert(offsetof(FCustomizableObjectMeshToMeshVertData, PositionBaryCoordsAndDist) == 0x000000, "Member 'FCustomizableObjectMeshToMeshVertData::PositionBaryCoordsAndDist' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectMeshToMeshVertData, NormalBaryCoordsAndDist) == 0x000010, "Member 'FCustomizableObjectMeshToMeshVertData::NormalBaryCoordsAndDist' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectMeshToMeshVertData, TangentBaryCoordsAndDist) == 0x000020, "Member 'FCustomizableObjectMeshToMeshVertData::TangentBaryCoordsAndDist' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectMeshToMeshVertData, SourceMeshVertIndices) == 0x000030, "Member 'FCustomizableObjectMeshToMeshVertData::SourceMeshVertIndices' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectMeshToMeshVertData, Weight) == 0x000038, "Member 'FCustomizableObjectMeshToMeshVertData::Weight' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectMeshToMeshVertData, SourceAssetIndex) == 0x00003C, "Member 'FCustomizableObjectMeshToMeshVertData::SourceAssetIndex' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectMeshToMeshVertData, SourceAssetLodIndex) == 0x00003E, "Member 'FCustomizableObjectMeshToMeshVertData::SourceAssetLodIndex' has a wrong offset!");

struct FMutableSkinWeightProfileInfo final
{
public:
	class FName                                   Name;
	bool                                          DefaultProfile;
	int8                                          DefaultProfileFromLODIndex;
	uint8                                         Pad_6[0x2];
};
static_assert(alignof(FMutableSkinWeightProfileInfo) == 0x000004, "Wrong alignment on FMutableSkinWeightProfileInfo");
static_assert(sizeof(FMutableSkinWeightProfileInfo) == 0x000008, "Wrong size on FMutableSkinWeightProfileInfo");
static_assert(offsetof(FMutableSkinWeightProfileInfo, Name) == 0x000000, "Member 'FMutableSkinWeightProfileInfo::Name' has a wrong offset!");
static_assert(offsetof(FMutableSkinWeightProfileInfo, DefaultProfile) == 0x000004, "Member 'FMutableSkinWeightProfileInfo::DefaultProfile' has a wrong offset!");
static_assert(offsetof(FMutableSkinWeightProfileInfo, DefaultProfileFromLODIndex) == 0x000005, "Member 'FMutableSkinWeightProfileInfo::DefaultProfileFromLODIndex' has a wrong offset!");

struct FMutableStreamableBlock final
{
public:
	uint16                                        FileIndex;
	uint8                                         Pad_2[0x6];
	uint64                                        Offset;
	uint32                                        Size;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FMutableStreamableBlock) == 0x000008, "Wrong alignment on FMutableStreamableBlock");
static_assert(sizeof(FMutableStreamableBlock) == 0x000018, "Wrong size on FMutableStreamableBlock");
static_assert(offsetof(FMutableStreamableBlock, FileIndex) == 0x000000, "Member 'FMutableStreamableBlock::FileIndex' has a wrong offset!");
static_assert(offsetof(FMutableStreamableBlock, Offset) == 0x000008, "Member 'FMutableStreamableBlock::Offset' has a wrong offset!");
static_assert(offsetof(FMutableStreamableBlock, Size) == 0x000010, "Member 'FMutableStreamableBlock::Size' has a wrong offset!");

struct FMutableRefLODInfo final
{
public:
	float                                         ScreenSize;
	float                                         LODHysteresis;
	bool                                          bSupportUniformlyDistributedSampling;
	bool                                          bAllowCPUAccess;
	uint8                                         Pad_A[0x2];
};
static_assert(alignof(FMutableRefLODInfo) == 0x000004, "Wrong alignment on FMutableRefLODInfo");
static_assert(sizeof(FMutableRefLODInfo) == 0x00000C, "Wrong size on FMutableRefLODInfo");
static_assert(offsetof(FMutableRefLODInfo, ScreenSize) == 0x000000, "Member 'FMutableRefLODInfo::ScreenSize' has a wrong offset!");
static_assert(offsetof(FMutableRefLODInfo, LODHysteresis) == 0x000004, "Member 'FMutableRefLODInfo::LODHysteresis' has a wrong offset!");
static_assert(offsetof(FMutableRefLODInfo, bSupportUniformlyDistributedSampling) == 0x000008, "Member 'FMutableRefLODInfo::bSupportUniformlyDistributedSampling' has a wrong offset!");
static_assert(offsetof(FMutableRefLODInfo, bAllowCPUAccess) == 0x000009, "Member 'FMutableRefLODInfo::bAllowCPUAccess' has a wrong offset!");

struct FMutableRefLODRenderData final
{
public:
	bool                                          bIsLODOptional;
	bool                                          bStreamedDataInlined;
};
static_assert(alignof(FMutableRefLODRenderData) == 0x000001, "Wrong alignment on FMutableRefLODRenderData");
static_assert(sizeof(FMutableRefLODRenderData) == 0x000002, "Wrong size on FMutableRefLODRenderData");
static_assert(offsetof(FMutableRefLODRenderData, bIsLODOptional) == 0x000000, "Member 'FMutableRefLODRenderData::bIsLODOptional' has a wrong offset!");
static_assert(offsetof(FMutableRefLODRenderData, bStreamedDataInlined) == 0x000001, "Member 'FMutableRefLODRenderData::bStreamedDataInlined' has a wrong offset!");

struct FMutableRefLODData final
{
public:
	struct FMutableRefLODInfo                     LODInfo;
	struct FMutableRefLODRenderData               RenderData;
	uint8                                         Pad_E[0x2];
};
static_assert(alignof(FMutableRefLODData) == 0x000004, "Wrong alignment on FMutableRefLODData");
static_assert(sizeof(FMutableRefLODData) == 0x000010, "Wrong size on FMutableRefLODData");
static_assert(offsetof(FMutableRefLODData, LODInfo) == 0x000000, "Member 'FMutableRefLODData::LODInfo' has a wrong offset!");
static_assert(offsetof(FMutableRefLODData, RenderData) == 0x00000C, "Member 'FMutableRefLODData::RenderData' has a wrong offset!");

struct FMutableRefSocket final
{
public:
	class FName                                   SocketName;
	class FName                                   BoneName;
	struct FVector                                RelativeLocation;
	struct FRotator                               RelativeRotation;
	struct FVector                                RelativeScale;
	bool                                          bForceAlwaysAnimated;
	uint8                                         Pad_51[0x3];
	int32                                         Priority;
};
static_assert(alignof(FMutableRefSocket) == 0x000008, "Wrong alignment on FMutableRefSocket");
static_assert(sizeof(FMutableRefSocket) == 0x000058, "Wrong size on FMutableRefSocket");
static_assert(offsetof(FMutableRefSocket, SocketName) == 0x000000, "Member 'FMutableRefSocket::SocketName' has a wrong offset!");
static_assert(offsetof(FMutableRefSocket, BoneName) == 0x000004, "Member 'FMutableRefSocket::BoneName' has a wrong offset!");
static_assert(offsetof(FMutableRefSocket, RelativeLocation) == 0x000008, "Member 'FMutableRefSocket::RelativeLocation' has a wrong offset!");
static_assert(offsetof(FMutableRefSocket, RelativeRotation) == 0x000020, "Member 'FMutableRefSocket::RelativeRotation' has a wrong offset!");
static_assert(offsetof(FMutableRefSocket, RelativeScale) == 0x000038, "Member 'FMutableRefSocket::RelativeScale' has a wrong offset!");
static_assert(offsetof(FMutableRefSocket, bForceAlwaysAnimated) == 0x000050, "Member 'FMutableRefSocket::bForceAlwaysAnimated' has a wrong offset!");
static_assert(offsetof(FMutableRefSocket, Priority) == 0x000054, "Member 'FMutableRefSocket::Priority' has a wrong offset!");

struct FMutableRefSkeletalMeshSettings final
{
public:
	bool                                          bEnablePerPolyCollision;
	uint8                                         Pad_1[0x3];
	float                                         DefaultUVChannelDensity;
};
static_assert(alignof(FMutableRefSkeletalMeshSettings) == 0x000004, "Wrong alignment on FMutableRefSkeletalMeshSettings");
static_assert(sizeof(FMutableRefSkeletalMeshSettings) == 0x000008, "Wrong size on FMutableRefSkeletalMeshSettings");
static_assert(offsetof(FMutableRefSkeletalMeshSettings, bEnablePerPolyCollision) == 0x000000, "Member 'FMutableRefSkeletalMeshSettings::bEnablePerPolyCollision' has a wrong offset!");
static_assert(offsetof(FMutableRefSkeletalMeshSettings, DefaultUVChannelDensity) == 0x000004, "Member 'FMutableRefSkeletalMeshSettings::DefaultUVChannelDensity' has a wrong offset!");

struct FMutableRefAssetUserData final
{
public:
	class UAssetUserData*                         AssetUserData;
};
static_assert(alignof(FMutableRefAssetUserData) == 0x000008, "Wrong alignment on FMutableRefAssetUserData");
static_assert(sizeof(FMutableRefAssetUserData) == 0x000008, "Wrong size on FMutableRefAssetUserData");
static_assert(offsetof(FMutableRefAssetUserData, AssetUserData) == 0x000000, "Member 'FMutableRefAssetUserData::AssetUserData' has a wrong offset!");

struct FMutableRefSkeletalMeshData final
{
public:
	TArray<struct FMutableRefLODData>             LodData;
	TArray<struct FMutableRefSocket>              Sockets;
	struct FBoxSphereBounds                       Bounds;
	struct FMutableRefSkeletalMeshSettings        Settings;
	TSoftObjectPtr<class USkeleton>               Skeleton;
	TSoftObjectPtr<class UPhysicsAsset>           PhysicsAsset;
	TSoftClassPtr<class UClass>                   PostProcessAnimInst;
	TSoftObjectPtr<class UPhysicsAsset>           ShadowPhysicsAsset;
	TArray<struct FMutableRefAssetUserData>       AssetUserData;
};
static_assert(alignof(FMutableRefSkeletalMeshData) == 0x000008, "Wrong alignment on FMutableRefSkeletalMeshData");
static_assert(sizeof(FMutableRefSkeletalMeshData) == 0x000110, "Wrong size on FMutableRefSkeletalMeshData");
static_assert(offsetof(FMutableRefSkeletalMeshData, LodData) == 0x000000, "Member 'FMutableRefSkeletalMeshData::LodData' has a wrong offset!");
static_assert(offsetof(FMutableRefSkeletalMeshData, Sockets) == 0x000010, "Member 'FMutableRefSkeletalMeshData::Sockets' has a wrong offset!");
static_assert(offsetof(FMutableRefSkeletalMeshData, Bounds) == 0x000020, "Member 'FMutableRefSkeletalMeshData::Bounds' has a wrong offset!");
static_assert(offsetof(FMutableRefSkeletalMeshData, Settings) == 0x000058, "Member 'FMutableRefSkeletalMeshData::Settings' has a wrong offset!");
static_assert(offsetof(FMutableRefSkeletalMeshData, Skeleton) == 0x000060, "Member 'FMutableRefSkeletalMeshData::Skeleton' has a wrong offset!");
static_assert(offsetof(FMutableRefSkeletalMeshData, PhysicsAsset) == 0x000088, "Member 'FMutableRefSkeletalMeshData::PhysicsAsset' has a wrong offset!");
static_assert(offsetof(FMutableRefSkeletalMeshData, PostProcessAnimInst) == 0x0000B0, "Member 'FMutableRefSkeletalMeshData::PostProcessAnimInst' has a wrong offset!");
static_assert(offsetof(FMutableRefSkeletalMeshData, ShadowPhysicsAsset) == 0x0000D8, "Member 'FMutableRefSkeletalMeshData::ShadowPhysicsAsset' has a wrong offset!");
static_assert(offsetof(FMutableRefSkeletalMeshData, AssetUserData) == 0x000100, "Member 'FMutableRefSkeletalMeshData::AssetUserData' has a wrong offset!");

struct FMutableLODSettings final
{
public:
	int32                                         NumLODsInRoot;
	int32                                         FirstLODAvailable;
	bool                                          bLODStreamingEnabled;
	uint8                                         Pad_9[0x3];
	uint32                                        NumLODsToStream;
};
static_assert(alignof(FMutableLODSettings) == 0x000004, "Wrong alignment on FMutableLODSettings");
static_assert(sizeof(FMutableLODSettings) == 0x000010, "Wrong size on FMutableLODSettings");
static_assert(offsetof(FMutableLODSettings, NumLODsInRoot) == 0x000000, "Member 'FMutableLODSettings::NumLODsInRoot' has a wrong offset!");
static_assert(offsetof(FMutableLODSettings, FirstLODAvailable) == 0x000004, "Member 'FMutableLODSettings::FirstLODAvailable' has a wrong offset!");
static_assert(offsetof(FMutableLODSettings, bLODStreamingEnabled) == 0x000008, "Member 'FMutableLODSettings::bLODStreamingEnabled' has a wrong offset!");
static_assert(offsetof(FMutableLODSettings, NumLODsToStream) == 0x00000C, "Member 'FMutableLODSettings::NumLODsToStream' has a wrong offset!");

struct FCustomizableObjectIdPair final
{
public:
	class FString                                 CustomizableObjectGroupName;
	class FString                                 CustomizableObjectName;
};
static_assert(alignof(FCustomizableObjectIdPair) == 0x000008, "Wrong alignment on FCustomizableObjectIdPair");
static_assert(sizeof(FCustomizableObjectIdPair) == 0x000020, "Wrong size on FCustomizableObjectIdPair");
static_assert(offsetof(FCustomizableObjectIdPair, CustomizableObjectGroupName) == 0x000000, "Member 'FCustomizableObjectIdPair::CustomizableObjectGroupName' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectIdPair, CustomizableObjectName) == 0x000010, "Member 'FCustomizableObjectIdPair::CustomizableObjectName' has a wrong offset!");

struct FCustomizableObjectIdentifier final
{
public:
	class FString                                 CustomizableObjectGroupName;
	class FString                                 CustomizableObjectName;
	class FString                                 Guid;
};
static_assert(alignof(FCustomizableObjectIdentifier) == 0x000008, "Wrong alignment on FCustomizableObjectIdentifier");
static_assert(sizeof(FCustomizableObjectIdentifier) == 0x000030, "Wrong size on FCustomizableObjectIdentifier");
static_assert(offsetof(FCustomizableObjectIdentifier, CustomizableObjectGroupName) == 0x000000, "Member 'FCustomizableObjectIdentifier::CustomizableObjectGroupName' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectIdentifier, CustomizableObjectName) == 0x000010, "Member 'FCustomizableObjectIdentifier::CustomizableObjectName' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectIdentifier, Guid) == 0x000020, "Member 'FCustomizableObjectIdentifier::Guid' has a wrong offset!");

struct alignas(0x08) FMultilayerProjectorLayer
{
public:
	uint8                                         Pad_0[0x80];
};
static_assert(alignof(FMultilayerProjectorLayer) == 0x000008, "Wrong alignment on FMultilayerProjectorLayer");
static_assert(sizeof(FMultilayerProjectorLayer) == 0x000080, "Wrong size on FMultilayerProjectorLayer");

struct FMultilayerProjector final
{
public:
	class FName                                   ParamName;
	uint8                                         Pad_4[0x4];
	TMap<class FName, int32>                      VirtualLayersMapping;
	TMap<class FName, int32>                      VirtualLayersOrder;
	TMap<class FName, struct FMultilayerProjectorLayer> DisableVirtualLayers;
};
static_assert(alignof(FMultilayerProjector) == 0x000008, "Wrong alignment on FMultilayerProjector");
static_assert(sizeof(FMultilayerProjector) == 0x0000F8, "Wrong size on FMultilayerProjector");
static_assert(offsetof(FMultilayerProjector, ParamName) == 0x000000, "Member 'FMultilayerProjector::ParamName' has a wrong offset!");
static_assert(offsetof(FMultilayerProjector, VirtualLayersMapping) == 0x000008, "Member 'FMultilayerProjector::VirtualLayersMapping' has a wrong offset!");
static_assert(offsetof(FMultilayerProjector, VirtualLayersOrder) == 0x000058, "Member 'FMultilayerProjector::VirtualLayersOrder' has a wrong offset!");
static_assert(offsetof(FMultilayerProjector, DisableVirtualLayers) == 0x0000A8, "Member 'FMultilayerProjector::DisableVirtualLayers' has a wrong offset!");

struct FCustomizableObjectInstanceDescriptor final
{
public:
	class UCustomizableObject*                    CustomizableObject;
	TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters;
	TArray<struct FCustomizableObjectIntParameterValue> IntParameters;
	TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters;
	TArray<struct FCustomizableObjectTextureParameterValue> TextureParameters;
	TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters;
	TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters;
	uint8                                         Pad_68[0x70];
	TMap<class FName, struct FMultilayerProjector> MultilayerProjectors;
};
static_assert(alignof(FCustomizableObjectInstanceDescriptor) == 0x000008, "Wrong alignment on FCustomizableObjectInstanceDescriptor");
static_assert(sizeof(FCustomizableObjectInstanceDescriptor) == 0x000128, "Wrong size on FCustomizableObjectInstanceDescriptor");
static_assert(offsetof(FCustomizableObjectInstanceDescriptor, CustomizableObject) == 0x000000, "Member 'FCustomizableObjectInstanceDescriptor::CustomizableObject' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectInstanceDescriptor, BoolParameters) == 0x000008, "Member 'FCustomizableObjectInstanceDescriptor::BoolParameters' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectInstanceDescriptor, IntParameters) == 0x000018, "Member 'FCustomizableObjectInstanceDescriptor::IntParameters' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectInstanceDescriptor, FloatParameters) == 0x000028, "Member 'FCustomizableObjectInstanceDescriptor::FloatParameters' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectInstanceDescriptor, TextureParameters) == 0x000038, "Member 'FCustomizableObjectInstanceDescriptor::TextureParameters' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectInstanceDescriptor, VectorParameters) == 0x000048, "Member 'FCustomizableObjectInstanceDescriptor::VectorParameters' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectInstanceDescriptor, ProjectorParameters) == 0x000058, "Member 'FCustomizableObjectInstanceDescriptor::ProjectorParameters' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectInstanceDescriptor, MultilayerProjectors) == 0x0000D8, "Member 'FCustomizableObjectInstanceDescriptor::MultilayerProjectors' has a wrong offset!");

struct FPendingReleaseSkeletalMeshInfo final
{
public:
	class USkeletalMesh*                          SkeletalMesh;
	double                                        Timestamp;
};
static_assert(alignof(FPendingReleaseSkeletalMeshInfo) == 0x000008, "Wrong alignment on FPendingReleaseSkeletalMeshInfo");
static_assert(sizeof(FPendingReleaseSkeletalMeshInfo) == 0x000010, "Wrong size on FPendingReleaseSkeletalMeshInfo");
static_assert(offsetof(FPendingReleaseSkeletalMeshInfo, SkeletalMesh) == 0x000000, "Member 'FPendingReleaseSkeletalMeshInfo::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(FPendingReleaseSkeletalMeshInfo, Timestamp) == 0x000008, "Member 'FPendingReleaseSkeletalMeshInfo::Timestamp' has a wrong offset!");

struct FMultilayerProjectorVirtualLayer final : public FMultilayerProjectorLayer
{
public:
	uint8                                         Pad_80[0x8];
};
static_assert(alignof(FMultilayerProjectorVirtualLayer) == 0x000008, "Wrong alignment on FMultilayerProjectorVirtualLayer");
static_assert(sizeof(FMultilayerProjectorVirtualLayer) == 0x000088, "Wrong size on FMultilayerProjectorVirtualLayer");

}
