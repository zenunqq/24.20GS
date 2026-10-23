#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ClothingSystemRuntimeInterface_structs.hpp"

namespace SDK
{

enum class EClothingWindMethod_Legacy : uint8
{
	Legacy                                   = 0,
	Accurate                                 = 1,
	EClothingWindMethod_MAX                  = 2,
};

enum class EWeightMapTargetCommon : uint8
{
	None                                     = 0,
	MaxDistance                              = 1,
	BackstopDistance                         = 2,
	BackstopRadius                           = 3,
	AnimDriveStiffness                       = 4,
	AnimDriveDamping_DEPRECATED              = 5,
	EWeightMapTargetCommon_MAX               = 6,
};

enum class EClothMassMode : uint8
{
	UniformMass                              = 0,
	TotalMass                                = 1,
	Density                                  = 2,
	MaxClothMassMode                         = 3,
	EClothMassMode_MAX                       = 4,
};

struct FClothConstraintSetup_Legacy final
{
public:
	float                                         Stiffness;
	float                                         StiffnessMultiplier;
	float                                         StretchLimit;
	float                                         CompressionLimit;
};
static_assert(alignof(FClothConstraintSetup_Legacy) == 0x000004, "Wrong alignment on FClothConstraintSetup_Legacy");
static_assert(sizeof(FClothConstraintSetup_Legacy) == 0x000010, "Wrong size on FClothConstraintSetup_Legacy");
static_assert(offsetof(FClothConstraintSetup_Legacy, Stiffness) == 0x000000, "Member 'FClothConstraintSetup_Legacy::Stiffness' has a wrong offset!");
static_assert(offsetof(FClothConstraintSetup_Legacy, StiffnessMultiplier) == 0x000004, "Member 'FClothConstraintSetup_Legacy::StiffnessMultiplier' has a wrong offset!");
static_assert(offsetof(FClothConstraintSetup_Legacy, StretchLimit) == 0x000008, "Member 'FClothConstraintSetup_Legacy::StretchLimit' has a wrong offset!");
static_assert(offsetof(FClothConstraintSetup_Legacy, CompressionLimit) == 0x00000C, "Member 'FClothConstraintSetup_Legacy::CompressionLimit' has a wrong offset!");

struct FClothConfig_Legacy final
{
public:
	EClothingWindMethod_Legacy                    WindMethod;
	uint8                                         Pad_1[0x3];
	struct FClothConstraintSetup_Legacy           VerticalConstraintConfig;
	struct FClothConstraintSetup_Legacy           HorizontalConstraintConfig;
	struct FClothConstraintSetup_Legacy           BendConstraintConfig;
	struct FClothConstraintSetup_Legacy           ShearConstraintConfig;
	float                                         SelfCollisionRadius;
	float                                         SelfCollisionStiffness;
	float                                         SelfCollisionCullScale;
	struct FVector                                Damping;
	float                                         Friction;
	float                                         WindDragCoefficient;
	float                                         WindLiftCoefficient;
	uint8                                         Pad_74[0x4];
	struct FVector                                LinearDrag;
	struct FVector                                AngularDrag;
	struct FVector                                LinearInertiaScale;
	struct FVector                                AngularInertiaScale;
	struct FVector                                CentrifugalInertiaScale;
	float                                         SolverFrequency;
	float                                         StiffnessFrequency;
	float                                         GravityScale;
	uint8                                         Pad_FC[0x4];
	struct FVector                                GravityOverride;
	bool                                          bUseGravityOverride;
	uint8                                         Pad_119[0x3];
	float                                         TetherStiffness;
	float                                         TetherLimit;
	float                                         CollisionThickness;
	float                                         AnimDriveSpringStiffness;
	float                                         AnimDriveDamperStiffness;
};
static_assert(alignof(FClothConfig_Legacy) == 0x000008, "Wrong alignment on FClothConfig_Legacy");
static_assert(sizeof(FClothConfig_Legacy) == 0x000130, "Wrong size on FClothConfig_Legacy");
static_assert(offsetof(FClothConfig_Legacy, WindMethod) == 0x000000, "Member 'FClothConfig_Legacy::WindMethod' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, VerticalConstraintConfig) == 0x000004, "Member 'FClothConfig_Legacy::VerticalConstraintConfig' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, HorizontalConstraintConfig) == 0x000014, "Member 'FClothConfig_Legacy::HorizontalConstraintConfig' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, BendConstraintConfig) == 0x000024, "Member 'FClothConfig_Legacy::BendConstraintConfig' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, ShearConstraintConfig) == 0x000034, "Member 'FClothConfig_Legacy::ShearConstraintConfig' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, SelfCollisionRadius) == 0x000044, "Member 'FClothConfig_Legacy::SelfCollisionRadius' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, SelfCollisionStiffness) == 0x000048, "Member 'FClothConfig_Legacy::SelfCollisionStiffness' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, SelfCollisionCullScale) == 0x00004C, "Member 'FClothConfig_Legacy::SelfCollisionCullScale' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, Damping) == 0x000050, "Member 'FClothConfig_Legacy::Damping' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, Friction) == 0x000068, "Member 'FClothConfig_Legacy::Friction' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, WindDragCoefficient) == 0x00006C, "Member 'FClothConfig_Legacy::WindDragCoefficient' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, WindLiftCoefficient) == 0x000070, "Member 'FClothConfig_Legacy::WindLiftCoefficient' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, LinearDrag) == 0x000078, "Member 'FClothConfig_Legacy::LinearDrag' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, AngularDrag) == 0x000090, "Member 'FClothConfig_Legacy::AngularDrag' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, LinearInertiaScale) == 0x0000A8, "Member 'FClothConfig_Legacy::LinearInertiaScale' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, AngularInertiaScale) == 0x0000C0, "Member 'FClothConfig_Legacy::AngularInertiaScale' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, CentrifugalInertiaScale) == 0x0000D8, "Member 'FClothConfig_Legacy::CentrifugalInertiaScale' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, SolverFrequency) == 0x0000F0, "Member 'FClothConfig_Legacy::SolverFrequency' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, StiffnessFrequency) == 0x0000F4, "Member 'FClothConfig_Legacy::StiffnessFrequency' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, GravityScale) == 0x0000F8, "Member 'FClothConfig_Legacy::GravityScale' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, GravityOverride) == 0x000100, "Member 'FClothConfig_Legacy::GravityOverride' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, bUseGravityOverride) == 0x000118, "Member 'FClothConfig_Legacy::bUseGravityOverride' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, TetherStiffness) == 0x00011C, "Member 'FClothConfig_Legacy::TetherStiffness' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, TetherLimit) == 0x000120, "Member 'FClothConfig_Legacy::TetherLimit' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, CollisionThickness) == 0x000124, "Member 'FClothConfig_Legacy::CollisionThickness' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, AnimDriveSpringStiffness) == 0x000128, "Member 'FClothConfig_Legacy::AnimDriveSpringStiffness' has a wrong offset!");
static_assert(offsetof(FClothConfig_Legacy, AnimDriveDamperStiffness) == 0x00012C, "Member 'FClothConfig_Legacy::AnimDriveDamperStiffness' has a wrong offset!");

