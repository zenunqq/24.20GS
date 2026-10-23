#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Chaos_structs.hpp"

namespace SDK
{

enum class ECollectionAttributeEnum : uint8
{
	Chaos_Active                             = 0,
	Chaos_DynamicState                       = 1,
	Chaos_CollisionGroup                     = 2,
	Chaos_Max                                = 3,
};

enum class ECollectionGroupEnum : uint8
{
	Chaos_Traansform                         = 0,
	Chaos_Max                                = 1,
};

enum class EChaosBreakingSortMethod : uint8
{
	SortNone                                 = 0,
	SortByHighestMass                        = 1,
	SortByHighestSpeed                       = 2,
	SortByNearestFirst                       = 3,
	Count                                    = 4,
	EChaosBreakingSortMethod_MAX             = 5,
};

enum class EChaosCollisionSortMethod : uint8
{
	SortNone                                 = 0,
	SortByHighestMass                        = 1,
	SortByHighestSpeed                       = 2,
	SortByHighestImpulse                     = 3,
	SortByNearestFirst                       = 4,
	Count                                    = 5,
	EChaosCollisionSortMethod_MAX            = 6,
};

enum class EChaosRemovalSortMethod : uint8
{
	SortNone                                 = 0,
	SortByHighestMass                        = 1,
	SortByNearestFirst                       = 2,
	Count                                    = 3,
	EChaosRemovalSortMethod_MAX              = 4,
};

enum class EChaosTrailingSortMethod : uint8
{
	SortNone                                 = 0,
	SortByHighestMass                        = 1,
	SortByHighestSpeed                       = 2,
	SortByNearestFirst                       = 3,
	Count                                    = 4,
	EChaosTrailingSortMethod_MAX             = 5,
};

enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8
{
	HideNone                                 = 0,
	HideWithCollision                        = 1,
	HideSelected                             = 2,
	HideWholeCollection                      = 3,
	HideAll                                  = 4,
	EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5,
};

struct FChaosRemovalEventData final
{
public:
	struct FVector                                Location;
	float                                         Mass;
	int32                                         ParticleIndex;
};
static_assert(alignof(FChaosRemovalEventData) == 0x000008, "Wrong alignment on FChaosRemovalEventData");
static_assert(sizeof(FChaosRemovalEventData) == 0x000020, "Wrong size on FChaosRemovalEventData");
static_assert(offsetof(FChaosRemovalEventData, Location) == 0x000000, "Member 'FChaosRemovalEventData::Location' has a wrong offset!");
static_assert(offsetof(FChaosRemovalEventData, Mass) == 0x000018, "Member 'FChaosRemovalEventData::Mass' has a wrong offset!");
static_assert(offsetof(FChaosRemovalEventData, ParticleIndex) == 0x00001C, "Member 'FChaosRemovalEventData::ParticleIndex' has a wrong offset!");

struct FChaosBreakingEventData final
{
public:
	struct FVector                                Location;
	struct FVector                                Velocity;
	float                                         Mass;
	uint8                                         Pad_34[0x4];
};
static_assert(alignof(FChaosBreakingEventData) == 0x000008, "Wrong alignment on FChaosBreakingEventData");
static_assert(sizeof(FChaosBreakingEventData) == 0x000038, "Wrong size on FChaosBreakingEventData");
static_assert(offsetof(FChaosBreakingEventData, Location) == 0x000000, "Member 'FChaosBreakingEventData::Location' has a wrong offset!");
static_assert(offsetof(FChaosBreakingEventData, Velocity) == 0x000018, "Member 'FChaosBreakingEventData::Velocity' has a wrong offset!");
static_assert(offsetof(FChaosBreakingEventData, Mass) == 0x000030, "Member 'FChaosBreakingEventData::Mass' has a wrong offset!");

struct FGeomComponentCacheParameters final
{
public:
	EGeometryCollectionCacheType                  CacheMode;
	uint8                                         Pad_1[0x7];
	class UGeometryCollectionCache*               TargetCache;
	float                                         ReverseCacheBeginTime;
	bool                                          SaveCollisionData;
	bool                                          DoGenerateCollisionData;
	uint8                                         Pad_16[0x2];
	int32                                         CollisionDataSizeMax;
	bool                                          DoCollisionDataSpatialHash;
	uint8                                         Pad_1D[0x3];
	float                                         CollisionDataSpatialHashRadius;
	int32                                         MaxCollisionPerCell;
	bool                                          SaveBreakingData;
	bool                                          DoGenerateBreakingData;
	uint8                                         Pad_2A[0x2];
	int32                                         BreakingDataSizeMax;
	bool                                          DoBreakingDataSpatialHash;
	uint8                                         Pad_31[0x3];
	float                                         BreakingDataSpatialHashRadius;
	int32                                         MaxBreakingPerCell;
	bool                                          SaveTrailingData;
	bool                                          DoGenerateTrailingData;
	uint8                                         Pad_3E[0x2];
	int32                                         TrailingDataSizeMax;
	float                                         TrailingMinSpeedThreshold;
	float                                         TrailingMinVolumeThreshold;
	uint8                                         Pad_4C[0x4];
};
static_assert(alignof(FGeomComponentCacheParameters) == 0x000008, "Wrong alignment on FGeomComponentCacheParameters");
static_assert(sizeof(FGeomComponentCacheParameters) == 0x000050, "Wrong size on FGeomComponentCacheParameters");
static_assert(offsetof(FGeomComponentCacheParameters, CacheMode) == 0x000000, "Member 'FGeomComponentCacheParameters::CacheMode' has a wrong offset!");
static_assert(offsetof(FGeomComponentCacheParameters, TargetCache) == 0x000008, "Member 'FGeomComponentCacheParameters::TargetCache' has a wrong offset!");
static_assert(offsetof(FGeomComponentCacheParameters, ReverseCacheBeginTime) == 0x000010, "Member 'FGeomComponentCacheParameters::ReverseCacheBeginTime' has a wrong offset!");
static_assert(offsetof(FGeomComponentCacheParameters, SaveCollisionData) == 0x000014, "Member 'FGeomComponentCacheParameters::SaveCollisionData' has a wrong offset!");
static_assert(offsetof(FGeomComponentCacheParameters, DoGenerateCollisionData) == 0x000015, "Member 'FGeomComponentCacheParameters::DoGenerateCollisionData' has a wrong offset!");
static_assert(offsetof(FGeomComponentCacheParameters, CollisionDataSizeMax) == 0x000018, "Member 'FGeomComponentCacheParameters::CollisionDataSizeMax' has a wrong offset!");
static_assert(offsetof(FGeomComponentCacheParameters, DoCollisionDataSpatialHash) == 0x00001C, "Member 'FGeomComponentCacheParameters::DoCollisionDataSpatialHash' has a wrong offset!");
static_assert(offsetof(FGeomComponentCacheParameters, CollisionDataSpatialHashRadius) == 0x000020, "Member 'FGeomComponentCacheParameters::CollisionDataSpatialHashRadius' has a wrong offset!");
static_assert(offsetof(FGeomComponentCacheParameters, MaxCollisionPerCell) == 0x000024, "Member 'FGeomComponentCacheParameters::MaxCollisionPerCell' has a wrong offset!");
static_assert(offsetof(FGeomComponentCacheParameters, SaveBreakingData) == 0x000028, "Member 'FGeomComponentCacheParameters::SaveBreakingData' has a wrong offset!");
static_assert(offsetof(FGeomComponentCacheParameters, DoGenerateBreakingData) == 0x000029, "Member 'FGeomComponentCacheParameters::DoGenerateBreakingData' has a wrong offset!");
static_assert(offsetof(FGeomComponentCacheParameters, BreakingDataSizeMax) == 0x00002C, "Member 'FGeomComponentCacheParameters::BreakingDataSizeMax' has a wrong offset!");
static_assert(offsetof(FGeomComponentCacheParameters, DoBreakingDataSpatialHash) == 0x000030, "Member 'FGeomComponentCacheParameters::DoBreakingDataSpatialHash' has a wrong offset!");
static_assert(offsetof(FGeomComponentCacheParameters, BreakingDataSpatialHashRadius) == 0x000034, "Member 'FGeomComponentCacheParameters::BreakingDataSpatialHashRadius' has a wrong offset!");
static_assert(offsetof(FGeomComponentCacheParameters, MaxBreakingPerCell) == 0x000038, "Member 'FGeomComponentCacheParameters::MaxBreakingPerCell' has a wrong offset!");
static_assert(offsetof(FGeomComponentCacheParameters, SaveTrailingData) == 0x00003C, "Member 'FGeomComponentCacheParameters::SaveTrailingData' has a wrong offset!");
static_assert(offsetof(FGeomComponentCacheParameters, DoGenerateTrailingData) == 0x00003D, "Member 'FGeomComponentCacheParameters::DoGenerateTrailingData' has a wrong offset!");
static_assert(offsetof(FGeomComponentCacheParameters, TrailingDataSizeMax) == 0x000040, "Member 'FGeomComponentCacheParameters::TrailingDataSizeMax' has a wrong offset!");
static_assert(offsetof(FGeomComponentCacheParameters, TrailingMinSpeedThreshold) == 0x000044, "Member 'FGeomComponentCacheParameters::TrailingMinSpeedThreshold' has a wrong offset!");
static_assert(offsetof(FGeomComponentCacheParameters, TrailingMinVolumeThreshold) == 0x000048, "Member 'FGeomComponentCacheParameters::TrailingMinVolumeThreshold' has a wrong offset!");

struct FChaosCollisionEventData final
{
public:
	struct FVector                                Location;
	struct FVector                                Normal;
	struct FVector                                Velocity1;
	struct FVector                                Velocity2;
	float                                         Mass1;
	float                                         Mass2;
	struct FVector                                Impulse;
};
static_assert(alignof(FChaosCollisionEventData) == 0x000008, "Wrong alignment on FChaosCollisionEventData");
static_assert(sizeof(FChaosCollisionEventData) == 0x000080, "Wrong size on FChaosCollisionEventData");
static_assert(offsetof(FChaosCollisionEventData, Location) == 0x000000, "Member 'FChaosCollisionEventData::Location' has a wrong offset!");
static_assert(offsetof(FChaosCollisionEventData, Normal) == 0x000018, "Member 'FChaosCollisionEventData::Normal' has a wrong offset!");
static_assert(offsetof(FChaosCollisionEventData, Velocity1) == 0x000030, "Member 'FChaosCollisionEventData::Velocity1' has a wrong offset!");
static_assert(offsetof(FChaosCollisionEventData, Velocity2) == 0x000048, "Member 'FChaosCollisionEventData::Velocity2' has a wrong offset!");
static_assert(offsetof(FChaosCollisionEventData, Mass1) == 0x000060, "Member 'FChaosCollisionEventData::Mass1' has a wrong offset!");
static_assert(offsetof(FChaosCollisionEventData, Mass2) == 0x000064, "Member 'FChaosCollisionEventData::Mass2' has a wrong offset!");
static_assert(offsetof(FChaosCollisionEventData, Impulse) == 0x000068, "Member 'FChaosCollisionEventData::Impulse' has a wrong offset!");

struct FChaosTrailingEventData final
{
public:
	struct FVector                                Location;
	struct FVector                                Velocity;
	struct FVector                                AngularVelocity;
	float                                         Mass;
	int32                                         ParticleIndex;
};
static_assert(alignof(FChaosTrailingEventData) == 0x000008, "Wrong alignment on FChaosTrailingEventData");
static_assert(sizeof(FChaosTrailingEventData) == 0x000050, "Wrong size on FChaosTrailingEventData");
static_assert(offsetof(FChaosTrailingEventData, Location) == 0x000000, "Member 'FChaosTrailingEventData::Location' has a wrong offset!");
static_assert(offsetof(FChaosTrailingEventData, Velocity) == 0x000018, "Member 'FChaosTrailingEventData::Velocity' has a wrong offset!");
static_assert(offsetof(FChaosTrailingEventData, AngularVelocity) == 0x000030, "Member 'FChaosTrailingEventData::AngularVelocity' has a wrong offset!");
static_assert(offsetof(FChaosTrailingEventData, Mass) == 0x000048, "Member 'FChaosTrailingEventData::Mass' has a wrong offset!");
static_assert(offsetof(FChaosTrailingEventData, ParticleIndex) == 0x00004C, "Member 'FChaosTrailingEventData::ParticleIndex' has a wrong offset!");

struct alignas(0x08) FGeometryCollectionRepData final
{
public:
	uint8                                         Pad_0[0x30];
};
static_assert(alignof(FGeometryCollectionRepData) == 0x000008, "Wrong alignment on FGeometryCollectionRepData");
static_assert(sizeof(FGeometryCollectionRepData) == 0x000030, "Wrong size on FGeometryCollectionRepData");

struct FGeometryCollectionDamagePropagationData final
{
public:
	bool                                          bEnabled;
	uint8                                         Pad_1[0x3];
	float                                         BreakDamagePropagationFactor;
	float                                         ShockDamagePropagationFactor;
};
static_assert(alignof(FGeometryCollectionDamagePropagationData) == 0x000004, "Wrong alignment on FGeometryCollectionDamagePropagationData");
static_assert(sizeof(FGeometryCollectionDamagePropagationData) == 0x00000C, "Wrong size on FGeometryCollectionDamagePropagationData");
static_assert(offsetof(FGeometryCollectionDamagePropagationData, bEnabled) == 0x000000, "Member 'FGeometryCollectionDamagePropagationData::bEnabled' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionDamagePropagationData, BreakDamagePropagationFactor) == 0x000004, "Member 'FGeometryCollectionDamagePropagationData::BreakDamagePropagationFactor' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionDamagePropagationData, ShockDamagePropagationFactor) == 0x000008, "Member 'FGeometryCollectionDamagePropagationData::ShockDamagePropagationFactor' has a wrong offset!");

