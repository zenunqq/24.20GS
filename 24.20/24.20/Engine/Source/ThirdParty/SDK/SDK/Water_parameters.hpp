#pragma once

#include "Basic.hpp"

#include "Water_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct BuoyancyComponent_GetLastWaterSurfaceInfo final
{
public:
	struct FVector                                OutWaterPlaneLocation;
	struct FVector                                OutWaterPlaneNormal;
	struct FVector                                OutWaterSurfacePosition;
	float                                         OutWaterDepth;
	int32                                         OutWaterBodyIdx;
	struct FVector                                OutWaterVelocity;
};
static_assert(alignof(BuoyancyComponent_GetLastWaterSurfaceInfo) == 0x000008, "Wrong alignment on BuoyancyComponent_GetLastWaterSurfaceInfo");
static_assert(sizeof(BuoyancyComponent_GetLastWaterSurfaceInfo) == 0x000068, "Wrong size on BuoyancyComponent_GetLastWaterSurfaceInfo");
static_assert(offsetof(BuoyancyComponent_GetLastWaterSurfaceInfo, OutWaterPlaneLocation) == 0x000000, "Member 'BuoyancyComponent_GetLastWaterSurfaceInfo::OutWaterPlaneLocation' has a wrong offset!");
static_assert(offsetof(BuoyancyComponent_GetLastWaterSurfaceInfo, OutWaterPlaneNormal) == 0x000018, "Member 'BuoyancyComponent_GetLastWaterSurfaceInfo::OutWaterPlaneNormal' has a wrong offset!");
static_assert(offsetof(BuoyancyComponent_GetLastWaterSurfaceInfo, OutWaterSurfacePosition) == 0x000030, "Member 'BuoyancyComponent_GetLastWaterSurfaceInfo::OutWaterSurfacePosition' has a wrong offset!");
static_assert(offsetof(BuoyancyComponent_GetLastWaterSurfaceInfo, OutWaterDepth) == 0x000048, "Member 'BuoyancyComponent_GetLastWaterSurfaceInfo::OutWaterDepth' has a wrong offset!");
static_assert(offsetof(BuoyancyComponent_GetLastWaterSurfaceInfo, OutWaterBodyIdx) == 0x00004C, "Member 'BuoyancyComponent_GetLastWaterSurfaceInfo::OutWaterBodyIdx' has a wrong offset!");
static_assert(offsetof(BuoyancyComponent_GetLastWaterSurfaceInfo, OutWaterVelocity) == 0x000050, "Member 'BuoyancyComponent_GetLastWaterSurfaceInfo::OutWaterVelocity' has a wrong offset!");

struct BuoyancyComponent_OnPontoonEnteredWater final
{
public:
	struct FSphericalPontoon                      Pontoon;
};
static_assert(alignof(BuoyancyComponent_OnPontoonEnteredWater) == 0x000010, "Wrong alignment on BuoyancyComponent_OnPontoonEnteredWater");
static_assert(sizeof(BuoyancyComponent_OnPontoonEnteredWater) == 0x0002D0, "Wrong size on BuoyancyComponent_OnPontoonEnteredWater");
static_assert(offsetof(BuoyancyComponent_OnPontoonEnteredWater, Pontoon) == 0x000000, "Member 'BuoyancyComponent_OnPontoonEnteredWater::Pontoon' has a wrong offset!");

struct BuoyancyComponent_OnPontoonExitedWater final
{
public:
	struct FSphericalPontoon                      Pontoon;
};
static_assert(alignof(BuoyancyComponent_OnPontoonExitedWater) == 0x000010, "Wrong alignment on BuoyancyComponent_OnPontoonExitedWater");
static_assert(sizeof(BuoyancyComponent_OnPontoonExitedWater) == 0x0002D0, "Wrong size on BuoyancyComponent_OnPontoonExitedWater");
static_assert(offsetof(BuoyancyComponent_OnPontoonExitedWater, Pontoon) == 0x000000, "Member 'BuoyancyComponent_OnPontoonExitedWater::Pontoon' has a wrong offset!");

struct BuoyancyComponent_GetCurrentWaterBodyComponents final
{
public:
	TArray<class UWaterBodyComponent*>            ReturnValue;
};
static_assert(alignof(BuoyancyComponent_GetCurrentWaterBodyComponents) == 0x000008, "Wrong alignment on BuoyancyComponent_GetCurrentWaterBodyComponents");
static_assert(sizeof(BuoyancyComponent_GetCurrentWaterBodyComponents) == 0x000010, "Wrong size on BuoyancyComponent_GetCurrentWaterBodyComponents");
static_assert(offsetof(BuoyancyComponent_GetCurrentWaterBodyComponents, ReturnValue) == 0x000000, "Member 'BuoyancyComponent_GetCurrentWaterBodyComponents::ReturnValue' has a wrong offset!");

struct BuoyancyComponent_IsInWaterBody final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(BuoyancyComponent_IsInWaterBody) == 0x000001, "Wrong alignment on BuoyancyComponent_IsInWaterBody");
static_assert(sizeof(BuoyancyComponent_IsInWaterBody) == 0x000001, "Wrong size on BuoyancyComponent_IsInWaterBody");
static_assert(offsetof(BuoyancyComponent_IsInWaterBody, ReturnValue) == 0x000000, "Member 'BuoyancyComponent_IsInWaterBody::ReturnValue' has a wrong offset!");

struct BuoyancyComponent_IsOverlappingWaterBody final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(BuoyancyComponent_IsOverlappingWaterBody) == 0x000001, "Wrong alignment on BuoyancyComponent_IsOverlappingWaterBody");
static_assert(sizeof(BuoyancyComponent_IsOverlappingWaterBody) == 0x000001, "Wrong size on BuoyancyComponent_IsOverlappingWaterBody");
static_assert(offsetof(BuoyancyComponent_IsOverlappingWaterBody, ReturnValue) == 0x000000, "Member 'BuoyancyComponent_IsOverlappingWaterBody::ReturnValue' has a wrong offset!");

