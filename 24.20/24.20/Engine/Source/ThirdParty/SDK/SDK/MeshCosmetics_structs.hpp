#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

struct alignas(0x08) FPartHandleControllers final
{
public:
	uint8                                         Pad_0[0x20];
};
static_assert(alignof(FPartHandleControllers) == 0x000008, "Wrong alignment on FPartHandleControllers");
static_assert(sizeof(FPartHandleControllers) == 0x000020, "Wrong size on FPartHandleControllers");

struct FApparelCustomizableItemReference final
{
public:
	class FString                                 GroupName;
	class FString                                 ValueName;
};
static_assert(alignof(FApparelCustomizableItemReference) == 0x000008, "Wrong alignment on FApparelCustomizableItemReference");
static_assert(sizeof(FApparelCustomizableItemReference) == 0x000020, "Wrong size on FApparelCustomizableItemReference");
static_assert(offsetof(FApparelCustomizableItemReference, GroupName) == 0x000000, "Member 'FApparelCustomizableItemReference::GroupName' has a wrong offset!");
static_assert(offsetof(FApparelCustomizableItemReference, ValueName) == 0x000010, "Member 'FApparelCustomizableItemReference::ValueName' has a wrong offset!");

struct FCustomizableObjectSprayVariantFixedProperties final
{
public:
	struct FVector                                Position;
	struct FVector                                Direction;
	struct FVector                                UpDirection;
	struct FVector                                BaseScale;
	float                                         BaseRotation;
	uint8                                         Pad_64[0x4];
};
static_assert(alignof(FCustomizableObjectSprayVariantFixedProperties) == 0x000008, "Wrong alignment on FCustomizableObjectSprayVariantFixedProperties");
static_assert(sizeof(FCustomizableObjectSprayVariantFixedProperties) == 0x000068, "Wrong size on FCustomizableObjectSprayVariantFixedProperties");
static_assert(offsetof(FCustomizableObjectSprayVariantFixedProperties, Position) == 0x000000, "Member 'FCustomizableObjectSprayVariantFixedProperties::Position' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectSprayVariantFixedProperties, Direction) == 0x000018, "Member 'FCustomizableObjectSprayVariantFixedProperties::Direction' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectSprayVariantFixedProperties, UpDirection) == 0x000030, "Member 'FCustomizableObjectSprayVariantFixedProperties::UpDirection' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectSprayVariantFixedProperties, BaseScale) == 0x000048, "Member 'FCustomizableObjectSprayVariantFixedProperties::BaseScale' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectSprayVariantFixedProperties, BaseRotation) == 0x000060, "Member 'FCustomizableObjectSprayVariantFixedProperties::BaseRotation' has a wrong offset!");

struct FCustomizableObjectSprayVariantSelectablePayload final : public FBaseVariantDef
{
public:
	struct FPrimaryAssetId                        TextureSource;
	float                                         Saturation;
	float                                         Wear;
	float                                         Scale;
	uint8                                         Pad_A4[0x4];
};
static_assert(alignof(FCustomizableObjectSprayVariantSelectablePayload) == 0x000008, "Wrong alignment on FCustomizableObjectSprayVariantSelectablePayload");
static_assert(sizeof(FCustomizableObjectSprayVariantSelectablePayload) == 0x0000A8, "Wrong size on FCustomizableObjectSprayVariantSelectablePayload");
static_assert(offsetof(FCustomizableObjectSprayVariantSelectablePayload, TextureSource) == 0x000090, "Member 'FCustomizableObjectSprayVariantSelectablePayload::TextureSource' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectSprayVariantSelectablePayload, Saturation) == 0x000098, "Member 'FCustomizableObjectSprayVariantSelectablePayload::Saturation' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectSprayVariantSelectablePayload, Wear) == 0x00009C, "Member 'FCustomizableObjectSprayVariantSelectablePayload::Wear' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectSprayVariantSelectablePayload, Scale) == 0x0000A0, "Member 'FCustomizableObjectSprayVariantSelectablePayload::Scale' has a wrong offset!");

