#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "InfernoRuntime_structs.hpp"
#include "Niagara_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UFortCurieElementAttachHandlerVoxelFire : public UFortCurieElementAttachHandlerFire
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCurieElementAttachHandlerVoxelFire">();
	}
	static class UFortCurieElementAttachHandlerVoxelFire* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCurieElementAttachHandlerVoxelFire>();
	}
};
static_assert(alignof(UFortCurieElementAttachHandlerVoxelFire) == 0x000008, "Wrong alignment on UFortCurieElementAttachHandlerVoxelFire");
static_assert(sizeof(UFortCurieElementAttachHandlerVoxelFire) == 0x000090, "Wrong size on UFortCurieElementAttachHandlerVoxelFire");

class UFortCurieElementAttachConditionHandlerVoxelFire : public UFortCurieElementAttachConditionHandlerFire
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCurieElementAttachConditionHandlerVoxelFire">();
	}
	static class UFortCurieElementAttachConditionHandlerVoxelFire* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCurieElementAttachConditionHandlerVoxelFire>();
	}
};
static_assert(alignof(UFortCurieElementAttachConditionHandlerVoxelFire) == 0x000008, "Wrong alignment on UFortCurieElementAttachConditionHandlerVoxelFire");
static_assert(sizeof(UFortCurieElementAttachConditionHandlerVoxelFire) == 0x000040, "Wrong size on UFortCurieElementAttachConditionHandlerVoxelFire");

class UFortCurieVoxelFirePropagationManagerConfig final : public UFortCurieFirePropagationManagerConfig
{
public:
	struct FFortCurieVoxelPropagationProperties   DefaultPropagationProperties;
	class FName                                   PropagationPropertiesRegistry;
	float                                         PropagationNoiseMinimum;
	float                                         PropagationNoiseMaximum;
	float                                         PropagationSpeedNoiseRange;
	float                                         PropagationMinimumSpeed;
	float                                         PropagationMinimumTime;
	float                                         VoxelOverlapExpansionFactor;
	bool                                          bAllowPerMaterialPropagationProperties;
	uint8                                         Pad_165[0x3];
	float                                         ActorPropagationInteractMagnitude;
	float                                         MovedActorGrassIgnitionDelay;
	float                                         MovedActorGrassGridCellZExpansion;
	float                                         MovedActorGroundTraceZRange;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCurieVoxelFirePropagationManagerConfig">();
	}
	static class UFortCurieVoxelFirePropagationManagerConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCurieVoxelFirePropagationManagerConfig>();
	}
};
static_assert(alignof(UFortCurieVoxelFirePropagationManagerConfig) == 0x000008, "Wrong alignment on UFortCurieVoxelFirePropagationManagerConfig");
static_assert(sizeof(UFortCurieVoxelFirePropagationManagerConfig) == 0x000178, "Wrong size on UFortCurieVoxelFirePropagationManagerConfig");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, DefaultPropagationProperties) == 0x000130, "Member 'UFortCurieVoxelFirePropagationManagerConfig::DefaultPropagationProperties' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, PropagationPropertiesRegistry) == 0x000148, "Member 'UFortCurieVoxelFirePropagationManagerConfig::PropagationPropertiesRegistry' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, PropagationNoiseMinimum) == 0x00014C, "Member 'UFortCurieVoxelFirePropagationManagerConfig::PropagationNoiseMinimum' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, PropagationNoiseMaximum) == 0x000150, "Member 'UFortCurieVoxelFirePropagationManagerConfig::PropagationNoiseMaximum' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, PropagationSpeedNoiseRange) == 0x000154, "Member 'UFortCurieVoxelFirePropagationManagerConfig::PropagationSpeedNoiseRange' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, PropagationMinimumSpeed) == 0x000158, "Member 'UFortCurieVoxelFirePropagationManagerConfig::PropagationMinimumSpeed' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, PropagationMinimumTime) == 0x00015C, "Member 'UFortCurieVoxelFirePropagationManagerConfig::PropagationMinimumTime' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, VoxelOverlapExpansionFactor) == 0x000160, "Member 'UFortCurieVoxelFirePropagationManagerConfig::VoxelOverlapExpansionFactor' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, bAllowPerMaterialPropagationProperties) == 0x000164, "Member 'UFortCurieVoxelFirePropagationManagerConfig::bAllowPerMaterialPropagationProperties' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, ActorPropagationInteractMagnitude) == 0x000168, "Member 'UFortCurieVoxelFirePropagationManagerConfig::ActorPropagationInteractMagnitude' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, MovedActorGrassIgnitionDelay) == 0x00016C, "Member 'UFortCurieVoxelFirePropagationManagerConfig::MovedActorGrassIgnitionDelay' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, MovedActorGrassGridCellZExpansion) == 0x000170, "Member 'UFortCurieVoxelFirePropagationManagerConfig::MovedActorGrassGridCellZExpansion' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, MovedActorGroundTraceZRange) == 0x000174, "Member 'UFortCurieVoxelFirePropagationManagerConfig::MovedActorGroundTraceZRange' has a wrong offset!");