struct BuoyancyManager_GetBuoyancyComponentManager final
{
public:
	const class UObject*                          WorldContextObject;
	class ABuoyancyManager*                       Manager;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(BuoyancyManager_GetBuoyancyComponentManager) == 0x000008, "Wrong alignment on BuoyancyManager_GetBuoyancyComponentManager");
static_assert(sizeof(BuoyancyManager_GetBuoyancyComponentManager) == 0x000018, "Wrong size on BuoyancyManager_GetBuoyancyComponentManager");
static_assert(offsetof(BuoyancyManager_GetBuoyancyComponentManager, WorldContextObject) == 0x000000, "Member 'BuoyancyManager_GetBuoyancyComponentManager::WorldContextObject' has a wrong offset!");
static_assert(offsetof(BuoyancyManager_GetBuoyancyComponentManager, Manager) == 0x000008, "Member 'BuoyancyManager_GetBuoyancyComponentManager::Manager' has a wrong offset!");
static_assert(offsetof(BuoyancyManager_GetBuoyancyComponentManager, ReturnValue) == 0x000010, "Member 'BuoyancyManager_GetBuoyancyComponentManager::ReturnValue' has a wrong offset!");

struct GerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves final
{
public:
	TArray<struct FGerstnerWave>                  OutWaves;
};
static_assert(alignof(GerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves) == 0x000008, "Wrong alignment on GerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves");
static_assert(sizeof(GerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves) == 0x000010, "Wrong size on GerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves");
static_assert(offsetof(GerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves, OutWaves) == 0x000000, "Member 'GerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves::OutWaves' has a wrong offset!");

struct NiagaraWaterFunctionLibrary_SetWaterBody final
{
public:
	class UNiagaraComponent*                      NiagaraSystem;
	class FString                                 OverrideName;
	class AWaterBody*                             WaterBody;
};
static_assert(alignof(NiagaraWaterFunctionLibrary_SetWaterBody) == 0x000008, "Wrong alignment on NiagaraWaterFunctionLibrary_SetWaterBody");
static_assert(sizeof(NiagaraWaterFunctionLibrary_SetWaterBody) == 0x000020, "Wrong size on NiagaraWaterFunctionLibrary_SetWaterBody");
static_assert(offsetof(NiagaraWaterFunctionLibrary_SetWaterBody, NiagaraSystem) == 0x000000, "Member 'NiagaraWaterFunctionLibrary_SetWaterBody::NiagaraSystem' has a wrong offset!");
static_assert(offsetof(NiagaraWaterFunctionLibrary_SetWaterBody, OverrideName) == 0x000008, "Member 'NiagaraWaterFunctionLibrary_SetWaterBody::OverrideName' has a wrong offset!");
static_assert(offsetof(NiagaraWaterFunctionLibrary_SetWaterBody, WaterBody) == 0x000018, "Member 'NiagaraWaterFunctionLibrary_SetWaterBody::WaterBody' has a wrong offset!");

struct NiagaraWaterFunctionLibrary_SetWaterBodyComponent final
{
public:
	class UNiagaraComponent*                      NiagaraSystem;
	class FString                                 OverrideName;
	class UWaterBodyComponent*                    WaterBodyComponent;
};
static_assert(alignof(NiagaraWaterFunctionLibrary_SetWaterBodyComponent) == 0x000008, "Wrong alignment on NiagaraWaterFunctionLibrary_SetWaterBodyComponent");
static_assert(sizeof(NiagaraWaterFunctionLibrary_SetWaterBodyComponent) == 0x000020, "Wrong size on NiagaraWaterFunctionLibrary_SetWaterBodyComponent");
static_assert(offsetof(NiagaraWaterFunctionLibrary_SetWaterBodyComponent, NiagaraSystem) == 0x000000, "Member 'NiagaraWaterFunctionLibrary_SetWaterBodyComponent::NiagaraSystem' has a wrong offset!");
static_assert(offsetof(NiagaraWaterFunctionLibrary_SetWaterBodyComponent, OverrideName) == 0x000008, "Member 'NiagaraWaterFunctionLibrary_SetWaterBodyComponent::OverrideName' has a wrong offset!");
static_assert(offsetof(NiagaraWaterFunctionLibrary_SetWaterBodyComponent, WaterBodyComponent) == 0x000018, "Member 'NiagaraWaterFunctionLibrary_SetWaterBodyComponent::WaterBodyComponent' has a wrong offset!");

struct WaterBody_GetRiverToLakeTransitionMaterialInstance final
{
public:
	class UMaterialInstanceDynamic*               ReturnValue;
};
static_assert(alignof(WaterBody_GetRiverToLakeTransitionMaterialInstance) == 0x000008, "Wrong alignment on WaterBody_GetRiverToLakeTransitionMaterialInstance");
static_assert(sizeof(WaterBody_GetRiverToLakeTransitionMaterialInstance) == 0x000008, "Wrong size on WaterBody_GetRiverToLakeTransitionMaterialInstance");
static_assert(offsetof(WaterBody_GetRiverToLakeTransitionMaterialInstance, ReturnValue) == 0x000000, "Member 'WaterBody_GetRiverToLakeTransitionMaterialInstance::ReturnValue' has a wrong offset!");

struct WaterBody_GetRiverToOceanTransitionMaterialInstance final
{
public:
	class UMaterialInstanceDynamic*               ReturnValue;
};
static_assert(alignof(WaterBody_GetRiverToOceanTransitionMaterialInstance) == 0x000008, "Wrong alignment on WaterBody_GetRiverToOceanTransitionMaterialInstance");
static_assert(sizeof(WaterBody_GetRiverToOceanTransitionMaterialInstance) == 0x000008, "Wrong size on WaterBody_GetRiverToOceanTransitionMaterialInstance");
static_assert(offsetof(WaterBody_GetRiverToOceanTransitionMaterialInstance, ReturnValue) == 0x000000, "Member 'WaterBody_GetRiverToOceanTransitionMaterialInstance::ReturnValue' has a wrong offset!");