struct FCustomizableObjectSprayVariantMCPPayload final
{
public:
	struct FPrimaryAssetId                        TextureAssetID;
	uint16                                        CompactSaturation;
	uint16                                        CompactWear;
	uint16                                        CompactScale;
	uint8                                         Pad_E[0x2];
};
static_assert(alignof(FCustomizableObjectSprayVariantMCPPayload) == 0x000004, "Wrong alignment on FCustomizableObjectSprayVariantMCPPayload");
static_assert(sizeof(FCustomizableObjectSprayVariantMCPPayload) == 0x000010, "Wrong size on FCustomizableObjectSprayVariantMCPPayload");
static_assert(offsetof(FCustomizableObjectSprayVariantMCPPayload, TextureAssetID) == 0x000000, "Member 'FCustomizableObjectSprayVariantMCPPayload::TextureAssetID' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectSprayVariantMCPPayload, CompactSaturation) == 0x000008, "Member 'FCustomizableObjectSprayVariantMCPPayload::CompactSaturation' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectSprayVariantMCPPayload, CompactWear) == 0x00000A, "Member 'FCustomizableObjectSprayVariantMCPPayload::CompactWear' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectSprayVariantMCPPayload, CompactScale) == 0x00000C, "Member 'FCustomizableObjectSprayVariantMCPPayload::CompactScale' has a wrong offset!");

struct FCustomizableObjectSprayVariantPayloadClamps final
{
public:
	struct FFloatRange                            Saturation;
	struct FFloatRange                            Wear;
	struct FFloatRange                            Scale;
};
static_assert(alignof(FCustomizableObjectSprayVariantPayloadClamps) == 0x000004, "Wrong alignment on FCustomizableObjectSprayVariantPayloadClamps");
static_assert(sizeof(FCustomizableObjectSprayVariantPayloadClamps) == 0x000030, "Wrong size on FCustomizableObjectSprayVariantPayloadClamps");
static_assert(offsetof(FCustomizableObjectSprayVariantPayloadClamps, Saturation) == 0x000000, "Member 'FCustomizableObjectSprayVariantPayloadClamps::Saturation' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectSprayVariantPayloadClamps, Wear) == 0x000010, "Member 'FCustomizableObjectSprayVariantPayloadClamps::Wear' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectSprayVariantPayloadClamps, Scale) == 0x000020, "Member 'FCustomizableObjectSprayVariantPayloadClamps::Scale' has a wrong offset!");

struct FCustomizableObjectParamVariantBase
{
public:
	TSoftObjectPtr<class UCustomizableObject>     ObjectToModify;
};
static_assert(alignof(FCustomizableObjectParamVariantBase) == 0x000008, "Wrong alignment on FCustomizableObjectParamVariantBase");
static_assert(sizeof(FCustomizableObjectParamVariantBase) == 0x000028, "Wrong size on FCustomizableObjectParamVariantBase");
static_assert(offsetof(FCustomizableObjectParamVariantBase, ObjectToModify) == 0x000000, "Member 'FCustomizableObjectParamVariantBase::ObjectToModify' has a wrong offset!");

struct FCustomizableObjectValueBase
{
public:
	class FString                                 ParameterName;
	int32                                         RangeIndex;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FCustomizableObjectValueBase) == 0x000008, "Wrong alignment on FCustomizableObjectValueBase");
