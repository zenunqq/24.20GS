#pragma once

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Chaos_structs.hpp"
#include "DeveloperSettings_classes.hpp"

namespace SDK
{

class UPhysicalMaterialPropertyBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PhysicalMaterialPropertyBase">();
	}
	static class UPhysicalMaterialPropertyBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicalMaterialPropertyBase>();
	}
};
static_assert(alignof(UPhysicalMaterialPropertyBase) == 0x000008, "Wrong alignment on UPhysicalMaterialPropertyBase");
static_assert(sizeof(UPhysicalMaterialPropertyBase) == 0x000028, "Wrong size on UPhysicalMaterialPropertyBase");

class UBodySetupCore : public UObject
{
public:
	class FName                                   BoneName;
	EPhysicsType                                  PhysicsType;
	ECollisionTraceFlag                           CollisionTraceFlag;
	EBodyCollisionResponse                        CollisionReponse;
	uint8                                         Pad_2F[0x1];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BodySetupCore">();
	}
	static class UBodySetupCore* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBodySetupCore>();
	}
};
static_assert(alignof(UBodySetupCore) == 0x000008, "Wrong alignment on UBodySetupCore");
static_assert(sizeof(UBodySetupCore) == 0x000030, "Wrong size on UBodySetupCore");
static_assert(offsetof(UBodySetupCore, BoneName) == 0x000028, "Member 'UBodySetupCore::BoneName' has a wrong offset!");
static_assert(offsetof(UBodySetupCore, PhysicsType) == 0x00002C, "Member 'UBodySetupCore::PhysicsType' has a wrong offset!");
static_assert(offsetof(UBodySetupCore, CollisionTraceFlag) == 0x00002D, "Member 'UBodySetupCore::CollisionTraceFlag' has a wrong offset!");
static_assert(offsetof(UBodySetupCore, CollisionReponse) == 0x00002E, "Member 'UBodySetupCore::CollisionReponse' has a wrong offset!");

class UChaosPhysicalMaterial final : public UObject
{
public:
	float                                         Friction;
	float                                         StaticFriction;
	float                                         Restitution;
	float                                         LinearEtherDrag;
	float                                         AngularEtherDrag;
	float                                         SleepingLinearVelocityThreshold;
	float                                         SleepingAngularVelocityThreshold;
	uint8                                         Pad_44[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosPhysicalMaterial">();
	}
	static class UChaosPhysicalMaterial* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosPhysicalMaterial>();
	}
};
static_assert(alignof(UChaosPhysicalMaterial) == 0x000008, "Wrong alignment on UChaosPhysicalMaterial");
static_assert(sizeof(UChaosPhysicalMaterial) == 0x000048, "Wrong size on UChaosPhysicalMaterial");
static_assert(offsetof(UChaosPhysicalMaterial, Friction) == 0x000028, "Member 'UChaosPhysicalMaterial::Friction' has a wrong offset!");
static_assert(offsetof(UChaosPhysicalMaterial, StaticFriction) == 0x00002C, "Member 'UChaosPhysicalMaterial::StaticFriction' has a wrong offset!");
static_assert(offsetof(UChaosPhysicalMaterial, Restitution) == 0x000030, "Member 'UChaosPhysicalMaterial::Restitution' has a wrong offset!");
static_assert(offsetof(UChaosPhysicalMaterial, LinearEtherDrag) == 0x000034, "Member 'UChaosPhysicalMaterial::LinearEtherDrag' has a wrong offset!");
static_assert(offsetof(UChaosPhysicalMaterial, AngularEtherDrag) == 0x000038, "Member 'UChaosPhysicalMaterial::AngularEtherDrag' has a wrong offset!");
static_assert(offsetof(UChaosPhysicalMaterial, SleepingLinearVelocityThreshold) == 0x00003C, "Member 'UChaosPhysicalMaterial::SleepingLinearVelocityThreshold' has a wrong offset!");
static_assert(offsetof(UChaosPhysicalMaterial, SleepingAngularVelocityThreshold) == 0x000040, "Member 'UChaosPhysicalMaterial::SleepingAngularVelocityThreshold' has a wrong offset!");

