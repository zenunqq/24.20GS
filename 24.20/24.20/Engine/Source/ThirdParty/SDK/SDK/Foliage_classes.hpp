#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Foliage_structs.hpp"

namespace SDK
{

class UFoliageStatistics final : public UBlueprintFunctionLibrary
{
public:
	static int32 FoliageOverlappingBoxCount(class UObject* WorldContextObject, const class UStaticMesh* StaticMesh, const struct FBox& Box);
	static void FoliageOverlappingBoxTransforms(class UObject* WorldContextObject, const class UStaticMesh* StaticMesh, const struct FBox& Box, TArray<struct FTransform>* OutTransforms);
	static int32 FoliageOverlappingSphereCount(class UObject* WorldContextObject, const class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FoliageStatistics">();
	}
	static class UFoliageStatistics* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFoliageStatistics>();
	}
};
static_assert(alignof(UFoliageStatistics) == 0x000008, "Wrong alignment on UFoliageStatistics");
static_assert(sizeof(UFoliageStatistics) == 0x000028, "Wrong size on UFoliageStatistics");

class UFoliageInstancedStaticMeshComponent final : public UHierarchicalInstancedStaticMeshComponent
{
public:
	TMulticastInlineDelegate<void(int32 InstanceIndex, float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser)> OnInstanceTakePointDamage;
	TMulticastInlineDelegate<void(TArray<int32>& Instances, TArray<float>& Damages, class AController* InstigatedBy, const struct FVector& Origin, float MaxRadius, class UDamageType* DamageType, class AActor* DamageCauser)> OnInstanceTakeRadialDamage;
	bool                                          bEnableDiscardOnLoad;
	uint8                                         Pad_919[0x3];
	struct FGuid                                  GenerationGuid;
	uint8                                         Pad_92C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FoliageInstancedStaticMeshComponent">();
	}
	static class UFoliageInstancedStaticMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFoliageInstancedStaticMeshComponent>();
	}
};
static_assert(alignof(UFoliageInstancedStaticMeshComponent) == 0x000010, "Wrong alignment on UFoliageInstancedStaticMeshComponent");
static_assert(sizeof(UFoliageInstancedStaticMeshComponent) == 0x000930, "Wrong size on UFoliageInstancedStaticMeshComponent");
static_assert(offsetof(UFoliageInstancedStaticMeshComponent, OnInstanceTakePointDamage) == 0x0008F8, "Member 'UFoliageInstancedStaticMeshComponent::OnInstanceTakePointDamage' has a wrong offset!");
static_assert(offsetof(UFoliageInstancedStaticMeshComponent, OnInstanceTakeRadialDamage) == 0x000908, "Member 'UFoliageInstancedStaticMeshComponent::OnInstanceTakeRadialDamage' has a wrong offset!");
static_assert(offsetof(UFoliageInstancedStaticMeshComponent, bEnableDiscardOnLoad) == 0x000918, "Member 'UFoliageInstancedStaticMeshComponent::bEnableDiscardOnLoad' has a wrong offset!");
static_assert(offsetof(UFoliageInstancedStaticMeshComponent, GenerationGuid) == 0x00091C, "Member 'UFoliageInstancedStaticMeshComponent::GenerationGuid' has a wrong offset!");

class UGrassInstancedStaticMeshComponent final : public UHierarchicalInstancedStaticMeshComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GrassInstancedStaticMeshComponent">();
	}
	static class UGrassInstancedStaticMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGrassInstancedStaticMeshComponent>();
	}
};
static_assert(alignof(UGrassInstancedStaticMeshComponent) == 0x000010, "Wrong alignment on UGrassInstancedStaticMeshComponent");
static_assert(sizeof(UGrassInstancedStaticMeshComponent) == 0x000900, "Wrong size on UGrassInstancedStaticMeshComponent");