struct WaterBody_GetWaterMaterialInstance final
{
public:
	class UMaterialInstanceDynamic*               ReturnValue;
};
static_assert(alignof(WaterBody_GetWaterMaterialInstance) == 0x000008, "Wrong alignment on WaterBody_GetWaterMaterialInstance");
static_assert(sizeof(WaterBody_GetWaterMaterialInstance) == 0x000008, "Wrong size on WaterBody_GetWaterMaterialInstance");
static_assert(offsetof(WaterBody_GetWaterMaterialInstance, ReturnValue) == 0x000000, "Member 'WaterBody_GetWaterMaterialInstance::ReturnValue' has a wrong offset!");

struct WaterBody_OnWaterBodyChanged final
{
public:
	bool                                          bShapeOrPositionChanged;
	bool                                          bWeightmapSettingsChanged;
};
static_assert(alignof(WaterBody_OnWaterBodyChanged) == 0x000001, "Wrong alignment on WaterBody_OnWaterBodyChanged");
static_assert(sizeof(WaterBody_OnWaterBodyChanged) == 0x000002, "Wrong size on WaterBody_OnWaterBodyChanged");
static_assert(offsetof(WaterBody_OnWaterBodyChanged, bShapeOrPositionChanged) == 0x000000, "Member 'WaterBody_OnWaterBodyChanged::bShapeOrPositionChanged' has a wrong offset!");
static_assert(offsetof(WaterBody_OnWaterBodyChanged, bWeightmapSettingsChanged) == 0x000001, "Member 'WaterBody_OnWaterBodyChanged::bWeightmapSettingsChanged' has a wrong offset!");

struct WaterBody_SetWaterMaterial final
{
public:
	class UMaterialInterface*                     InMaterial;
};
static_assert(alignof(WaterBody_SetWaterMaterial) == 0x000008, "Wrong alignment on WaterBody_SetWaterMaterial");
static_assert(sizeof(WaterBody_SetWaterMaterial) == 0x000008, "Wrong size on WaterBody_SetWaterMaterial");
static_assert(offsetof(WaterBody_SetWaterMaterial, InMaterial) == 0x000000, "Member 'WaterBody_SetWaterMaterial::InMaterial' has a wrong offset!");

struct WaterBody_SetWaterWaves final
{
public:
	class UWaterWavesBase*                        InWaterWaves;
};
static_assert(alignof(WaterBody_SetWaterWaves) == 0x000008, "Wrong alignment on WaterBody_SetWaterWaves");
static_assert(sizeof(WaterBody_SetWaterWaves) == 0x000008, "Wrong size on WaterBody_SetWaterWaves");
static_assert(offsetof(WaterBody_SetWaterWaves, InWaterWaves) == 0x000000, "Member 'WaterBody_SetWaterWaves::InWaterWaves' has a wrong offset!");

struct WaterBody_GetAudioIntensityAtSplineInputKey final
{
public:
	float                                         InKey;
	float                                         ReturnValue;
};
static_assert(alignof(WaterBody_GetAudioIntensityAtSplineInputKey) == 0x000004, "Wrong alignment on WaterBody_GetAudioIntensityAtSplineInputKey");
static_assert(sizeof(WaterBody_GetAudioIntensityAtSplineInputKey) == 0x000008, "Wrong size on WaterBody_GetAudioIntensityAtSplineInputKey");
static_assert(offsetof(WaterBody_GetAudioIntensityAtSplineInputKey, InKey) == 0x000000, "Member 'WaterBody_GetAudioIntensityAtSplineInputKey::InKey' has a wrong offset!");
static_assert(offsetof(WaterBody_GetAudioIntensityAtSplineInputKey, ReturnValue) == 0x000004, "Member 'WaterBody_GetAudioIntensityAtSplineInputKey::ReturnValue' has a wrong offset!");

struct WaterBody_GetExclusionVolumes final
{
public:
	TArray<class AWaterBodyExclusionVolume*>      ReturnValue;
};
static_assert(alignof(WaterBody_GetExclusionVolumes) == 0x000008, "Wrong alignment on WaterBody_GetExclusionVolumes");
static_assert(sizeof(WaterBody_GetExclusionVolumes) == 0x000010, "Wrong size on WaterBody_GetExclusionVolumes");
static_assert(offsetof(WaterBody_GetExclusionVolumes, ReturnValue) == 0x000000, "Member 'WaterBody_GetExclusionVolumes::ReturnValue' has a wrong offset!");

struct WaterBody_GetIslands final
{
public:
	TArray<class AWaterBodyIsland*>               ReturnValue;
};
static_assert(alignof(WaterBody_GetIslands) == 0x000008, "Wrong alignment on WaterBody_GetIslands");
static_assert(sizeof(WaterBody_GetIslands) == 0x000010, "Wrong size on WaterBody_GetIslands");
static_assert(offsetof(WaterBody_GetIslands, ReturnValue) == 0x000000, "Member 'WaterBody_GetIslands::ReturnValue' has a wrong offset!");

struct WaterBody_GetWaterBodyComponent final
{
public:
	class UWaterBodyComponent*                    ReturnValue;
};
static_assert(alignof(WaterBody_GetWaterBodyComponent) == 0x000008, "Wrong alignment on WaterBody_GetWaterBodyComponent");
static_assert(sizeof(WaterBody_GetWaterBodyComponent) == 0x000008, "Wrong size on WaterBody_GetWaterBodyComponent");
static_assert(offsetof(WaterBody_GetWaterBodyComponent, ReturnValue) == 0x000000, "Member 'WaterBody_GetWaterBodyComponent::ReturnValue' has a wrong offset!");

struct WaterBody_GetWaterBodyType final
{
public:
	EWaterBodyType                                ReturnValue;
};
static_assert(alignof(WaterBody_GetWaterBodyType) == 0x000001, "Wrong alignment on WaterBody_GetWaterBodyType");
static_assert(sizeof(WaterBody_GetWaterBodyType) == 0x000001, "Wrong size on WaterBody_GetWaterBodyType");
static_assert(offsetof(WaterBody_GetWaterBodyType, ReturnValue) == 0x000000, "Member 'WaterBody_GetWaterBodyType::ReturnValue' has a wrong offset!");

