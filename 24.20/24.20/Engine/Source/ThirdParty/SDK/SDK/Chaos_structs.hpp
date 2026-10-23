#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class ESetMaskConditionType : uint8
{
	Field_Set_Always                         = 0,
	Field_Set_IFF_NOT_Interior               = 1,
	Field_Set_IFF_NOT_Exterior               = 2,
	Field_MaskCondition_Max                  = 3,
	Field_MAX                                = 4,
};

enum class EWaveFunctionType : uint8
{
	Field_Wave_Cosine                        = 0,
	Field_Wave_Gaussian                      = 1,
	Field_Wave_Falloff                       = 2,
	Field_Wave_Decay                         = 3,
	Field_Wave_Max                           = 4,
};

enum class EFieldOperationType : uint8
{
	Field_Multiply                           = 0,
	Field_Divide                             = 1,
	Field_Add                                = 2,
	Field_Substract                          = 3,
	Field_Operation_Max                      = 4,
};

enum class EFieldCullingOperationType : uint8
{
	Field_Culling_Inside                     = 0,
	Field_Culling_Outside                    = 1,
	Field_Culling_Operation_Max              = 2,
	Field_Culling_MAX                        = 3,
};

enum class EFieldResolutionType : uint8
{
	Field_Resolution_Minimal                 = 0,
	Field_Resolution_DisabledParents         = 1,
	Field_Resolution_Maximum                 = 2,
	Field_Resolution_Max                     = 3,
};

enum class EFieldFilterType : uint8
{
	Field_Filter_Dynamic                     = 0,
	Field_Filter_Kinematic                   = 1,
	Field_Filter_Static                      = 2,
	Field_Filter_All                         = 3,
	Field_Filter_Sleeping                    = 4,
	Field_Filter_Disabled                    = 5,
	Field_Filter_Max                         = 6,
};

enum class EFieldObjectType : uint8
{
	Field_Object_Rigid                       = 0,
	Field_Object_Cloth                       = 1,
	Field_Object_Destruction                 = 2,
	Field_Object_Character                   = 3,
	Field_Object_All                         = 4,
	Field_Object_Max                         = 5,
};

enum class EFieldPositionType : uint8
{
	Field_Position_CenterOfMass              = 0,
	Field_Position_PivotPoint                = 1,
	Field_Position_Max                       = 2,
};

enum class EFieldFalloffType : uint8
{
	Field_FallOff_None                       = 0,
	Field_Falloff_Linear                     = 1,
	Field_Falloff_Inverse                    = 2,
	Field_Falloff_Squared                    = 3,
	Field_Falloff_Logarithmic                = 4,
	Field_Falloff_Max                        = 5,
};

enum class EFieldPhysicsType : uint8
{
	Field_None                               = 0,
	Field_DynamicState                       = 1,
	Field_LinearForce                        = 2,
	Field_ExternalClusterStrain              = 3,
	Field_Kill                               = 4,
	Field_LinearVelocity                     = 5,
	Field_AngularVelociy                     = 6,
	Field_AngularTorque                      = 7,
	Field_InternalClusterStrain              = 8,
	Field_DisableThreshold                   = 9,
	Field_SleepingThreshold                  = 10,
	Field_PositionStatic                     = 11,
	Field_PositionAnimated                   = 12,
	Field_PositionTarget                     = 13,
	Field_DynamicConstraint                  = 14,
	Field_CollisionGroup                     = 15,
	Field_ActivateDisabled                   = 16,
	Field_InitialLinearVelocity              = 17,
	Field_InitialAngularVelocity             = 18,
	Field_LinearImpulse                      = 19,
	Field_PhysicsType_Max                    = 20,
};

enum class EFieldVectorType : uint8
{
	Vector_LinearForce                       = 0,
	Vector_LinearVelocity                    = 1,
	Vector_AngularVelocity                   = 2,
	Vector_AngularTorque                     = 3,
	Vector_PositionTarget                    = 4,
	Vector_InitialLinearVelocity             = 5,
	Vector_InitialAngularVelocity            = 6,
	Vector_LinearImpulse                     = 7,
	Vector_TargetMax                         = 8,
	Vector_MAX                               = 9,
};

