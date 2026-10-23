#pragma once

#include "Basic.hpp"

#include "NetCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

struct FRootMotionSource_ConstantWindForce final : public FRootMotionSource
{
public:
	struct FVector                                Force;
	class UCurveFloat*                            StrengthOverTime;
	uint8                                         Pad_F8[0x8];
};
static_assert(alignof(FRootMotionSource_ConstantWindForce) == 0x000010, "Wrong alignment on FRootMotionSource_ConstantWindForce");
static_assert(sizeof(FRootMotionSource_ConstantWindForce) == 0x000100, "Wrong size on FRootMotionSource_ConstantWindForce");
static_assert(offsetof(FRootMotionSource_ConstantWindForce, Force) == 0x0000D8, "Member 'FRootMotionSource_ConstantWindForce::Force' has a wrong offset!");
static_assert(offsetof(FRootMotionSource_ConstantWindForce, StrengthOverTime) == 0x0000F0, "Member 'FRootMotionSource_ConstantWindForce::StrengthOverTime' has a wrong offset!");

struct alignas(0x10) FPhysicsWindSplineAsyncInPersistent final
{
public:
	uint8                                         Pad_0[0x1F0];
};
static_assert(alignof(FPhysicsWindSplineAsyncInPersistent) == 0x000010, "Wrong alignment on FPhysicsWindSplineAsyncInPersistent");
static_assert(sizeof(FPhysicsWindSplineAsyncInPersistent) == 0x0001F0, "Wrong size on FPhysicsWindSplineAsyncInPersistent");

struct FPhysicsWindSplineAsyncOutContinuous final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FPhysicsWindSplineAsyncOutContinuous) == 0x000001, "Wrong alignment on FPhysicsWindSplineAsyncOutContinuous");
static_assert(sizeof(FPhysicsWindSplineAsyncOutContinuous) == 0x000001, "Wrong size on FPhysicsWindSplineAsyncOutContinuous");

struct alignas(0x08) FWindSplineTargetDatum final : public FFastArraySerializerItem
{
public:
	TWeakObjectPtr<class AActor>                  Target;
	uint8                                         Pad_14[0x14];
};
static_assert(alignof(FWindSplineTargetDatum) == 0x000008, "Wrong alignment on FWindSplineTargetDatum");
static_assert(sizeof(FWindSplineTargetDatum) == 0x000028, "Wrong size on FWindSplineTargetDatum");
static_assert(offsetof(FWindSplineTargetDatum, Target) == 0x00000C, "Member 'FWindSplineTargetDatum::Target' has a wrong offset!");

struct FWindSplineTargetData final : public FFastArraySerializer
{
public:
	TArray<struct FWindSplineTargetDatum>         Items;
	uint8                                         Pad_118[0xA0];
};
static_assert(alignof(FWindSplineTargetData) == 0x000008, "Wrong alignment on FWindSplineTargetData");
static_assert(sizeof(FWindSplineTargetData) == 0x0001B8, "Wrong size on FWindSplineTargetData");
static_assert(offsetof(FWindSplineTargetData, Items) == 0x000108, "Member 'FWindSplineTargetData::Items' has a wrong offset!");

struct FWindSplineForceModifiers final
{
public:
	struct FScalableFloat                         ForwardForceMagnitudeMultiplier;
	struct FScalableFloat                         ReverseForceMagnitudeMultiplier;
	struct FScalableFloat                         InwardForceOuterRadiusAccelerationMultiplier;
	struct FScalableFloat                         InwardForceInnerRadiusDecelerationMultiplier;
};
static_assert(alignof(FWindSplineForceModifiers) == 0x000008, "Wrong alignment on FWindSplineForceModifiers");
static_assert(sizeof(FWindSplineForceModifiers) == 0x0000A0, "Wrong size on FWindSplineForceModifiers");
static_assert(offsetof(FWindSplineForceModifiers, ForwardForceMagnitudeMultiplier) == 0x000000, "Member 'FWindSplineForceModifiers::ForwardForceMagnitudeMultiplier' has a wrong offset!");
static_assert(offsetof(FWindSplineForceModifiers, ReverseForceMagnitudeMultiplier) == 0x000028, "Member 'FWindSplineForceModifiers::ReverseForceMagnitudeMultiplier' has a wrong offset!");
static_assert(offsetof(FWindSplineForceModifiers, InwardForceOuterRadiusAccelerationMultiplier) == 0x000050, "Member 'FWindSplineForceModifiers::InwardForceOuterRadiusAccelerationMultiplier' has a wrong offset!");
static_assert(offsetof(FWindSplineForceModifiers, InwardForceInnerRadiusDecelerationMultiplier) == 0x000078, "Member 'FWindSplineForceModifiers::InwardForceInnerRadiusDecelerationMultiplier' has a wrong offset!");