struct FChaosBreakingEventRequestSettings final
{
public:
	int32                                         MaxNumberOfResults;
	float                                         MinRadius;
	float                                         MinSpeed;
	float                                         MinMass;
	float                                         MaxDistance;
	EChaosBreakingSortMethod                      SortMethod;
	uint8                                         Pad_15[0x3];
};
static_assert(alignof(FChaosBreakingEventRequestSettings) == 0x000004, "Wrong alignment on FChaosBreakingEventRequestSettings");
static_assert(sizeof(FChaosBreakingEventRequestSettings) == 0x000018, "Wrong size on FChaosBreakingEventRequestSettings");
static_assert(offsetof(FChaosBreakingEventRequestSettings, MaxNumberOfResults) == 0x000000, "Member 'FChaosBreakingEventRequestSettings::MaxNumberOfResults' has a wrong offset!");
static_assert(offsetof(FChaosBreakingEventRequestSettings, MinRadius) == 0x000004, "Member 'FChaosBreakingEventRequestSettings::MinRadius' has a wrong offset!");
static_assert(offsetof(FChaosBreakingEventRequestSettings, MinSpeed) == 0x000008, "Member 'FChaosBreakingEventRequestSettings::MinSpeed' has a wrong offset!");
static_assert(offsetof(FChaosBreakingEventRequestSettings, MinMass) == 0x00000C, "Member 'FChaosBreakingEventRequestSettings::MinMass' has a wrong offset!");
static_assert(offsetof(FChaosBreakingEventRequestSettings, MaxDistance) == 0x000010, "Member 'FChaosBreakingEventRequestSettings::MaxDistance' has a wrong offset!");
static_assert(offsetof(FChaosBreakingEventRequestSettings, SortMethod) == 0x000014, "Member 'FChaosBreakingEventRequestSettings::SortMethod' has a wrong offset!");

