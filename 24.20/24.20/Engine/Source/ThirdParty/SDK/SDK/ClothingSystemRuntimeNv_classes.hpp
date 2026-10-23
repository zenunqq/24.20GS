#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ClothingSystemRuntimeCommon_structs.hpp"
#include "ClothingSystemRuntimeCommon_classes.hpp"
#include "ClothingSystemRuntimeInterface_classes.hpp"
#include "ClothingSystemRuntimeNv_structs.hpp"

namespace SDK
{

class UClothConfigNv final : public UClothConfigCommon
{
public:
	EClothingWindMethodNv                         ClothingWindMethod;
	uint8                                         Pad_29[0x3];
	struct FClothConstraintSetupNv                VerticalConstraint;
	struct FClothConstraintSetupNv                HorizontalConstraint;
	struct FClothConstraintSetupNv                BendConstraint;
	struct FClothConstraintSetupNv                ShearConstraint;
	float                                         SelfCollisionRadius;
	float                                         SelfCollisionStiffness;
	float                                         SelfCollisionCullScale;
	struct FVector                                Damping;
	float                                         Friction;
	float                                         WindDragCoefficient;
	float                                         WindLiftCoefficient;
	uint8                                         Pad_9C[0x4];
	struct FVector                                LinearDrag;
	struct FVector                                AngularDrag;
	struct FVector                                LinearInertiaScale;
	struct FVector                                AngularInertiaScale;
	struct FVector                                CentrifugalInertiaScale;
	float                                         SolverFrequency;
	float                                         StiffnessFrequency;
	float                                         GravityScale;
	uint8                                         Pad_124[0x4];
	struct FVector                                GravityOverride;
	bool                                          bUseGravityOverride;
	uint8                                         Pad_141[0x3];
	float                                         TetherStiffness;
	float                                         TetherLimit;
	float                                         CollisionThickness;
	float                                         AnimDriveSpringStiffness;
	float                                         AnimDriveDamperStiffness;
	EClothingWindMethod_Legacy                    WindMethod;
	uint8                                         Pad_159[0x3];
	struct FClothConstraintSetup_Legacy           VerticalConstraintConfig;
	struct FClothConstraintSetup_Legacy           HorizontalConstraintConfig;
	struct FClothConstraintSetup_Legacy           BendConstraintConfig;
	struct FClothConstraintSetup_Legacy           ShearConstraintConfig;
	uint8                                         Pad_19C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothConfigNv">();
	}
	static class UClothConfigNv* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothConfigNv>();
	}
};
static_assert(alignof(UClothConfigNv) == 0x000008, "Wrong alignment on UClothConfigNv");
static_assert(sizeof(UClothConfigNv) == 0x0001A0, "Wrong size on UClothConfigNv");
static_assert(offsetof(UClothConfigNv, ClothingWindMethod) == 0x000028, "Member 'UClothConfigNv::ClothingWindMethod' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, VerticalConstraint) == 0x00002C, "Member 'UClothConfigNv::VerticalConstraint' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, HorizontalConstraint) == 0x00003C, "Member 'UClothConfigNv::HorizontalConstraint' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, BendConstraint) == 0x00004C, "Member 'UClothConfigNv::BendConstraint' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, ShearConstraint) == 0x00005C, "Member 'UClothConfigNv::ShearConstraint' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, SelfCollisionRadius) == 0x00006C, "Member 'UClothConfigNv::SelfCollisionRadius' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, SelfCollisionStiffness) == 0x000070, "Member 'UClothConfigNv::SelfCollisionStiffness' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, SelfCollisionCullScale) == 0x000074, "Member 'UClothConfigNv::SelfCollisionCullScale' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, Damping) == 0x000078, "Member 'UClothConfigNv::Damping' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, Friction) == 0x000090, "Member 'UClothConfigNv::Friction' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, WindDragCoefficient) == 0x000094, "Member 'UClothConfigNv::WindDragCoefficient' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, WindLiftCoefficient) == 0x000098, "Member 'UClothConfigNv::WindLiftCoefficient' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, LinearDrag) == 0x0000A0, "Member 'UClothConfigNv::LinearDrag' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, AngularDrag) == 0x0000B8, "Member 'UClothConfigNv::AngularDrag' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, LinearInertiaScale) == 0x0000D0, "Member 'UClothConfigNv::LinearInertiaScale' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, AngularInertiaScale) == 0x0000E8, "Member 'UClothConfigNv::AngularInertiaScale' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, CentrifugalInertiaScale) == 0x000100, "Member 'UClothConfigNv::CentrifugalInertiaScale' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, SolverFrequency) == 0x000118, "Member 'UClothConfigNv::SolverFrequency' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, StiffnessFrequency) == 0x00011C, "Member 'UClothConfigNv::StiffnessFrequency' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, GravityScale) == 0x000120, "Member 'UClothConfigNv::GravityScale' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, GravityOverride) == 0x000128, "Member 'UClothConfigNv::GravityOverride' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, bUseGravityOverride) == 0x000140, "Member 'UClothConfigNv::bUseGravityOverride' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, TetherStiffness) == 0x000144, "Member 'UClothConfigNv::TetherStiffness' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, TetherLimit) == 0x000148, "Member 'UClothConfigNv::TetherLimit' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, CollisionThickness) == 0x00014C, "Member 'UClothConfigNv::CollisionThickness' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, AnimDriveSpringStiffness) == 0x000150, "Member 'UClothConfigNv::AnimDriveSpringStiffness' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, AnimDriveDamperStiffness) == 0x000154, "Member 'UClothConfigNv::AnimDriveDamperStiffness' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, WindMethod) == 0x000158, "Member 'UClothConfigNv::WindMethod' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, VerticalConstraintConfig) == 0x00015C, "Member 'UClothConfigNv::VerticalConstraintConfig' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, HorizontalConstraintConfig) == 0x00016C, "Member 'UClothConfigNv::HorizontalConstraintConfig' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, BendConstraintConfig) == 0x00017C, "Member 'UClothConfigNv::BendConstraintConfig' has a wrong offset!");
static_assert(offsetof(UClothConfigNv, ShearConstraintConfig) == 0x00018C, "Member 'UClothConfigNv::ShearConstraintConfig' has a wrong offset!");

