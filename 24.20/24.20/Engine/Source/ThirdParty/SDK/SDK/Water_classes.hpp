#pragma once

#include "Basic.hpp"

#include "Water_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AIModule_classes.hpp"
#include "Niagara_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "DeveloperSettings_classes.hpp"

namespace SDK
{

class UBuoyancyComponent : public UActorComponent
{
public:
	TArray<struct FSphericalPontoon>              Pontoons;
	TMulticastInlineDelegate<void(struct FSphericalPontoon& Pontoon)> OnEnteredWaterDelegate;
	TMulticastInlineDelegate<void(struct FSphericalPontoon& Pontoon)> OnExitedWaterDelegate;
	struct FBuoyancyData                          BuoyancyData;
	TArray<class UWaterBodyComponent*>            CurrentWaterBodyComponents;
	class UPrimitiveComponent*                    SimulatingComponent;
	uint8                                         Pad_178[0x90];

public:
	void GetLastWaterSurfaceInfo(struct FVector* OutWaterPlaneLocation, struct FVector* OutWaterPlaneNormal, struct FVector* OutWaterSurfacePosition, float* OutWaterDepth, int32* OutWaterBodyIdx, struct FVector* OutWaterVelocity);
	void OnPontoonEnteredWater(const struct FSphericalPontoon& Pontoon);
	void OnPontoonExitedWater(const struct FSphericalPontoon& Pontoon);

	const TArray<class UWaterBodyComponent*> GetCurrentWaterBodyComponents() const;
	bool IsInWaterBody() const;
	bool IsOverlappingWaterBody() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BuoyancyComponent">();
	}
	static class UBuoyancyComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuoyancyComponent>();
	}
};
static_assert(alignof(UBuoyancyComponent) == 0x000008, "Wrong alignment on UBuoyancyComponent");
static_assert(sizeof(UBuoyancyComponent) == 0x000208, "Wrong size on UBuoyancyComponent");
static_assert(offsetof(UBuoyancyComponent, Pontoons) == 0x0000A0, "Member 'UBuoyancyComponent::Pontoons' has a wrong offset!");
static_assert(offsetof(UBuoyancyComponent, OnEnteredWaterDelegate) == 0x0000B0, "Member 'UBuoyancyComponent::OnEnteredWaterDelegate' has a wrong offset!");
static_assert(offsetof(UBuoyancyComponent, OnExitedWaterDelegate) == 0x0000C0, "Member 'UBuoyancyComponent::OnExitedWaterDelegate' has a wrong offset!");
static_assert(offsetof(UBuoyancyComponent, BuoyancyData) == 0x0000D0, "Member 'UBuoyancyComponent::BuoyancyData' has a wrong offset!");
static_assert(offsetof(UBuoyancyComponent, CurrentWaterBodyComponents) == 0x000160, "Member 'UBuoyancyComponent::CurrentWaterBodyComponents' has a wrong offset!");
static_assert(offsetof(UBuoyancyComponent, SimulatingComponent) == 0x000170, "Member 'UBuoyancyComponent::SimulatingComponent' has a wrong offset!");

class ABuoyancyManager final : public AActor
{
public:
	uint8                                         Pad_288[0x50];
	TArray<class UBuoyancyComponent*>             BuoyancyComponents;
	uint8                                         Pad_2E8[0x68];

public:
	static bool GetBuoyancyComponentManager(const class UObject* WorldContextObject, class ABuoyancyManager** Manager);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BuoyancyManager">();
	}
	static class ABuoyancyManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABuoyancyManager>();
	}
};
static_assert(alignof(ABuoyancyManager) == 0x000008, "Wrong alignment on ABuoyancyManager");
static_assert(sizeof(ABuoyancyManager) == 0x000350, "Wrong size on ABuoyancyManager");
static_assert(offsetof(ABuoyancyManager, BuoyancyComponents) == 0x0002D8, "Member 'ABuoyancyManager::BuoyancyComponents' has a wrong offset!");

class UEnvQueryTest_InsideWaterBody final : public UEnvQueryTest
{
public:
	bool                                          bIncludeWaves;
	bool                                          bSimpleWaves;
	bool                                          bIgnoreExclusionVolumes;
	uint8                                         Pad_1FB[0x5];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryTest_InsideWaterBody">();
	}
	static class UEnvQueryTest_InsideWaterBody* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryTest_InsideWaterBody>();
	}
};
static_assert(alignof(UEnvQueryTest_InsideWaterBody) == 0x000008, "Wrong alignment on UEnvQueryTest_InsideWaterBody");
static_assert(sizeof(UEnvQueryTest_InsideWaterBody) == 0x000200, "Wrong size on UEnvQueryTest_InsideWaterBody");
static_assert(offsetof(UEnvQueryTest_InsideWaterBody, bIncludeWaves) == 0x0001F8, "Member 'UEnvQueryTest_InsideWaterBody::bIncludeWaves' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest_InsideWaterBody, bSimpleWaves) == 0x0001F9, "Member 'UEnvQueryTest_InsideWaterBody::bSimpleWaves' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest_InsideWaterBody, bIgnoreExclusionVolumes) == 0x0001FA, "Member 'UEnvQueryTest_InsideWaterBody::bIgnoreExclusionVolumes' has a wrong offset!");

class UGerstnerWaterWaveGeneratorBase : public UObject
{
public:
	void GenerateGerstnerWaves(TArray<struct FGerstnerWave>* OutWaves) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GerstnerWaterWaveGeneratorBase">();
	}
	static class UGerstnerWaterWaveGeneratorBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGerstnerWaterWaveGeneratorBase>();
	}
};
static_assert(alignof(UGerstnerWaterWaveGeneratorBase) == 0x000008, "Wrong alignment on UGerstnerWaterWaveGeneratorBase");
static_assert(sizeof(UGerstnerWaterWaveGeneratorBase) == 0x000028, "Wrong size on UGerstnerWaterWaveGeneratorBase");