class UFoliageType : public UObject
{
public:
	struct FGuid                                  UpdateGuid;
	float                                         Density;
	float                                         DensityAdjustmentFactor;
	float                                         Radius;
	bool                                          bSingleInstanceModeOverrideRadius;
	uint8                                         Pad_45[0x3];
	float                                         SingleInstanceModeRadius;
	EFoliageScaling                               Scaling;
	uint8                                         Pad_4D[0x3];
	struct FFloatInterval                         ScaleX;
	struct FFloatInterval                         ScaleY;
	struct FFloatInterval                         ScaleZ;
	struct FFoliageVertexColorChannelMask         VertexColorMaskByChannel[0x4];
	EFoliageVertexColorMask                       VertexColorMask;
	uint8                                         Pad_99[0x3];
	float                                         VertexColorMaskThreshold;
	uint8                                         VertexColorMaskInvert : 1;
	uint8                                         Pad_A1[0x3];
	struct FFloatInterval                         ZOffset;
	uint8                                         AlignToNormal : 1;
	uint8                                         AverageNormal : 1;
	uint8                                         AverageNormalSingleComponent : 1;
	uint8                                         Pad_AD[0x3];
	float                                         AlignMaxAngle;
	uint8                                         RandomYaw : 1;
	uint8                                         Pad_B5[0x3];
	float                                         RandomPitchAngle;
	struct FFloatInterval                         GroundSlopeAngle;
	struct FFloatInterval                         Height;
	uint8                                         Pad_CC[0x4];
	TArray<class FName>                           LandscapeLayers;
	float                                         MinimumLayerWeight;
	uint8                                         Pad_E4[0x4];
	TArray<class FName>                           ExclusionLandscapeLayers;
	float                                         MinimumExclusionLayerWeight;
	class FName                                   LandscapeLayer;
	uint8                                         CollisionWithWorld : 1;
	uint8                                         Pad_101[0x7];
	struct FVector                                CollisionScale;
	int32                                         AverageNormalSampleCount;
	uint8                                         Pad_124[0x4];
	struct FBoxSphereBounds                       MeshBounds;
	struct FVector                                LowBoundOriginRadius;
	EComponentMobility                            Mobility;
	uint8                                         Pad_179[0x3];
	struct FInt32Interval                         CullDistance;
	uint8                                         bEnableStaticLighting : 1;
	uint8                                         CastShadow : 1;
	uint8                                         bAffectDynamicIndirectLighting : 1;
	uint8                                         bAffectDistanceFieldLighting : 1;
	uint8                                         bCastDynamicShadow : 1;
	uint8                                         bCastStaticShadow : 1;
	uint8                                         BitPad_184_6 : 2;
	uint8                                         Pad_185[0x3];
	uint8                                         bCastContactShadow : 1;
	uint8                                         BitPad_188_1 : 7;
	uint8                                         Pad_189[0x3];
	uint8                                         bCastShadowAsTwoSided : 1;
	uint8                                         bReceivesDecals : 1;
	uint8                                         bOverrideLightMapRes : 1;
	uint8                                         Pad_18D[0x3];
	int32                                         OverriddenLightMapRes;
	ELightmapType                                 LightmapType;
	uint8                                         Pad_195[0x3];
	uint8                                         bUseAsOccluder : 1;
	uint8                                         BitPad_198_1 : 7;
	uint8                                         Pad_199[0x3];
	uint8                                         bVisibleInRayTracing : 1;
	uint8                                         bEvaluateWorldPositionOffset : 1;
	uint8                                         Pad_19D[0x3];
	int32                                         WorldPositionOffsetDisableDistance;
	uint8                                         Pad_1A4[0x4];
	struct FBodyInstance                          BodyInstance;
	EHasCustomNavigableGeometry                   CustomNavigableGeometry;
	struct FLightingChannels                      LightingChannels;
	uint8                                         Pad_332[0x2];
	uint8                                         bRenderCustomDepth : 1;
	uint8                                         Pad_335[0x3];
	ERendererStencilMask                          CustomDepthStencilWriteMask;
	uint8                                         Pad_339[0x3];
	int32                                         CustomDepthStencilValue;
	int32                                         TranslucencySortPriority;
	float                                         CollisionRadius;
	float                                         ShadeRadius;
	int32                                         numSteps;
	float                                         InitialSeedDensity;
	float                                         AverageSpreadDistance;
	float                                         SpreadVariance;
	int32                                         SeedsPerStep;
	int32                                         DistributionSeed;
	float                                         MaxInitialSeedOffset;
	bool                                          bCanGrowInShade;
	bool                                          bSpawnsInShade;
	uint8                                         Pad_36A[0x2];
	float                                         MaxInitialAge;
	float                                         MaxAge;
	float                                         OverlapPriority;
	struct FFloatInterval                         ProceduralScale;
	struct FRuntimeFloatCurve                     ScaleCurve;
	struct FFoliageDensityFalloff                 DensityFalloff;
	int32                                         ChangeCount;
	uint8                                         ReapplyDensity : 1;
	uint8                                         ReapplyRadius : 1;
	uint8                                         ReapplyAlignToNormal : 1;
	uint8                                         ReapplyRandomYaw : 1;
	uint8                                         ReapplyScaling : 1;
	uint8                                         ReapplyScaleX : 1;
	uint8                                         ReapplyScaleY : 1;
	uint8                                         ReapplyScaleZ : 1;
	uint8                                         ReapplyRandomPitchAngle : 1;
	uint8                                         ReapplyGroundSlope : 1;
	uint8                                         ReapplyHeight : 1;
	uint8                                         ReapplyLandscapeLayers : 1;
	uint8                                         ReapplyZOffset : 1;
	uint8                                         ReapplyCollisionWithWorld : 1;
	uint8                                         ReapplyVertexColorMask : 1;
	uint8                                         bEnableDensityScaling : 1;
	uint8                                         bEnableDiscardOnLoad : 1;
	uint8                                         bEnableCullDistanceScaling : 1;
	uint8                                         Pad_49F[0x1];
	TArray<class URuntimeVirtualTexture*>         RuntimeVirtualTextures;
	int32                                         VirtualTextureCullMips;
	ERuntimeVirtualTextureMainPassType            VirtualTextureRenderPassType;
	uint8                                         Pad_4B5[0x3];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FoliageType">();
	}
	static class UFoliageType* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFoliageType>();
	}
};
static_assert(alignof(UFoliageType) == 0x000008, "Wrong alignment on UFoliageType");
static_assert(sizeof(UFoliageType) == 0x0004B8, "Wrong size on UFoliageType");
static_assert(offsetof(UFoliageType, UpdateGuid) == 0x000028, "Member 'UFoliageType::UpdateGuid' has a wrong offset!");
static_assert(offsetof(UFoliageType, Density) == 0x000038, "Member 'UFoliageType::Density' has a wrong offset!");
static_assert(offsetof(UFoliageType, DensityAdjustmentFactor) == 0x00003C, "Member 'UFoliageType::DensityAdjustmentFactor' has a wrong offset!");
static_assert(offsetof(UFoliageType, Radius) == 0x000040, "Member 'UFoliageType::Radius' has a wrong offset!");
static_assert(offsetof(UFoliageType, bSingleInstanceModeOverrideRadius) == 0x000044, "Member 'UFoliageType::bSingleInstanceModeOverrideRadius' has a wrong offset!");
static_assert(offsetof(UFoliageType, SingleInstanceModeRadius) == 0x000048, "Member 'UFoliageType::SingleInstanceModeRadius' has a wrong offset!");
static_assert(offsetof(UFoliageType, Scaling) == 0x00004C, "Member 'UFoliageType::Scaling' has a wrong offset!");
static_assert(offsetof(UFoliageType, ScaleX) == 0x000050, "Member 'UFoliageType::ScaleX' has a wrong offset!");
static_assert(offsetof(UFoliageType, ScaleY) == 0x000058, "Member 'UFoliageType::ScaleY' has a wrong offset!");
static_assert(offsetof(UFoliageType, ScaleZ) == 0x000060, "Member 'UFoliageType::ScaleZ' has a wrong offset!");
static_assert(offsetof(UFoliageType, VertexColorMaskByChannel) == 0x000068, "Member 'UFoliageType::VertexColorMaskByChannel' has a wrong offset!");
static_assert(offsetof(UFoliageType, VertexColorMask) == 0x000098, "Member 'UFoliageType::VertexColorMask' has a wrong offset!");
static_assert(offsetof(UFoliageType, VertexColorMaskThreshold) == 0x00009C, "Member 'UFoliageType::VertexColorMaskThreshold' has a wrong offset!");
static_assert(offsetof(UFoliageType, ZOffset) == 0x0000A4, "Member 'UFoliageType::ZOffset' has a wrong offset!");
static_assert(offsetof(UFoliageType, AlignMaxAngle) == 0x0000B0, "Member 'UFoliageType::AlignMaxAngle' has a wrong offset!");
static_assert(offsetof(UFoliageType, RandomPitchAngle) == 0x0000B8, "Member 'UFoliageType::RandomPitchAngle' has a wrong offset!");
static_assert(offsetof(UFoliageType, GroundSlopeAngle) == 0x0000BC, "Member 'UFoliageType::GroundSlopeAngle' has a wrong offset!");
static_assert(offsetof(UFoliageType, Height) == 0x0000C4, "Member 'UFoliageType::Height' has a wrong offset!");
static_assert(offsetof(UFoliageType, LandscapeLayers) == 0x0000D0, "Member 'UFoliageType::LandscapeLayers' has a wrong offset!");
static_assert(offsetof(UFoliageType, MinimumLayerWeight) == 0x0000E0, "Member 'UFoliageType::MinimumLayerWeight' has a wrong offset!");
static_assert(offsetof(UFoliageType, ExclusionLandscapeLayers) == 0x0000E8, "Member 'UFoliageType::ExclusionLandscapeLayers' has a wrong offset!");
static_assert(offsetof(UFoliageType, MinimumExclusionLayerWeight) == 0x0000F8, "Member 'UFoliageType::MinimumExclusionLayerWeight' has a wrong offset!");
static_assert(offsetof(UFoliageType, LandscapeLayer) == 0x0000FC, "Member 'UFoliageType::LandscapeLayer' has a wrong offset!");
static_assert(offsetof(UFoliageType, CollisionScale) == 0x000108, "Member 'UFoliageType::CollisionScale' has a wrong offset!");
static_assert(offsetof(UFoliageType, AverageNormalSampleCount) == 0x000120, "Member 'UFoliageType::AverageNormalSampleCount' has a wrong offset!");
static_assert(offsetof(UFoliageType, MeshBounds) == 0x000128, "Member 'UFoliageType::MeshBounds' has a wrong offset!");
static_assert(offsetof(UFoliageType, LowBoundOriginRadius) == 0x000160, "Member 'UFoliageType::LowBoundOriginRadius' has a wrong offset!");
static_assert(offsetof(UFoliageType, Mobility) == 0x000178, "Member 'UFoliageType::Mobility' has a wrong offset!");
static_assert(offsetof(UFoliageType, CullDistance) == 0x00017C, "Member 'UFoliageType::CullDistance' has a wrong offset!");
static_assert(offsetof(UFoliageType, OverriddenLightMapRes) == 0x000190, "Member 'UFoliageType::OverriddenLightMapRes' has a wrong offset!");
static_assert(offsetof(UFoliageType, LightmapType) == 0x000194, "Member 'UFoliageType::LightmapType' has a wrong offset!");
static_assert(offsetof(UFoliageType, WorldPositionOffsetDisableDistance) == 0x0001A0, "Member 'UFoliageType::WorldPositionOffsetDisableDistance' has a wrong offset!");
static_assert(offsetof(UFoliageType, BodyInstance) == 0x0001A8, "Member 'UFoliageType::BodyInstance' has a wrong offset!");
static_assert(offsetof(UFoliageType, CustomNavigableGeometry) == 0x000330, "Member 'UFoliageType::CustomNavigableGeometry' has a wrong offset!");
static_assert(offsetof(UFoliageType, LightingChannels) == 0x000331, "Member 'UFoliageType::LightingChannels' has a wrong offset!");
static_assert(offsetof(UFoliageType, CustomDepthStencilWriteMask) == 0x000338, "Member 'UFoliageType::CustomDepthStencilWriteMask' has a wrong offset!");
static_assert(offsetof(UFoliageType, CustomDepthStencilValue) == 0x00033C, "Member 'UFoliageType::CustomDepthStencilValue' has a wrong offset!");
static_assert(offsetof(UFoliageType, TranslucencySortPriority) == 0x000340, "Member 'UFoliageType::TranslucencySortPriority' has a wrong offset!");
static_assert(offsetof(UFoliageType, CollisionRadius) == 0x000344, "Member 'UFoliageType::CollisionRadius' has a wrong offset!");
static_assert(offsetof(UFoliageType, ShadeRadius) == 0x000348, "Member 'UFoliageType::ShadeRadius' has a wrong offset!");
static_assert(offsetof(UFoliageType, numSteps) == 0x00034C, "Member 'UFoliageType::numSteps' has a wrong offset!");
static_assert(offsetof(UFoliageType, InitialSeedDensity) == 0x000350, "Member 'UFoliageType::InitialSeedDensity' has a wrong offset!");
static_assert(offsetof(UFoliageType, AverageSpreadDistance) == 0x000354, "Member 'UFoliageType::AverageSpreadDistance' has a wrong offset!");
static_assert(offsetof(UFoliageType, SpreadVariance) == 0x000358, "Member 'UFoliageType::SpreadVariance' has a wrong offset!");
static_assert(offsetof(UFoliageType, SeedsPerStep) == 0x00035C, "Member 'UFoliageType::SeedsPerStep' has a wrong offset!");
static_assert(offsetof(UFoliageType, DistributionSeed) == 0x000360, "Member 'UFoliageType::DistributionSeed' has a wrong offset!");
static_assert(offsetof(UFoliageType, MaxInitialSeedOffset) == 0x000364, "Member 'UFoliageType::MaxInitialSeedOffset' has a wrong offset!");
static_assert(offsetof(UFoliageType, bCanGrowInShade) == 0x000368, "Member 'UFoliageType::bCanGrowInShade' has a wrong offset!");
static_assert(offsetof(UFoliageType, bSpawnsInShade) == 0x000369, "Member 'UFoliageType::bSpawnsInShade' has a wrong offset!");
static_assert(offsetof(UFoliageType, MaxInitialAge) == 0x00036C, "Member 'UFoliageType::MaxInitialAge' has a wrong offset!");
static_assert(offsetof(UFoliageType, MaxAge) == 0x000370, "Member 'UFoliageType::MaxAge' has a wrong offset!");
static_assert(offsetof(UFoliageType, OverlapPriority) == 0x000374, "Member 'UFoliageType::OverlapPriority' has a wrong offset!");
static_assert(offsetof(UFoliageType, ProceduralScale) == 0x000378, "Member 'UFoliageType::ProceduralScale' has a wrong offset!");
static_assert(offsetof(UFoliageType, ScaleCurve) == 0x000380, "Member 'UFoliageType::ScaleCurve' has a wrong offset!");
static_assert(offsetof(UFoliageType, DensityFalloff) == 0x000408, "Member 'UFoliageType::DensityFalloff' has a wrong offset!");
static_assert(offsetof(UFoliageType, ChangeCount) == 0x000498, "Member 'UFoliageType::ChangeCount' has a wrong offset!");
static_assert(offsetof(UFoliageType, RuntimeVirtualTextures) == 0x0004A0, "Member 'UFoliageType::RuntimeVirtualTextures' has a wrong offset!");
static_assert(offsetof(UFoliageType, VirtualTextureCullMips) == 0x0004B0, "Member 'UFoliageType::VirtualTextureCullMips' has a wrong offset!");
static_assert(offsetof(UFoliageType, VirtualTextureRenderPassType) == 0x0004B4, "Member 'UFoliageType::VirtualTextureRenderPassType' has a wrong offset!");

