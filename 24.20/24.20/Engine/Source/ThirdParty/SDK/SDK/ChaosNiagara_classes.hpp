#pragma once

#include "Basic.hpp"

#include "ChaosNiagara_structs.hpp"
#include "Niagara_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UNiagaraDataInterfaceChaosDestruction final : public UNiagaraDataInterface
{
public:
	TSet<class AChaosSolverActor*>                ChaosSolverActorSet;
	EDataSourceTypeEnum                           DataSourceType;
	uint8                                         Pad_89[0x3];
	int32                                         DataProcessFrequency;
	int32                                         MaxNumberOfDataEntriesToSpawn;
	bool                                          DoSpawn;
	uint8                                         Pad_95[0x3];
	struct FVector2D                              SpawnMultiplierMinMax;
	float                                         SpawnChance;
	uint8                                         Pad_AC[0x4];
	struct FVector2D                              ImpulseToSpawnMinMax;
	struct FVector2D                              SpeedToSpawnMinMax;
	struct FVector2D                              MassToSpawnMinMax;
	struct FVector2D                              ExtentMinToSpawnMinMax;
	struct FVector2D                              ExtentMaxToSpawnMinMax;
	struct FVector2D                              VolumeToSpawnMinMax;
	struct FVector2D                              SolverTimeToSpawnMinMax;
	int32                                         SurfaceTypeToSpawn;
	ELocationFilteringModeEnum                    LocationFilteringMode;
	ELocationXToSpawnEnum                         LocationXToSpawn;
	uint8                                         Pad_126[0x2];
	struct FVector2D                              LocationXToSpawnMinMax;
	ELocationYToSpawnEnum                         LocationYToSpawn;
	uint8                                         Pad_139[0x7];
	struct FVector2D                              LocationYToSpawnMinMax;
	ELocationZToSpawnEnum                         LocationZToSpawn;
	uint8                                         Pad_151[0x7];
	struct FVector2D                              LocationZToSpawnMinMax;
	float                                         TrailMinSpeedToSpawn;
	EDataSortTypeEnum                             DataSortingType;
	bool                                          bGetExternalCollisionData;
	bool                                          DoSpatialHash;
	uint8                                         Pad_16F[0x1];
	struct FVector                                SpatialHashVolumeMin;
	struct FVector                                SpatialHashVolumeMax;
	struct FVector                                SpatialHashVolumeCellSize;
	int32                                         MaxDataPerCell;
	bool                                          bApplyMaterialsFilter;
	uint8                                         Pad_1BD[0x3];
	TSet<class UPhysicalMaterial*>                ChaosBreakingMaterialSet;
	bool                                          bGetExternalBreakingData;
	bool                                          bGetExternalTrailingData;
	uint8                                         Pad_212[0x6];
	struct FVector2D                              RandomPositionMagnitudeMinMax;
	float                                         InheritedVelocityMultiplier;
	ERandomVelocityGenerationTypeEnum             RandomVelocityGenerationType;
	uint8                                         Pad_22D[0x3];
	struct FVector2D                              RandomVelocityMagnitudeMinMax;
	float                                         SpreadAngleMax;
	uint8                                         Pad_244[0x4];
	struct FVector                                VelocityOffsetMin;
	struct FVector                                VelocityOffsetMax;
	struct FVector2D                              FinalVelocityMagnitudeMinMax;
	float                                         MaxLatency;
	EDebugTypeEnum                                DebugType;
	uint8                                         Pad_28D[0x3];
	int32                                         LastSpawnedPointID;
	float                                         LastSpawnTime;
	uint8                                         Pad_298[0x10];
	float                                         SolverTime;
	float                                         TimeStampOfLastProcessedData;
	uint8                                         Pad_2B0[0x98];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceChaosDestruction">();
	}
	static class UNiagaraDataInterfaceChaosDestruction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceChaosDestruction>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceChaosDestruction) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceChaosDestruction");