struct FChaosCollisionEventRequestSettings final
{
public:
	int32                                         MaxNumberResults;
	float                                         MinMass;
	float                                         MinSpeed;
	float                                         MinImpulse;
	float                                         MaxDistance;
	EChaosCollisionSortMethod                     SortMethod;
	uint8                                         Pad_15[0x3];
};
static_assert(alignof(FChaosCollisionEventRequestSettings) == 0x000004, "Wrong alignment on FChaosCollisionEventRequestSettings");
static_assert(sizeof(FChaosCollisionEventRequestSettings) == 0x000018, "Wrong size on FChaosCollisionEventRequestSettings");
static_assert(offsetof(FChaosCollisionEventRequestSettings, MaxNumberResults) == 0x000000, "Member 'FChaosCollisionEventRequestSettings::MaxNumberResults' has a wrong offset!");
static_assert(offsetof(FChaosCollisionEventRequestSettings, MinMass) == 0x000004, "Member 'FChaosCollisionEventRequestSettings::MinMass' has a wrong offset!");
static_assert(offsetof(FChaosCollisionEventRequestSettings, MinSpeed) == 0x000008, "Member 'FChaosCollisionEventRequestSettings::MinSpeed' has a wrong offset!");
static_assert(offsetof(FChaosCollisionEventRequestSettings, MinImpulse) == 0x00000C, "Member 'FChaosCollisionEventRequestSettings::MinImpulse' has a wrong offset!");
static_assert(offsetof(FChaosCollisionEventRequestSettings, MaxDistance) == 0x000010, "Member 'FChaosCollisionEventRequestSettings::MaxDistance' has a wrong offset!");
static_assert(offsetof(FChaosCollisionEventRequestSettings, SortMethod) == 0x000014, "Member 'FChaosCollisionEventRequestSettings::SortMethod' has a wrong offset!");