static_assert(sizeof(FCustomizableObjectValueBase) == 0x000018, "Wrong size on FCustomizableObjectValueBase");
static_assert(offsetof(FCustomizableObjectValueBase, ParameterName) == 0x000000, "Member 'FCustomizableObjectValueBase::ParameterName' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectValueBase, RangeIndex) == 0x000010, "Member 'FCustomizableObjectValueBase::RangeIndex' has a wrong offset!");

struct FCustomizableObjectIntValue final : public FCustomizableObjectValueBase
{
public:
	int32                                         NumericValue;
	uint8                                         Pad_1C[0x4];
	class FString                                 NamedValue;
};
static_assert(alignof(FCustomizableObjectIntValue) == 0x000008, "Wrong alignment on FCustomizableObjectIntValue");
static_assert(sizeof(FCustomizableObjectIntValue) == 0x000030, "Wrong size on FCustomizableObjectIntValue");
static_assert(offsetof(FCustomizableObjectIntValue, NumericValue) == 0x000018, "Member 'FCustomizableObjectIntValue::NumericValue' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectIntValue, NamedValue) == 0x000020, "Member 'FCustomizableObjectIntValue::NamedValue' has a wrong offset!");

struct FCustomizableObjectFloatValue final : public FCustomizableObjectValueBase
{
public:
	float                                         Value;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(FCustomizableObjectFloatValue) == 0x000008, "Wrong alignment on FCustomizableObjectFloatValue");
static_assert(sizeof(FCustomizableObjectFloatValue) == 0x000020, "Wrong size on FCustomizableObjectFloatValue");
static_assert(offsetof(FCustomizableObjectFloatValue, Value) == 0x000018, "Member 'FCustomizableObjectFloatValue::Value' has a wrong offset!");

struct FCustomizableObjectBoolValue final : public FCustomizableObjectValueBase
{
public:
	bool                                          Value;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(FCustomizableObjectBoolValue) == 0x000008, "Wrong alignment on FCustomizableObjectBoolValue");
static_assert(sizeof(FCustomizableObjectBoolValue) == 0x000020, "Wrong size on FCustomizableObjectBoolValue");
static_assert(offsetof(FCustomizableObjectBoolValue, Value) == 0x000018, "Member 'FCustomizableObjectBoolValue::Value' has a wrong offset!");

struct FCustomizableObjectVectorValue final : public FCustomizableObjectValueBase
{
public:
	struct FLinearColor                           Value;
};
static_assert(alignof(FCustomizableObjectVectorValue) == 0x000008, "Wrong alignment on FCustomizableObjectVectorValue");
static_assert(sizeof(FCustomizableObjectVectorValue) == 0x000028, "Wrong size on FCustomizableObjectVectorValue");
static_assert(offsetof(FCustomizableObjectVectorValue, Value) == 0x000018, "Member 'FCustomizableObjectVectorValue::Value' has a wrong offset!");

struct FCustomizableObjectTextureValue final : public FCustomizableObjectValueBase
{
public:
	class UTexture2D*                             Value;
};
static_assert(alignof(FCustomizableObjectTextureValue) == 0x000008, "Wrong alignment on FCustomizableObjectTextureValue");
static_assert(sizeof(FCustomizableObjectTextureValue) == 0x000020, "Wrong size on FCustomizableObjectTextureValue");
static_assert(offsetof(FCustomizableObjectTextureValue, Value) == 0x000018, "Member 'FCustomizableObjectTextureValue::Value' has a wrong offset!");

struct FCustomizableObjectProjectorValue final : public FCustomizableObjectValueBase
{
public:
	struct FVector                                Position;
	struct FVector                                Direction;
	struct FVector                                UpDirection;
	struct FVector                                Scale;
	float                                         Angle;
	uint8                                         Pad_7C[0x4];
};
static_assert(alignof(FCustomizableObjectProjectorValue) == 0x000008, "Wrong alignment on FCustomizableObjectProjectorValue");
static_assert(sizeof(FCustomizableObjectProjectorValue) == 0x000080, "Wrong size on FCustomizableObjectProjectorValue");
static_assert(offsetof(FCustomizableObjectProjectorValue, Position) == 0x000018, "Member 'FCustomizableObjectProjectorValue::Position' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectProjectorValue, Direction) == 0x000030, "Member 'FCustomizableObjectProjectorValue::Direction' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectProjectorValue, UpDirection) == 0x000048, "Member 'FCustomizableObjectProjectorValue::UpDirection' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectProjectorValue, Scale) == 0x000060, "Member 'FCustomizableObjectProjectorValue::Scale' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectProjectorValue, Angle) == 0x000078, "Member 'FCustomizableObjectProjectorValue::Angle' has a wrong offset!");

struct FCustomizableObjectStateValue final : public FCustomizableObjectValueBase
{
public:
	class FString                                 NewState;
};
static_assert(alignof(FCustomizableObjectStateValue) == 0x000008, "Wrong alignment on FCustomizableObjectStateValue");
static_assert(sizeof(FCustomizableObjectStateValue) == 0x000028, "Wrong size on FCustomizableObjectStateValue");
static_assert(offsetof(FCustomizableObjectStateValue, NewState) == 0x000018, "Member 'FCustomizableObjectStateValue::NewState' has a wrong offset!");