class UClothingSimulationFactoryNv final : public UClothingSimulationFactory
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingSimulationFactoryNv">();
	}
	static class UClothingSimulationFactoryNv* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingSimulationFactoryNv>();
	}
};
static_assert(alignof(UClothingSimulationFactoryNv) == 0x000008, "Wrong alignment on UClothingSimulationFactoryNv");
static_assert(sizeof(UClothingSimulationFactoryNv) == 0x000028, "Wrong size on UClothingSimulationFactoryNv");

class UClothingSimulationInteractorNv final : public UClothingSimulationInteractor
{
public:
	void SetAnimDriveDamperStiffness(float InStiffness);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingSimulationInteractorNv">();
	}
	static class UClothingSimulationInteractorNv* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingSimulationInteractorNv>();
	}
};
static_assert(alignof(UClothingSimulationInteractorNv) == 0x000008, "Wrong alignment on UClothingSimulationInteractorNv");
static_assert(sizeof(UClothingSimulationInteractorNv) == 0x000090, "Wrong size on UClothingSimulationInteractorNv");

class UClothPhysicalMeshDataNv_Legacy final : public UClothPhysicalMeshDataBase_Legacy
{
public:
	TArray<float>                                 MaxDistances;
	TArray<float>                                 BackstopDistances;
	TArray<float>                                 BackstopRadiuses;
	TArray<float>                                 AnimDriveMultipliers;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothPhysicalMeshDataNv_Legacy">();
	}
	static class UClothPhysicalMeshDataNv_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothPhysicalMeshDataNv_Legacy>();
	}
};
static_assert(alignof(UClothPhysicalMeshDataNv_Legacy) == 0x000008, "Wrong alignment on UClothPhysicalMeshDataNv_Legacy");
static_assert(sizeof(UClothPhysicalMeshDataNv_Legacy) == 0x000120, "Wrong size on UClothPhysicalMeshDataNv_Legacy");
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, MaxDistances) == 0x0000E0, "Member 'UClothPhysicalMeshDataNv_Legacy::MaxDistances' has a wrong offset!");
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, BackstopDistances) == 0x0000F0, "Member 'UClothPhysicalMeshDataNv_Legacy::BackstopDistances' has a wrong offset!");
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, BackstopRadiuses) == 0x000100, "Member 'UClothPhysicalMeshDataNv_Legacy::BackstopRadiuses' has a wrong offset!");
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, AnimDriveMultipliers) == 0x000110, "Member 'UClothPhysicalMeshDataNv_Legacy::AnimDriveMultipliers' has a wrong offset!");

}
