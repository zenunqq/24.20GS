#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "NetCore_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FTempestLightningBoltEffectContainer final
{
public:
	struct FGameplayTagQuery                      TargetFilter;
	TSubclassOf<class UGameplayEffect>            GameplayEffect;
};
static_assert(alignof(FTempestLightningBoltEffectContainer) == 0x000008, "Wrong alignment on FTempestLightningBoltEffectContainer");
static_assert(sizeof(FTempestLightningBoltEffectContainer) == 0x000050, "Wrong size on FTempestLightningBoltEffectContainer");
static_assert(offsetof(FTempestLightningBoltEffectContainer, TargetFilter) == 0x000000, "Member 'FTempestLightningBoltEffectContainer::TargetFilter' has a wrong offset!");
static_assert(offsetof(FTempestLightningBoltEffectContainer, GameplayEffect) == 0x000048, "Member 'FTempestLightningBoltEffectContainer::GameplayEffect' has a wrong offset!");

struct FTempestLightningBoltData final
{
public:
	class AFortPawn*                              SourcePawn;
	uint8                                         Pad_8[0x40];
	class AFortGameplayEffectDeliveryActor*       LightningBolt;
	TArray<class AActor*>                         TargetActors;
	TArray<class AFortPawn*>                      TargetPawns;
	uint8                                         Pad_70[0x8];
};
static_assert(alignof(FTempestLightningBoltData) == 0x000008, "Wrong alignment on FTempestLightningBoltData");
static_assert(sizeof(FTempestLightningBoltData) == 0x000078, "Wrong size on FTempestLightningBoltData");
static_assert(offsetof(FTempestLightningBoltData, SourcePawn) == 0x000000, "Member 'FTempestLightningBoltData::SourcePawn' has a wrong offset!");
static_assert(offsetof(FTempestLightningBoltData, LightningBolt) == 0x000048, "Member 'FTempestLightningBoltData::LightningBolt' has a wrong offset!");
static_assert(offsetof(FTempestLightningBoltData, TargetActors) == 0x000050, "Member 'FTempestLightningBoltData::TargetActors' has a wrong offset!");
static_assert(offsetof(FTempestLightningBoltData, TargetPawns) == 0x000060, "Member 'FTempestLightningBoltData::TargetPawns' has a wrong offset!");

struct alignas(0x08) FTornadoActorInfo final
{
public:
	uint8                                         Pad_0[0x50];
};
static_assert(alignof(FTornadoActorInfo) == 0x000008, "Wrong alignment on FTornadoActorInfo");
static_assert(sizeof(FTornadoActorInfo) == 0x000050, "Wrong size on FTornadoActorInfo");

struct FTornadoObjectForceModifiers final
{
public:
	float                                         TangentVelocityMultiplier;
	float                                         HeightVelocityMultiplier;
	float                                         DragMultiplier;
	float                                         TorqueMultiplier;
};
static_assert(alignof(FTornadoObjectForceModifiers) == 0x000004, "Wrong alignment on FTornadoObjectForceModifiers");
static_assert(sizeof(FTornadoObjectForceModifiers) == 0x000010, "Wrong size on FTornadoObjectForceModifiers");
static_assert(offsetof(FTornadoObjectForceModifiers, TangentVelocityMultiplier) == 0x000000, "Member 'FTornadoObjectForceModifiers::TangentVelocityMultiplier' has a wrong offset!");
static_assert(offsetof(FTornadoObjectForceModifiers, HeightVelocityMultiplier) == 0x000004, "Member 'FTornadoObjectForceModifiers::HeightVelocityMultiplier' has a wrong offset!");
static_assert(offsetof(FTornadoObjectForceModifiers, DragMultiplier) == 0x000008, "Member 'FTornadoObjectForceModifiers::DragMultiplier' has a wrong offset!");
static_assert(offsetof(FTornadoObjectForceModifiers, TorqueMultiplier) == 0x00000C, "Member 'FTornadoObjectForceModifiers::TorqueMultiplier' has a wrong offset!");