enum class EFieldScalarType : uint8
{
	Scalar_ExternalClusterStrain             = 0,
	Scalar_Kill                              = 1,
	Scalar_DisableThreshold                  = 2,
	Scalar_SleepingThreshold                 = 3,
	Scalar_InternalClusterStrain             = 4,
	Scalar_DynamicConstraint                 = 5,
	Scalar_TargetMax                         = 6,
	Scalar_MAX                               = 7,
};

enum class EFieldIntegerType : uint8
{
	Integer_DynamicState                     = 0,
	Integer_ActivateDisabled                 = 1,
	Integer_CollisionGroup                   = 2,
	Integer_PositionAnimated                 = 3,
	Integer_PositionStatic                   = 4,
	Integer_TargetMax                        = 5,
	Integer_MAX                              = 6,
};

enum class EFieldOutputType : uint8
{
	Field_Output_Vector                      = 0,
	Field_Output_Scalar                      = 1,
	Field_Output_Integer                     = 2,
	Field_Output_Max                         = 3,
};

enum class EFieldPhysicsDefaultFields : uint8
{
	Field_RadialIntMask                      = 0,
	Field_RadialFalloff                      = 1,
	Field_UniformVector                      = 2,
	Field_RadialVector                       = 3,
	Field_RadialVectorFalloff                = 4,
	Field_EFieldPhysicsDefaultFields_Max     = 5,
};

enum class EConvexOverlapRemoval : uint8
{
	None                                     = 0,
	All                                      = 1,
	OnlyClusters                             = 2,
	OnlyClustersVsClusters                   = 3,
	EConvexOverlapRemoval_MAX                = 4,
};

enum class EProximityMethod : uint8
{
	Precise                                  = 0,
	ConvexHull                               = 1,
	EProximityMethod_MAX                     = 2,
};

enum class EProximityContactMethod : uint8
{
	MinOverlapInProjectionToMajorAxes        = 0,
	EProximityContactMethod_MAX              = 1,
};

enum class ECollisionTypeEnum : uint8
{
	Chaos_Volumetric                         = 0,
	Chaos_Surface_Volumetric                 = 1,
	Chaos_Max                                = 2,
};

enum class EImplicitTypeEnum : uint8
{
	Chaos_Implicit_Box                       = 0,
	Chaos_Implicit_Sphere                    = 1,
	Chaos_Implicit_Capsule                   = 2,
	Chaos_Implicit_LevelSet                  = 3,
	Chaos_Implicit_None                      = 4,
	Chaos_Implicit_Convex                    = 5,
	Chaos_Max                                = 6,
};

enum class EObjectStateTypeEnum : uint8
{
	Chaos_NONE                               = 0,
	Chaos_Object_Sleeping                    = 1,
	Chaos_Object_Kinematic                   = 2,
	Chaos_Object_Static                      = 3,
	Chaos_Object_Dynamic                     = 4,
	Chaos_Object_UserDefined                 = 100,
	Chaos_Max                                = 101,
};

enum class EGeometryCollectionPhysicsTypeEnum : uint8
{
	Chaos_AngularVelocity                    = 0,
	Chaos_DynamicState                       = 1,
	Chaos_LinearVelocity                     = 2,
	Chaos_InitialAngularVelocity             = 3,
	Chaos_InitialLinearVelocity              = 4,
	Chaos_CollisionGroup                     = 5,
	Chaos_LinearForce                        = 6,
	Chaos_AngularTorque                      = 7,
	Chaos_DisableThreshold                   = 8,
	Chaos_SleepingThreshold                  = 9,
	Chaos_ExternalClusterStrain              = 10,
	Chaos_InternalClusterStrain              = 11,
	Chaos_LinearImpulse                      = 12,
	Chaos_Max                                = 13,
};

