#pragma once

#include "Basic.hpp"

#include "ClothingSystemRuntimeCommon_structs.hpp"
#include "ClothingSystemRuntimeCommon_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "ChaosCloth_structs.hpp"
#include "ClothingSystemRuntimeInterface_classes.hpp"

namespace SDK
{

class UChaosClothConfig final : public UClothConfigCommon
{
public:
	EClothMassMode                                MassMode;
	uint8                                         Pad_29[0x3];
	float                                         UniformMass;
	float                                         TotalMass;
	float                                         Density;
	float                                         MinPerParticleMass;
	struct FChaosClothWeightedValue               EdgeStiffnessWeighted;
	struct FChaosClothWeightedValue               BendingStiffnessWeighted;
	bool                                          bUseBendingElements;
	uint8                                         Pad_4D[0x3];
	float                                         BucklingRatio;
	struct FChaosClothWeightedValue               BucklingStiffnessWeighted;
	struct FChaosClothWeightedValue               AreaStiffnessWeighted;
	float                                         VolumeStiffness;
	struct FChaosClothWeightedValue               TetherStiffness;
	struct FChaosClothWeightedValue               TetherScale;
	bool                                          bUseGeodesicDistance;
	uint8                                         Pad_79[0x3];
	float                                         ShapeTargetStiffness;
	float                                         CollisionThickness;
	float                                         FrictionCoefficient;
	bool                                          bUseCCD;
	bool                                          bUseSelfCollisions;
	uint8                                         Pad_8A[0x2];
	float                                         SelfCollisionThickness;
	float                                         SelfCollisionFriction;
	bool                                          bUseSelfIntersections;
	bool                                          bUseLegacyBackstop;
	uint8                                         Pad_96[0x2];
	float                                         DampingCoefficient;
	float                                         LocalDampingCoefficient;
	bool                                          bUsePointBasedWindModel;
	uint8                                         Pad_A1[0x3];
	struct FChaosClothWeightedValue               Drag;
	struct FChaosClothWeightedValue               Lift;
	bool                                          bUseGravityOverride;
	uint8                                         Pad_B5[0x3];
	float                                         GravityScale;
	uint8                                         Pad_BC[0x4];
	struct FVector                                Gravity;
	struct FChaosClothWeightedValue               Pressure;
	struct FChaosClothWeightedValue               AnimDriveStiffness;
	struct FChaosClothWeightedValue               AnimDriveDamping;
	struct FVector                                LinearVelocityScale;
	float                                         AngularVelocityScale;
	float                                         FictitiousAngularScale;
	bool                                          bUseTetrahedralConstraints;
	bool                                          bUseThinShellVolumeConstraints;
	bool                                          bUseContinuousCollisionDetection;
	uint8                                         Pad_113[0x5];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosClothConfig">();
	}
	static class UChaosClothConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosClothConfig>();
	}
};
static_assert(alignof(UChaosClothConfig) == 0x000008, "Wrong alignment on UChaosClothConfig");
static_assert(sizeof(UChaosClothConfig) == 0x000118, "Wrong size on UChaosClothConfig");
static_assert(offsetof(UChaosClothConfig, MassMode) == 0x000028, "Member 'UChaosClothConfig::MassMode' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, UniformMass) == 0x00002C, "Member 'UChaosClothConfig::UniformMass' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, TotalMass) == 0x000030, "Member 'UChaosClothConfig::TotalMass' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, Density) == 0x000034, "Member 'UChaosClothConfig::Density' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, MinPerParticleMass) == 0x000038, "Member 'UChaosClothConfig::MinPerParticleMass' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, EdgeStiffnessWeighted) == 0x00003C, "Member 'UChaosClothConfig::EdgeStiffnessWeighted' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, BendingStiffnessWeighted) == 0x000044, "Member 'UChaosClothConfig::BendingStiffnessWeighted' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, bUseBendingElements) == 0x00004C, "Member 'UChaosClothConfig::bUseBendingElements' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, BucklingRatio) == 0x000050, "Member 'UChaosClothConfig::BucklingRatio' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, BucklingStiffnessWeighted) == 0x000054, "Member 'UChaosClothConfig::BucklingStiffnessWeighted' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, AreaStiffnessWeighted) == 0x00005C, "Member 'UChaosClothConfig::AreaStiffnessWeighted' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, VolumeStiffness) == 0x000064, "Member 'UChaosClothConfig::VolumeStiffness' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, TetherStiffness) == 0x000068, "Member 'UChaosClothConfig::TetherStiffness' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, TetherScale) == 0x000070, "Member 'UChaosClothConfig::TetherScale' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, bUseGeodesicDistance) == 0x000078, "Member 'UChaosClothConfig::bUseGeodesicDistance' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, ShapeTargetStiffness) == 0x00007C, "Member 'UChaosClothConfig::ShapeTargetStiffness' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, CollisionThickness) == 0x000080, "Member 'UChaosClothConfig::CollisionThickness' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, FrictionCoefficient) == 0x000084, "Member 'UChaosClothConfig::FrictionCoefficient' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, bUseCCD) == 0x000088, "Member 'UChaosClothConfig::bUseCCD' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, bUseSelfCollisions) == 0x000089, "Member 'UChaosClothConfig::bUseSelfCollisions' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, SelfCollisionThickness) == 0x00008C, "Member 'UChaosClothConfig::SelfCollisionThickness' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, SelfCollisionFriction) == 0x000090, "Member 'UChaosClothConfig::SelfCollisionFriction' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, bUseSelfIntersections) == 0x000094, "Member 'UChaosClothConfig::bUseSelfIntersections' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, bUseLegacyBackstop) == 0x000095, "Member 'UChaosClothConfig::bUseLegacyBackstop' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, DampingCoefficient) == 0x000098, "Member 'UChaosClothConfig::DampingCoefficient' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, LocalDampingCoefficient) == 0x00009C, "Member 'UChaosClothConfig::LocalDampingCoefficient' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, bUsePointBasedWindModel) == 0x0000A0, "Member 'UChaosClothConfig::bUsePointBasedWindModel' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, Drag) == 0x0000A4, "Member 'UChaosClothConfig::Drag' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, Lift) == 0x0000AC, "Member 'UChaosClothConfig::Lift' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, bUseGravityOverride) == 0x0000B4, "Member 'UChaosClothConfig::bUseGravityOverride' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, GravityScale) == 0x0000B8, "Member 'UChaosClothConfig::GravityScale' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, Gravity) == 0x0000C0, "Member 'UChaosClothConfig::Gravity' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, Pressure) == 0x0000D8, "Member 'UChaosClothConfig::Pressure' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, AnimDriveStiffness) == 0x0000E0, "Member 'UChaosClothConfig::AnimDriveStiffness' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, AnimDriveDamping) == 0x0000E8, "Member 'UChaosClothConfig::AnimDriveDamping' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, LinearVelocityScale) == 0x0000F0, "Member 'UChaosClothConfig::LinearVelocityScale' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, AngularVelocityScale) == 0x000108, "Member 'UChaosClothConfig::AngularVelocityScale' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, FictitiousAngularScale) == 0x00010C, "Member 'UChaosClothConfig::FictitiousAngularScale' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, bUseTetrahedralConstraints) == 0x000110, "Member 'UChaosClothConfig::bUseTetrahedralConstraints' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, bUseThinShellVolumeConstraints) == 0x000111, "Member 'UChaosClothConfig::bUseThinShellVolumeConstraints' has a wrong offset!");
static_assert(offsetof(UChaosClothConfig, bUseContinuousCollisionDetection) == 0x000112, "Member 'UChaosClothConfig::bUseContinuousCollisionDetection' has a wrong offset!");