struct FChaosRemovalEventRequestSettings final
{
public:
	int32                                         MaxNumberOfResults;
	float                                         MinMass;
	float                                         MaxDistance;
	EChaosRemovalSortMethod                       SortMethod;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(FChaosRemovalEventRequestSettings) == 0x000004, "Wrong alignment on FChaosRemovalEventRequestSettings");
static_assert(sizeof(FChaosRemovalEventRequestSettings) == 0x000010, "Wrong size on FChaosRemovalEventRequestSettings");
static_assert(offsetof(FChaosRemovalEventRequestSettings, MaxNumberOfResults) == 0x000000, "Member 'FChaosRemovalEventRequestSettings::MaxNumberOfResults' has a wrong offset!");
static_assert(offsetof(FChaosRemovalEventRequestSettings, MinMass) == 0x000004, "Member 'FChaosRemovalEventRequestSettings::MinMass' has a wrong offset!");
static_assert(offsetof(FChaosRemovalEventRequestSettings, MaxDistance) == 0x000008, "Member 'FChaosRemovalEventRequestSettings::MaxDistance' has a wrong offset!");
static_assert(offsetof(FChaosRemovalEventRequestSettings, SortMethod) == 0x00000C, "Member 'FChaosRemovalEventRequestSettings::SortMethod' has a wrong offset!");