enum class EInitialVelocityTypeEnum : uint8
{
	Chaos_Initial_Velocity_User_Defined      = 0,
	Chaos_Initial_Velocity_None              = 1,
	Chaos_Max                                = 2,
};

enum class EEmissionPatternTypeEnum : uint8
{
	Chaos_Emission_Pattern_First_Frame       = 0,
	Chaos_Emission_Pattern_On_Demand         = 1,
	Chaos_Max                                = 2,
};

enum class EChaosSolverTickMode : uint8
{
	Fixed                                    = 0,
	Variable                                 = 1,
	VariableCapped                           = 2,
	VariableCappedWithTarget                 = 3,
	EChaosSolverTickMode_MAX                 = 4,
};

enum class EChaosThreadingMode : uint8
{
	DedicatedThread                          = 0,
	TaskGraph                                = 1,
	SingleThread                             = 2,
	Num                                      = 3,
	Invalid                                  = 4,
	EChaosThreadingMode_MAX                  = 5,
};

enum class EChaosBufferMode : uint8
{
	Double                                   = 0,
	Triple                                   = 1,
	Num                                      = 2,
	Invalid                                  = 3,
	EChaosBufferMode_MAX                     = 4,
};

enum class EClusterUnionMethod : uint8
{
	PointImplicit                            = 0,
	DelaunayTriangulation                    = 1,
	MinimalSpanningSubsetDelaunayTriangulation = 2,
	PointImplicitAugmentedWithMinimalDelaunay = 3,
	BoundsOverlapFilteredDelaunayTriangulation = 4,
	None                                     = 5,
	EClusterUnionMethod_MAX                  = 6,
};

enum class EGeometryCollectionCacheType : uint8
{
	None                                     = 0,
	Record                                   = 1,
	Play                                     = 2,
	RecordAndPlay                            = 3,
	EGeometryCollectionCacheType_MAX         = 4,
};

struct alignas(0x08) FClosestPhysicsObjectResult final
{
public:
	uint8                                         Pad_0[0x28];
};
static_assert(alignof(FClosestPhysicsObjectResult) == 0x000008, "Wrong alignment on FClosestPhysicsObjectResult");
static_assert(sizeof(FClosestPhysicsObjectResult) == 0x000028, "Wrong size on FClosestPhysicsObjectResult");

struct FSolverBreakingFilterSettings final
{
public:
	bool                                          FilterEnabled;
	uint8                                         Pad_1[0x3];
	float                                         MinMass;
	float                                         MinSpeed;
	float                                         MinVolume;
};
static_assert(alignof(FSolverBreakingFilterSettings) == 0x000004, "Wrong alignment on FSolverBreakingFilterSettings");
static_assert(sizeof(FSolverBreakingFilterSettings) == 0x000010, "Wrong size on FSolverBreakingFilterSettings");
static_assert(offsetof(FSolverBreakingFilterSettings, FilterEnabled) == 0x000000, "Member 'FSolverBreakingFilterSettings::FilterEnabled' has a wrong offset!");
static_assert(offsetof(FSolverBreakingFilterSettings, MinMass) == 0x000004, "Member 'FSolverBreakingFilterSettings::MinMass' has a wrong offset!");
static_assert(offsetof(FSolverBreakingFilterSettings, MinSpeed) == 0x000008, "Member 'FSolverBreakingFilterSettings::MinSpeed' has a wrong offset!");
static_assert(offsetof(FSolverBreakingFilterSettings, MinVolume) == 0x00000C, "Member 'FSolverBreakingFilterSettings::MinVolume' has a wrong offset!");