struct FCustomizableObjectIntParamVariant final : public FCustomizableObjectParamVariantBase
{
public:
	TArray<struct FCustomizableObjectIntValue>    Parameters;
};
static_assert(alignof(FCustomizableObjectIntParamVariant) == 0x000008, "Wrong alignment on FCustomizableObjectIntParamVariant");
static_assert(sizeof(FCustomizableObjectIntParamVariant) == 0x000038, "Wrong size on FCustomizableObjectIntParamVariant");
static_assert(offsetof(FCustomizableObjectIntParamVariant, Parameters) == 0x000028, "Member 'FCustomizableObjectIntParamVariant::Parameters' has a wrong offset!");

struct FCustomizableObjectFloatParamVariant final : public FCustomizableObjectParamVariantBase
{
public:
	TArray<struct FCustomizableObjectFloatValue>  Parameters;
};
static_assert(alignof(FCustomizableObjectFloatParamVariant) == 0x000008, "Wrong alignment on FCustomizableObjectFloatParamVariant");
static_assert(sizeof(FCustomizableObjectFloatParamVariant) == 0x000038, "Wrong size on FCustomizableObjectFloatParamVariant");
static_assert(offsetof(FCustomizableObjectFloatParamVariant, Parameters) == 0x000028, "Member 'FCustomizableObjectFloatParamVariant::Parameters' has a wrong offset!");

struct FCustomizableObjectBoolParamVariant final : public FCustomizableObjectParamVariantBase
{
public:
	TArray<struct FCustomizableObjectBoolValue>   Parameters;
};
static_assert(alignof(FCustomizableObjectBoolParamVariant) == 0x000008, "Wrong alignment on FCustomizableObjectBoolParamVariant");
static_assert(sizeof(FCustomizableObjectBoolParamVariant) == 0x000038, "Wrong size on FCustomizableObjectBoolParamVariant");
static_assert(offsetof(FCustomizableObjectBoolParamVariant, Parameters) == 0x000028, "Member 'FCustomizableObjectBoolParamVariant::Parameters' has a wrong offset!");

struct FCustomizableObjectVectorParamVariant final : public FCustomizableObjectParamVariantBase
{
public:
	TArray<struct FCustomizableObjectVectorValue> Parameters;
};
static_assert(alignof(FCustomizableObjectVectorParamVariant) == 0x000008, "Wrong alignment on FCustomizableObjectVectorParamVariant");
static_assert(sizeof(FCustomizableObjectVectorParamVariant) == 0x000038, "Wrong size on FCustomizableObjectVectorParamVariant");
static_assert(offsetof(FCustomizableObjectVectorParamVariant, Parameters) == 0x000028, "Member 'FCustomizableObjectVectorParamVariant::Parameters' has a wrong offset!");

struct FCustomizableObjectTextureParamVariant final : public FCustomizableObjectParamVariantBase
{
public:
	TArray<struct FCustomizableObjectTextureValue> Parameters;
};
static_assert(alignof(FCustomizableObjectTextureParamVariant) == 0x000008, "Wrong alignment on FCustomizableObjectTextureParamVariant");
static_assert(sizeof(FCustomizableObjectTextureParamVariant) == 0x000038, "Wrong size on FCustomizableObjectTextureParamVariant");
static_assert(offsetof(FCustomizableObjectTextureParamVariant, Parameters) == 0x000028, "Member 'FCustomizableObjectTextureParamVariant::Parameters' has a wrong offset!");

struct FCustomizableObjectProjectorVariant final : public FCustomizableObjectParamVariantBase
{
public:
	TArray<struct FCustomizableObjectProjectorValue> Parameters;
};
static_assert(alignof(FCustomizableObjectProjectorVariant) == 0x000008, "Wrong alignment on FCustomizableObjectProjectorVariant");
static_assert(sizeof(FCustomizableObjectProjectorVariant) == 0x000038, "Wrong size on FCustomizableObjectProjectorVariant");
static_assert(offsetof(FCustomizableObjectProjectorVariant, Parameters) == 0x000028, "Member 'FCustomizableObjectProjectorVariant::Parameters' has a wrong offset!");