class UGerstnerWaterWaveGeneratorSimple final : public UGerstnerWaterWaveGeneratorBase
{
public:
	int32                                         NumWaves;
	int32                                         Seed;
	float                                         Randomness;
	float                                         MinWavelength;
	float                                         MaxWavelength;
	float                                         WavelengthFalloff;
	float                                         MinAmplitude;
	float                                         MaxAmplitude;
	float                                         AmplitudeFalloff;
	float                                         WindAngleDeg;
	float                                         DirectionAngularSpreadDeg;
	float                                         SmallWaveSteepness;
	float                                         LargeWaveSteepness;
	float                                         SteepnessFalloff;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GerstnerWaterWaveGeneratorSimple">();
	}
	static class UGerstnerWaterWaveGeneratorSimple* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGerstnerWaterWaveGeneratorSimple>();
	}
};
static_assert(alignof(UGerstnerWaterWaveGeneratorSimple) == 0x000008, "Wrong alignment on UGerstnerWaterWaveGeneratorSimple");
static_assert(sizeof(UGerstnerWaterWaveGeneratorSimple) == 0x000060, "Wrong size on UGerstnerWaterWaveGeneratorSimple");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, NumWaves) == 0x000028, "Member 'UGerstnerWaterWaveGeneratorSimple::NumWaves' has a wrong offset!");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, Seed) == 0x00002C, "Member 'UGerstnerWaterWaveGeneratorSimple::Seed' has a wrong offset!");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, Randomness) == 0x000030, "Member 'UGerstnerWaterWaveGeneratorSimple::Randomness' has a wrong offset!");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, MinWavelength) == 0x000034, "Member 'UGerstnerWaterWaveGeneratorSimple::MinWavelength' has a wrong offset!");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, MaxWavelength) == 0x000038, "Member 'UGerstnerWaterWaveGeneratorSimple::MaxWavelength' has a wrong offset!");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, WavelengthFalloff) == 0x00003C, "Member 'UGerstnerWaterWaveGeneratorSimple::WavelengthFalloff' has a wrong offset!");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, MinAmplitude) == 0x000040, "Member 'UGerstnerWaterWaveGeneratorSimple::MinAmplitude' has a wrong offset!");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, MaxAmplitude) == 0x000044, "Member 'UGerstnerWaterWaveGeneratorSimple::MaxAmplitude' has a wrong offset!");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, AmplitudeFalloff) == 0x000048, "Member 'UGerstnerWaterWaveGeneratorSimple::AmplitudeFalloff' has a wrong offset!");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, WindAngleDeg) == 0x00004C, "Member 'UGerstnerWaterWaveGeneratorSimple::WindAngleDeg' has a wrong offset!");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, DirectionAngularSpreadDeg) == 0x000050, "Member 'UGerstnerWaterWaveGeneratorSimple::DirectionAngularSpreadDeg' has a wrong offset!");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, SmallWaveSteepness) == 0x000054, "Member 'UGerstnerWaterWaveGeneratorSimple::SmallWaveSteepness' has a wrong offset!");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, LargeWaveSteepness) == 0x000058, "Member 'UGerstnerWaterWaveGeneratorSimple::LargeWaveSteepness' has a wrong offset!");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSimple, SteepnessFalloff) == 0x00005C, "Member 'UGerstnerWaterWaveGeneratorSimple::SteepnessFalloff' has a wrong offset!");

class UGerstnerWaterWaveGeneratorSpectrum final : public UGerstnerWaterWaveGeneratorBase
{
public:
	EWaveSpectrumType                             SpectrumType;
	uint8                                         Pad_29[0x7];
	TArray<struct FGerstnerWaveOctave>            Octaves;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GerstnerWaterWaveGeneratorSpectrum">();
	}
	static class UGerstnerWaterWaveGeneratorSpectrum* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGerstnerWaterWaveGeneratorSpectrum>();
	}
};
static_assert(alignof(UGerstnerWaterWaveGeneratorSpectrum) == 0x000008, "Wrong alignment on UGerstnerWaterWaveGeneratorSpectrum");
static_assert(sizeof(UGerstnerWaterWaveGeneratorSpectrum) == 0x000040, "Wrong size on UGerstnerWaterWaveGeneratorSpectrum");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSpectrum, SpectrumType) == 0x000028, "Member 'UGerstnerWaterWaveGeneratorSpectrum::SpectrumType' has a wrong offset!");
static_assert(offsetof(UGerstnerWaterWaveGeneratorSpectrum, Octaves) == 0x000030, "Member 'UGerstnerWaterWaveGeneratorSpectrum::Octaves' has a wrong offset!");

class UWaterWavesBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterWavesBase">();
	}
	static class UWaterWavesBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterWavesBase>();
	}
};
static_assert(alignof(UWaterWavesBase) == 0x000008, "Wrong alignment on UWaterWavesBase");
static_assert(sizeof(UWaterWavesBase) == 0x000028, "Wrong size on UWaterWavesBase");

class UWaterWaves : public UWaterWavesBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterWaves">();
	}
	static class UWaterWaves* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterWaves>();
	}
};
static_assert(alignof(UWaterWaves) == 0x000008, "Wrong alignment on UWaterWaves");
static_assert(sizeof(UWaterWaves) == 0x000028, "Wrong size on UWaterWaves");

class UGerstnerWaterWaves final : public UWaterWaves
{
public:
	class UGerstnerWaterWaveGeneratorBase*        GerstnerWaveGenerator;
	TArray<struct FGerstnerWave>                  GerstnerWaves;
	float                                         MaxWaveHeight;
	uint8                                         Pad_44[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GerstnerWaterWaves">();
	}
	static class UGerstnerWaterWaves* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGerstnerWaterWaves>();
	}
};
static_assert(alignof(UGerstnerWaterWaves) == 0x000008, "Wrong alignment on UGerstnerWaterWaves");
static_assert(sizeof(UGerstnerWaterWaves) == 0x000048, "Wrong size on UGerstnerWaterWaves");
static_assert(offsetof(UGerstnerWaterWaves, GerstnerWaveGenerator) == 0x000028, "Member 'UGerstnerWaterWaves::GerstnerWaveGenerator' has a wrong offset!");
static_assert(offsetof(UGerstnerWaterWaves, GerstnerWaves) == 0x000030, "Member 'UGerstnerWaterWaves::GerstnerWaves' has a wrong offset!");
static_assert(offsetof(UGerstnerWaterWaves, MaxWaveHeight) == 0x000040, "Member 'UGerstnerWaterWaves::MaxWaveHeight' has a wrong offset!");

class UGerstnerWaterWaveSubsystem final : public UEngineSubsystem
{
public:
	uint8                                         Pad_30[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GerstnerWaterWaveSubsystem">();
	}
	static class UGerstnerWaterWaveSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGerstnerWaterWaveSubsystem>();
	}
};
static_assert(alignof(UGerstnerWaterWaveSubsystem) == 0x000008, "Wrong alignment on UGerstnerWaterWaveSubsystem");
static_assert(sizeof(UGerstnerWaterWaveSubsystem) == 0x000048, "Wrong size on UGerstnerWaterWaveSubsystem");

class ULakeCollisionComponent final : public UPrimitiveComponent
{
public:
	class UBodySetup*                             CachedBodySetup;
	struct FVector                                BoxExtent;
	uint8                                         Pad_588[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LakeCollisionComponent">();
	}
	static class ULakeCollisionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULakeCollisionComponent>();
	}
};
static_assert(alignof(ULakeCollisionComponent) == 0x000010, "Wrong alignment on ULakeCollisionComponent");
static_assert(sizeof(ULakeCollisionComponent) == 0x000590, "Wrong size on ULakeCollisionComponent");
static_assert(offsetof(ULakeCollisionComponent, CachedBodySetup) == 0x000568, "Member 'ULakeCollisionComponent::CachedBodySetup' has a wrong offset!");
static_assert(offsetof(ULakeCollisionComponent, BoxExtent) == 0x000570, "Member 'ULakeCollisionComponent::BoxExtent' has a wrong offset!");