class UChaosClothSharedSimConfig final : public UClothSharedConfigCommon
{
public:
	int32                                         IterationCount;
	int32                                         MaxIterationCount;
	int32                                         SubdivisionCount;
	bool                                          bUseLocalSpaceSimulation;
	bool                                          bUseXPBDConstraints;
	uint8                                         Pad_36[0x2];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosClothSharedSimConfig">();
	}
	static class UChaosClothSharedSimConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosClothSharedSimConfig>();
	}
};
static_assert(alignof(UChaosClothSharedSimConfig) == 0x000008, "Wrong alignment on UChaosClothSharedSimConfig");
static_assert(sizeof(UChaosClothSharedSimConfig) == 0x000038, "Wrong size on UChaosClothSharedSimConfig");
static_assert(offsetof(UChaosClothSharedSimConfig, IterationCount) == 0x000028, "Member 'UChaosClothSharedSimConfig::IterationCount' has a wrong offset!");
static_assert(offsetof(UChaosClothSharedSimConfig, MaxIterationCount) == 0x00002C, "Member 'UChaosClothSharedSimConfig::MaxIterationCount' has a wrong offset!");
static_assert(offsetof(UChaosClothSharedSimConfig, SubdivisionCount) == 0x000030, "Member 'UChaosClothSharedSimConfig::SubdivisionCount' has a wrong offset!");
static_assert(offsetof(UChaosClothSharedSimConfig, bUseLocalSpaceSimulation) == 0x000034, "Member 'UChaosClothSharedSimConfig::bUseLocalSpaceSimulation' has a wrong offset!");
static_assert(offsetof(UChaosClothSharedSimConfig, bUseXPBDConstraints) == 0x000035, "Member 'UChaosClothSharedSimConfig::bUseXPBDConstraints' has a wrong offset!");