struct FSolverCollisionFilterSettings final
{
public:
	bool                                          FilterEnabled;
	uint8                                         Pad_1[0x3];
	float                                         MinMass;
	float                                         MinSpeed;
	float                                         MinImpulse;
};
static_assert(alignof(FSolverCollisionFilterSettings) == 0x000004, "Wrong alignment on FSolverCollisionFilterSettings");
static_assert(sizeof(FSolverCollisionFilterSettings) == 0x000010, "Wrong size on FSolverCollisionFilterSettings");
static_assert(offsetof(FSolverCollisionFilterSettings, FilterEnabled) == 0x000000, "Member 'FSolverCollisionFilterSettings::FilterEnabled' has a wrong offset!");
static_assert(offsetof(FSolverCollisionFilterSettings, MinMass) == 0x000004, "Member 'FSolverCollisionFilterSettings::MinMass' has a wrong offset!");
static_assert(offsetof(FSolverCollisionFilterSettings, MinSpeed) == 0x000008, "Member 'FSolverCollisionFilterSettings::MinSpeed' has a wrong offset!");
static_assert(offsetof(FSolverCollisionFilterSettings, MinImpulse) == 0x00000C, "Member 'FSolverCollisionFilterSettings::MinImpulse' has a wrong offset!");

struct FSolverTrailingFilterSettings final
{
public:
	bool                                          FilterEnabled;
	uint8                                         Pad_1[0x3];
	float                                         MinMass;
	float                                         MinSpeed;
	float                                         MinVolume;
};
static_assert(alignof(FSolverTrailingFilterSettings) == 0x000004, "Wrong alignment on FSolverTrailingFilterSettings");
static_assert(sizeof(FSolverTrailingFilterSettings) == 0x000010, "Wrong size on FSolverTrailingFilterSettings");
static_assert(offsetof(FSolverTrailingFilterSettings, FilterEnabled) == 0x000000, "Member 'FSolverTrailingFilterSettings::FilterEnabled' has a wrong offset!");
static_assert(offsetof(FSolverTrailingFilterSettings, MinMass) == 0x000004, "Member 'FSolverTrailingFilterSettings::MinMass' has a wrong offset!");
static_assert(offsetof(FSolverTrailingFilterSettings, MinSpeed) == 0x000008, "Member 'FSolverTrailingFilterSettings::MinSpeed' has a wrong offset!");
static_assert(offsetof(FSolverTrailingFilterSettings, MinVolume) == 0x00000C, "Member 'FSolverTrailingFilterSettings::MinVolume' has a wrong offset!");