class UNiagaraDataInterfaceWater final : public UNiagaraDataInterface
{
public:
	class UWaterBodyComponent*                    SourceBodyComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceWater">();
	}
	static class UNiagaraDataInterfaceWater* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceWater>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceWater) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceWater");
static_assert(sizeof(UNiagaraDataInterfaceWater) == 0x000040, "Wrong size on UNiagaraDataInterfaceWater");
static_assert(offsetof(UNiagaraDataInterfaceWater, SourceBodyComponent) == 0x000038, "Member 'UNiagaraDataInterfaceWater::SourceBodyComponent' has a wrong offset!");

class UNiagaraWaterFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void SetWaterBody(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class AWaterBody* WaterBody);
	static void SetWaterBodyComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UWaterBodyComponent* WaterBodyComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraWaterFunctionLibrary">();
	}
	static class UNiagaraWaterFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraWaterFunctionLibrary>();
	}
};
static_assert(alignof(UNiagaraWaterFunctionLibrary) == 0x000008, "Wrong alignment on UNiagaraWaterFunctionLibrary");
static_assert(sizeof(UNiagaraWaterFunctionLibrary) == 0x000028, "Wrong size on UNiagaraWaterFunctionLibrary");

class UOceanCollisionComponent final : public UPrimitiveComponent
{
public:
	class UBodySetup*                             CachedBodySetup;
	uint8                                         Pad_570[0x40];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OceanCollisionComponent">();
	}
	static class UOceanCollisionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOceanCollisionComponent>();
	}
};
static_assert(alignof(UOceanCollisionComponent) == 0x000010, "Wrong alignment on UOceanCollisionComponent");
static_assert(sizeof(UOceanCollisionComponent) == 0x0005B0, "Wrong size on UOceanCollisionComponent");
static_assert(offsetof(UOceanCollisionComponent, CachedBodySetup) == 0x000568, "Member 'UOceanCollisionComponent::CachedBodySetup' has a wrong offset!");

class UOceanBoxCollisionComponent final : public UBoxComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OceanBoxCollisionComponent">();
	}
	static class UOceanBoxCollisionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOceanBoxCollisionComponent>();
	}
};
static_assert(alignof(UOceanBoxCollisionComponent) == 0x000010, "Wrong alignment on UOceanBoxCollisionComponent");
static_assert(sizeof(UOceanBoxCollisionComponent) == 0x0005B0, "Wrong size on UOceanBoxCollisionComponent");

class AWaterBody : public AActor
{
public:
	uint8                                         Pad_288[0x8];
	class UWaterSplineComponent*                  SplineComp;
	class UWaterSplineMetadata*                   WaterSplineMetadata;
	class UWaterBodyComponent*                    WaterBodyComponent;
	int32                                         WaterBodyIndex;
	EWaterBodyType                                WaterBodyType;
	uint8                                         Pad_2AD[0x3];
	class UWaterWavesBase*                        WaterWaves;

public:
	class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
	class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
	class UMaterialInstanceDynamic* GetWaterMaterialInstance();
	void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);
	void SetWaterMaterial(class UMaterialInterface* InMaterial);
	void SetWaterWaves(class UWaterWavesBase* InWaterWaves);

	float GetAudioIntensityAtSplineInputKey(float InKey) const;
	TArray<class AWaterBodyExclusionVolume*> GetExclusionVolumes() const;
	TArray<class AWaterBodyIsland*> GetIslands() const;
	class UWaterBodyComponent* GetWaterBodyComponent() const;
	EWaterBodyType GetWaterBodyType() const;
	class UWaterSplineComponent* GetWaterSpline() const;
	float GetWaterVelocityAtSplineInputKey(float InKey) const;
	struct FVector GetWaterVelocityVectorAtSplineInputKey(float InKey) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterBody">();
	}
	static class AWaterBody* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWaterBody>();
	}
};
static_assert(alignof(AWaterBody) == 0x000008, "Wrong alignment on AWaterBody");
static_assert(sizeof(AWaterBody) == 0x0002B8, "Wrong size on AWaterBody");
static_assert(offsetof(AWaterBody, SplineComp) == 0x000290, "Member 'AWaterBody::SplineComp' has a wrong offset!");
static_assert(offsetof(AWaterBody, WaterSplineMetadata) == 0x000298, "Member 'AWaterBody::WaterSplineMetadata' has a wrong offset!");
static_assert(offsetof(AWaterBody, WaterBodyComponent) == 0x0002A0, "Member 'AWaterBody::WaterBodyComponent' has a wrong offset!");
static_assert(offsetof(AWaterBody, WaterBodyIndex) == 0x0002A8, "Member 'AWaterBody::WaterBodyIndex' has a wrong offset!");
static_assert(offsetof(AWaterBody, WaterBodyType) == 0x0002AC, "Member 'AWaterBody::WaterBodyType' has a wrong offset!");
static_assert(offsetof(AWaterBody, WaterWaves) == 0x0002B0, "Member 'AWaterBody::WaterWaves' has a wrong offset!");

class UWaterBodyGenerator : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterBodyGenerator">();
	}
	static class UWaterBodyGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterBodyGenerator>();
	}
};
static_assert(alignof(UWaterBodyGenerator) == 0x000008, "Wrong alignment on UWaterBodyGenerator");
static_assert(sizeof(UWaterBodyGenerator) == 0x000028, "Wrong size on UWaterBodyGenerator");