struct FCustomizableObjectMultilayerProjectsVirtualLayer final
{
public:
	bool                                          bModifyEnabled;
	bool                                          bEnabled;
	bool                                          bModifyProjection;
	uint8                                         Pad_3[0x5];
	struct FVector                                Position;
	struct FVector                                Direction;
	struct FVector                                UpDirection;
	struct FVector                                Scale;
	float                                         Angle;
	bool                                          bModifyImage;
	uint8                                         Pad_6D[0x3];
	class FString                                 Image;
	bool                                          bModifyOpacity;
	uint8                                         Pad_81[0x3];
	float                                         Opacity;
	bool                                          bModifyOrder;
	uint8                                         Pad_89[0x3];
	int32                                         Order;
};
static_assert(alignof(FCustomizableObjectMultilayerProjectsVirtualLayer) == 0x000008, "Wrong alignment on FCustomizableObjectMultilayerProjectsVirtualLayer");
static_assert(sizeof(FCustomizableObjectMultilayerProjectsVirtualLayer) == 0x000090, "Wrong size on FCustomizableObjectMultilayerProjectsVirtualLayer");
static_assert(offsetof(FCustomizableObjectMultilayerProjectsVirtualLayer, bModifyEnabled) == 0x000000, "Member 'FCustomizableObjectMultilayerProjectsVirtualLayer::bModifyEnabled' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectMultilayerProjectsVirtualLayer, bEnabled) == 0x000001, "Member 'FCustomizableObjectMultilayerProjectsVirtualLayer::bEnabled' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectMultilayerProjectsVirtualLayer, bModifyProjection) == 0x000002, "Member 'FCustomizableObjectMultilayerProjectsVirtualLayer::bModifyProjection' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectMultilayerProjectsVirtualLayer, Position) == 0x000008, "Member 'FCustomizableObjectMultilayerProjectsVirtualLayer::Position' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectMultilayerProjectsVirtualLayer, Direction) == 0x000020, "Member 'FCustomizableObjectMultilayerProjectsVirtualLayer::Direction' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectMultilayerProjectsVirtualLayer, UpDirection) == 0x000038, "Member 'FCustomizableObjectMultilayerProjectsVirtualLayer::UpDirection' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectMultilayerProjectsVirtualLayer, Scale) == 0x000050, "Member 'FCustomizableObjectMultilayerProjectsVirtualLayer::Scale' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectMultilayerProjectsVirtualLayer, Angle) == 0x000068, "Member 'FCustomizableObjectMultilayerProjectsVirtualLayer::Angle' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectMultilayerProjectsVirtualLayer, bModifyImage) == 0x00006C, "Member 'FCustomizableObjectMultilayerProjectsVirtualLayer::bModifyImage' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectMultilayerProjectsVirtualLayer, Image) == 0x000070, "Member 'FCustomizableObjectMultilayerProjectsVirtualLayer::Image' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectMultilayerProjectsVirtualLayer, bModifyOpacity) == 0x000080, "Member 'FCustomizableObjectMultilayerProjectsVirtualLayer::bModifyOpacity' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectMultilayerProjectsVirtualLayer, Opacity) == 0x000084, "Member 'FCustomizableObjectMultilayerProjectsVirtualLayer::Opacity' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectMultilayerProjectsVirtualLayer, bModifyOrder) == 0x000088, "Member 'FCustomizableObjectMultilayerProjectsVirtualLayer::bModifyOrder' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectMultilayerProjectsVirtualLayer, Order) == 0x00008C, "Member 'FCustomizableObjectMultilayerProjectsVirtualLayer::Order' has a wrong offset!");

struct FCustomizableObjectMultilayerProjectors final
{
public:
	TMap<class FName, struct FCustomizableObjectMultilayerProjectsVirtualLayer> VirtualLayers;
};
static_assert(alignof(FCustomizableObjectMultilayerProjectors) == 0x000008, "Wrong alignment on FCustomizableObjectMultilayerProjectors");
static_assert(sizeof(FCustomizableObjectMultilayerProjectors) == 0x000050, "Wrong size on FCustomizableObjectMultilayerProjectors");
static_assert(offsetof(FCustomizableObjectMultilayerProjectors, VirtualLayers) == 0x000000, "Member 'FCustomizableObjectMultilayerProjectors::VirtualLayers' has a wrong offset!");