struct FChaosSolverConfiguration final
{
public:
	int32                                         PositionIterations;
	int32                                         VelocityIterations;
	int32                                         ProjectionIterations;
	float                                         CollisionMarginFraction;
	float                                         CollisionMarginMax;
	float                                         CollisionCullDistance;
	float                                         CollisionMaxPushOutVelocity;
	float                                         ClusterConnectionFactor;
	EClusterUnionMethod                           ClusterUnionConnectionType;
	bool                                          bGenerateCollisionData;
	uint8                                         Pad_22[0x2];
	struct FSolverCollisionFilterSettings         CollisionFilterSettings;
	bool                                          bGenerateBreakData;
	uint8                                         Pad_35[0x3];
	struct FSolverBreakingFilterSettings          BreakingFilterSettings;
	bool                                          bGenerateTrailingData;
	uint8                                         Pad_49[0x3];
	struct FSolverTrailingFilterSettings          TrailingFilterSettings;
	int32                                         Iterations;
	int32                                         PushOutIterations;
	bool                                          bGenerateContactGraph;
	uint8                                         Pad_65[0x3];
};
static_assert(alignof(FChaosSolverConfiguration) == 0x000004, "Wrong alignment on FChaosSolverConfiguration");
static_assert(sizeof(FChaosSolverConfiguration) == 0x000068, "Wrong size on FChaosSolverConfiguration");
static_assert(offsetof(FChaosSolverConfiguration, PositionIterations) == 0x000000, "Member 'FChaosSolverConfiguration::PositionIterations' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, VelocityIterations) == 0x000004, "Member 'FChaosSolverConfiguration::VelocityIterations' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, ProjectionIterations) == 0x000008, "Member 'FChaosSolverConfiguration::ProjectionIterations' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, CollisionMarginFraction) == 0x00000C, "Member 'FChaosSolverConfiguration::CollisionMarginFraction' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, CollisionMarginMax) == 0x000010, "Member 'FChaosSolverConfiguration::CollisionMarginMax' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, CollisionCullDistance) == 0x000014, "Member 'FChaosSolverConfiguration::CollisionCullDistance' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, CollisionMaxPushOutVelocity) == 0x000018, "Member 'FChaosSolverConfiguration::CollisionMaxPushOutVelocity' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, ClusterConnectionFactor) == 0x00001C, "Member 'FChaosSolverConfiguration::ClusterConnectionFactor' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, ClusterUnionConnectionType) == 0x000020, "Member 'FChaosSolverConfiguration::ClusterUnionConnectionType' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, bGenerateCollisionData) == 0x000021, "Member 'FChaosSolverConfiguration::bGenerateCollisionData' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, CollisionFilterSettings) == 0x000024, "Member 'FChaosSolverConfiguration::CollisionFilterSettings' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, bGenerateBreakData) == 0x000034, "Member 'FChaosSolverConfiguration::bGenerateBreakData' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, BreakingFilterSettings) == 0x000038, "Member 'FChaosSolverConfiguration::BreakingFilterSettings' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, bGenerateTrailingData) == 0x000048, "Member 'FChaosSolverConfiguration::bGenerateTrailingData' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, TrailingFilterSettings) == 0x00004C, "Member 'FChaosSolverConfiguration::TrailingFilterSettings' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, Iterations) == 0x00005C, "Member 'FChaosSolverConfiguration::Iterations' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, PushOutIterations) == 0x000060, "Member 'FChaosSolverConfiguration::PushOutIterations' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, bGenerateContactGraph) == 0x000064, "Member 'FChaosSolverConfiguration::bGenerateContactGraph' has a wrong offset!");

struct alignas(0x08) FManagedArrayCollection final
{
public:
	uint8                                         Pad_0[0xB0];
};
static_assert(alignof(FManagedArrayCollection) == 0x000008, "Wrong alignment on FManagedArrayCollection");
static_assert(sizeof(FManagedArrayCollection) == 0x0000B0, "Wrong size on FManagedArrayCollection");

struct FSolverCollisionData final
{
public:
	struct FVector                                Location;
	struct FVector                                AccumulatedImpulse;
	struct FVector                                Normal;
	struct FVector                                Velocity1;
	struct FVector                                Velocity2;
	struct FVector                                AngularVelocity1;
	struct FVector                                AngularVelocity2;
	float                                         Mass1;
	float                                         Mass2;
	int32                                         ParticleIndex;
	int32                                         LevelsetIndex;
	int32                                         ParticleIndexMesh;
	int32                                         LevelsetIndexMesh;
};
static_assert(alignof(FSolverCollisionData) == 0x000008, "Wrong alignment on FSolverCollisionData");
static_assert(sizeof(FSolverCollisionData) == 0x0000C0, "Wrong size on FSolverCollisionData");
static_assert(offsetof(FSolverCollisionData, Location) == 0x000000, "Member 'FSolverCollisionData::Location' has a wrong offset!");
static_assert(offsetof(FSolverCollisionData, AccumulatedImpulse) == 0x000018, "Member 'FSolverCollisionData::AccumulatedImpulse' has a wrong offset!");
static_assert(offsetof(FSolverCollisionData, Normal) == 0x000030, "Member 'FSolverCollisionData::Normal' has a wrong offset!");
static_assert(offsetof(FSolverCollisionData, Velocity1) == 0x000048, "Member 'FSolverCollisionData::Velocity1' has a wrong offset!");
static_assert(offsetof(FSolverCollisionData, Velocity2) == 0x000060, "Member 'FSolverCollisionData::Velocity2' has a wrong offset!");
static_assert(offsetof(FSolverCollisionData, AngularVelocity1) == 0x000078, "Member 'FSolverCollisionData::AngularVelocity1' has a wrong offset!");
static_assert(offsetof(FSolverCollisionData, AngularVelocity2) == 0x000090, "Member 'FSolverCollisionData::AngularVelocity2' has a wrong offset!");
static_assert(offsetof(FSolverCollisionData, Mass1) == 0x0000A8, "Member 'FSolverCollisionData::Mass1' has a wrong offset!");
static_assert(offsetof(FSolverCollisionData, Mass2) == 0x0000AC, "Member 'FSolverCollisionData::Mass2' has a wrong offset!");
static_assert(offsetof(FSolverCollisionData, ParticleIndex) == 0x0000B0, "Member 'FSolverCollisionData::ParticleIndex' has a wrong offset!");
static_assert(offsetof(FSolverCollisionData, LevelsetIndex) == 0x0000B4, "Member 'FSolverCollisionData::LevelsetIndex' has a wrong offset!");
static_assert(offsetof(FSolverCollisionData, ParticleIndexMesh) == 0x0000B8, "Member 'FSolverCollisionData::ParticleIndexMesh' has a wrong offset!");
static_assert(offsetof(FSolverCollisionData, LevelsetIndexMesh) == 0x0000BC, "Member 'FSolverCollisionData::LevelsetIndexMesh' has a wrong offset!");