class UWaterBodyComponent : public UPrimitiveComponent
{
public:
	class UPhysicalMaterial*                      PhysicalMaterial;
	float                                         TargetWaveMaskDepth;
	float                                         MaxWaveHeightOffset;
	uint8                                         Pad_578[0x8];
	struct FUnderwaterPostProcessSettings         UnderwaterPostProcessSettings;
	struct FWaterCurveSettings                    CurveSettings;
	class UMaterialInterface*                     WaterMaterial;
	class UMaterialInterface*                     WaterHLODMaterial;
	class UMaterialInterface*                     WaterLODMaterial;
	class UMaterialInterface*                     UnderwaterPostProcessMaterial;
	class UMaterialInterface*                     WaterInfoMaterial;
	struct FWaterBodyHeightmapSettings            WaterHeightmapSettings;
	float                                         ShapeDilation;
	float                                         CollisionHeightOffset;
	bool                                          bAffectsLandscape;
	uint8                                         Pad_D51[0x3];
	int32                                         WaterBodyIndex;
	class UStaticMesh*                            WaterMeshOverride;
	bool                                          bAlwaysGenerateWaterMeshTiles;
	uint8                                         Pad_D61[0x3];
	int32                                         OverlapMaterialPriority;
	class UWaterSplineMetadata*                   WaterSplineMetadata;
	class UMaterialInstanceDynamic*               WaterMID;
	class UMaterialInstanceDynamic*               WaterLODMID;
	class UMaterialInstanceDynamic*               UnderwaterPostProcessMID;
	class UMaterialInstanceDynamic*               WaterInfoMID;
	TArray<TSoftObjectPtr<class AWaterBodyIsland>> WaterBodyIslands;
	TArray<TSoftObjectPtr<class AWaterBodyExclusionVolume>> WaterBodyExclusionVolumes;
	TWeakObjectPtr<class ALandscapeProxy>         Landscape;
	TSoftObjectPtr<class AWaterZone>              OwningWaterZone;
	TSoftObjectPtr<class AWaterZone>              WaterZoneOverride;
	uint8                                         Pad_E08[0x8];
	struct FPostProcessSettings                   CurrentPostProcessSettings;
	TSubclassOf<class UNavAreaBase>               WaterNavAreaClass;
	uint8                                         Pad_14F8[0x50];
	double                                        FixedWaterDepth;

public:
	class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
	class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
	class UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance();
	class UMaterialInstanceDynamic* GetWaterInfoMaterialInstance();
	class UMaterialInstanceDynamic* GetWaterLODMaterialInstance();
	class UMaterialInstanceDynamic* GetWaterMaterialInstance();
	void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);
	void SetWaterAndUnderWaterPostProcessMaterial(class UMaterialInterface* InWaterMaterial, class UMaterialInterface* InUnderWaterPostProcessMaterial);

	TArray<class UPrimitiveComponent*> GetCollisionComponents(bool bInOnlyEnabledComponents) const;
	TArray<class AWaterBodyExclusionVolume*> GetExclusionVolumes() const;
	TArray<class AWaterBodyIsland*> GetIslands() const;
	float GetMaxWaveHeight() const;
	TArray<class UPrimitiveComponent*> GetStandardRenderableComponents() const;
	class AWaterBody* GetWaterBodyActor() const;
	class UMaterialInterface* GetWaterMaterial() const;
	class UWaterSplineComponent* GetWaterSpline() const;
	void GetWaterSurfaceInfoAtLocation(const struct FVector& InLocation, struct FVector* OutWaterSurfaceLocation, struct FVector* OutWaterSurfaceNormal, struct FVector* OutWaterVelocity, float* OutWaterDepth, bool bIncludeDepth) const;
	float GetWaterVelocityAtSplineInputKey(float InKey) const;
	class UWaterWavesBase* GetWaterWaves() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterBodyComponent">();
	}
	static class UWaterBodyComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterBodyComponent>();
	}
};
static_assert(alignof(UWaterBodyComponent) == 0x000010, "Wrong alignment on UWaterBodyComponent");
static_assert(sizeof(UWaterBodyComponent) == 0x001550, "Wrong size on UWaterBodyComponent");
static_assert(offsetof(UWaterBodyComponent, PhysicalMaterial) == 0x000568, "Member 'UWaterBodyComponent::PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, TargetWaveMaskDepth) == 0x000570, "Member 'UWaterBodyComponent::TargetWaveMaskDepth' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, MaxWaveHeightOffset) == 0x000574, "Member 'UWaterBodyComponent::MaxWaveHeightOffset' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, UnderwaterPostProcessSettings) == 0x000580, "Member 'UWaterBodyComponent::UnderwaterPostProcessSettings' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, CurveSettings) == 0x000C80, "Member 'UWaterBodyComponent::CurveSettings' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, WaterMaterial) == 0x000CA0, "Member 'UWaterBodyComponent::WaterMaterial' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, WaterHLODMaterial) == 0x000CA8, "Member 'UWaterBodyComponent::WaterHLODMaterial' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, WaterLODMaterial) == 0x000CB0, "Member 'UWaterBodyComponent::WaterLODMaterial' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, UnderwaterPostProcessMaterial) == 0x000CB8, "Member 'UWaterBodyComponent::UnderwaterPostProcessMaterial' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, WaterInfoMaterial) == 0x000CC0, "Member 'UWaterBodyComponent::WaterInfoMaterial' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, WaterHeightmapSettings) == 0x000CC8, "Member 'UWaterBodyComponent::WaterHeightmapSettings' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, ShapeDilation) == 0x000D48, "Member 'UWaterBodyComponent::ShapeDilation' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, CollisionHeightOffset) == 0x000D4C, "Member 'UWaterBodyComponent::CollisionHeightOffset' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, bAffectsLandscape) == 0x000D50, "Member 'UWaterBodyComponent::bAffectsLandscape' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, WaterBodyIndex) == 0x000D54, "Member 'UWaterBodyComponent::WaterBodyIndex' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, WaterMeshOverride) == 0x000D58, "Member 'UWaterBodyComponent::WaterMeshOverride' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, bAlwaysGenerateWaterMeshTiles) == 0x000D60, "Member 'UWaterBodyComponent::bAlwaysGenerateWaterMeshTiles' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, OverlapMaterialPriority) == 0x000D64, "Member 'UWaterBodyComponent::OverlapMaterialPriority' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, WaterSplineMetadata) == 0x000D68, "Member 'UWaterBodyComponent::WaterSplineMetadata' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, WaterMID) == 0x000D70, "Member 'UWaterBodyComponent::WaterMID' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, WaterLODMID) == 0x000D78, "Member 'UWaterBodyComponent::WaterLODMID' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, UnderwaterPostProcessMID) == 0x000D80, "Member 'UWaterBodyComponent::UnderwaterPostProcessMID' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, WaterInfoMID) == 0x000D88, "Member 'UWaterBodyComponent::WaterInfoMID' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, WaterBodyIslands) == 0x000D90, "Member 'UWaterBodyComponent::WaterBodyIslands' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, WaterBodyExclusionVolumes) == 0x000DA0, "Member 'UWaterBodyComponent::WaterBodyExclusionVolumes' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, Landscape) == 0x000DB0, "Member 'UWaterBodyComponent::Landscape' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, OwningWaterZone) == 0x000DB8, "Member 'UWaterBodyComponent::OwningWaterZone' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, WaterZoneOverride) == 0x000DE0, "Member 'UWaterBodyComponent::WaterZoneOverride' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, CurrentPostProcessSettings) == 0x000E10, "Member 'UWaterBodyComponent::CurrentPostProcessSettings' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, WaterNavAreaClass) == 0x0014F0, "Member 'UWaterBodyComponent::WaterNavAreaClass' has a wrong offset!");
static_assert(offsetof(UWaterBodyComponent, FixedWaterDepth) == 0x001548, "Member 'UWaterBodyComponent::FixedWaterDepth' has a wrong offset!");

class UCustomMeshGenerator final : public UWaterBodyGenerator
{
public:
	class UStaticMeshComponent*                   MeshComp;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CustomMeshGenerator">();
	}
	static class UCustomMeshGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomMeshGenerator>();
	}
};
static_assert(alignof(UCustomMeshGenerator) == 0x000008, "Wrong alignment on UCustomMeshGenerator");
static_assert(sizeof(UCustomMeshGenerator) == 0x000030, "Wrong size on UCustomMeshGenerator");
static_assert(offsetof(UCustomMeshGenerator, MeshComp) == 0x000028, "Member 'UCustomMeshGenerator::MeshComp' has a wrong offset!");