struct FChaosTrailingEventRequestSettings final
{
public:
	int32                                         MaxNumberOfResults;
	float                                         MinMass;
	float                                         MinSpeed;
	float                                         MinAngularSpeed;
	float                                         MaxDistance;
	EChaosTrailingSortMethod                      SortMethod;
	uint8                                         Pad_15[0x3];
};
static_assert(alignof(FChaosTrailingEventRequestSettings) == 0x000004, "Wrong alignment on FChaosTrailingEventRequestSettings");
static_assert(sizeof(FChaosTrailingEventRequestSettings) == 0x000018, "Wrong size on FChaosTrailingEventRequestSettings");
static_assert(offsetof(FChaosTrailingEventRequestSettings, MaxNumberOfResults) == 0x000000, "Member 'FChaosTrailingEventRequestSettings::MaxNumberOfResults' has a wrong offset!");
static_assert(offsetof(FChaosTrailingEventRequestSettings, MinMass) == 0x000004, "Member 'FChaosTrailingEventRequestSettings::MinMass' has a wrong offset!");
static_assert(offsetof(FChaosTrailingEventRequestSettings, MinSpeed) == 0x000008, "Member 'FChaosTrailingEventRequestSettings::MinSpeed' has a wrong offset!");
static_assert(offsetof(FChaosTrailingEventRequestSettings, MinAngularSpeed) == 0x00000C, "Member 'FChaosTrailingEventRequestSettings::MinAngularSpeed' has a wrong offset!");
static_assert(offsetof(FChaosTrailingEventRequestSettings, MaxDistance) == 0x000010, "Member 'FChaosTrailingEventRequestSettings::MaxDistance' has a wrong offset!");
static_assert(offsetof(FChaosTrailingEventRequestSettings, SortMethod) == 0x000014, "Member 'FChaosTrailingEventRequestSettings::SortMethod' has a wrong offset!");