struct FTornadoConfigEntry final : public FTableRowBase
{
public:
	float                                         EyeBufferDistance;
	uint8                                         Pad_C[0x4];
	class UCurveFloat*                            TargetOrbitRadiusCurve;
	float                                         TargetOrbitRadius;
	float                                         OrbitStrength;
	float                                         TargetTangentVelocity;
	float                                         TangentVelocityVariance;
	float                                         TangentAcceleration;
	float                                         TangentAccelerationVariance;
	float                                         TangentAngleOffset;
	float                                         TargetHeightVelocity;
	float                                         HeightVelocityVariance;
	float                                         HeightAcceleration;
	float                                         HeightAccelerationVariance;
	float                                         TorqueStrength;
	float                                         TorqueVariance;
	float                                         TimeToForceEject;
	float                                         HeightToForceEject;
	float                                         DepthToForceEject;
	float                                         DistanceToForceEject;
	float                                         EjectionBoost;
	float                                         MaxDragVelocity;
	float                                         DragCoefficient1;
	float                                         DragCoefficient2;
	uint8                                         Pad_6C[0x4];
	TMap<EFortPhysicsSimSize, struct FTornadoObjectForceModifiers> SizeForceModifiers;
	TMap<EFortPhysicsObjectType, struct FTornadoObjectForceModifiers> ObjectTypeForceModifiers;
	float                                         PlayerGravityFloorOffset;
	float                                         PlayerGravityFloorWidth;
	float                                         PlayerGravityFloorGravityScalar;
	float                                         PeriodicDamageToPawns;
	float                                         PeriodicDamageToProps;
	float                                         BurstDamageToStaticActors;
	float                                         ChancePerSecondToApplyBurstDamage;
	bool                                          bAllowPickupPlayers;
	bool                                          bAllowPickupPawns;
	bool                                          bAllowPickupVehicles;
	bool                                          bAllowPickupProjectiles;
	bool                                          bAffectStaticObjects;
	EFortPhysicsSimSize                           MaxAllowedPhysicsObjectSize;
	EFortPhysicsSimSize                           MinAllowedPhysicsObjectSize;
	uint8                                         Pad_133[0x5];
};
static_assert(alignof(FTornadoConfigEntry) == 0x000008, "Wrong alignment on FTornadoConfigEntry");
static_assert(sizeof(FTornadoConfigEntry) == 0x000138, "Wrong size on FTornadoConfigEntry");
static_assert(offsetof(FTornadoConfigEntry, EyeBufferDistance) == 0x000008, "Member 'FTornadoConfigEntry::EyeBufferDistance' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, TargetOrbitRadiusCurve) == 0x000010, "Member 'FTornadoConfigEntry::TargetOrbitRadiusCurve' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, TargetOrbitRadius) == 0x000018, "Member 'FTornadoConfigEntry::TargetOrbitRadius' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, OrbitStrength) == 0x00001C, "Member 'FTornadoConfigEntry::OrbitStrength' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, TargetTangentVelocity) == 0x000020, "Member 'FTornadoConfigEntry::TargetTangentVelocity' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, TangentVelocityVariance) == 0x000024, "Member 'FTornadoConfigEntry::TangentVelocityVariance' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, TangentAcceleration) == 0x000028, "Member 'FTornadoConfigEntry::TangentAcceleration' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, TangentAccelerationVariance) == 0x00002C, "Member 'FTornadoConfigEntry::TangentAccelerationVariance' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, TangentAngleOffset) == 0x000030, "Member 'FTornadoConfigEntry::TangentAngleOffset' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, TargetHeightVelocity) == 0x000034, "Member 'FTornadoConfigEntry::TargetHeightVelocity' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, HeightVelocityVariance) == 0x000038, "Member 'FTornadoConfigEntry::HeightVelocityVariance' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, HeightAcceleration) == 0x00003C, "Member 'FTornadoConfigEntry::HeightAcceleration' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, HeightAccelerationVariance) == 0x000040, "Member 'FTornadoConfigEntry::HeightAccelerationVariance' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, TorqueStrength) == 0x000044, "Member 'FTornadoConfigEntry::TorqueStrength' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, TorqueVariance) == 0x000048, "Member 'FTornadoConfigEntry::TorqueVariance' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, TimeToForceEject) == 0x00004C, "Member 'FTornadoConfigEntry::TimeToForceEject' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, HeightToForceEject) == 0x000050, "Member 'FTornadoConfigEntry::HeightToForceEject' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, DepthToForceEject) == 0x000054, "Member 'FTornadoConfigEntry::DepthToForceEject' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, DistanceToForceEject) == 0x000058, "Member 'FTornadoConfigEntry::DistanceToForceEject' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, EjectionBoost) == 0x00005C, "Member 'FTornadoConfigEntry::EjectionBoost' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, MaxDragVelocity) == 0x000060, "Member 'FTornadoConfigEntry::MaxDragVelocity' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, DragCoefficient1) == 0x000064, "Member 'FTornadoConfigEntry::DragCoefficient1' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, DragCoefficient2) == 0x000068, "Member 'FTornadoConfigEntry::DragCoefficient2' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, SizeForceModifiers) == 0x000070, "Member 'FTornadoConfigEntry::SizeForceModifiers' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, ObjectTypeForceModifiers) == 0x0000C0, "Member 'FTornadoConfigEntry::ObjectTypeForceModifiers' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, PlayerGravityFloorOffset) == 0x000110, "Member 'FTornadoConfigEntry::PlayerGravityFloorOffset' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, PlayerGravityFloorWidth) == 0x000114, "Member 'FTornadoConfigEntry::PlayerGravityFloorWidth' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, PlayerGravityFloorGravityScalar) == 0x000118, "Member 'FTornadoConfigEntry::PlayerGravityFloorGravityScalar' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, PeriodicDamageToPawns) == 0x00011C, "Member 'FTornadoConfigEntry::PeriodicDamageToPawns' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, PeriodicDamageToProps) == 0x000120, "Member 'FTornadoConfigEntry::PeriodicDamageToProps' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, BurstDamageToStaticActors) == 0x000124, "Member 'FTornadoConfigEntry::BurstDamageToStaticActors' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, ChancePerSecondToApplyBurstDamage) == 0x000128, "Member 'FTornadoConfigEntry::ChancePerSecondToApplyBurstDamage' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, bAllowPickupPlayers) == 0x00012C, "Member 'FTornadoConfigEntry::bAllowPickupPlayers' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, bAllowPickupPawns) == 0x00012D, "Member 'FTornadoConfigEntry::bAllowPickupPawns' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, bAllowPickupVehicles) == 0x00012E, "Member 'FTornadoConfigEntry::bAllowPickupVehicles' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, bAllowPickupProjectiles) == 0x00012F, "Member 'FTornadoConfigEntry::bAllowPickupProjectiles' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, bAffectStaticObjects) == 0x000130, "Member 'FTornadoConfigEntry::bAffectStaticObjects' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, MaxAllowedPhysicsObjectSize) == 0x000131, "Member 'FTornadoConfigEntry::MaxAllowedPhysicsObjectSize' has a wrong offset!");
static_assert(offsetof(FTornadoConfigEntry, MinAllowedPhysicsObjectSize) == 0x000132, "Member 'FTornadoConfigEntry::MinAllowedPhysicsObjectSize' has a wrong offset!");