class AWaterBodyCustom final : public AWaterBody
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterBodyCustom">();
	}
	static class AWaterBodyCustom* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWaterBodyCustom>();
	}
};
static_assert(alignof(AWaterBodyCustom) == 0x000008, "Wrong alignment on AWaterBodyCustom");
static_assert(sizeof(AWaterBodyCustom) == 0x0002B8, "Wrong size on AWaterBodyCustom");

#pragma pack(push, 0x1)
class alignas(0x10) UWaterBodyCustomComponent : public UWaterBodyComponent
{
public:
	class UStaticMeshComponent*                   MeshComp;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterBodyCustomComponent">();
	}
	static class UWaterBodyCustomComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterBodyCustomComponent>();
	}
};
#pragma pack(pop)
static_assert(alignof(UWaterBodyCustomComponent) == 0x000010, "Wrong alignment on UWaterBodyCustomComponent");
static_assert(sizeof(UWaterBodyCustomComponent) == 0x001560, "Wrong size on UWaterBodyCustomComponent");
static_assert(offsetof(UWaterBodyCustomComponent, MeshComp) == 0x001550, "Member 'UWaterBodyCustomComponent::MeshComp' has a wrong offset!");

class AWaterBodyExclusionVolume : public APhysicsVolume
{
public:
	bool                                          bExcludeAllOverlappingWaterBodies;
	uint8                                         Pad_2D1[0x7];
	TArray<class AWaterBody*>                     WaterBodiesToExclude;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterBodyExclusionVolume">();
	}
	static class AWaterBodyExclusionVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWaterBodyExclusionVolume>();
	}
};
static_assert(alignof(AWaterBodyExclusionVolume) == 0x000008, "Wrong alignment on AWaterBodyExclusionVolume");
static_assert(sizeof(AWaterBodyExclusionVolume) == 0x0002E8, "Wrong size on AWaterBodyExclusionVolume");
static_assert(offsetof(AWaterBodyExclusionVolume, bExcludeAllOverlappingWaterBodies) == 0x0002D0, "Member 'AWaterBodyExclusionVolume::bExcludeAllOverlappingWaterBodies' has a wrong offset!");
static_assert(offsetof(AWaterBodyExclusionVolume, WaterBodiesToExclude) == 0x0002D8, "Member 'AWaterBodyExclusionVolume::WaterBodiesToExclude' has a wrong offset!");

class UWaterBodyHLODBuilder final : public UHLODBuilder
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterBodyHLODBuilder">();
	}
	static class UWaterBodyHLODBuilder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterBodyHLODBuilder>();
	}
};
static_assert(alignof(UWaterBodyHLODBuilder) == 0x000008, "Wrong alignment on UWaterBodyHLODBuilder");
static_assert(sizeof(UWaterBodyHLODBuilder) == 0x000028, "Wrong size on UWaterBodyHLODBuilder");

class AWaterBodyIsland : public AActor
{
public:
	uint8                                         Pad_288[0x8];
	class UWaterSplineComponent*                  SplineComp;

public:
	class UWaterSplineComponent* GetWaterSpline() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterBodyIsland">();
	}
	static class AWaterBodyIsland* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWaterBodyIsland>();
	}
};
static_assert(alignof(AWaterBodyIsland) == 0x000008, "Wrong alignment on AWaterBodyIsland");
static_assert(sizeof(AWaterBodyIsland) == 0x000298, "Wrong size on AWaterBodyIsland");
static_assert(offsetof(AWaterBodyIsland, SplineComp) == 0x000290, "Member 'AWaterBodyIsland::SplineComp' has a wrong offset!");

class ULakeGenerator final : public UWaterBodyGenerator
{
public:
	class UStaticMeshComponent*                   LakeMeshComp;
	class UBoxComponent*                          LakeCollisionComp;
	class ULakeCollisionComponent*                LakeCollision;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LakeGenerator">();
	}
	static class ULakeGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULakeGenerator>();
	}
};
static_assert(alignof(ULakeGenerator) == 0x000008, "Wrong alignment on ULakeGenerator");
static_assert(sizeof(ULakeGenerator) == 0x000040, "Wrong size on ULakeGenerator");
static_assert(offsetof(ULakeGenerator, LakeMeshComp) == 0x000028, "Member 'ULakeGenerator::LakeMeshComp' has a wrong offset!");
static_assert(offsetof(ULakeGenerator, LakeCollisionComp) == 0x000030, "Member 'ULakeGenerator::LakeCollisionComp' has a wrong offset!");
static_assert(offsetof(ULakeGenerator, LakeCollision) == 0x000038, "Member 'ULakeGenerator::LakeCollision' has a wrong offset!");

class AWaterBodyLake final : public AWaterBody
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterBodyLake">();
	}
	static class AWaterBodyLake* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWaterBodyLake>();
	}
};
static_assert(alignof(AWaterBodyLake) == 0x000008, "Wrong alignment on AWaterBodyLake");
static_assert(sizeof(AWaterBodyLake) == 0x0002B8, "Wrong size on AWaterBodyLake");

class UWaterBodyLakeComponent : public UWaterBodyComponent
{
public:
	class UStaticMeshComponent*                   LakeMeshComp;
	class ULakeCollisionComponent*                LakeCollision;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterBodyLakeComponent">();
	}
	static class UWaterBodyLakeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterBodyLakeComponent>();
	}
};
static_assert(alignof(UWaterBodyLakeComponent) == 0x000010, "Wrong alignment on UWaterBodyLakeComponent");
static_assert(sizeof(UWaterBodyLakeComponent) == 0x001560, "Wrong size on UWaterBodyLakeComponent");
static_assert(offsetof(UWaterBodyLakeComponent, LakeMeshComp) == 0x001550, "Member 'UWaterBodyLakeComponent::LakeMeshComp' has a wrong offset!");
static_assert(offsetof(UWaterBodyLakeComponent, LakeCollision) == 0x001558, "Member 'UWaterBodyLakeComponent::LakeCollision' has a wrong offset!");

class UOceanGenerator final : public UWaterBodyGenerator
{
public:
	TArray<class UOceanBoxCollisionComponent*>    CollisionBoxes;
	TArray<class UOceanCollisionComponent*>       CollisionHullSets;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OceanGenerator">();
	}
	static class UOceanGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOceanGenerator>();
	}
};
static_assert(alignof(UOceanGenerator) == 0x000008, "Wrong alignment on UOceanGenerator");
static_assert(sizeof(UOceanGenerator) == 0x000048, "Wrong size on UOceanGenerator");
static_assert(offsetof(UOceanGenerator, CollisionBoxes) == 0x000028, "Member 'UOceanGenerator::CollisionBoxes' has a wrong offset!");
static_assert(offsetof(UOceanGenerator, CollisionHullSets) == 0x000038, "Member 'UOceanGenerator::CollisionHullSets' has a wrong offset!");

class AWaterBodyOcean final : public AWaterBody
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterBodyOcean">();
	}
	static class AWaterBodyOcean* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWaterBodyOcean>();
	}
};
static_assert(alignof(AWaterBodyOcean) == 0x000008, "Wrong alignment on AWaterBodyOcean");
static_assert(sizeof(AWaterBodyOcean) == 0x0002B8, "Wrong size on AWaterBodyOcean");