struct FWindSplineTagBasedForceModifiers final
{
public:
	struct FGameplayTagQuery                      Query;
	struct FWindSplineForceModifiers              Modifier;
};
static_assert(alignof(FWindSplineTagBasedForceModifiers) == 0x000008, "Wrong alignment on FWindSplineTagBasedForceModifiers");
static_assert(sizeof(FWindSplineTagBasedForceModifiers) == 0x0000E8, "Wrong size on FWindSplineTagBasedForceModifiers");
static_assert(offsetof(FWindSplineTagBasedForceModifiers, Query) == 0x000000, "Member 'FWindSplineTagBasedForceModifiers::Query' has a wrong offset!");
static_assert(offsetof(FWindSplineTagBasedForceModifiers, Modifier) == 0x000048, "Member 'FWindSplineTagBasedForceModifiers::Modifier' has a wrong offset!");

struct FWindSplineTargetEffects final
{
public:
	struct FGameplayTagQuery                      Filter;
	struct FGameplayTag                           Cue;
	uint8                                         Pad_4C[0x4];
	TArray<TSubclassOf<class UGameplayEffect>>    GameplayEffects;
};
static_assert(alignof(FWindSplineTargetEffects) == 0x000008, "Wrong alignment on FWindSplineTargetEffects");
static_assert(sizeof(FWindSplineTargetEffects) == 0x000060, "Wrong size on FWindSplineTargetEffects");
static_assert(offsetof(FWindSplineTargetEffects, Filter) == 0x000000, "Member 'FWindSplineTargetEffects::Filter' has a wrong offset!");
static_assert(offsetof(FWindSplineTargetEffects, Cue) == 0x000048, "Member 'FWindSplineTargetEffects::Cue' has a wrong offset!");
static_assert(offsetof(FWindSplineTargetEffects, GameplayEffects) == 0x000050, "Member 'FWindSplineTargetEffects::GameplayEffects' has a wrong offset!");

struct FWindSplineBlockageID final
{
public:
	uint32                                        ID;
};
static_assert(alignof(FWindSplineBlockageID) == 0x000004, "Wrong alignment on FWindSplineBlockageID");
static_assert(sizeof(FWindSplineBlockageID) == 0x000004, "Wrong size on FWindSplineBlockageID");
static_assert(offsetof(FWindSplineBlockageID, ID) == 0x000000, "Member 'FWindSplineBlockageID::ID' has a wrong offset!");

struct FWindSplineSubDivBlockage final
{
public:
	int32                                         SubDivIdx;
	float                                         StartSectionLength;
};
static_assert(alignof(FWindSplineSubDivBlockage) == 0x000004, "Wrong alignment on FWindSplineSubDivBlockage");
static_assert(sizeof(FWindSplineSubDivBlockage) == 0x000008, "Wrong size on FWindSplineSubDivBlockage");
static_assert(offsetof(FWindSplineSubDivBlockage, SubDivIdx) == 0x000000, "Member 'FWindSplineSubDivBlockage::SubDivIdx' has a wrong offset!");
static_assert(offsetof(FWindSplineSubDivBlockage, StartSectionLength) == 0x000004, "Member 'FWindSplineSubDivBlockage::StartSectionLength' has a wrong offset!");

struct FWindSplineBlockage final : public FFastArraySerializerItem
{
public:
	struct FWindSplineBlockageID                  ID;
	TArray<struct FWindSplineSubDivBlockage>      SubDivBlockages;
	float                                         ActivationTime;
	float                                         DeactivationTime;
	uint8                                         Pad_28[0x8];
};
static_assert(alignof(FWindSplineBlockage) == 0x000008, "Wrong alignment on FWindSplineBlockage");
static_assert(sizeof(FWindSplineBlockage) == 0x000030, "Wrong size on FWindSplineBlockage");
static_assert(offsetof(FWindSplineBlockage, ID) == 0x00000C, "Member 'FWindSplineBlockage::ID' has a wrong offset!");
static_assert(offsetof(FWindSplineBlockage, SubDivBlockages) == 0x000010, "Member 'FWindSplineBlockage::SubDivBlockages' has a wrong offset!");
static_assert(offsetof(FWindSplineBlockage, ActivationTime) == 0x000020, "Member 'FWindSplineBlockage::ActivationTime' has a wrong offset!");
static_assert(offsetof(FWindSplineBlockage, DeactivationTime) == 0x000024, "Member 'FWindSplineBlockage::DeactivationTime' has a wrong offset!");

struct FWindSplineBlockageArray final : public FFastArraySerializer
{
public:
	TArray<struct FWindSplineBlockage>            Items;
};
static_assert(alignof(FWindSplineBlockageArray) == 0x000008, "Wrong alignment on FWindSplineBlockageArray");
static_assert(sizeof(FWindSplineBlockageArray) == 0x000118, "Wrong size on FWindSplineBlockageArray");
static_assert(offsetof(FWindSplineBlockageArray, Items) == 0x000108, "Member 'FWindSplineBlockageArray::Items' has a wrong offset!");

struct FWindSplineMeshData final
{
public:
	uint8                                         Pad_0[0x8];
	TArray<class UMaterialInstanceDynamic*>       MeshMaterials;
};
static_assert(alignof(FWindSplineMeshData) == 0x000008, "Wrong alignment on FWindSplineMeshData");
static_assert(sizeof(FWindSplineMeshData) == 0x000018, "Wrong size on FWindSplineMeshData");
static_assert(offsetof(FWindSplineMeshData, MeshMaterials) == 0x000008, "Member 'FWindSplineMeshData::MeshMaterials' has a wrong offset!");

}