class UFoliageType_Actor final : public UFoliageType
{
public:
	TSubclassOf<class AActor>                     ActorClass;
	bool                                          bShouldAttachToBaseComponent;
	bool                                          bStaticMeshOnly;
	uint8                                         Pad_4C2[0x6];
	TSubclassOf<class UFoliageInstancedStaticMeshComponent> StaticMeshOnlyComponentClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FoliageType_Actor">();
	}
	static class UFoliageType_Actor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFoliageType_Actor>();
	}
};
static_assert(alignof(UFoliageType_Actor) == 0x000008, "Wrong alignment on UFoliageType_Actor");
static_assert(sizeof(UFoliageType_Actor) == 0x0004D0, "Wrong size on UFoliageType_Actor");
static_assert(offsetof(UFoliageType_Actor, ActorClass) == 0x0004B8, "Member 'UFoliageType_Actor::ActorClass' has a wrong offset!");
static_assert(offsetof(UFoliageType_Actor, bShouldAttachToBaseComponent) == 0x0004C0, "Member 'UFoliageType_Actor::bShouldAttachToBaseComponent' has a wrong offset!");
static_assert(offsetof(UFoliageType_Actor, bStaticMeshOnly) == 0x0004C1, "Member 'UFoliageType_Actor::bStaticMeshOnly' has a wrong offset!");
static_assert(offsetof(UFoliageType_Actor, StaticMeshOnlyComponentClass) == 0x0004C8, "Member 'UFoliageType_Actor::StaticMeshOnlyComponentClass' has a wrong offset!");