class UWaterBodyOceanComponent : public UWaterBodyComponent
{
public:
	TArray<class UOceanBoxCollisionComponent*>    CollisionBoxes;
	TArray<class UOceanCollisionComponent*>       CollisionHullSets;
	struct FVector2D                              VisualExtents;
	struct FVector                                CollisionExtents;
	float                                         HeightOffset;
	uint8                                         Pad_159C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterBodyOceanComponent">();
	}
	static class UWaterBodyOceanComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterBodyOceanComponent>();
	}
};
static_assert(alignof(UWaterBodyOceanComponent) == 0x000010, "Wrong alignment on UWaterBodyOceanComponent");
static_assert(sizeof(UWaterBodyOceanComponent) == 0x0015A0, "Wrong size on UWaterBodyOceanComponent");
static_assert(offsetof(UWaterBodyOceanComponent, CollisionBoxes) == 0x001550, "Member 'UWaterBodyOceanComponent::CollisionBoxes' has a wrong offset!");
static_assert(offsetof(UWaterBodyOceanComponent, CollisionHullSets) == 0x001560, "Member 'UWaterBodyOceanComponent::CollisionHullSets' has a wrong offset!");
static_assert(offsetof(UWaterBodyOceanComponent, VisualExtents) == 0x001570, "Member 'UWaterBodyOceanComponent::VisualExtents' has a wrong offset!");
static_assert(offsetof(UWaterBodyOceanComponent, CollisionExtents) == 0x001580, "Member 'UWaterBodyOceanComponent::CollisionExtents' has a wrong offset!");
static_assert(offsetof(UWaterBodyOceanComponent, HeightOffset) == 0x001598, "Member 'UWaterBodyOceanComponent::HeightOffset' has a wrong offset!");

class URiverGenerator final : public UWaterBodyGenerator
{
public:
	TArray<class USplineMeshComponent*>           SplineMeshComponents;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RiverGenerator">();
	}
	static class URiverGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<URiverGenerator>();
	}
};
static_assert(alignof(URiverGenerator) == 0x000008, "Wrong alignment on URiverGenerator");
static_assert(sizeof(URiverGenerator) == 0x000038, "Wrong size on URiverGenerator");
static_assert(offsetof(URiverGenerator, SplineMeshComponents) == 0x000028, "Member 'URiverGenerator::SplineMeshComponents' has a wrong offset!");

class AWaterBodyRiver final : public AWaterBody
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterBodyRiver">();
	}
	static class AWaterBodyRiver* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWaterBodyRiver>();
	}
};
static_assert(alignof(AWaterBodyRiver) == 0x000008, "Wrong alignment on AWaterBodyRiver");
static_assert(sizeof(AWaterBodyRiver) == 0x0002B8, "Wrong size on AWaterBodyRiver");

class UWaterBodyRiverComponent : public UWaterBodyComponent
{
public:
	TArray<class USplineMeshComponent*>           SplineMeshComponents;
	class UMaterialInterface*                     LakeTransitionMaterial;
	class UMaterialInstanceDynamic*               LakeTransitionMID;
	class UMaterialInterface*                     OceanTransitionMaterial;
	class UMaterialInstanceDynamic*               OceanTransitionMID;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterBodyRiverComponent">();
	}
	static class UWaterBodyRiverComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterBodyRiverComponent>();
	}
};
static_assert(alignof(UWaterBodyRiverComponent) == 0x000010, "Wrong alignment on UWaterBodyRiverComponent");
static_assert(sizeof(UWaterBodyRiverComponent) == 0x001580, "Wrong size on UWaterBodyRiverComponent");
static_assert(offsetof(UWaterBodyRiverComponent, SplineMeshComponents) == 0x001550, "Member 'UWaterBodyRiverComponent::SplineMeshComponents' has a wrong offset!");
static_assert(offsetof(UWaterBodyRiverComponent, LakeTransitionMaterial) == 0x001560, "Member 'UWaterBodyRiverComponent::LakeTransitionMaterial' has a wrong offset!");
static_assert(offsetof(UWaterBodyRiverComponent, LakeTransitionMID) == 0x001568, "Member 'UWaterBodyRiverComponent::LakeTransitionMID' has a wrong offset!");
static_assert(offsetof(UWaterBodyRiverComponent, OceanTransitionMaterial) == 0x001570, "Member 'UWaterBodyRiverComponent::OceanTransitionMaterial' has a wrong offset!");
static_assert(offsetof(UWaterBodyRiverComponent, OceanTransitionMID) == 0x001578, "Member 'UWaterBodyRiverComponent::OceanTransitionMID' has a wrong offset!");

class IWaterBrushActorInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterBrushActorInterface">();
	}
	static class IWaterBrushActorInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IWaterBrushActorInterface>();
	}
};
static_assert(alignof(IWaterBrushActorInterface) == 0x000008, "Wrong alignment on IWaterBrushActorInterface");
static_assert(sizeof(IWaterBrushActorInterface) == 0x000028, "Wrong size on IWaterBrushActorInterface");

class UWaterMeshComponent final : public UMeshComponent
{
public:
	int32                                         ForceCollapseDensityLevel;
	uint8                                         Pad_5A4[0x4];
	class UMaterialInterface*                     FarDistanceMaterial;
	float                                         FarDistanceMeshExtent;
	float                                         TileSize;
	struct FIntPoint                              ExtentInTiles;
	uint8                                         Pad_5C0[0x98];
	TSet<class UMaterialInterface*>               UsedMaterials;
	bool                                          bUseFarMeshWithoutOcean;
	uint8                                         Pad_6A9[0xF];
	int32                                         TessellationFactor;
	float                                         LODScale;

public:
	bool IsEnabled() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterMeshComponent">();
	}
	static class UWaterMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterMeshComponent>();
	}
};
static_assert(alignof(UWaterMeshComponent) == 0x000010, "Wrong alignment on UWaterMeshComponent");
static_assert(sizeof(UWaterMeshComponent) == 0x0006C0, "Wrong size on UWaterMeshComponent");
static_assert(offsetof(UWaterMeshComponent, ForceCollapseDensityLevel) == 0x0005A0, "Member 'UWaterMeshComponent::ForceCollapseDensityLevel' has a wrong offset!");
static_assert(offsetof(UWaterMeshComponent, FarDistanceMaterial) == 0x0005A8, "Member 'UWaterMeshComponent::FarDistanceMaterial' has a wrong offset!");
static_assert(offsetof(UWaterMeshComponent, FarDistanceMeshExtent) == 0x0005B0, "Member 'UWaterMeshComponent::FarDistanceMeshExtent' has a wrong offset!");
static_assert(offsetof(UWaterMeshComponent, TileSize) == 0x0005B4, "Member 'UWaterMeshComponent::TileSize' has a wrong offset!");
static_assert(offsetof(UWaterMeshComponent, ExtentInTiles) == 0x0005B8, "Member 'UWaterMeshComponent::ExtentInTiles' has a wrong offset!");
static_assert(offsetof(UWaterMeshComponent, UsedMaterials) == 0x000658, "Member 'UWaterMeshComponent::UsedMaterials' has a wrong offset!");
static_assert(offsetof(UWaterMeshComponent, bUseFarMeshWithoutOcean) == 0x0006A8, "Member 'UWaterMeshComponent::bUseFarMeshWithoutOcean' has a wrong offset!");
static_assert(offsetof(UWaterMeshComponent, TessellationFactor) == 0x0006B8, "Member 'UWaterMeshComponent::TessellationFactor' has a wrong offset!");
static_assert(offsetof(UWaterMeshComponent, LODScale) == 0x0006BC, "Member 'UWaterMeshComponent::LODScale' has a wrong offset!");