class alignas(0x10) UFortCurieVoxelFirePropagationManager final : public UFortCurieManagerComponent
{
public:
	uint8                                         Pad_30[0x10];
	struct FFortCurieVoxelFirePropagationManagerTickFunction PrimaryTickFunction;
	uint8                                         Pad_70[0x5F8];
	class UFortCurieVoxelFirePropagationManagerConfig* InternalManagerConfig;
	uint8                                         Pad_670[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCurieVoxelFirePropagationManager">();
	}
	static class UFortCurieVoxelFirePropagationManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCurieVoxelFirePropagationManager>();
	}
};
static_assert(alignof(UFortCurieVoxelFirePropagationManager) == 0x000010, "Wrong alignment on UFortCurieVoxelFirePropagationManager");
static_assert(sizeof(UFortCurieVoxelFirePropagationManager) == 0x000680, "Wrong size on UFortCurieVoxelFirePropagationManager");
static_assert(offsetof(UFortCurieVoxelFirePropagationManager, PrimaryTickFunction) == 0x000040, "Member 'UFortCurieVoxelFirePropagationManager::PrimaryTickFunction' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFirePropagationManager, InternalManagerConfig) == 0x000668, "Member 'UFortCurieVoxelFirePropagationManager::InternalManagerConfig' has a wrong offset!");

class IFortCurieVoxelFireDebugParticleDataInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCurieVoxelFireDebugParticleDataInterface">();
	}
	static class IFortCurieVoxelFireDebugParticleDataInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFortCurieVoxelFireDebugParticleDataInterface>();
	}
};
static_assert(alignof(IFortCurieVoxelFireDebugParticleDataInterface) == 0x000008, "Wrong alignment on IFortCurieVoxelFireDebugParticleDataInterface");
static_assert(sizeof(IFortCurieVoxelFireDebugParticleDataInterface) == 0x000028, "Wrong size on IFortCurieVoxelFireDebugParticleDataInterface");

class UFortCurieVoxelFireDebugNiagaraDataInterface final : public UNiagaraDataInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCurieVoxelFireDebugNiagaraDataInterface">();
	}
	static class UFortCurieVoxelFireDebugNiagaraDataInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCurieVoxelFireDebugNiagaraDataInterface>();
	}
};
static_assert(alignof(UFortCurieVoxelFireDebugNiagaraDataInterface) == 0x000008, "Wrong alignment on UFortCurieVoxelFireDebugNiagaraDataInterface");
static_assert(sizeof(UFortCurieVoxelFireDebugNiagaraDataInterface) == 0x000038, "Wrong size on UFortCurieVoxelFireDebugNiagaraDataInterface");