struct FPointWeightMap final
{
public:
	TArray<float>                                 Values;
};
static_assert(alignof(FPointWeightMap) == 0x000008, "Wrong alignment on FPointWeightMap");
static_assert(sizeof(FPointWeightMap) == 0x000010, "Wrong size on FPointWeightMap");
static_assert(offsetof(FPointWeightMap, Values) == 0x000000, "Member 'FPointWeightMap::Values' has a wrong offset!");

struct alignas(0x08) FClothTetherData final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FClothTetherData) == 0x000008, "Wrong alignment on FClothTetherData");
static_assert(sizeof(FClothTetherData) == 0x000010, "Wrong size on FClothTetherData");

struct FClothPhysicalMeshData final
{
public:
	TArray<struct FVector3f>                      Vertices;
	TArray<struct FVector3f>                      Normals;
	TArray<uint32>                                Indices;
	TMap<uint32, struct FPointWeightMap>          WeightMaps;
	TArray<float>                                 InverseMasses;
	TArray<struct FClothVertBoneData>             BoneData;
	TArray<uint32>                                SelfCollisionIndices;
	struct FClothTetherData                       EuclideanTethers;
	struct FClothTetherData                       GeodesicTethers;
	int32                                         MaxBoneWeights;
	int32                                         NumFixedVerts;
};
static_assert(alignof(FClothPhysicalMeshData) == 0x000008, "Wrong alignment on FClothPhysicalMeshData");
static_assert(sizeof(FClothPhysicalMeshData) == 0x0000D8, "Wrong size on FClothPhysicalMeshData");
static_assert(offsetof(FClothPhysicalMeshData, Vertices) == 0x000000, "Member 'FClothPhysicalMeshData::Vertices' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, Normals) == 0x000010, "Member 'FClothPhysicalMeshData::Normals' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, Indices) == 0x000020, "Member 'FClothPhysicalMeshData::Indices' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, WeightMaps) == 0x000030, "Member 'FClothPhysicalMeshData::WeightMaps' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, InverseMasses) == 0x000080, "Member 'FClothPhysicalMeshData::InverseMasses' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, BoneData) == 0x000090, "Member 'FClothPhysicalMeshData::BoneData' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, SelfCollisionIndices) == 0x0000A0, "Member 'FClothPhysicalMeshData::SelfCollisionIndices' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, EuclideanTethers) == 0x0000B0, "Member 'FClothPhysicalMeshData::EuclideanTethers' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, GeodesicTethers) == 0x0000C0, "Member 'FClothPhysicalMeshData::GeodesicTethers' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, MaxBoneWeights) == 0x0000D0, "Member 'FClothPhysicalMeshData::MaxBoneWeights' has a wrong offset!");
static_assert(offsetof(FClothPhysicalMeshData, NumFixedVerts) == 0x0000D4, "Member 'FClothPhysicalMeshData::NumFixedVerts' has a wrong offset!");