class UFoliageType_InstancedStaticMesh final : public UFoliageType
{
public:
	class UStaticMesh*                            Mesh;
	TArray<class UMaterialInterface*>             OverrideMaterials;
	TArray<class UMaterialInterface*>             NaniteOverrideMaterials;
	TSubclassOf<class UFoliageInstancedStaticMeshComponent> ComponentClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FoliageType_InstancedStaticMesh">();
	}
	static class UFoliageType_InstancedStaticMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFoliageType_InstancedStaticMesh>();
	}
};
static_assert(alignof(UFoliageType_InstancedStaticMesh) == 0x000008, "Wrong alignment on UFoliageType_InstancedStaticMesh");
static_assert(sizeof(UFoliageType_InstancedStaticMesh) == 0x0004E8, "Wrong size on UFoliageType_InstancedStaticMesh");
static_assert(offsetof(UFoliageType_InstancedStaticMesh, Mesh) == 0x0004B8, "Member 'UFoliageType_InstancedStaticMesh::Mesh' has a wrong offset!");
static_assert(offsetof(UFoliageType_InstancedStaticMesh, OverrideMaterials) == 0x0004C0, "Member 'UFoliageType_InstancedStaticMesh::OverrideMaterials' has a wrong offset!");
static_assert(offsetof(UFoliageType_InstancedStaticMesh, NaniteOverrideMaterials) == 0x0004D0, "Member 'UFoliageType_InstancedStaticMesh::NaniteOverrideMaterials' has a wrong offset!");
static_assert(offsetof(UFoliageType_InstancedStaticMesh, ComponentClass) == 0x0004E0, "Member 'UFoliageType_InstancedStaticMesh::ComponentClass' has a wrong offset!");