struct FGeometryCollectionDebugDrawWarningMessage final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FGeometryCollectionDebugDrawWarningMessage) == 0x000001, "Wrong alignment on FGeometryCollectionDebugDrawWarningMessage");
static_assert(sizeof(FGeometryCollectionDebugDrawWarningMessage) == 0x000001, "Wrong size on FGeometryCollectionDebugDrawWarningMessage");

struct FGeometryCollectionDebugDrawActorSelectedRigidBody final
{
public:
	int32                                         ID;
	uint8                                         Pad_4[0x4];
	class AChaosSolverActor*                      Solver;
	class AGeometryCollectionActor*               GeometryCollection;
};
static_assert(alignof(FGeometryCollectionDebugDrawActorSelectedRigidBody) == 0x000008, "Wrong alignment on FGeometryCollectionDebugDrawActorSelectedRigidBody");
static_assert(sizeof(FGeometryCollectionDebugDrawActorSelectedRigidBody) == 0x000018, "Wrong size on FGeometryCollectionDebugDrawActorSelectedRigidBody");
static_assert(offsetof(FGeometryCollectionDebugDrawActorSelectedRigidBody, ID) == 0x000000, "Member 'FGeometryCollectionDebugDrawActorSelectedRigidBody::ID' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionDebugDrawActorSelectedRigidBody, Solver) == 0x000008, "Member 'FGeometryCollectionDebugDrawActorSelectedRigidBody::Solver' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionDebugDrawActorSelectedRigidBody, GeometryCollection) == 0x000010, "Member 'FGeometryCollectionDebugDrawActorSelectedRigidBody::GeometryCollection' has a wrong offset!");

struct FGeometryCollectionSource final
{
public:
	struct FSoftObjectPath                        SourceGeometryObject;
	uint8                                         Pad_18[0x8];
	struct FTransform                             LocalTransform;
	TArray<class UMaterialInterface*>             SourceMaterial;
	bool                                          bAddInternalMaterials;
	bool                                          bSplitComponents;
	bool                                          bSetInternalFromMaterialIndex;
	uint8                                         Pad_93[0xD];
};
static_assert(alignof(FGeometryCollectionSource) == 0x000010, "Wrong alignment on FGeometryCollectionSource");
static_assert(sizeof(FGeometryCollectionSource) == 0x0000A0, "Wrong size on FGeometryCollectionSource");
static_assert(offsetof(FGeometryCollectionSource, SourceGeometryObject) == 0x000000, "Member 'FGeometryCollectionSource::SourceGeometryObject' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionSource, LocalTransform) == 0x000020, "Member 'FGeometryCollectionSource::LocalTransform' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionSource, SourceMaterial) == 0x000080, "Member 'FGeometryCollectionSource::SourceMaterial' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionSource, bAddInternalMaterials) == 0x000090, "Member 'FGeometryCollectionSource::bAddInternalMaterials' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionSource, bSplitComponents) == 0x000091, "Member 'FGeometryCollectionSource::bSplitComponents' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionSource, bSetInternalFromMaterialIndex) == 0x000092, "Member 'FGeometryCollectionSource::bSetInternalFromMaterialIndex' has a wrong offset!");