class UPhysicalMaterial final : public UObject
{
public:
	float                                         Friction;
	float                                         StaticFriction;
	EFrictionCombineMode                          FrictionCombineMode;
	bool                                          bOverrideFrictionCombineMode;
	uint8                                         Pad_32[0x2];
	float                                         Restitution;
	EFrictionCombineMode                          RestitutionCombineMode;
	bool                                          bOverrideRestitutionCombineMode;
	uint8                                         Pad_3A[0x2];
	float                                         Density;
	float                                         SleepLinearVelocityThreshold;
	float                                         SleepAngularVelocityThreshold;
	int32                                         SleepCounterThreshold;
	float                                         RaiseMassToPower;
	float                                         DestructibleDamageThresholdScale;
	uint8                                         Pad_54[0x4];
	class UPhysicalMaterialPropertyBase*          PhysicalMaterialProperty;
	EPhysicalSurface                              SurfaceType;
	uint8                                         Pad_61[0x1F];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PhysicalMaterial">();
	}
	static class UPhysicalMaterial* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicalMaterial>();
	}
};
static_assert(alignof(UPhysicalMaterial) == 0x000008, "Wrong alignment on UPhysicalMaterial");
static_assert(sizeof(UPhysicalMaterial) == 0x000080, "Wrong size on UPhysicalMaterial");
static_assert(offsetof(UPhysicalMaterial, Friction) == 0x000028, "Member 'UPhysicalMaterial::Friction' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, StaticFriction) == 0x00002C, "Member 'UPhysicalMaterial::StaticFriction' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, FrictionCombineMode) == 0x000030, "Member 'UPhysicalMaterial::FrictionCombineMode' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, bOverrideFrictionCombineMode) == 0x000031, "Member 'UPhysicalMaterial::bOverrideFrictionCombineMode' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, Restitution) == 0x000034, "Member 'UPhysicalMaterial::Restitution' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, RestitutionCombineMode) == 0x000038, "Member 'UPhysicalMaterial::RestitutionCombineMode' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, bOverrideRestitutionCombineMode) == 0x000039, "Member 'UPhysicalMaterial::bOverrideRestitutionCombineMode' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, Density) == 0x00003C, "Member 'UPhysicalMaterial::Density' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, SleepLinearVelocityThreshold) == 0x000040, "Member 'UPhysicalMaterial::SleepLinearVelocityThreshold' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, SleepAngularVelocityThreshold) == 0x000044, "Member 'UPhysicalMaterial::SleepAngularVelocityThreshold' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, SleepCounterThreshold) == 0x000048, "Member 'UPhysicalMaterial::SleepCounterThreshold' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, RaiseMassToPower) == 0x00004C, "Member 'UPhysicalMaterial::RaiseMassToPower' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, DestructibleDamageThresholdScale) == 0x000050, "Member 'UPhysicalMaterial::DestructibleDamageThresholdScale' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, PhysicalMaterialProperty) == 0x000058, "Member 'UPhysicalMaterial::PhysicalMaterialProperty' has a wrong offset!");
static_assert(offsetof(UPhysicalMaterial, SurfaceType) == 0x000060, "Member 'UPhysicalMaterial::SurfaceType' has a wrong offset!");