struct FSolverBreakingData final
{
public:
	struct FVector                                Location;
	struct FVector                                Velocity;
	struct FVector                                AngularVelocity;
	float                                         Mass;
	int32                                         ParticleIndex;
	int32                                         ParticleIndexMesh;
	uint8                                         Pad_54[0x4];
};
static_assert(alignof(FSolverBreakingData) == 0x000008, "Wrong alignment on FSolverBreakingData");
static_assert(sizeof(FSolverBreakingData) == 0x000058, "Wrong size on FSolverBreakingData");
static_assert(offsetof(FSolverBreakingData, Location) == 0x000000, "Member 'FSolverBreakingData::Location' has a wrong offset!");
static_assert(offsetof(FSolverBreakingData, Velocity) == 0x000018, "Member 'FSolverBreakingData::Velocity' has a wrong offset!");
static_assert(offsetof(FSolverBreakingData, AngularVelocity) == 0x000030, "Member 'FSolverBreakingData::AngularVelocity' has a wrong offset!");
static_assert(offsetof(FSolverBreakingData, Mass) == 0x000048, "Member 'FSolverBreakingData::Mass' has a wrong offset!");
static_assert(offsetof(FSolverBreakingData, ParticleIndex) == 0x00004C, "Member 'FSolverBreakingData::ParticleIndex' has a wrong offset!");
static_assert(offsetof(FSolverBreakingData, ParticleIndexMesh) == 0x000050, "Member 'FSolverBreakingData::ParticleIndexMesh' has a wrong offset!");

struct FSolverTrailingData final
{
public:
	struct FVector                                Location;
	struct FVector                                Velocity;
	struct FVector                                AngularVelocity;
	float                                         Mass;
	int32                                         ParticleIndex;
	int32                                         ParticleIndexMesh;
	uint8                                         Pad_54[0x4];
};
static_assert(alignof(FSolverTrailingData) == 0x000008, "Wrong alignment on FSolverTrailingData");
static_assert(sizeof(FSolverTrailingData) == 0x000058, "Wrong size on FSolverTrailingData");
static_assert(offsetof(FSolverTrailingData, Location) == 0x000000, "Member 'FSolverTrailingData::Location' has a wrong offset!");
static_assert(offsetof(FSolverTrailingData, Velocity) == 0x000018, "Member 'FSolverTrailingData::Velocity' has a wrong offset!");
static_assert(offsetof(FSolverTrailingData, AngularVelocity) == 0x000030, "Member 'FSolverTrailingData::AngularVelocity' has a wrong offset!");
static_assert(offsetof(FSolverTrailingData, Mass) == 0x000048, "Member 'FSolverTrailingData::Mass' has a wrong offset!");
static_assert(offsetof(FSolverTrailingData, ParticleIndex) == 0x00004C, "Member 'FSolverTrailingData::ParticleIndex' has a wrong offset!");
static_assert(offsetof(FSolverTrailingData, ParticleIndexMesh) == 0x000050, "Member 'FSolverTrailingData::ParticleIndexMesh' has a wrong offset!");