struct WaterBody_GetWaterSpline final
{
public:
	class UWaterSplineComponent*                  ReturnValue;
};
static_assert(alignof(WaterBody_GetWaterSpline) == 0x000008, "Wrong alignment on WaterBody_GetWaterSpline");
static_assert(sizeof(WaterBody_GetWaterSpline) == 0x000008, "Wrong size on WaterBody_GetWaterSpline");
static_assert(offsetof(WaterBody_GetWaterSpline, ReturnValue) == 0x000000, "Member 'WaterBody_GetWaterSpline::ReturnValue' has a wrong offset!");

struct WaterBody_GetWaterVelocityAtSplineInputKey final
{
public:
	float                                         InKey;
	float                                         ReturnValue;
};
static_assert(alignof(WaterBody_GetWaterVelocityAtSplineInputKey) == 0x000004, "Wrong alignment on WaterBody_GetWaterVelocityAtSplineInputKey");
static_assert(sizeof(WaterBody_GetWaterVelocityAtSplineInputKey) == 0x000008, "Wrong size on WaterBody_GetWaterVelocityAtSplineInputKey");
static_assert(offsetof(WaterBody_GetWaterVelocityAtSplineInputKey, InKey) == 0x000000, "Member 'WaterBody_GetWaterVelocityAtSplineInputKey::InKey' has a wrong offset!");
static_assert(offsetof(WaterBody_GetWaterVelocityAtSplineInputKey, ReturnValue) == 0x000004, "Member 'WaterBody_GetWaterVelocityAtSplineInputKey::ReturnValue' has a wrong offset!");

struct WaterBody_GetWaterVelocityVectorAtSplineInputKey final
{
public:
	float                                         InKey;
	uint8                                         Pad_4[0x4];
	struct FVector                                ReturnValue;
};
static_assert(alignof(WaterBody_GetWaterVelocityVectorAtSplineInputKey) == 0x000008, "Wrong alignment on WaterBody_GetWaterVelocityVectorAtSplineInputKey");
static_assert(sizeof(WaterBody_GetWaterVelocityVectorAtSplineInputKey) == 0x000020, "Wrong size on WaterBody_GetWaterVelocityVectorAtSplineInputKey");
static_assert(offsetof(WaterBody_GetWaterVelocityVectorAtSplineInputKey, InKey) == 0x000000, "Member 'WaterBody_GetWaterVelocityVectorAtSplineInputKey::InKey' has a wrong offset!");
static_assert(offsetof(WaterBody_GetWaterVelocityVectorAtSplineInputKey, ReturnValue) == 0x000008, "Member 'WaterBody_GetWaterVelocityVectorAtSplineInputKey::ReturnValue' has a wrong offset!");

struct WaterBodyComponent_GetRiverToLakeTransitionMaterialInstance final
{
public:
	class UMaterialInstanceDynamic*               ReturnValue;
};
static_assert(alignof(WaterBodyComponent_GetRiverToLakeTransitionMaterialInstance) == 0x000008, "Wrong alignment on WaterBodyComponent_GetRiverToLakeTransitionMaterialInstance");
static_assert(sizeof(WaterBodyComponent_GetRiverToLakeTransitionMaterialInstance) == 0x000008, "Wrong size on WaterBodyComponent_GetRiverToLakeTransitionMaterialInstance");
static_assert(offsetof(WaterBodyComponent_GetRiverToLakeTransitionMaterialInstance, ReturnValue) == 0x000000, "Member 'WaterBodyComponent_GetRiverToLakeTransitionMaterialInstance::ReturnValue' has a wrong offset!");

struct WaterBodyComponent_GetRiverToOceanTransitionMaterialInstance final
{
public:
	class UMaterialInstanceDynamic*               ReturnValue;
};
static_assert(alignof(WaterBodyComponent_GetRiverToOceanTransitionMaterialInstance) == 0x000008, "Wrong alignment on WaterBodyComponent_GetRiverToOceanTransitionMaterialInstance");
static_assert(sizeof(WaterBodyComponent_GetRiverToOceanTransitionMaterialInstance) == 0x000008, "Wrong size on WaterBodyComponent_GetRiverToOceanTransitionMaterialInstance");
static_assert(offsetof(WaterBodyComponent_GetRiverToOceanTransitionMaterialInstance, ReturnValue) == 0x000000, "Member 'WaterBodyComponent_GetRiverToOceanTransitionMaterialInstance::ReturnValue' has a wrong offset!");

struct WaterBodyComponent_GetUnderwaterPostProcessMaterialInstance final
{
public:
	class UMaterialInstanceDynamic*               ReturnValue;
};
static_assert(alignof(WaterBodyComponent_GetUnderwaterPostProcessMaterialInstance) == 0x000008, "Wrong alignment on WaterBodyComponent_GetUnderwaterPostProcessMaterialInstance");
static_assert(sizeof(WaterBodyComponent_GetUnderwaterPostProcessMaterialInstance) == 0x000008, "Wrong size on WaterBodyComponent_GetUnderwaterPostProcessMaterialInstance");
static_assert(offsetof(WaterBodyComponent_GetUnderwaterPostProcessMaterialInstance, ReturnValue) == 0x000000, "Member 'WaterBodyComponent_GetUnderwaterPostProcessMaterialInstance::ReturnValue' has a wrong offset!");

struct WaterBodyComponent_GetWaterInfoMaterialInstance final
{
public:
	class UMaterialInstanceDynamic*               ReturnValue;
};
static_assert(alignof(WaterBodyComponent_GetWaterInfoMaterialInstance) == 0x000008, "Wrong alignment on WaterBodyComponent_GetWaterInfoMaterialInstance");
static_assert(sizeof(WaterBodyComponent_GetWaterInfoMaterialInstance) == 0x000008, "Wrong size on WaterBodyComponent_GetWaterInfoMaterialInstance");
static_assert(offsetof(WaterBodyComponent_GetWaterInfoMaterialInstance, ReturnValue) == 0x000000, "Member 'WaterBodyComponent_GetWaterInfoMaterialInstance::ReturnValue' has a wrong offset!");