struct FGeometryCollectionAutoInstanceMesh final
{
public:
	class UStaticMesh*                            Mesh;
	TArray<class UMaterialInterface*>             Materials;
};
static_assert(alignof(FGeometryCollectionAutoInstanceMesh) == 0x000008, "Wrong alignment on FGeometryCollectionAutoInstanceMesh");
static_assert(sizeof(FGeometryCollectionAutoInstanceMesh) == 0x000018, "Wrong size on FGeometryCollectionAutoInstanceMesh");
static_assert(offsetof(FGeometryCollectionAutoInstanceMesh, Mesh) == 0x000000, "Member 'FGeometryCollectionAutoInstanceMesh::Mesh' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionAutoInstanceMesh, Materials) == 0x000008, "Member 'FGeometryCollectionAutoInstanceMesh::Materials' has a wrong offset!");

struct FGeometryCollectionEmbeddedExemplar final
{
public:
	struct FSoftObjectPath                        StaticMeshExemplar;
	float                                         StartCullDistance;
	float                                         EndCullDistance;
	int32                                         InstanceCount;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(FGeometryCollectionEmbeddedExemplar) == 0x000008, "Wrong alignment on FGeometryCollectionEmbeddedExemplar");
static_assert(sizeof(FGeometryCollectionEmbeddedExemplar) == 0x000028, "Wrong size on FGeometryCollectionEmbeddedExemplar");
static_assert(offsetof(FGeometryCollectionEmbeddedExemplar, StaticMeshExemplar) == 0x000000, "Member 'FGeometryCollectionEmbeddedExemplar::StaticMeshExemplar' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionEmbeddedExemplar, StartCullDistance) == 0x000018, "Member 'FGeometryCollectionEmbeddedExemplar::StartCullDistance' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionEmbeddedExemplar, EndCullDistance) == 0x00001C, "Member 'FGeometryCollectionEmbeddedExemplar::EndCullDistance' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionEmbeddedExemplar, InstanceCount) == 0x000020, "Member 'FGeometryCollectionEmbeddedExemplar::InstanceCount' has a wrong offset!");

struct FGeometryCollectionLevelSetData final
{
public:
	int32                                         MinLevelSetResolution;
	int32                                         MaxLevelSetResolution;
	int32                                         MinClusterLevelSetResolution;
	int32                                         MaxClusterLevelSetResolution;
};
static_assert(alignof(FGeometryCollectionLevelSetData) == 0x000004, "Wrong alignment on FGeometryCollectionLevelSetData");
static_assert(sizeof(FGeometryCollectionLevelSetData) == 0x000010, "Wrong size on FGeometryCollectionLevelSetData");
static_assert(offsetof(FGeometryCollectionLevelSetData, MinLevelSetResolution) == 0x000000, "Member 'FGeometryCollectionLevelSetData::MinLevelSetResolution' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionLevelSetData, MaxLevelSetResolution) == 0x000004, "Member 'FGeometryCollectionLevelSetData::MaxLevelSetResolution' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionLevelSetData, MinClusterLevelSetResolution) == 0x000008, "Member 'FGeometryCollectionLevelSetData::MinClusterLevelSetResolution' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionLevelSetData, MaxClusterLevelSetResolution) == 0x00000C, "Member 'FGeometryCollectionLevelSetData::MaxClusterLevelSetResolution' has a wrong offset!");

struct FGeometryCollectionCollisionParticleData final
{
public:
	float                                         CollisionParticlesFraction;
	int32                                         MaximumCollisionParticles;
};
static_assert(alignof(FGeometryCollectionCollisionParticleData) == 0x000004, "Wrong alignment on FGeometryCollectionCollisionParticleData");
static_assert(sizeof(FGeometryCollectionCollisionParticleData) == 0x000008, "Wrong size on FGeometryCollectionCollisionParticleData");
static_assert(offsetof(FGeometryCollectionCollisionParticleData, CollisionParticlesFraction) == 0x000000, "Member 'FGeometryCollectionCollisionParticleData::CollisionParticlesFraction' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionCollisionParticleData, MaximumCollisionParticles) == 0x000004, "Member 'FGeometryCollectionCollisionParticleData::MaximumCollisionParticles' has a wrong offset!");

struct FGeometryCollectionCollisionTypeData final
{
public:
	ECollisionTypeEnum                            CollisionType;
	EImplicitTypeEnum                             ImplicitType;
	uint8                                         Pad_2[0x2];
	struct FGeometryCollectionLevelSetData        LevelSet;
	struct FGeometryCollectionCollisionParticleData CollisionParticles;
	float                                         CollisionObjectReductionPercentage;
	float                                         CollisionMarginFraction;
};
static_assert(alignof(FGeometryCollectionCollisionTypeData) == 0x000004, "Wrong alignment on FGeometryCollectionCollisionTypeData");
static_assert(sizeof(FGeometryCollectionCollisionTypeData) == 0x000024, "Wrong size on FGeometryCollectionCollisionTypeData");
static_assert(offsetof(FGeometryCollectionCollisionTypeData, CollisionType) == 0x000000, "Member 'FGeometryCollectionCollisionTypeData::CollisionType' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionCollisionTypeData, ImplicitType) == 0x000001, "Member 'FGeometryCollectionCollisionTypeData::ImplicitType' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionCollisionTypeData, LevelSet) == 0x000004, "Member 'FGeometryCollectionCollisionTypeData::LevelSet' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionCollisionTypeData, CollisionParticles) == 0x000014, "Member 'FGeometryCollectionCollisionTypeData::CollisionParticles' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionCollisionTypeData, CollisionObjectReductionPercentage) == 0x00001C, "Member 'FGeometryCollectionCollisionTypeData::CollisionObjectReductionPercentage' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionCollisionTypeData, CollisionMarginFraction) == 0x000020, "Member 'FGeometryCollectionCollisionTypeData::CollisionMarginFraction' has a wrong offset!");

struct FGeometryCollectionSizeSpecificData final
{
public:
	float                                         MaxSize;
	uint8                                         Pad_4[0x4];
	TArray<struct FGeometryCollectionCollisionTypeData> CollisionShapes;
	int32                                         DamageThreshold;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(FGeometryCollectionSizeSpecificData) == 0x000008, "Wrong alignment on FGeometryCollectionSizeSpecificData");
static_assert(sizeof(FGeometryCollectionSizeSpecificData) == 0x000020, "Wrong size on FGeometryCollectionSizeSpecificData");
static_assert(offsetof(FGeometryCollectionSizeSpecificData, MaxSize) == 0x000000, "Member 'FGeometryCollectionSizeSpecificData::MaxSize' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionSizeSpecificData, CollisionShapes) == 0x000008, "Member 'FGeometryCollectionSizeSpecificData::CollisionShapes' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionSizeSpecificData, DamageThreshold) == 0x000018, "Member 'FGeometryCollectionSizeSpecificData::DamageThreshold' has a wrong offset!");