struct FRecordedFrame final
{
public:
	TArray<struct FTransform>                     Transforms;
	TArray<int32>                                 TransformIndices;
	TArray<int32>                                 PreviousTransformIndices;
	TArray<bool>                                  DisabledFlags;
	TArray<struct FSolverCollisionData>           Collisions;
	TArray<struct FSolverBreakingData>            Breakings;
	TSet<struct FSolverTrailingData>              Trailings;
	float                                         Timestamp;
	uint8                                         Pad_B4[0x4];
};
static_assert(alignof(FRecordedFrame) == 0x000008, "Wrong alignment on FRecordedFrame");
static_assert(sizeof(FRecordedFrame) == 0x0000B8, "Wrong size on FRecordedFrame");
static_assert(offsetof(FRecordedFrame, Transforms) == 0x000000, "Member 'FRecordedFrame::Transforms' has a wrong offset!");
static_assert(offsetof(FRecordedFrame, TransformIndices) == 0x000010, "Member 'FRecordedFrame::TransformIndices' has a wrong offset!");
static_assert(offsetof(FRecordedFrame, PreviousTransformIndices) == 0x000020, "Member 'FRecordedFrame::PreviousTransformIndices' has a wrong offset!");
static_assert(offsetof(FRecordedFrame, DisabledFlags) == 0x000030, "Member 'FRecordedFrame::DisabledFlags' has a wrong offset!");
static_assert(offsetof(FRecordedFrame, Collisions) == 0x000040, "Member 'FRecordedFrame::Collisions' has a wrong offset!");
static_assert(offsetof(FRecordedFrame, Breakings) == 0x000050, "Member 'FRecordedFrame::Breakings' has a wrong offset!");
static_assert(offsetof(FRecordedFrame, Trailings) == 0x000060, "Member 'FRecordedFrame::Trailings' has a wrong offset!");
static_assert(offsetof(FRecordedFrame, Timestamp) == 0x0000B0, "Member 'FRecordedFrame::Timestamp' has a wrong offset!");

struct FRecordedTransformTrack final
{
public:
	TArray<struct FRecordedFrame>                 Records;
};
static_assert(alignof(FRecordedTransformTrack) == 0x000008, "Wrong alignment on FRecordedTransformTrack");
static_assert(sizeof(FRecordedTransformTrack) == 0x000010, "Wrong size on FRecordedTransformTrack");
static_assert(offsetof(FRecordedTransformTrack, Records) == 0x000000, "Member 'FRecordedTransformTrack::Records' has a wrong offset!");

struct FSolverRemovalFilterSettings final
{
public:
	bool                                          FilterEnabled;
	uint8                                         Pad_1[0x3];
	float                                         MinMass;
	float                                         MinVolume;
};
static_assert(alignof(FSolverRemovalFilterSettings) == 0x000004, "Wrong alignment on FSolverRemovalFilterSettings");
static_assert(sizeof(FSolverRemovalFilterSettings) == 0x00000C, "Wrong size on FSolverRemovalFilterSettings");
static_assert(offsetof(FSolverRemovalFilterSettings, FilterEnabled) == 0x000000, "Member 'FSolverRemovalFilterSettings::FilterEnabled' has a wrong offset!");
static_assert(offsetof(FSolverRemovalFilterSettings, MinMass) == 0x000004, "Member 'FSolverRemovalFilterSettings::MinMass' has a wrong offset!");
static_assert(offsetof(FSolverRemovalFilterSettings, MinVolume) == 0x000008, "Member 'FSolverRemovalFilterSettings::MinVolume' has a wrong offset!");

}