struct FTornadoSimulationData final : public FFastArraySerializerItem
{
public:
	TWeakObjectPtr<class AActor>                  Actor;
	EFortPhysicsObjectType                        ObjectType;
	uint8                                         Pad_15[0x3];
	float                                         TangentVelocity;
	float                                         TangentAccel;
	float                                         HeightVelocity;
	float                                         HeightAccel;
	struct FVector                                Torque;
};
static_assert(alignof(FTornadoSimulationData) == 0x000008, "Wrong alignment on FTornadoSimulationData");
static_assert(sizeof(FTornadoSimulationData) == 0x000040, "Wrong size on FTornadoSimulationData");
static_assert(offsetof(FTornadoSimulationData, Actor) == 0x00000C, "Member 'FTornadoSimulationData::Actor' has a wrong offset!");
static_assert(offsetof(FTornadoSimulationData, ObjectType) == 0x000014, "Member 'FTornadoSimulationData::ObjectType' has a wrong offset!");
static_assert(offsetof(FTornadoSimulationData, TangentVelocity) == 0x000018, "Member 'FTornadoSimulationData::TangentVelocity' has a wrong offset!");
static_assert(offsetof(FTornadoSimulationData, TangentAccel) == 0x00001C, "Member 'FTornadoSimulationData::TangentAccel' has a wrong offset!");
static_assert(offsetof(FTornadoSimulationData, HeightVelocity) == 0x000020, "Member 'FTornadoSimulationData::HeightVelocity' has a wrong offset!");
static_assert(offsetof(FTornadoSimulationData, HeightAccel) == 0x000024, "Member 'FTornadoSimulationData::HeightAccel' has a wrong offset!");
static_assert(offsetof(FTornadoSimulationData, Torque) == 0x000028, "Member 'FTornadoSimulationData::Torque' has a wrong offset!");

struct FTornadoTelemetryStats final
{
public:
	TMap<EFortPhysicsObjectType, int32>           NumActorsEnteredByType;
	TSet<struct FUniqueNetIdRepl>                 EnteredPlayerAccountIds;
	int32                                         NumPreBuiltStructuresDestroyed;
	int32                                         NumPlayerBuiltStructuresDestroyed;
};
static_assert(alignof(FTornadoTelemetryStats) == 0x000008, "Wrong alignment on FTornadoTelemetryStats");
static_assert(sizeof(FTornadoTelemetryStats) == 0x0000A8, "Wrong size on FTornadoTelemetryStats");
static_assert(offsetof(FTornadoTelemetryStats, NumActorsEnteredByType) == 0x000000, "Member 'FTornadoTelemetryStats::NumActorsEnteredByType' has a wrong offset!");
static_assert(offsetof(FTornadoTelemetryStats, EnteredPlayerAccountIds) == 0x000050, "Member 'FTornadoTelemetryStats::EnteredPlayerAccountIds' has a wrong offset!");
static_assert(offsetof(FTornadoTelemetryStats, NumPreBuiltStructuresDestroyed) == 0x0000A0, "Member 'FTornadoTelemetryStats::NumPreBuiltStructuresDestroyed' has a wrong offset!");
static_assert(offsetof(FTornadoTelemetryStats, NumPlayerBuiltStructuresDestroyed) == 0x0000A4, "Member 'FTornadoTelemetryStats::NumPlayerBuiltStructuresDestroyed' has a wrong offset!");

struct FTornadoClientSimulationArray final : public FFastArraySerializer
{
public:
	TArray<struct FTornadoSimulationData>         ActorsToSimulateArray;
};
static_assert(alignof(FTornadoClientSimulationArray) == 0x000008, "Wrong alignment on FTornadoClientSimulationArray");
static_assert(sizeof(FTornadoClientSimulationArray) == 0x000118, "Wrong size on FTornadoClientSimulationArray");
static_assert(offsetof(FTornadoClientSimulationArray, ActorsToSimulateArray) == 0x000108, "Member 'FTornadoClientSimulationArray::ActorsToSimulateArray' has a wrong offset!");

}