struct WaterBodyComponent_GetWaterLODMaterialInstance final
{
public:
	class UMaterialInstanceDynamic*               ReturnValue;
};
static_assert(alignof(WaterBodyComponent_GetWaterLODMaterialInstance) == 0x000008, "Wrong alignment on WaterBodyComponent_GetWaterLODMaterialInstance");
static_assert(sizeof(WaterBodyComponent_GetWaterLODMaterialInstance) == 0x000008, "Wrong size on WaterBodyComponent_GetWaterLODMaterialInstance");
static_assert(offsetof(WaterBodyComponent_GetWaterLODMaterialInstance, ReturnValue) == 0x000000, "Member 'WaterBodyComponent_GetWaterLODMaterialInstance::ReturnValue' has a wrong offset!");

struct WaterBodyComponent_GetWaterMaterialInstance final
{
public:
	class UMaterialInstanceDynamic*               ReturnValue;
};
static_assert(alignof(WaterBodyComponent_GetWaterMaterialInstance) == 0x000008, "Wrong alignment on WaterBodyComponent_GetWaterMaterialInstance");
static_assert(sizeof(WaterBodyComponent_GetWaterMaterialInstance) == 0x000008, "Wrong size on WaterBodyComponent_GetWaterMaterialInstance");
static_assert(offsetof(WaterBodyComponent_GetWaterMaterialInstance, ReturnValue) == 0x000000, "Member 'WaterBodyComponent_GetWaterMaterialInstance::ReturnValue' has a wrong offset!");

struct WaterBodyComponent_OnWaterBodyChanged final
{
public:
	bool                                          bShapeOrPositionChanged;
	bool                                          bWeightmapSettingsChanged;
};
static_assert(alignof(WaterBodyComponent_OnWaterBodyChanged) == 0x000001, "Wrong alignment on WaterBodyComponent_OnWaterBodyChanged");
static_assert(sizeof(WaterBodyComponent_OnWaterBodyChanged) == 0x000002, "Wrong size on WaterBodyComponent_OnWaterBodyChanged");
static_assert(offsetof(WaterBodyComponent_OnWaterBodyChanged, bShapeOrPositionChanged) == 0x000000, "Member 'WaterBodyComponent_OnWaterBodyChanged::bShapeOrPositionChanged' has a wrong offset!");
static_assert(offsetof(WaterBodyComponent_OnWaterBodyChanged, bWeightmapSettingsChanged) == 0x000001, "Member 'WaterBodyComponent_OnWaterBodyChanged::bWeightmapSettingsChanged' has a wrong offset!");

struct WaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial final
{
public:
	class UMaterialInterface*                     InWaterMaterial;
	class UMaterialInterface*                     InUnderWaterPostProcessMaterial;
};
static_assert(alignof(WaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial) == 0x000008, "Wrong alignment on WaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial");
static_assert(sizeof(WaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial) == 0x000010, "Wrong size on WaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial");
static_assert(offsetof(WaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial, InWaterMaterial) == 0x000000, "Member 'WaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial::InWaterMaterial' has a wrong offset!");
static_assert(offsetof(WaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial, InUnderWaterPostProcessMaterial) == 0x000008, "Member 'WaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial::InUnderWaterPostProcessMaterial' has a wrong offset!");

struct WaterBodyComponent_GetCollisionComponents final
{
public:
	bool                                          bInOnlyEnabledComponents;
	uint8                                         Pad_1[0x7];
	TArray<class UPrimitiveComponent*>            ReturnValue;
};
static_assert(alignof(WaterBodyComponent_GetCollisionComponents) == 0x000008, "Wrong alignment on WaterBodyComponent_GetCollisionComponents");
static_assert(sizeof(WaterBodyComponent_GetCollisionComponents) == 0x000018, "Wrong size on WaterBodyComponent_GetCollisionComponents");
static_assert(offsetof(WaterBodyComponent_GetCollisionComponents, bInOnlyEnabledComponents) == 0x000000, "Member 'WaterBodyComponent_GetCollisionComponents::bInOnlyEnabledComponents' has a wrong offset!");
static_assert(offsetof(WaterBodyComponent_GetCollisionComponents, ReturnValue) == 0x000008, "Member 'WaterBodyComponent_GetCollisionComponents::ReturnValue' has a wrong offset!");

struct WaterBodyComponent_GetExclusionVolumes final
{
public:
	TArray<class AWaterBodyExclusionVolume*>      ReturnValue;
};
static_assert(alignof(WaterBodyComponent_GetExclusionVolumes) == 0x000008, "Wrong alignment on WaterBodyComponent_GetExclusionVolumes");
static_assert(sizeof(WaterBodyComponent_GetExclusionVolumes) == 0x000010, "Wrong size on WaterBodyComponent_GetExclusionVolumes");
static_assert(offsetof(WaterBodyComponent_GetExclusionVolumes, ReturnValue) == 0x000000, "Member 'WaterBodyComponent_GetExclusionVolumes::ReturnValue' has a wrong offset!");

struct WaterBodyComponent_GetIslands final
{
public:
	TArray<class AWaterBodyIsland*>               ReturnValue;
};
static_assert(alignof(WaterBodyComponent_GetIslands) == 0x000008, "Wrong alignment on WaterBodyComponent_GetIslands");
static_assert(sizeof(WaterBodyComponent_GetIslands) == 0x000010, "Wrong size on WaterBodyComponent_GetIslands");
static_assert(offsetof(WaterBodyComponent_GetIslands, ReturnValue) == 0x000000, "Member 'WaterBodyComponent_GetIslands::ReturnValue' has a wrong offset!");