class UFortCurieVoxelFireNativeFXHandlerConfig final : public UFortCurieNativeFXHandlerConfig
{
public:
	class UNiagaraSystem*                         WorldFireSystem;
	class UNiagaraSystem*                         WorldFireDebugSystem;
	class UTextureRenderTarget2D*                 LandscapeCharRenderTarget;
	class UMaterialParameterCollection*           MaterialParameterCollection;
	class FName                                   PlayerWorldFireSystemLightScalabilityParamName;
	class FName                                   LandscapeBiasParameterName;
	class FName                                   LandscapeDivisorParameterName;
	float                                         LandscapeFireRandomLocationRadius;
	float                                         MinLandscapeFireSphericalBounds;
	float                                         MaxLandscapeFireSphericalBounds;
	float                                         LandscapeCharInterpSpeed;
	float                                         LandscapeIgnitionParticleMovementSpeed;
	bool                                          bUseVoxelFireAmbientAudio;
	uint8                                         Pad_1A9[0x7];
	class USoundBase*                             StructureFireAmbientSound;
	class USoundBase*                             GrassFireAmbientSound;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCurieVoxelFireNativeFXHandlerConfig">();
	}
	static class UFortCurieVoxelFireNativeFXHandlerConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCurieVoxelFireNativeFXHandlerConfig>();
	}
};
static_assert(alignof(UFortCurieVoxelFireNativeFXHandlerConfig) == 0x000008, "Wrong alignment on UFortCurieVoxelFireNativeFXHandlerConfig");
static_assert(sizeof(UFortCurieVoxelFireNativeFXHandlerConfig) == 0x0001C0, "Wrong size on UFortCurieVoxelFireNativeFXHandlerConfig");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, WorldFireSystem) == 0x000168, "Member 'UFortCurieVoxelFireNativeFXHandlerConfig::WorldFireSystem' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, WorldFireDebugSystem) == 0x000170, "Member 'UFortCurieVoxelFireNativeFXHandlerConfig::WorldFireDebugSystem' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, LandscapeCharRenderTarget) == 0x000178, "Member 'UFortCurieVoxelFireNativeFXHandlerConfig::LandscapeCharRenderTarget' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, MaterialParameterCollection) == 0x000180, "Member 'UFortCurieVoxelFireNativeFXHandlerConfig::MaterialParameterCollection' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, PlayerWorldFireSystemLightScalabilityParamName) == 0x000188, "Member 'UFortCurieVoxelFireNativeFXHandlerConfig::PlayerWorldFireSystemLightScalabilityParamName' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, LandscapeBiasParameterName) == 0x00018C, "Member 'UFortCurieVoxelFireNativeFXHandlerConfig::LandscapeBiasParameterName' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, LandscapeDivisorParameterName) == 0x000190, "Member 'UFortCurieVoxelFireNativeFXHandlerConfig::LandscapeDivisorParameterName' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, LandscapeFireRandomLocationRadius) == 0x000194, "Member 'UFortCurieVoxelFireNativeFXHandlerConfig::LandscapeFireRandomLocationRadius' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, MinLandscapeFireSphericalBounds) == 0x000198, "Member 'UFortCurieVoxelFireNativeFXHandlerConfig::MinLandscapeFireSphericalBounds' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, MaxLandscapeFireSphericalBounds) == 0x00019C, "Member 'UFortCurieVoxelFireNativeFXHandlerConfig::MaxLandscapeFireSphericalBounds' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, LandscapeCharInterpSpeed) == 0x0001A0, "Member 'UFortCurieVoxelFireNativeFXHandlerConfig::LandscapeCharInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, LandscapeIgnitionParticleMovementSpeed) == 0x0001A4, "Member 'UFortCurieVoxelFireNativeFXHandlerConfig::LandscapeIgnitionParticleMovementSpeed' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, bUseVoxelFireAmbientAudio) == 0x0001A8, "Member 'UFortCurieVoxelFireNativeFXHandlerConfig::bUseVoxelFireAmbientAudio' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, StructureFireAmbientSound) == 0x0001B0, "Member 'UFortCurieVoxelFireNativeFXHandlerConfig::StructureFireAmbientSound' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, GrassFireAmbientSound) == 0x0001B8, "Member 'UFortCurieVoxelFireNativeFXHandlerConfig::GrassFireAmbientSound' has a wrong offset!");