class AInstancedFoliageActor final : public AISMPartitionActor
{
public:
	uint8                                         Pad_298[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InstancedFoliageActor">();
	}
	static class AInstancedFoliageActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AInstancedFoliageActor>();
	}
};
static_assert(alignof(AInstancedFoliageActor) == 0x000008, "Wrong alignment on AInstancedFoliageActor");
static_assert(sizeof(AInstancedFoliageActor) == 0x0002E8, "Wrong size on AInstancedFoliageActor");

class UInteractiveFoliageComponent final : public UStaticMeshComponent
{
public:
	uint8                                         Pad_620[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractiveFoliageComponent">();
	}
	static class UInteractiveFoliageComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteractiveFoliageComponent>();
	}
};
static_assert(alignof(UInteractiveFoliageComponent) == 0x000010, "Wrong alignment on UInteractiveFoliageComponent");
static_assert(sizeof(UInteractiveFoliageComponent) == 0x000630, "Wrong size on UInteractiveFoliageComponent");

class AInteractiveFoliageActor final : public AStaticMeshActor
{
public:
	class UCapsuleComponent*                      CapsuleComponent;
	struct FVector                                TouchingActorEntryPosition;
	struct FVector                                FoliageVelocity;
	struct FVector                                FoliageForce;
	struct FVector                                FoliagePosition;
	float                                         FoliageDamageImpulseScale;
	float                                         FoliageTouchImpulseScale;
	float                                         FoliageStiffness;
	float                                         FoliageStiffnessQuadratic;
	float                                         FoliageDamping;
	float                                         MaxDamageImpulse;
	float                                         MaxTouchImpulse;
	float                                         MaxForce;
	float                                         Mass;
	uint8                                         Pad_324[0x4];

public:
	void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractiveFoliageActor">();
	}
	static class AInteractiveFoliageActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AInteractiveFoliageActor>();
	}
};
static_assert(alignof(AInteractiveFoliageActor) == 0x000008, "Wrong alignment on AInteractiveFoliageActor");
static_assert(sizeof(AInteractiveFoliageActor) == 0x000328, "Wrong size on AInteractiveFoliageActor");
static_assert(offsetof(AInteractiveFoliageActor, CapsuleComponent) == 0x000298, "Member 'AInteractiveFoliageActor::CapsuleComponent' has a wrong offset!");
static_assert(offsetof(AInteractiveFoliageActor, TouchingActorEntryPosition) == 0x0002A0, "Member 'AInteractiveFoliageActor::TouchingActorEntryPosition' has a wrong offset!");
static_assert(offsetof(AInteractiveFoliageActor, FoliageVelocity) == 0x0002B8, "Member 'AInteractiveFoliageActor::FoliageVelocity' has a wrong offset!");
static_assert(offsetof(AInteractiveFoliageActor, FoliageForce) == 0x0002D0, "Member 'AInteractiveFoliageActor::FoliageForce' has a wrong offset!");
static_assert(offsetof(AInteractiveFoliageActor, FoliagePosition) == 0x0002E8, "Member 'AInteractiveFoliageActor::FoliagePosition' has a wrong offset!");
static_assert(offsetof(AInteractiveFoliageActor, FoliageDamageImpulseScale) == 0x000300, "Member 'AInteractiveFoliageActor::FoliageDamageImpulseScale' has a wrong offset!");
static_assert(offsetof(AInteractiveFoliageActor, FoliageTouchImpulseScale) == 0x000304, "Member 'AInteractiveFoliageActor::FoliageTouchImpulseScale' has a wrong offset!");
static_assert(offsetof(AInteractiveFoliageActor, FoliageStiffness) == 0x000308, "Member 'AInteractiveFoliageActor::FoliageStiffness' has a wrong offset!");
static_assert(offsetof(AInteractiveFoliageActor, FoliageStiffnessQuadratic) == 0x00030C, "Member 'AInteractiveFoliageActor::FoliageStiffnessQuadratic' has a wrong offset!");
static_assert(offsetof(AInteractiveFoliageActor, FoliageDamping) == 0x000310, "Member 'AInteractiveFoliageActor::FoliageDamping' has a wrong offset!");
static_assert(offsetof(AInteractiveFoliageActor, MaxDamageImpulse) == 0x000314, "Member 'AInteractiveFoliageActor::MaxDamageImpulse' has a wrong offset!");
static_assert(offsetof(AInteractiveFoliageActor, MaxTouchImpulse) == 0x000318, "Member 'AInteractiveFoliageActor::MaxTouchImpulse' has a wrong offset!");
static_assert(offsetof(AInteractiveFoliageActor, MaxForce) == 0x00031C, "Member 'AInteractiveFoliageActor::MaxForce' has a wrong offset!");
static_assert(offsetof(AInteractiveFoliageActor, Mass) == 0x000320, "Member 'AInteractiveFoliageActor::Mass' has a wrong offset!");