static_assert(sizeof(UNiagaraDataInterfaceChaosDestruction) == 0x000348, "Wrong size on UNiagaraDataInterfaceChaosDestruction");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, ChaosSolverActorSet) == 0x000038, "Member 'UNiagaraDataInterfaceChaosDestruction::ChaosSolverActorSet' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DataSourceType) == 0x000088, "Member 'UNiagaraDataInterfaceChaosDestruction::DataSourceType' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DataProcessFrequency) == 0x00008C, "Member 'UNiagaraDataInterfaceChaosDestruction::DataProcessFrequency' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, MaxNumberOfDataEntriesToSpawn) == 0x000090, "Member 'UNiagaraDataInterfaceChaosDestruction::MaxNumberOfDataEntriesToSpawn' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DoSpawn) == 0x000094, "Member 'UNiagaraDataInterfaceChaosDestruction::DoSpawn' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpawnMultiplierMinMax) == 0x000098, "Member 'UNiagaraDataInterfaceChaosDestruction::SpawnMultiplierMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpawnChance) == 0x0000A8, "Member 'UNiagaraDataInterfaceChaosDestruction::SpawnChance' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, ImpulseToSpawnMinMax) == 0x0000B0, "Member 'UNiagaraDataInterfaceChaosDestruction::ImpulseToSpawnMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpeedToSpawnMinMax) == 0x0000C0, "Member 'UNiagaraDataInterfaceChaosDestruction::SpeedToSpawnMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, MassToSpawnMinMax) == 0x0000D0, "Member 'UNiagaraDataInterfaceChaosDestruction::MassToSpawnMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, ExtentMinToSpawnMinMax) == 0x0000E0, "Member 'UNiagaraDataInterfaceChaosDestruction::ExtentMinToSpawnMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, ExtentMaxToSpawnMinMax) == 0x0000F0, "Member 'UNiagaraDataInterfaceChaosDestruction::ExtentMaxToSpawnMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, VolumeToSpawnMinMax) == 0x000100, "Member 'UNiagaraDataInterfaceChaosDestruction::VolumeToSpawnMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SolverTimeToSpawnMinMax) == 0x000110, "Member 'UNiagaraDataInterfaceChaosDestruction::SolverTimeToSpawnMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SurfaceTypeToSpawn) == 0x000120, "Member 'UNiagaraDataInterfaceChaosDestruction::SurfaceTypeToSpawn' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationFilteringMode) == 0x000124, "Member 'UNiagaraDataInterfaceChaosDestruction::LocationFilteringMode' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationXToSpawn) == 0x000125, "Member 'UNiagaraDataInterfaceChaosDestruction::LocationXToSpawn' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationXToSpawnMinMax) == 0x000128, "Member 'UNiagaraDataInterfaceChaosDestruction::LocationXToSpawnMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationYToSpawn) == 0x000138, "Member 'UNiagaraDataInterfaceChaosDestruction::LocationYToSpawn' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationYToSpawnMinMax) == 0x000140, "Member 'UNiagaraDataInterfaceChaosDestruction::LocationYToSpawnMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationZToSpawn) == 0x000150, "Member 'UNiagaraDataInterfaceChaosDestruction::LocationZToSpawn' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationZToSpawnMinMax) == 0x000158, "Member 'UNiagaraDataInterfaceChaosDestruction::LocationZToSpawnMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, TrailMinSpeedToSpawn) == 0x000168, "Member 'UNiagaraDataInterfaceChaosDestruction::TrailMinSpeedToSpawn' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DataSortingType) == 0x00016C, "Member 'UNiagaraDataInterfaceChaosDestruction::DataSortingType' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, bGetExternalCollisionData) == 0x00016D, "Member 'UNiagaraDataInterfaceChaosDestruction::bGetExternalCollisionData' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DoSpatialHash) == 0x00016E, "Member 'UNiagaraDataInterfaceChaosDestruction::DoSpatialHash' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpatialHashVolumeMin) == 0x000170, "Member 'UNiagaraDataInterfaceChaosDestruction::SpatialHashVolumeMin' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpatialHashVolumeMax) == 0x000188, "Member 'UNiagaraDataInterfaceChaosDestruction::SpatialHashVolumeMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpatialHashVolumeCellSize) == 0x0001A0, "Member 'UNiagaraDataInterfaceChaosDestruction::SpatialHashVolumeCellSize' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, MaxDataPerCell) == 0x0001B8, "Member 'UNiagaraDataInterfaceChaosDestruction::MaxDataPerCell' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, bApplyMaterialsFilter) == 0x0001BC, "Member 'UNiagaraDataInterfaceChaosDestruction::bApplyMaterialsFilter' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, ChaosBreakingMaterialSet) == 0x0001C0, "Member 'UNiagaraDataInterfaceChaosDestruction::ChaosBreakingMaterialSet' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, bGetExternalBreakingData) == 0x000210, "Member 'UNiagaraDataInterfaceChaosDestruction::bGetExternalBreakingData' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, bGetExternalTrailingData) == 0x000211, "Member 'UNiagaraDataInterfaceChaosDestruction::bGetExternalTrailingData' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, RandomPositionMagnitudeMinMax) == 0x000218, "Member 'UNiagaraDataInterfaceChaosDestruction::RandomPositionMagnitudeMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, InheritedVelocityMultiplier) == 0x000228, "Member 'UNiagaraDataInterfaceChaosDestruction::InheritedVelocityMultiplier' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, RandomVelocityGenerationType) == 0x00022C, "Member 'UNiagaraDataInterfaceChaosDestruction::RandomVelocityGenerationType' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, RandomVelocityMagnitudeMinMax) == 0x000230, "Member 'UNiagaraDataInterfaceChaosDestruction::RandomVelocityMagnitudeMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpreadAngleMax) == 0x000240, "Member 'UNiagaraDataInterfaceChaosDestruction::SpreadAngleMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, VelocityOffsetMin) == 0x000248, "Member 'UNiagaraDataInterfaceChaosDestruction::VelocityOffsetMin' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, VelocityOffsetMax) == 0x000260, "Member 'UNiagaraDataInterfaceChaosDestruction::VelocityOffsetMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, FinalVelocityMagnitudeMinMax) == 0x000278, "Member 'UNiagaraDataInterfaceChaosDestruction::FinalVelocityMagnitudeMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, MaxLatency) == 0x000288, "Member 'UNiagaraDataInterfaceChaosDestruction::MaxLatency' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DebugType) == 0x00028C, "Member 'UNiagaraDataInterfaceChaosDestruction::DebugType' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LastSpawnedPointID) == 0x000290, "Member 'UNiagaraDataInterfaceChaosDestruction::LastSpawnedPointID' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LastSpawnTime) == 0x000294, "Member 'UNiagaraDataInterfaceChaosDestruction::LastSpawnTime' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SolverTime) == 0x0002A8, "Member 'UNiagaraDataInterfaceChaosDestruction::SolverTime' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, TimeStampOfLastProcessedData) == 0x0002AC, "Member 'UNiagaraDataInterfaceChaosDestruction::TimeStampOfLastProcessedData' has a wrong offset!");