class UPhysicsSettingsCore : public UDeveloperSettings
{
public:
	float                                         DefaultGravityZ;
	float                                         DefaultTerminalVelocity;
	float                                         DefaultFluidFriction;
	int32                                         SimulateScratchMemorySize;
	int32                                         RagdollAggregateThreshold;
	float                                         TriangleMeshTriangleMinAreaThreshold;
	bool                                          bEnableEnhancedDeterminism;
	bool                                          bEnableShapeSharing;
	bool                                          bEnablePCM;
	bool                                          bEnableStabilization;
	bool                                          bWarnMissingLocks;
	bool                                          bEnable2DPhysics;
	bool                                          bDefaultHasComplexCollision;
	uint8                                         Pad_4F[0x1];
	float                                         BounceThresholdVelocity;
	EFrictionCombineMode                          FrictionCombineMode;
	EFrictionCombineMode                          RestitutionCombineMode;
	uint8                                         Pad_56[0x2];
	float                                         MaxAngularVelocity;
	float                                         MaxDepenetrationVelocity;
	float                                         ContactOffsetMultiplier;
	float                                         MinContactOffset;
	float                                         MaxContactOffset;
	bool                                          bSimulateSkeletalMeshOnDedicatedServer;
	ECollisionTraceFlag                           DefaultShapeComplexity;
	uint8                                         Pad_6E[0x2];
	struct FChaosSolverConfiguration              SolverOptions;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PhysicsSettingsCore">();
	}
	static class UPhysicsSettingsCore* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicsSettingsCore>();
	}
};
static_assert(alignof(UPhysicsSettingsCore) == 0x000008, "Wrong alignment on UPhysicsSettingsCore");
static_assert(sizeof(UPhysicsSettingsCore) == 0x0000D8, "Wrong size on UPhysicsSettingsCore");
static_assert(offsetof(UPhysicsSettingsCore, DefaultGravityZ) == 0x000030, "Member 'UPhysicsSettingsCore::DefaultGravityZ' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, DefaultTerminalVelocity) == 0x000034, "Member 'UPhysicsSettingsCore::DefaultTerminalVelocity' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, DefaultFluidFriction) == 0x000038, "Member 'UPhysicsSettingsCore::DefaultFluidFriction' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, SimulateScratchMemorySize) == 0x00003C, "Member 'UPhysicsSettingsCore::SimulateScratchMemorySize' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, RagdollAggregateThreshold) == 0x000040, "Member 'UPhysicsSettingsCore::RagdollAggregateThreshold' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, TriangleMeshTriangleMinAreaThreshold) == 0x000044, "Member 'UPhysicsSettingsCore::TriangleMeshTriangleMinAreaThreshold' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, bEnableEnhancedDeterminism) == 0x000048, "Member 'UPhysicsSettingsCore::bEnableEnhancedDeterminism' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, bEnableShapeSharing) == 0x000049, "Member 'UPhysicsSettingsCore::bEnableShapeSharing' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, bEnablePCM) == 0x00004A, "Member 'UPhysicsSettingsCore::bEnablePCM' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, bEnableStabilization) == 0x00004B, "Member 'UPhysicsSettingsCore::bEnableStabilization' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, bWarnMissingLocks) == 0x00004C, "Member 'UPhysicsSettingsCore::bWarnMissingLocks' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, bEnable2DPhysics) == 0x00004D, "Member 'UPhysicsSettingsCore::bEnable2DPhysics' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, bDefaultHasComplexCollision) == 0x00004E, "Member 'UPhysicsSettingsCore::bDefaultHasComplexCollision' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, BounceThresholdVelocity) == 0x000050, "Member 'UPhysicsSettingsCore::BounceThresholdVelocity' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, FrictionCombineMode) == 0x000054, "Member 'UPhysicsSettingsCore::FrictionCombineMode' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, RestitutionCombineMode) == 0x000055, "Member 'UPhysicsSettingsCore::RestitutionCombineMode' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, MaxAngularVelocity) == 0x000058, "Member 'UPhysicsSettingsCore::MaxAngularVelocity' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, MaxDepenetrationVelocity) == 0x00005C, "Member 'UPhysicsSettingsCore::MaxDepenetrationVelocity' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, ContactOffsetMultiplier) == 0x000060, "Member 'UPhysicsSettingsCore::ContactOffsetMultiplier' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, MinContactOffset) == 0x000064, "Member 'UPhysicsSettingsCore::MinContactOffset' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, MaxContactOffset) == 0x000068, "Member 'UPhysicsSettingsCore::MaxContactOffset' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, bSimulateSkeletalMeshOnDedicatedServer) == 0x00006C, "Member 'UPhysicsSettingsCore::bSimulateSkeletalMeshOnDedicatedServer' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, DefaultShapeComplexity) == 0x00006D, "Member 'UPhysicsSettingsCore::DefaultShapeComplexity' has a wrong offset!");
static_assert(offsetof(UPhysicsSettingsCore, SolverOptions) == 0x000070, "Member 'UPhysicsSettingsCore::SolverOptions' has a wrong offset!");

}