class UFortCurieVoxelFireNativeFXHandler final : public UFortCurieNativeFXHandler
{
public:
	uint8                                         Pad_40[0x30];
	TSet<class UFortCurieComponent*>              PendingUpdateComponents;
	TSet<class UFortCurieComponent*>              PendingRemoveComponents;
	uint8                                         Pad_110[0x50];
	TArray<class UFortCurieWorldNiagaraComponent*> WorldFireNiagaraSystems;
	TArray<class UFortCurieWorldNiagaraComponent*> WorldFireDebugNiagaraSystems;
	float                                         WorldSystemFireParticleSignificanceRequirement;
	float                                         WorldSystemIgnitionParticleSignificanceRequirement;
	float                                         AudioGrassFireSignificanceRequirement;
	float                                         AudioActorFireSignificanceRequirement;
	struct FRandomStream                          RandomStream;
	struct FBox                                   GrassFireBounds;
	float                                         LandscapeCharInterpSpeed;
	float                                         TimeSinceAudioUpdate;
	TArray<struct FFortCurieVoxelFireParticleGrassData> CachedFireParticleGrassData;
	TArray<struct FFortCurieFireParticleActorData> CachedFireParticleActorData;
	uint8                                         Pad_1F8[0x60];
	TSet<struct FFortSpatialCellIndex>            CachedBurningGrassGridCells;
	TMap<struct FFortSpatialCellIndex, class UAudioComponent*> GrassAudioMap;
	uint8                                         Pad_2F8[0x50];
	TArray<class UAudioComponent*>                PreallocatedAudioComponents;
	struct FTimerHandle                           AudioComponentCleanupTimerHandle;
	double                                        PreviousLandscapeCharTickTime;

public:
	void OnUserSettingsEffectQualityChanged();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCurieVoxelFireNativeFXHandler">();
	}
	static class UFortCurieVoxelFireNativeFXHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCurieVoxelFireNativeFXHandler>();
	}
};
static_assert(alignof(UFortCurieVoxelFireNativeFXHandler) == 0x000008, "Wrong alignment on UFortCurieVoxelFireNativeFXHandler");
static_assert(sizeof(UFortCurieVoxelFireNativeFXHandler) == 0x000368, "Wrong size on UFortCurieVoxelFireNativeFXHandler");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, PendingUpdateComponents) == 0x000070, "Member 'UFortCurieVoxelFireNativeFXHandler::PendingUpdateComponents' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, PendingRemoveComponents) == 0x0000C0, "Member 'UFortCurieVoxelFireNativeFXHandler::PendingRemoveComponents' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, WorldFireNiagaraSystems) == 0x000160, "Member 'UFortCurieVoxelFireNativeFXHandler::WorldFireNiagaraSystems' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, WorldFireDebugNiagaraSystems) == 0x000170, "Member 'UFortCurieVoxelFireNativeFXHandler::WorldFireDebugNiagaraSystems' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, WorldSystemFireParticleSignificanceRequirement) == 0x000180, "Member 'UFortCurieVoxelFireNativeFXHandler::WorldSystemFireParticleSignificanceRequirement' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, WorldSystemIgnitionParticleSignificanceRequirement) == 0x000184, "Member 'UFortCurieVoxelFireNativeFXHandler::WorldSystemIgnitionParticleSignificanceRequirement' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, AudioGrassFireSignificanceRequirement) == 0x000188, "Member 'UFortCurieVoxelFireNativeFXHandler::AudioGrassFireSignificanceRequirement' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, AudioActorFireSignificanceRequirement) == 0x00018C, "Member 'UFortCurieVoxelFireNativeFXHandler::AudioActorFireSignificanceRequirement' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, RandomStream) == 0x000190, "Member 'UFortCurieVoxelFireNativeFXHandler::RandomStream' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, GrassFireBounds) == 0x000198, "Member 'UFortCurieVoxelFireNativeFXHandler::GrassFireBounds' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, LandscapeCharInterpSpeed) == 0x0001D0, "Member 'UFortCurieVoxelFireNativeFXHandler::LandscapeCharInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, TimeSinceAudioUpdate) == 0x0001D4, "Member 'UFortCurieVoxelFireNativeFXHandler::TimeSinceAudioUpdate' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, CachedFireParticleGrassData) == 0x0001D8, "Member 'UFortCurieVoxelFireNativeFXHandler::CachedFireParticleGrassData' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, CachedFireParticleActorData) == 0x0001E8, "Member 'UFortCurieVoxelFireNativeFXHandler::CachedFireParticleActorData' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, CachedBurningGrassGridCells) == 0x000258, "Member 'UFortCurieVoxelFireNativeFXHandler::CachedBurningGrassGridCells' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, GrassAudioMap) == 0x0002A8, "Member 'UFortCurieVoxelFireNativeFXHandler::GrassAudioMap' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, PreallocatedAudioComponents) == 0x000348, "Member 'UFortCurieVoxelFireNativeFXHandler::PreallocatedAudioComponents' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, AudioComponentCleanupTimerHandle) == 0x000358, "Member 'UFortCurieVoxelFireNativeFXHandler::AudioComponentCleanupTimerHandle' has a wrong offset!");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, PreviousLandscapeCharTickTime) == 0x000360, "Member 'UFortCurieVoxelFireNativeFXHandler::PreviousLandscapeCharTickTime' has a wrong offset!");

class IFortCurieVoxelFireParticleDataInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCurieVoxelFireParticleDataInterface">();
	}
	static class IFortCurieVoxelFireParticleDataInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFortCurieVoxelFireParticleDataInterface>();
	}
};
static_assert(alignof(IFortCurieVoxelFireParticleDataInterface) == 0x000008, "Wrong alignment on IFortCurieVoxelFireParticleDataInterface");
static_assert(sizeof(IFortCurieVoxelFireParticleDataInterface) == 0x000028, "Wrong size on IFortCurieVoxelFireParticleDataInterface");

class UFortCurieVoxelFireNiagaraDataInterface final : public UNiagaraDataInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCurieVoxelFireNiagaraDataInterface">();
	}
	static class UFortCurieVoxelFireNiagaraDataInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCurieVoxelFireNiagaraDataInterface>();
	}
};
static_assert(alignof(UFortCurieVoxelFireNiagaraDataInterface) == 0x000008, "Wrong alignment on UFortCurieVoxelFireNiagaraDataInterface");
static_assert(sizeof(UFortCurieVoxelFireNiagaraDataInterface) == 0x000038, "Wrong size on UFortCurieVoxelFireNiagaraDataInterface");

class IInfernoCurieVoxelFireAudioParticleDataInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InfernoCurieVoxelFireAudioParticleDataInterface">();
	}
	static class IInfernoCurieVoxelFireAudioParticleDataInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IInfernoCurieVoxelFireAudioParticleDataInterface>();
	}
};
static_assert(alignof(IInfernoCurieVoxelFireAudioParticleDataInterface) == 0x000008, "Wrong alignment on IInfernoCurieVoxelFireAudioParticleDataInterface");
static_assert(sizeof(IInfernoCurieVoxelFireAudioParticleDataInterface) == 0x000028, "Wrong size on IInfernoCurieVoxelFireAudioParticleDataInterface");

class UInfernoCurieVoxelFireAudioNiagaraDataInterface final : public UNiagaraDataInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InfernoCurieVoxelFireAudioNiagaraDataInterface">();
	}
	static class UInfernoCurieVoxelFireAudioNiagaraDataInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInfernoCurieVoxelFireAudioNiagaraDataInterface>();
	}
};
static_assert(alignof(UInfernoCurieVoxelFireAudioNiagaraDataInterface) == 0x000008, "Wrong alignment on UInfernoCurieVoxelFireAudioNiagaraDataInterface");
static_assert(sizeof(UInfernoCurieVoxelFireAudioNiagaraDataInterface) == 0x000038, "Wrong size on UInfernoCurieVoxelFireAudioNiagaraDataInterface");

}