struct FGeometryCollectionProxyMeshData final
{
public:
	TArray<class UStaticMesh*>                    ProxyMeshes;
};
static_assert(alignof(FGeometryCollectionProxyMeshData) == 0x000008, "Wrong alignment on FGeometryCollectionProxyMeshData");
static_assert(sizeof(FGeometryCollectionProxyMeshData) == 0x000010, "Wrong size on FGeometryCollectionProxyMeshData");
static_assert(offsetof(FGeometryCollectionProxyMeshData, ProxyMeshes) == 0x000000, "Member 'FGeometryCollectionProxyMeshData::ProxyMeshes' has a wrong offset!");

struct FGeometryCollectionRenderResourceSizeInfo final
{
public:
	uint64                                        MeshResourcesSize;
	uint64                                        NaniteResourcesSize;
};
static_assert(alignof(FGeometryCollectionRenderResourceSizeInfo) == 0x000008, "Wrong alignment on FGeometryCollectionRenderResourceSizeInfo");
static_assert(sizeof(FGeometryCollectionRenderResourceSizeInfo) == 0x000010, "Wrong size on FGeometryCollectionRenderResourceSizeInfo");
static_assert(offsetof(FGeometryCollectionRenderResourceSizeInfo, MeshResourcesSize) == 0x000000, "Member 'FGeometryCollectionRenderResourceSizeInfo::MeshResourcesSize' has a wrong offset!");
static_assert(offsetof(FGeometryCollectionRenderResourceSizeInfo, NaniteResourcesSize) == 0x000008, "Member 'FGeometryCollectionRenderResourceSizeInfo::NaniteResourcesSize' has a wrong offset!");

}