struct WaterBodyComponent_GetMaxWaveHeight final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(WaterBodyComponent_GetMaxWaveHeight) == 0x000004, "Wrong alignment on WaterBodyComponent_GetMaxWaveHeight");
static_assert(sizeof(WaterBodyComponent_GetMaxWaveHeight) == 0x000004, "Wrong size on WaterBodyComponent_GetMaxWaveHeight");
static_assert(offsetof(WaterBodyComponent_GetMaxWaveHeight, ReturnValue) == 0x000000, "Member 'WaterBodyComponent_GetMaxWaveHeight::ReturnValue' has a wrong offset!");

struct WaterBodyComponent_GetStandardRenderableComponents final
{
public:
	TArray<class UPrimitiveComponent*>            ReturnValue;
};
static_assert(alignof(WaterBodyComponent_GetStandardRenderableComponents) == 0x000008, "Wrong alignment on WaterBodyComponent_GetStandardRenderableComponents");
static_assert(sizeof(WaterBodyComponent_GetStandardRenderableComponents) == 0x000010, "Wrong size on WaterBodyComponent_GetStandardRenderableComponents");
static_assert(offsetof(WaterBodyComponent_GetStandardRenderableComponents, ReturnValue) == 0x000000, "Member 'WaterBodyComponent_GetStandardRenderableComponents::ReturnValue' has a wrong offset!");

struct WaterBodyComponent_GetWaterBodyActor final
{
public:
	class AWaterBody*                             ReturnValue;
};
static_assert(alignof(WaterBodyComponent_GetWaterBodyActor) == 0x000008, "Wrong alignment on WaterBodyComponent_GetWaterBodyActor");
static_assert(sizeof(WaterBodyComponent_GetWaterBodyActor) == 0x000008, "Wrong size on WaterBodyComponent_GetWaterBodyActor");
static_assert(offsetof(WaterBodyComponent_GetWaterBodyActor, ReturnValue) == 0x000000, "Member 'WaterBodyComponent_GetWaterBodyActor::ReturnValue' has a wrong offset!");

struct WaterBodyComponent_GetWaterMaterial final
{
public:
	class UMaterialInterface*                     ReturnValue;
};
static_assert(alignof(WaterBodyComponent_GetWaterMaterial) == 0x000008, "Wrong alignment on WaterBodyComponent_GetWaterMaterial");
static_assert(sizeof(WaterBodyComponent_GetWaterMaterial) == 0x000008, "Wrong size on WaterBodyComponent_GetWaterMaterial");
static_assert(offsetof(WaterBodyComponent_GetWaterMaterial, ReturnValue) == 0x000000, "Member 'WaterBodyComponent_GetWaterMaterial::ReturnValue' has a wrong offset!");

struct WaterBodyComponent_GetWaterSpline final
{
public:
	class UWaterSplineComponent*                  ReturnValue;
};
static_assert(alignof(WaterBodyComponent_GetWaterSpline) == 0x000008, "Wrong alignment on WaterBodyComponent_GetWaterSpline");
static_assert(sizeof(WaterBodyComponent_GetWaterSpline) == 0x000008, "Wrong size on WaterBodyComponent_GetWaterSpline");
static_assert(offsetof(WaterBodyComponent_GetWaterSpline, ReturnValue) == 0x000000, "Member 'WaterBodyComponent_GetWaterSpline::ReturnValue' has a wrong offset!");

struct WaterBodyComponent_GetWaterSurfaceInfoAtLocation final
{
public:
	struct FVector                                InLocation;
	struct FVector                                OutWaterSurfaceLocation;
	struct FVector                                OutWaterSurfaceNormal;
	struct FVector                                OutWaterVelocity;
	float                                         OutWaterDepth;
	bool                                          bIncludeDepth;
	uint8                                         Pad_65[0x3];
};
static_assert(alignof(WaterBodyComponent_GetWaterSurfaceInfoAtLocation) == 0x000008, "Wrong alignment on WaterBodyComponent_GetWaterSurfaceInfoAtLocation");
static_assert(sizeof(WaterBodyComponent_GetWaterSurfaceInfoAtLocation) == 0x000068, "Wrong size on WaterBodyComponent_GetWaterSurfaceInfoAtLocation");
static_assert(offsetof(WaterBodyComponent_GetWaterSurfaceInfoAtLocation, InLocation) == 0x000000, "Member 'WaterBodyComponent_GetWaterSurfaceInfoAtLocation::InLocation' has a wrong offset!");
static_assert(offsetof(WaterBodyComponent_GetWaterSurfaceInfoAtLocation, OutWaterSurfaceLocation) == 0x000018, "Member 'WaterBodyComponent_GetWaterSurfaceInfoAtLocation::OutWaterSurfaceLocation' has a wrong offset!");
static_assert(offsetof(WaterBodyComponent_GetWaterSurfaceInfoAtLocation, OutWaterSurfaceNormal) == 0x000030, "Member 'WaterBodyComponent_GetWaterSurfaceInfoAtLocation::OutWaterSurfaceNormal' has a wrong offset!");
static_assert(offsetof(WaterBodyComponent_GetWaterSurfaceInfoAtLocation, OutWaterVelocity) == 0x000048, "Member 'WaterBodyComponent_GetWaterSurfaceInfoAtLocation::OutWaterVelocity' has a wrong offset!");
static_assert(offsetof(WaterBodyComponent_GetWaterSurfaceInfoAtLocation, OutWaterDepth) == 0x000060, "Member 'WaterBodyComponent_GetWaterSurfaceInfoAtLocation::OutWaterDepth' has a wrong offset!");
static_assert(offsetof(WaterBodyComponent_GetWaterSurfaceInfoAtLocation, bIncludeDepth) == 0x000064, "Member 'WaterBodyComponent_GetWaterSurfaceInfoAtLocation::bIncludeDepth' has a wrong offset!");