class AProceduralFoliageBlockingVolume final : public AVolume
{
public:
	class AProceduralFoliageVolume*               ProceduralFoliageVolume;
	struct FFoliageDensityFalloff                 DensityFalloff;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralFoliageBlockingVolume">();
	}
	static class AProceduralFoliageBlockingVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProceduralFoliageBlockingVolume>();
	}
};
static_assert(alignof(AProceduralFoliageBlockingVolume) == 0x000008, "Wrong alignment on AProceduralFoliageBlockingVolume");
static_assert(sizeof(AProceduralFoliageBlockingVolume) == 0x000358, "Wrong size on AProceduralFoliageBlockingVolume");
static_assert(offsetof(AProceduralFoliageBlockingVolume, ProceduralFoliageVolume) == 0x0002C0, "Member 'AProceduralFoliageBlockingVolume::ProceduralFoliageVolume' has a wrong offset!");
static_assert(offsetof(AProceduralFoliageBlockingVolume, DensityFalloff) == 0x0002C8, "Member 'AProceduralFoliageBlockingVolume::DensityFalloff' has a wrong offset!");

class UProceduralFoliageComponent : public UActorComponent
{
public:
	class UProceduralFoliageSpawner*              FoliageSpawner;
	float                                         TileOverlap;
	uint8                                         Pad_AC[0x4];
	class AVolume*                                SpawningVolume;
	struct FGuid                                  ProceduralGuid;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralFoliageComponent">();
	}
	static class UProceduralFoliageComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralFoliageComponent>();
	}
};
static_assert(alignof(UProceduralFoliageComponent) == 0x000008, "Wrong alignment on UProceduralFoliageComponent");
static_assert(sizeof(UProceduralFoliageComponent) == 0x0000C8, "Wrong size on UProceduralFoliageComponent");
static_assert(offsetof(UProceduralFoliageComponent, FoliageSpawner) == 0x0000A0, "Member 'UProceduralFoliageComponent::FoliageSpawner' has a wrong offset!");
static_assert(offsetof(UProceduralFoliageComponent, TileOverlap) == 0x0000A8, "Member 'UProceduralFoliageComponent::TileOverlap' has a wrong offset!");
static_assert(offsetof(UProceduralFoliageComponent, SpawningVolume) == 0x0000B0, "Member 'UProceduralFoliageComponent::SpawningVolume' has a wrong offset!");
static_assert(offsetof(UProceduralFoliageComponent, ProceduralGuid) == 0x0000B8, "Member 'UProceduralFoliageComponent::ProceduralGuid' has a wrong offset!");