class UNiagaraDataInterfaceGeometryCollection final : public UNiagaraDataInterface
{
public:
	class AGeometryCollectionActor*               GeometryCollectionActor;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceGeometryCollection">();
	}
	static class UNiagaraDataInterfaceGeometryCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceGeometryCollection>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceGeometryCollection) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceGeometryCollection");
static_assert(sizeof(UNiagaraDataInterfaceGeometryCollection) == 0x000040, "Wrong size on UNiagaraDataInterfaceGeometryCollection");
static_assert(offsetof(UNiagaraDataInterfaceGeometryCollection, GeometryCollectionActor) == 0x000038, "Member 'UNiagaraDataInterfaceGeometryCollection::GeometryCollectionActor' has a wrong offset!");

class UNiagaraDataInterfacePhysicsField final : public UNiagaraDataInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfacePhysicsField">();
	}
	static class UNiagaraDataInterfacePhysicsField* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfacePhysicsField>();
	}
};
static_assert(alignof(UNiagaraDataInterfacePhysicsField) == 0x000008, "Wrong alignment on UNiagaraDataInterfacePhysicsField");
static_assert(sizeof(UNiagaraDataInterfacePhysicsField) == 0x000038, "Wrong size on UNiagaraDataInterfacePhysicsField");

}