struct WaterBodyComponent_GetWaterVelocityAtSplineInputKey final
{
public:
	float                                         InKey;
	float                                         ReturnValue;
};
static_assert(alignof(WaterBodyComponent_GetWaterVelocityAtSplineInputKey) == 0x000004, "Wrong alignment on WaterBodyComponent_GetWaterVelocityAtSplineInputKey");
static_assert(sizeof(WaterBodyComponent_GetWaterVelocityAtSplineInputKey) == 0x000008, "Wrong size on WaterBodyComponent_GetWaterVelocityAtSplineInputKey");
static_assert(offsetof(WaterBodyComponent_GetWaterVelocityAtSplineInputKey, InKey) == 0x000000, "Member 'WaterBodyComponent_GetWaterVelocityAtSplineInputKey::InKey' has a wrong offset!");
static_assert(offsetof(WaterBodyComponent_GetWaterVelocityAtSplineInputKey, ReturnValue) == 0x000004, "Member 'WaterBodyComponent_GetWaterVelocityAtSplineInputKey::ReturnValue' has a wrong offset!");

struct WaterBodyComponent_GetWaterWaves final
{
public:
	class UWaterWavesBase*                        ReturnValue;
};
static_assert(alignof(WaterBodyComponent_GetWaterWaves) == 0x000008, "Wrong alignment on WaterBodyComponent_GetWaterWaves");
static_assert(sizeof(WaterBodyComponent_GetWaterWaves) == 0x000008, "Wrong size on WaterBodyComponent_GetWaterWaves");
static_assert(offsetof(WaterBodyComponent_GetWaterWaves, ReturnValue) == 0x000000, "Member 'WaterBodyComponent_GetWaterWaves::ReturnValue' has a wrong offset!");

struct WaterBodyIsland_GetWaterSpline final
{
public:
	class UWaterSplineComponent*                  ReturnValue;
};
static_assert(alignof(WaterBodyIsland_GetWaterSpline) == 0x000008, "Wrong alignment on WaterBodyIsland_GetWaterSpline");
static_assert(sizeof(WaterBodyIsland_GetWaterSpline) == 0x000008, "Wrong size on WaterBodyIsland_GetWaterSpline");
static_assert(offsetof(WaterBodyIsland_GetWaterSpline, ReturnValue) == 0x000000, "Member 'WaterBodyIsland_GetWaterSpline::ReturnValue' has a wrong offset!");

struct WaterMeshComponent_IsEnabled final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(WaterMeshComponent_IsEnabled) == 0x000001, "Wrong alignment on WaterMeshComponent_IsEnabled");
static_assert(sizeof(WaterMeshComponent_IsEnabled) == 0x000001, "Wrong size on WaterMeshComponent_IsEnabled");
static_assert(offsetof(WaterMeshComponent_IsEnabled, ReturnValue) == 0x000000, "Member 'WaterMeshComponent_IsEnabled::ReturnValue' has a wrong offset!");

struct WaterSubsystem_GetShallowWaterMaxDynamicForces final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(WaterSubsystem_GetShallowWaterMaxDynamicForces) == 0x000004, "Wrong alignment on WaterSubsystem_GetShallowWaterMaxDynamicForces");
static_assert(sizeof(WaterSubsystem_GetShallowWaterMaxDynamicForces) == 0x000004, "Wrong size on WaterSubsystem_GetShallowWaterMaxDynamicForces");
static_assert(offsetof(WaterSubsystem_GetShallowWaterMaxDynamicForces, ReturnValue) == 0x000000, "Member 'WaterSubsystem_GetShallowWaterMaxDynamicForces::ReturnValue' has a wrong offset!");

struct WaterSubsystem_GetShallowWaterMaxImpulseForces final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(WaterSubsystem_GetShallowWaterMaxImpulseForces) == 0x000004, "Wrong alignment on WaterSubsystem_GetShallowWaterMaxImpulseForces");
static_assert(sizeof(WaterSubsystem_GetShallowWaterMaxImpulseForces) == 0x000004, "Wrong size on WaterSubsystem_GetShallowWaterMaxImpulseForces");
static_assert(offsetof(WaterSubsystem_GetShallowWaterMaxImpulseForces, ReturnValue) == 0x000000, "Member 'WaterSubsystem_GetShallowWaterMaxImpulseForces::ReturnValue' has a wrong offset!");

struct WaterSubsystem_GetShallowWaterSimulationRenderTargetSize final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(WaterSubsystem_GetShallowWaterSimulationRenderTargetSize) == 0x000004, "Wrong alignment on WaterSubsystem_GetShallowWaterSimulationRenderTargetSize");
static_assert(sizeof(WaterSubsystem_GetShallowWaterSimulationRenderTargetSize) == 0x000004, "Wrong size on WaterSubsystem_GetShallowWaterSimulationRenderTargetSize");
static_assert(offsetof(WaterSubsystem_GetShallowWaterSimulationRenderTargetSize, ReturnValue) == 0x000000, "Member 'WaterSubsystem_GetShallowWaterSimulationRenderTargetSize::ReturnValue' has a wrong offset!");

struct WaterSubsystem_PrintToWaterLog final
{
public:
	class FString                                 message;
	bool                                          bWarning;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(WaterSubsystem_PrintToWaterLog) == 0x000008, "Wrong alignment on WaterSubsystem_PrintToWaterLog");
static_assert(sizeof(WaterSubsystem_PrintToWaterLog) == 0x000018, "Wrong size on WaterSubsystem_PrintToWaterLog");
static_assert(offsetof(WaterSubsystem_PrintToWaterLog, message) == 0x000000, "Member 'WaterSubsystem_PrintToWaterLog::message' has a wrong offset!");
static_assert(offsetof(WaterSubsystem_PrintToWaterLog, bWarning) == 0x000010, "Member 'WaterSubsystem_PrintToWaterLog::bWarning' has a wrong offset!");

struct WaterSubsystem_SetOceanFloodHeight final
{
public:
	float                                         InFloodHeight;
};
static_assert(alignof(WaterSubsystem_SetOceanFloodHeight) == 0x000004, "Wrong alignment on WaterSubsystem_SetOceanFloodHeight");
static_assert(sizeof(WaterSubsystem_SetOceanFloodHeight) == 0x000004, "Wrong size on WaterSubsystem_SetOceanFloodHeight");
static_assert(offsetof(WaterSubsystem_SetOceanFloodHeight, InFloodHeight) == 0x000000, "Member 'WaterSubsystem_SetOceanFloodHeight::InFloodHeight' has a wrong offset!");