class UProceduralFoliageSpawner final : public UObject
{
public:
	int32                                         RandomSeed;
	float                                         TileSize;
	int32                                         NumUniqueTiles;
	float                                         MinimumQuadTreeSize;
	uint8                                         Pad_38[0x8];
	TArray<struct FFoliageTypeObject>             FoliageTypes;
	uint8                                         Pad_50[0x18];

public:
	void Simulate(int32 numSteps);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralFoliageSpawner">();
	}
	static class UProceduralFoliageSpawner* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralFoliageSpawner>();
	}
};
static_assert(alignof(UProceduralFoliageSpawner) == 0x000008, "Wrong alignment on UProceduralFoliageSpawner");
static_assert(sizeof(UProceduralFoliageSpawner) == 0x000068, "Wrong size on UProceduralFoliageSpawner");
static_assert(offsetof(UProceduralFoliageSpawner, RandomSeed) == 0x000028, "Member 'UProceduralFoliageSpawner::RandomSeed' has a wrong offset!");
static_assert(offsetof(UProceduralFoliageSpawner, TileSize) == 0x00002C, "Member 'UProceduralFoliageSpawner::TileSize' has a wrong offset!");
static_assert(offsetof(UProceduralFoliageSpawner, NumUniqueTiles) == 0x000030, "Member 'UProceduralFoliageSpawner::NumUniqueTiles' has a wrong offset!");
static_assert(offsetof(UProceduralFoliageSpawner, MinimumQuadTreeSize) == 0x000034, "Member 'UProceduralFoliageSpawner::MinimumQuadTreeSize' has a wrong offset!");
static_assert(offsetof(UProceduralFoliageSpawner, FoliageTypes) == 0x000040, "Member 'UProceduralFoliageSpawner::FoliageTypes' has a wrong offset!");