struct FCustomizableObjectMultilayerProjectorVariant final : public FCustomizableObjectParamVariantBase
{
public:
	TMap<class FName, struct FCustomizableObjectMultilayerProjectors> MultilayerProjectors;
};
static_assert(alignof(FCustomizableObjectMultilayerProjectorVariant) == 0x000008, "Wrong alignment on FCustomizableObjectMultilayerProjectorVariant");
static_assert(sizeof(FCustomizableObjectMultilayerProjectorVariant) == 0x000078, "Wrong size on FCustomizableObjectMultilayerProjectorVariant");
static_assert(offsetof(FCustomizableObjectMultilayerProjectorVariant, MultilayerProjectors) == 0x000028, "Member 'FCustomizableObjectMultilayerProjectorVariant::MultilayerProjectors' has a wrong offset!");

struct FCustomizableObjectStateVariant final : public FCustomizableObjectParamVariantBase
{
public:
	TArray<struct FCustomizableObjectStateValue>  States;
};
static_assert(alignof(FCustomizableObjectStateVariant) == 0x000008, "Wrong alignment on FCustomizableObjectStateVariant");
static_assert(sizeof(FCustomizableObjectStateVariant) == 0x000038, "Wrong size on FCustomizableObjectStateVariant");
static_assert(offsetof(FCustomizableObjectStateVariant, States) == 0x000028, "Member 'FCustomizableObjectStateVariant::States' has a wrong offset!");

struct FCustomizableObjectParamsVariantDef final : public FBaseVariantDef
{
public:
	TArray<struct FCustomizableObjectIntParamVariant> IntParams;
	TArray<struct FCustomizableObjectFloatParamVariant> FloatParams;
	TArray<struct FCustomizableObjectBoolParamVariant> BoolParams;
	TArray<struct FCustomizableObjectVectorParamVariant> VectorParams;
	TArray<struct FCustomizableObjectTextureParamVariant> TextureParams;
	TArray<struct FCustomizableObjectProjectorVariant> ProjectorParams;
	TArray<struct FCustomizableObjectMultilayerProjectorVariant> MultilayerProjectorParams;
	TArray<struct FCustomizableObjectStateVariant> StateVariants;
};
static_assert(alignof(FCustomizableObjectParamsVariantDef) == 0x000008, "Wrong alignment on FCustomizableObjectParamsVariantDef");
static_assert(sizeof(FCustomizableObjectParamsVariantDef) == 0x000110, "Wrong size on FCustomizableObjectParamsVariantDef");
static_assert(offsetof(FCustomizableObjectParamsVariantDef, IntParams) == 0x000090, "Member 'FCustomizableObjectParamsVariantDef::IntParams' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectParamsVariantDef, FloatParams) == 0x0000A0, "Member 'FCustomizableObjectParamsVariantDef::FloatParams' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectParamsVariantDef, BoolParams) == 0x0000B0, "Member 'FCustomizableObjectParamsVariantDef::BoolParams' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectParamsVariantDef, VectorParams) == 0x0000C0, "Member 'FCustomizableObjectParamsVariantDef::VectorParams' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectParamsVariantDef, TextureParams) == 0x0000D0, "Member 'FCustomizableObjectParamsVariantDef::TextureParams' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectParamsVariantDef, ProjectorParams) == 0x0000E0, "Member 'FCustomizableObjectParamsVariantDef::ProjectorParams' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectParamsVariantDef, MultilayerProjectorParams) == 0x0000F0, "Member 'FCustomizableObjectParamsVariantDef::MultilayerProjectorParams' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectParamsVariantDef, StateVariants) == 0x000100, "Member 'FCustomizableObjectParamsVariantDef::StateVariants' has a wrong offset!");