struct WaterSubsystem_GetCameraUnderwaterDepth final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(WaterSubsystem_GetCameraUnderwaterDepth) == 0x000004, "Wrong alignment on WaterSubsystem_GetCameraUnderwaterDepth");
static_assert(sizeof(WaterSubsystem_GetCameraUnderwaterDepth) == 0x000004, "Wrong size on WaterSubsystem_GetCameraUnderwaterDepth");
static_assert(offsetof(WaterSubsystem_GetCameraUnderwaterDepth, ReturnValue) == 0x000000, "Member 'WaterSubsystem_GetCameraUnderwaterDepth::ReturnValue' has a wrong offset!");

struct WaterSubsystem_GetOceanBaseHeight final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(WaterSubsystem_GetOceanBaseHeight) == 0x000004, "Wrong alignment on WaterSubsystem_GetOceanBaseHeight");
static_assert(sizeof(WaterSubsystem_GetOceanBaseHeight) == 0x000004, "Wrong size on WaterSubsystem_GetOceanBaseHeight");
static_assert(offsetof(WaterSubsystem_GetOceanBaseHeight, ReturnValue) == 0x000000, "Member 'WaterSubsystem_GetOceanBaseHeight::ReturnValue' has a wrong offset!");

struct WaterSubsystem_GetOceanFloodHeight final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(WaterSubsystem_GetOceanFloodHeight) == 0x000004, "Wrong alignment on WaterSubsystem_GetOceanFloodHeight");
static_assert(sizeof(WaterSubsystem_GetOceanFloodHeight) == 0x000004, "Wrong size on WaterSubsystem_GetOceanFloodHeight");
static_assert(offsetof(WaterSubsystem_GetOceanFloodHeight, ReturnValue) == 0x000000, "Member 'WaterSubsystem_GetOceanFloodHeight::ReturnValue' has a wrong offset!");

struct WaterSubsystem_GetOceanTotalHeight final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(WaterSubsystem_GetOceanTotalHeight) == 0x000004, "Wrong alignment on WaterSubsystem_GetOceanTotalHeight");
static_assert(sizeof(WaterSubsystem_GetOceanTotalHeight) == 0x000004, "Wrong size on WaterSubsystem_GetOceanTotalHeight");
static_assert(offsetof(WaterSubsystem_GetOceanTotalHeight, ReturnValue) == 0x000000, "Member 'WaterSubsystem_GetOceanTotalHeight::ReturnValue' has a wrong offset!");

struct WaterSubsystem_GetSmoothedWorldTimeSeconds final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(WaterSubsystem_GetSmoothedWorldTimeSeconds) == 0x000004, "Wrong alignment on WaterSubsystem_GetSmoothedWorldTimeSeconds");
static_assert(sizeof(WaterSubsystem_GetSmoothedWorldTimeSeconds) == 0x000004, "Wrong size on WaterSubsystem_GetSmoothedWorldTimeSeconds");
static_assert(offsetof(WaterSubsystem_GetSmoothedWorldTimeSeconds, ReturnValue) == 0x000000, "Member 'WaterSubsystem_GetSmoothedWorldTimeSeconds::ReturnValue' has a wrong offset!");

struct WaterSubsystem_GetWaterTimeSeconds final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(WaterSubsystem_GetWaterTimeSeconds) == 0x000004, "Wrong alignment on WaterSubsystem_GetWaterTimeSeconds");
static_assert(sizeof(WaterSubsystem_GetWaterTimeSeconds) == 0x000004, "Wrong size on WaterSubsystem_GetWaterTimeSeconds");
static_assert(offsetof(WaterSubsystem_GetWaterTimeSeconds, ReturnValue) == 0x000000, "Member 'WaterSubsystem_GetWaterTimeSeconds::ReturnValue' has a wrong offset!");

struct WaterSubsystem_IsShallowWaterSimulationEnabled final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(WaterSubsystem_IsShallowWaterSimulationEnabled) == 0x000001, "Wrong alignment on WaterSubsystem_IsShallowWaterSimulationEnabled");
static_assert(sizeof(WaterSubsystem_IsShallowWaterSimulationEnabled) == 0x000001, "Wrong size on WaterSubsystem_IsShallowWaterSimulationEnabled");
static_assert(offsetof(WaterSubsystem_IsShallowWaterSimulationEnabled, ReturnValue) == 0x000000, "Member 'WaterSubsystem_IsShallowWaterSimulationEnabled::ReturnValue' has a wrong offset!");

struct WaterSubsystem_IsUnderwaterPostProcessEnabled final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(WaterSubsystem_IsUnderwaterPostProcessEnabled) == 0x000001, "Wrong alignment on WaterSubsystem_IsUnderwaterPostProcessEnabled");
static_assert(sizeof(WaterSubsystem_IsUnderwaterPostProcessEnabled) == 0x000001, "Wrong size on WaterSubsystem_IsUnderwaterPostProcessEnabled");
static_assert(offsetof(WaterSubsystem_IsUnderwaterPostProcessEnabled, ReturnValue) == 0x000000, "Member 'WaterSubsystem_IsUnderwaterPostProcessEnabled::ReturnValue' has a wrong offset!");

struct WaterSubsystem_IsWaterRenderingEnabled final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(WaterSubsystem_IsWaterRenderingEnabled) == 0x000001, "Wrong alignment on WaterSubsystem_IsWaterRenderingEnabled");
static_assert(sizeof(WaterSubsystem_IsWaterRenderingEnabled) == 0x000001, "Wrong size on WaterSubsystem_IsWaterRenderingEnabled");
static_assert(offsetof(WaterSubsystem_IsWaterRenderingEnabled, ReturnValue) == 0x000000, "Member 'WaterSubsystem_IsWaterRenderingEnabled::ReturnValue' has a wrong offset!");

}