class UChaosClothingSimulationFactory final : public UClothingSimulationFactory
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosClothingSimulationFactory">();
	}
	static class UChaosClothingSimulationFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosClothingSimulationFactory>();
	}
};
static_assert(alignof(UChaosClothingSimulationFactory) == 0x000008, "Wrong alignment on UChaosClothingSimulationFactory");
static_assert(sizeof(UChaosClothingSimulationFactory) == 0x000028, "Wrong size on UChaosClothingSimulationFactory");

class UChaosClothingInteractor final : public UClothingInteractor
{
public:
	uint8                                         Pad_30[0x10];

public:
	void ResetAndTeleport(bool bReset, bool bTeleport);
	void SetAerodynamics(float DragCoefficient, float LiftCoefficient, const struct FVector& WindVelocity);
	void SetAnimDrive(const struct FVector2D& AnimDriveStiffness, const struct FVector2D& AnimDriveDamping);
	void SetAnimDriveLinear(float AnimDriveStiffness);
	void SetBackstop(bool bEnabled);
	void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness);
	void SetDamping(float DampingCoefficient, float LocalDampingCoefficient);
	void SetGravity(float GravityScale, bool bIsGravityOverridden, const struct FVector& GravityOverride);
	void SetLongRangeAttachment(const struct FVector2D& TetherStiffness, const struct FVector2D& TetherScale);
	void SetLongRangeAttachmentLinear(float TetherStiffness, float TetherScale);
	void SetMaterial(const struct FVector2D& EdgeStiffness, const struct FVector2D& BendingStiffness, const struct FVector2D& AreaStiffness);
	void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness);
	void SetPressure(const struct FVector2D& Pressure);
	void SetVelocityScale(const struct FVector& LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale);
	void SetWind(const struct FVector2D& Drag, const struct FVector2D& Lift, float AirDensity, const struct FVector& WindVelocity);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosClothingInteractor">();
	}
	static class UChaosClothingInteractor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosClothingInteractor>();
	}
};
static_assert(alignof(UChaosClothingInteractor) == 0x000008, "Wrong alignment on UChaosClothingInteractor");
static_assert(sizeof(UChaosClothingInteractor) == 0x000040, "Wrong size on UChaosClothingInteractor");

class UChaosClothingSimulationInteractor final : public UClothingSimulationInteractor
{
public:
	uint8                                         Pad_90[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosClothingSimulationInteractor">();
	}
	static class UChaosClothingSimulationInteractor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosClothingSimulationInteractor>();
	}
};
static_assert(alignof(UChaosClothingSimulationInteractor) == 0x000008, "Wrong alignment on UChaosClothingSimulationInteractor");
static_assert(sizeof(UChaosClothingSimulationInteractor) == 0x0000A0, "Wrong size on UChaosClothingSimulationInteractor");

}