struct alignas(0x04) FMeshCosmeticsCustomizationPerSlotData final
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FMeshCosmeticsCustomizationPerSlotData) == 0x000004, "Wrong alignment on FMeshCosmeticsCustomizationPerSlotData");
static_assert(sizeof(FMeshCosmeticsCustomizationPerSlotData) == 0x000008, "Wrong size on FMeshCosmeticsCustomizationPerSlotData");

struct alignas(0x08) FMeshCosmeticsCustomizableObjectEntry final
{
public:
	uint8                                         Pad_0[0x160];
};
static_assert(alignof(FMeshCosmeticsCustomizableObjectEntry) == 0x000008, "Wrong alignment on FMeshCosmeticsCustomizableObjectEntry");
static_assert(sizeof(FMeshCosmeticsCustomizableObjectEntry) == 0x000160, "Wrong size on FMeshCosmeticsCustomizableObjectEntry");

struct alignas(0x08) FMeshCosmeticsCustomizationCCV2Data final
{
public:
	uint8                                         Pad_0[0x20];
};
static_assert(alignof(FMeshCosmeticsCustomizationCCV2Data) == 0x000008, "Wrong alignment on FMeshCosmeticsCustomizationCCV2Data");
static_assert(sizeof(FMeshCosmeticsCustomizationCCV2Data) == 0x000020, "Wrong size on FMeshCosmeticsCustomizationCCV2Data");

struct alignas(0x08) FPendingCustomizationComponentsList final
{
public:
	uint8                                         Pad_0[0x30];
};
static_assert(alignof(FPendingCustomizationComponentsList) == 0x000008, "Wrong alignment on FPendingCustomizationComponentsList");
static_assert(sizeof(FPendingCustomizationComponentsList) == 0x000030, "Wrong size on FPendingCustomizationComponentsList");

struct alignas(0x08) FLoadedAthenaCosmeticAssets final
{
public:
	uint8                                         Pad_0[0x20];
};
static_assert(alignof(FLoadedAthenaCosmeticAssets) == 0x000008, "Wrong alignment on FLoadedAthenaCosmeticAssets");
static_assert(sizeof(FLoadedAthenaCosmeticAssets) == 0x000020, "Wrong size on FLoadedAthenaCosmeticAssets");

struct alignas(0x08) FPendingVariantAssetsToLoad final
{
public:
	uint8                                         Pad_0[0x58];
};
static_assert(alignof(FPendingVariantAssetsToLoad) == 0x000008, "Wrong alignment on FPendingVariantAssetsToLoad");
static_assert(sizeof(FPendingVariantAssetsToLoad) == 0x000058, "Wrong size on FPendingVariantAssetsToLoad");

struct FCosmeticSlotSelector final
{
public:
	EFortCustomPartType                           LegacyPartType;
	EAthenaCustomizationCategory                  SourceCategory;
};
static_assert(alignof(FCosmeticSlotSelector) == 0x000001, "Wrong alignment on FCosmeticSlotSelector");
static_assert(sizeof(FCosmeticSlotSelector) == 0x000002, "Wrong size on FCosmeticSlotSelector");
static_assert(offsetof(FCosmeticSlotSelector, LegacyPartType) == 0x000000, "Member 'FCosmeticSlotSelector::LegacyPartType' has a wrong offset!");
static_assert(offsetof(FCosmeticSlotSelector, SourceCategory) == 0x000001, "Member 'FCosmeticSlotSelector::SourceCategory' has a wrong offset!");

struct FSkeletalComponentData final
{
public:
	class UMeshCosmeticsLayoutSchema*             LayoutSchema;
	struct FCosmeticSlotSelector                  Slot;
	uint8                                         Pad_A[0x6];
	class UCustomizableObject*                    CustomizableObject;
};
static_assert(alignof(FSkeletalComponentData) == 0x000008, "Wrong alignment on FSkeletalComponentData");
static_assert(sizeof(FSkeletalComponentData) == 0x000018, "Wrong size on FSkeletalComponentData");
static_assert(offsetof(FSkeletalComponentData, LayoutSchema) == 0x000000, "Member 'FSkeletalComponentData::LayoutSchema' has a wrong offset!");
static_assert(offsetof(FSkeletalComponentData, Slot) == 0x000008, "Member 'FSkeletalComponentData::Slot' has a wrong offset!");
static_assert(offsetof(FSkeletalComponentData, CustomizableObject) == 0x000010, "Member 'FSkeletalComponentData::CustomizableObject' has a wrong offset!");