class UWaterRuntimeSettings final : public UDeveloperSettings
{
public:
	ECollisionChannel                             CollisionChannelForWaterTraces;
	uint8                                         Pad_31[0x7];
	TSoftObjectPtr<class UMaterialParameterCollection> MaterialParameterCollection;
	float                                         WaterBodyIconWorldZOffset;
	class FName                                   DefaultWaterCollisionProfileName;
	TSoftObjectPtr<class UMaterialInterface>      DefaultWaterInfoMaterial;
	TSubclassOf<class UWaterBodyRiverComponent>   WaterBodyRiverComponentClass;
	TSubclassOf<class UWaterBodyLakeComponent>    WaterBodyLakeComponentClass;
	TSubclassOf<class UWaterBodyOceanComponent>   WaterBodyOceanComponentClass;
	TSubclassOf<class UWaterBodyCustomComponent>  WaterBodyCustomComponentClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterRuntimeSettings">();
	}
	static class UWaterRuntimeSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterRuntimeSettings>();
	}
};
static_assert(alignof(UWaterRuntimeSettings) == 0x000008, "Wrong alignment on UWaterRuntimeSettings");
static_assert(sizeof(UWaterRuntimeSettings) == 0x0000B0, "Wrong size on UWaterRuntimeSettings");
static_assert(offsetof(UWaterRuntimeSettings, CollisionChannelForWaterTraces) == 0x000030, "Member 'UWaterRuntimeSettings::CollisionChannelForWaterTraces' has a wrong offset!");
static_assert(offsetof(UWaterRuntimeSettings, MaterialParameterCollection) == 0x000038, "Member 'UWaterRuntimeSettings::MaterialParameterCollection' has a wrong offset!");
static_assert(offsetof(UWaterRuntimeSettings, WaterBodyIconWorldZOffset) == 0x000060, "Member 'UWaterRuntimeSettings::WaterBodyIconWorldZOffset' has a wrong offset!");
static_assert(offsetof(UWaterRuntimeSettings, DefaultWaterCollisionProfileName) == 0x000064, "Member 'UWaterRuntimeSettings::DefaultWaterCollisionProfileName' has a wrong offset!");
static_assert(offsetof(UWaterRuntimeSettings, DefaultWaterInfoMaterial) == 0x000068, "Member 'UWaterRuntimeSettings::DefaultWaterInfoMaterial' has a wrong offset!");
static_assert(offsetof(UWaterRuntimeSettings, WaterBodyRiverComponentClass) == 0x000090, "Member 'UWaterRuntimeSettings::WaterBodyRiverComponentClass' has a wrong offset!");
static_assert(offsetof(UWaterRuntimeSettings, WaterBodyLakeComponentClass) == 0x000098, "Member 'UWaterRuntimeSettings::WaterBodyLakeComponentClass' has a wrong offset!");
static_assert(offsetof(UWaterRuntimeSettings, WaterBodyOceanComponentClass) == 0x0000A0, "Member 'UWaterRuntimeSettings::WaterBodyOceanComponentClass' has a wrong offset!");
static_assert(offsetof(UWaterRuntimeSettings, WaterBodyCustomComponentClass) == 0x0000A8, "Member 'UWaterRuntimeSettings::WaterBodyCustomComponentClass' has a wrong offset!");

class UWaterSplineComponent final : public USplineComponent
{
public:
	struct FWaterSplineCurveDefaults              WaterSplineDefaults;
	struct FWaterSplineCurveDefaults              PreviousWaterSplineDefaults;
	uint8                                         Pad_688[0x8];

public:
	void K2_SynchronizeAndBroadcastDataChange();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterSplineComponent">();
	}
	static class UWaterSplineComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterSplineComponent>();
	}
};
static_assert(alignof(UWaterSplineComponent) == 0x000010, "Wrong alignment on UWaterSplineComponent");
static_assert(sizeof(UWaterSplineComponent) == 0x000690, "Wrong size on UWaterSplineComponent");
static_assert(offsetof(UWaterSplineComponent, WaterSplineDefaults) == 0x000668, "Member 'UWaterSplineComponent::WaterSplineDefaults' has a wrong offset!");
static_assert(offsetof(UWaterSplineComponent, PreviousWaterSplineDefaults) == 0x000678, "Member 'UWaterSplineComponent::PreviousWaterSplineDefaults' has a wrong offset!");

class UWaterSplineMetadata final : public USplineMetadata
{
public:
	struct FInterpCurveFloat                      Depth;
	struct FInterpCurveFloat                      WaterVelocityScalar;
	struct FInterpCurveFloat                      RiverWidth;
	struct FInterpCurveFloat                      AudioIntensity;
	struct FInterpCurveVector                     WaterVelocity;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterSplineMetadata">();
	}
	static class UWaterSplineMetadata* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterSplineMetadata>();
	}
};
static_assert(alignof(UWaterSplineMetadata) == 0x000008, "Wrong alignment on UWaterSplineMetadata");
static_assert(sizeof(UWaterSplineMetadata) == 0x0000A0, "Wrong size on UWaterSplineMetadata");
static_assert(offsetof(UWaterSplineMetadata, Depth) == 0x000028, "Member 'UWaterSplineMetadata::Depth' has a wrong offset!");
static_assert(offsetof(UWaterSplineMetadata, WaterVelocityScalar) == 0x000040, "Member 'UWaterSplineMetadata::WaterVelocityScalar' has a wrong offset!");
static_assert(offsetof(UWaterSplineMetadata, RiverWidth) == 0x000058, "Member 'UWaterSplineMetadata::RiverWidth' has a wrong offset!");
static_assert(offsetof(UWaterSplineMetadata, AudioIntensity) == 0x000070, "Member 'UWaterSplineMetadata::AudioIntensity' has a wrong offset!");
static_assert(offsetof(UWaterSplineMetadata, WaterVelocity) == 0x000088, "Member 'UWaterSplineMetadata::WaterVelocity' has a wrong offset!");

class UWaterSubsystem final : public UTickableWorldSubsystem
{
public:
	uint8                                         Pad_40[0x38];
	class ABuoyancyManager*                       BuoyancyManager;
	TMulticastInlineDelegate<void(bool bIsUnderWater, float DepthUnderwater)> OnCameraUnderwaterStateChanged;
	TMulticastInlineDelegate<void()>              OnWaterScalabilityChanged;
	class UStaticMesh*                            DefaultRiverMesh;
	class UStaticMesh*                            DefaultLakeMesh;
	uint8                                         Pad_B0[0x28];
	class UMaterialParameterCollection*           MaterialParameterCollection;
	uint8                                         Pad_E0[0x30];

public:
	static int32 GetShallowWaterMaxDynamicForces();
	static int32 GetShallowWaterMaxImpulseForces();
	static int32 GetShallowWaterSimulationRenderTargetSize();