struct FClothLODDataCommon final
{
public:
	struct FClothPhysicalMeshData                 PhysicalMeshData;
	struct FClothCollisionData                    CollisionData;
	bool                                          bUseMultipleInfluences;
	uint8                                         Pad_119[0x3];
	float                                         SkinningKernelRadius;
	bool                                          bSmoothTransition;
	uint8                                         Pad_121[0x27];
};
static_assert(alignof(FClothLODDataCommon) == 0x000008, "Wrong alignment on FClothLODDataCommon");
static_assert(sizeof(FClothLODDataCommon) == 0x000148, "Wrong size on FClothLODDataCommon");
static_assert(offsetof(FClothLODDataCommon, PhysicalMeshData) == 0x000000, "Member 'FClothLODDataCommon::PhysicalMeshData' has a wrong offset!");
static_assert(offsetof(FClothLODDataCommon, CollisionData) == 0x0000D8, "Member 'FClothLODDataCommon::CollisionData' has a wrong offset!");
static_assert(offsetof(FClothLODDataCommon, bUseMultipleInfluences) == 0x000118, "Member 'FClothLODDataCommon::bUseMultipleInfluences' has a wrong offset!");
static_assert(offsetof(FClothLODDataCommon, SkinningKernelRadius) == 0x00011C, "Member 'FClothLODDataCommon::SkinningKernelRadius' has a wrong offset!");
static_assert(offsetof(FClothLODDataCommon, bSmoothTransition) == 0x000120, "Member 'FClothLODDataCommon::bSmoothTransition' has a wrong offset!");

struct FClothParameterMask_Legacy final
{
public:
	class FName                                   MaskName;
	EWeightMapTargetCommon                        CurrentTarget;
	uint8                                         Pad_5[0x3];
	float                                         MaxValue;
	float                                         MinValue;
	TArray<float>                                 Values;
	bool                                          bEnabled;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FClothParameterMask_Legacy) == 0x000008, "Wrong alignment on FClothParameterMask_Legacy");
static_assert(sizeof(FClothParameterMask_Legacy) == 0x000028, "Wrong size on FClothParameterMask_Legacy");
static_assert(offsetof(FClothParameterMask_Legacy, MaskName) == 0x000000, "Member 'FClothParameterMask_Legacy::MaskName' has a wrong offset!");
static_assert(offsetof(FClothParameterMask_Legacy, CurrentTarget) == 0x000004, "Member 'FClothParameterMask_Legacy::CurrentTarget' has a wrong offset!");
static_assert(offsetof(FClothParameterMask_Legacy, MaxValue) == 0x000008, "Member 'FClothParameterMask_Legacy::MaxValue' has a wrong offset!");
static_assert(offsetof(FClothParameterMask_Legacy, MinValue) == 0x00000C, "Member 'FClothParameterMask_Legacy::MinValue' has a wrong offset!");
static_assert(offsetof(FClothParameterMask_Legacy, Values) == 0x000010, "Member 'FClothParameterMask_Legacy::Values' has a wrong offset!");
static_assert(offsetof(FClothParameterMask_Legacy, bEnabled) == 0x000020, "Member 'FClothParameterMask_Legacy::bEnabled' has a wrong offset!");

}