struct FCosmeticsLayoutSlot final
{
public:
	TSoftObjectPtr<class UCustomizableObject>     SlottedObject;
	int32                                         ComponentIndex;
	struct FCosmeticSlotSelector                  RequiredCosmeticPart;
	uint8                                         Pad_2E[0x2];
	TSoftClassPtr<class UClass>                   ProportionalLayerAnimBP;
	TMap<int32, class FName>                      LinkedAnimGraphTag;
};
static_assert(alignof(FCosmeticsLayoutSlot) == 0x000008, "Wrong alignment on FCosmeticsLayoutSlot");
static_assert(sizeof(FCosmeticsLayoutSlot) == 0x0000A8, "Wrong size on FCosmeticsLayoutSlot");
static_assert(offsetof(FCosmeticsLayoutSlot, SlottedObject) == 0x000000, "Member 'FCosmeticsLayoutSlot::SlottedObject' has a wrong offset!");
static_assert(offsetof(FCosmeticsLayoutSlot, ComponentIndex) == 0x000028, "Member 'FCosmeticsLayoutSlot::ComponentIndex' has a wrong offset!");
static_assert(offsetof(FCosmeticsLayoutSlot, RequiredCosmeticPart) == 0x00002C, "Member 'FCosmeticsLayoutSlot::RequiredCosmeticPart' has a wrong offset!");
static_assert(offsetof(FCosmeticsLayoutSlot, ProportionalLayerAnimBP) == 0x000030, "Member 'FCosmeticsLayoutSlot::ProportionalLayerAnimBP' has a wrong offset!");
static_assert(offsetof(FCosmeticsLayoutSlot, LinkedAnimGraphTag) == 0x000058, "Member 'FCosmeticsLayoutSlot::LinkedAnimGraphTag' has a wrong offset!");

struct FMeshCosmeticsPassDataCommon final
{
public:
	TMap<struct FCosmeticSlotSelector, struct FCosmeticsLayoutSlot> AllSlotDataConfigs;
	TMap<struct FCosmeticSlotSelector, class UMeshCosmeticsLayoutSchema*> ProvidedSlotsToSchemaData;
	TArray<class UAthenaCosmeticItemDefinition*>  MeshCosmeticsItemDefs;
	TArray<class UObject*>                        KeepLoadedObjects;
	TMap<class UCustomizableSkeletalComponent*, struct FSkeletalComponentData> SkeletalComponentData;
};
static_assert(alignof(FMeshCosmeticsPassDataCommon) == 0x000008, "Wrong alignment on FMeshCosmeticsPassDataCommon");
static_assert(sizeof(FMeshCosmeticsPassDataCommon) == 0x000110, "Wrong size on FMeshCosmeticsPassDataCommon");
static_assert(offsetof(FMeshCosmeticsPassDataCommon, AllSlotDataConfigs) == 0x000000, "Member 'FMeshCosmeticsPassDataCommon::AllSlotDataConfigs' has a wrong offset!");
static_assert(offsetof(FMeshCosmeticsPassDataCommon, ProvidedSlotsToSchemaData) == 0x000050, "Member 'FMeshCosmeticsPassDataCommon::ProvidedSlotsToSchemaData' has a wrong offset!");
static_assert(offsetof(FMeshCosmeticsPassDataCommon, MeshCosmeticsItemDefs) == 0x0000A0, "Member 'FMeshCosmeticsPassDataCommon::MeshCosmeticsItemDefs' has a wrong offset!");
static_assert(offsetof(FMeshCosmeticsPassDataCommon, KeepLoadedObjects) == 0x0000B0, "Member 'FMeshCosmeticsPassDataCommon::KeepLoadedObjects' has a wrong offset!");
static_assert(offsetof(FMeshCosmeticsPassDataCommon, SkeletalComponentData) == 0x0000C0, "Member 'FMeshCosmeticsPassDataCommon::SkeletalComponentData' has a wrong offset!");

}