	void PrintToWaterLog(const class FString& message, bool bWarning);
	void SetOceanFloodHeight(float InFloodHeight);

	float GetCameraUnderwaterDepth() const;
	float GetOceanBaseHeight() const;
	float GetOceanFloodHeight() const;
	float GetOceanTotalHeight() const;
	float GetSmoothedWorldTimeSeconds() const;
	float GetWaterTimeSeconds() const;
	bool IsShallowWaterSimulationEnabled() const;
	bool IsUnderwaterPostProcessEnabled() const;
	bool IsWaterRenderingEnabled() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterSubsystem">();
	}
	static class UWaterSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterSubsystem>();
	}
};
static_assert(alignof(UWaterSubsystem) == 0x000008, "Wrong alignment on UWaterSubsystem");
static_assert(sizeof(UWaterSubsystem) == 0x000110, "Wrong size on UWaterSubsystem");
static_assert(offsetof(UWaterSubsystem, BuoyancyManager) == 0x000078, "Member 'UWaterSubsystem::BuoyancyManager' has a wrong offset!");
static_assert(offsetof(UWaterSubsystem, OnCameraUnderwaterStateChanged) == 0x000080, "Member 'UWaterSubsystem::OnCameraUnderwaterStateChanged' has a wrong offset!");
static_assert(offsetof(UWaterSubsystem, OnWaterScalabilityChanged) == 0x000090, "Member 'UWaterSubsystem::OnWaterScalabilityChanged' has a wrong offset!");
static_assert(offsetof(UWaterSubsystem, DefaultRiverMesh) == 0x0000A0, "Member 'UWaterSubsystem::DefaultRiverMesh' has a wrong offset!");
static_assert(offsetof(UWaterSubsystem, DefaultLakeMesh) == 0x0000A8, "Member 'UWaterSubsystem::DefaultLakeMesh' has a wrong offset!");
static_assert(offsetof(UWaterSubsystem, MaterialParameterCollection) == 0x0000D8, "Member 'UWaterSubsystem::MaterialParameterCollection' has a wrong offset!");

class UWaterWavesAsset final : public UObject
{
public:
	class UWaterWaves*                            WaterWaves;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterWavesAsset">();
	}
	static class UWaterWavesAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterWavesAsset>();
	}
};
static_assert(alignof(UWaterWavesAsset) == 0x000008, "Wrong alignment on UWaterWavesAsset");
static_assert(sizeof(UWaterWavesAsset) == 0x000030, "Wrong size on UWaterWavesAsset");
static_assert(offsetof(UWaterWavesAsset, WaterWaves) == 0x000028, "Member 'UWaterWavesAsset::WaterWaves' has a wrong offset!");

class UWaterWavesAssetReference final : public UWaterWavesBase
{
public:
	class UWaterWavesAsset*                       WaterWavesAsset;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterWavesAssetReference">();
	}
	static class UWaterWavesAssetReference* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterWavesAssetReference>();
	}
};
static_assert(alignof(UWaterWavesAssetReference) == 0x000008, "Wrong alignment on UWaterWavesAssetReference");
static_assert(sizeof(UWaterWavesAssetReference) == 0x000030, "Wrong size on UWaterWavesAssetReference");
static_assert(offsetof(UWaterWavesAssetReference, WaterWavesAsset) == 0x000028, "Member 'UWaterWavesAssetReference::WaterWavesAsset' has a wrong offset!");

class AWaterZone final : public AActor
{
public:
	class UTextureRenderTarget2D*                 WaterInfoTexture;
	TArray<TWeakObjectPtr<class UWaterBodyComponent>> OwnedWaterBodies;
	struct FIntPoint                              RenderTargetResolution;
	class UWaterMeshComponent*                    WaterMesh;
	struct FVector2D                              ZoneExtent;
	float                                         CaptureZOffset;
	bool                                          bHalfPrecisionTexture;
	uint8                                         Pad_2C5[0x3];
	int32                                         VelocityBlurRadius;
	uint8                                         Pad_2CC[0x4];
	struct FVector                                TessellatedWaterMeshExtent;
	uint32                                        NonTessellatedLODSectionScale;
	int32                                         OverlapPriority;
	bool                                          bEnableNonTessellatedLODMesh;
	uint8                                         Pad_2F1[0x27];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterZone">();
	}
	static class AWaterZone* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWaterZone>();
	}
};
static_assert(alignof(AWaterZone) == 0x000008, "Wrong alignment on AWaterZone");
static_assert(sizeof(AWaterZone) == 0x000318, "Wrong size on AWaterZone");
static_assert(offsetof(AWaterZone, WaterInfoTexture) == 0x000288, "Member 'AWaterZone::WaterInfoTexture' has a wrong offset!");
static_assert(offsetof(AWaterZone, OwnedWaterBodies) == 0x000290, "Member 'AWaterZone::OwnedWaterBodies' has a wrong offset!");
static_assert(offsetof(AWaterZone, RenderTargetResolution) == 0x0002A0, "Member 'AWaterZone::RenderTargetResolution' has a wrong offset!");
static_assert(offsetof(AWaterZone, WaterMesh) == 0x0002A8, "Member 'AWaterZone::WaterMesh' has a wrong offset!");
static_assert(offsetof(AWaterZone, ZoneExtent) == 0x0002B0, "Member 'AWaterZone::ZoneExtent' has a wrong offset!");
static_assert(offsetof(AWaterZone, CaptureZOffset) == 0x0002C0, "Member 'AWaterZone::CaptureZOffset' has a wrong offset!");
static_assert(offsetof(AWaterZone, bHalfPrecisionTexture) == 0x0002C4, "Member 'AWaterZone::bHalfPrecisionTexture' has a wrong offset!");
static_assert(offsetof(AWaterZone, VelocityBlurRadius) == 0x0002C8, "Member 'AWaterZone::VelocityBlurRadius' has a wrong offset!");
static_assert(offsetof(AWaterZone, TessellatedWaterMeshExtent) == 0x0002D0, "Member 'AWaterZone::TessellatedWaterMeshExtent' has a wrong offset!");
static_assert(offsetof(AWaterZone, NonTessellatedLODSectionScale) == 0x0002E8, "Member 'AWaterZone::NonTessellatedLODSectionScale' has a wrong offset!");
static_assert(offsetof(AWaterZone, OverlapPriority) == 0x0002EC, "Member 'AWaterZone::OverlapPriority' has a wrong offset!");
static_assert(offsetof(AWaterZone, bEnableNonTessellatedLODMesh) == 0x0002F0, "Member 'AWaterZone::bEnableNonTessellatedLODMesh' has a wrong offset!");

}