class UProceduralFoliageTile final : public UObject
{
public:
	class UProceduralFoliageSpawner*              FoliageSpawner;
	uint8                                         Pad_30[0xA0];
	TArray<struct FProceduralFoliageInstance>     InstancesArray;
	uint8                                         Pad_E0[0x90];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralFoliageTile">();
	}
	static class UProceduralFoliageTile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralFoliageTile>();
	}
};
static_assert(alignof(UProceduralFoliageTile) == 0x000008, "Wrong alignment on UProceduralFoliageTile");
static_assert(sizeof(UProceduralFoliageTile) == 0x000170, "Wrong size on UProceduralFoliageTile");
static_assert(offsetof(UProceduralFoliageTile, FoliageSpawner) == 0x000028, "Member 'UProceduralFoliageTile::FoliageSpawner' has a wrong offset!");
static_assert(offsetof(UProceduralFoliageTile, InstancesArray) == 0x0000D0, "Member 'UProceduralFoliageTile::InstancesArray' has a wrong offset!");

class AProceduralFoliageVolume final : public AVolume
{
public:
	uint8                                         Pad_2C0[0x8];
	class UProceduralFoliageComponent*            ProceduralComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralFoliageVolume">();
	}
	static class AProceduralFoliageVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProceduralFoliageVolume>();
	}
};
static_assert(alignof(AProceduralFoliageVolume) == 0x000008, "Wrong alignment on AProceduralFoliageVolume");
static_assert(sizeof(AProceduralFoliageVolume) == 0x0002D0, "Wrong size on AProceduralFoliageVolume");
static_assert(offsetof(AProceduralFoliageVolume, ProceduralComponent) == 0x0002C8, "Member 'AProceduralFoliageVolume::ProceduralComponent' has a wrong offset!");

}
