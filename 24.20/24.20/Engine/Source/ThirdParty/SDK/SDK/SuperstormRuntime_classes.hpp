#pragma once

#include "Basic.hpp"

#include "TargetingSystem_structs.hpp"
#include "SuperstormRuntime_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "ModularGameplay_classes.hpp"
#include "FieldSystemEngine_classes.hpp"

namespace SDK
{

class UTempestLightningComponent final : public UGameFrameworkComponent
{
public:
	TSubclassOf<class AFortGameplayEffectDeliveryActor> LightningBoltClass;
	TArray<struct FTempestLightningBoltEffectContainer> LightningBoltTargetEffectContainers;
	class UTargetingPreset*                       LightningBoltTargetingPreset;
	class UEnvQuery*                              FindTargetablePawnsQuery;
	class UEnvQuery*                              FindTargetableLocationQuery;
	class FName                                   EnvironmentQueryParamName_LightningRadius;
	class FName                                   EnvironmentQueryParamName_MinLightningTargetDistance;
	struct FScalableFloat                         LightningCloudHeight;
	struct FScalableFloat                         LightningRadius;
	struct FScalableFloat                         MinLightningTargetDistance;
	struct FScalableFloat                         LightningFrequencyMin;
	struct FScalableFloat                         LightningFrequencyMax;
	struct FScalableFloat                         LightningBoltsMin;
	struct FScalableFloat                         LightningBoltsMax;
	struct FScalableFloat                         LightningBoltIntervalMin;
	struct FScalableFloat                         LightningBoltIntervalMax;
	struct FScalableFloat                         LightningBoltSeparationDistance;
	struct FScalableFloat                         LightningStruckPawnReselectionInterval;
	struct FScalableFloat                         LightningBoltTelegraphDuration;
	struct FScalableFloat                         LightningBoltImpactIgnitionRadius;
	struct FScalableFloat                         LightningBoltGrassIgnitionRadius;
	struct FScalableFloat                         LightningBoltGrassFirePropagationFuel;
	struct FGameplayTag                           LightningAreaTargetTelegraphCue;
	struct FGameplayTag                           LightningBoltTargetTelegraphCue;
	TArray<struct FTempestLightningBoltData>      LightningBoltData;
	uint8                                         Pad_348[0xD0];

public:
	float GetCloudHeight() const;
	float GetLightningRadius() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TempestLightningComponent">();
	}
	static class UTempestLightningComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTempestLightningComponent>();
	}
};
static_assert(alignof(UTempestLightningComponent) == 0x000008, "Wrong alignment on UTempestLightningComponent");
static_assert(sizeof(UTempestLightningComponent) == 0x000418, "Wrong size on UTempestLightningComponent");
static_assert(offsetof(UTempestLightningComponent, LightningBoltClass) == 0x0000A0, "Member 'UTempestLightningComponent::LightningBoltClass' has a wrong offset!");
static_assert(offsetof(UTempestLightningComponent, LightningBoltTargetEffectContainers) == 0x0000A8, "Member 'UTempestLightningComponent::LightningBoltTargetEffectContainers' has a wrong offset!");
static_assert(offsetof(UTempestLightningComponent, LightningBoltTargetingPreset) == 0x0000B8, "Member 'UTempestLightningComponent::LightningBoltTargetingPreset' has a wrong offset!");
static_assert(offsetof(UTempestLightningComponent, FindTargetablePawnsQuery) == 0x0000C0, "Member 'UTempestLightningComponent::FindTargetablePawnsQuery' has a wrong offset!");
static_assert(offsetof(UTempestLightningComponent, FindTargetableLocationQuery) == 0x0000C8, "Member 'UTempestLightningComponent::FindTargetableLocationQuery' has a wrong offset!");
static_assert(offsetof(UTempestLightningComponent, EnvironmentQueryParamName_LightningRadius) == 0x0000D0, "Member 'UTempestLightningComponent::EnvironmentQueryParamName_LightningRadius' has a wrong offset!");
static_assert(offsetof(UTempestLightningComponent, EnvironmentQueryParamName_MinLightningTargetDistance) == 0x0000D4, "Member 'UTempestLightningComponent::EnvironmentQueryParamName_MinLightningTargetDistance' has a wrong offset!");
static_assert(offsetof(UTempestLightningComponent, LightningCloudHeight) == 0x0000D8, "Member 'UTempestLightningComponent::LightningCloudHeight' has a wrong offset!");
static_assert(offsetof(UTempestLightningComponent, LightningRadius) == 0x000100, "Member 'UTempestLightningComponent::LightningRadius' has a wrong offset!");
static_assert(offsetof(UTempestLightningComponent, MinLightningTargetDistance) == 0x000128, "Member 'UTempestLightningComponent::MinLightningTargetDistance' has a wrong offset!");
static_assert(offsetof(UTempestLightningComponent, LightningFrequencyMin) == 0x000150, "Member 'UTempestLightningComponent::LightningFrequencyMin' has a wrong offset!");
static_assert(offsetof(UTempestLightningComponent, LightningFrequencyMax) == 0x000178, "Member 'UTempestLightningComponent::LightningFrequencyMax' has a wrong offset!");
static_assert(offsetof(UTempestLightningComponent, LightningBoltsMin) == 0x0001A0, "Member 'UTempestLightningComponent::LightningBoltsMin' has a wrong offset!");
static_assert(offsetof(UTempestLightningComponent, LightningBoltsMax) == 0x0001C8, "Member 'UTempestLightningComponent::LightningBoltsMax' has a wrong offset!");
static_assert(offsetof(UTempestLightningComponent, LightningBoltIntervalMin) == 0x0001F0, "Member 'UTempestLightningComponent::LightningBoltIntervalMin' has a wrong offset!");
static_assert(offsetof(UTempestLightningComponent, LightningBoltIntervalMax) == 0x000218, "Member 'UTempestLightningComponent::LightningBoltIntervalMax' has a wrong offset!");
static_assert(offsetof(UTempestLightningComponent, LightningBoltSeparationDistance) == 0x000240, "Member 'UTempestLightningComponent::LightningBoltSeparationDistance' has a wrong offset!");
static_assert(offsetof(UTempestLightningComponent, LightningStruckPawnReselectionInterval) == 0x000268, "Member 'UTempestLightningComponent::LightningStruckPawnReselectionInterval' has a wrong offset!");
static_assert(offsetof(UTempestLightningComponent, LightningBoltTelegraphDuration) == 0x000290, "Member 'UTempestLightningComponent::LightningBoltTelegraphDuration' has a wrong offset!");
static_assert(offsetof(UTempestLightningComponent, LightningBoltImpactIgnitionRadius) == 0x0002B8, "Member 'UTempestLightningComponent::LightningBoltImpactIgnitionRadius' has a wrong offset!");
static_assert(offsetof(UTempestLightningComponent, LightningBoltGrassIgnitionRadius) == 0x0002E0, "Member 'UTempestLightningComponent::LightningBoltGrassIgnitionRadius' has a wrong offset!");
static_assert(offsetof(UTempestLightningComponent, LightningBoltGrassFirePropagationFuel) == 0x000308, "Member 'UTempestLightningComponent::LightningBoltGrassFirePropagationFuel' has a wrong offset!");
static_assert(offsetof(UTempestLightningComponent, LightningAreaTargetTelegraphCue) == 0x000330, "Member 'UTempestLightningComponent::LightningAreaTargetTelegraphCue' has a wrong offset!");
static_assert(offsetof(UTempestLightningComponent, LightningBoltTargetTelegraphCue) == 0x000334, "Member 'UTempestLightningComponent::LightningBoltTargetTelegraphCue' has a wrong offset!");
static_assert(offsetof(UTempestLightningComponent, LightningBoltData) == 0x000338, "Member 'UTempestLightningComponent::LightningBoltData' has a wrong offset!");

class UTempestTornadoForcesComponent final : public UGameFrameworkComponent
{
public:
	TMulticastInlineDelegate<void(class AActor* AffectedActor)> OnActorAddedToTornadoForces;
	TMulticastInlineDelegate<void(class AActor* AffectedActor)> OnActorRemovedFromTornadoForces;
	struct FDataTableRowHandle                    ConfigHandle;
	TArray<struct FGameplayTag>                   PhysicsPresetTagsAngularDampingToOverride;
	struct FScalableFloat                         AngularDampingOverride;
	TSubclassOf<class UGameplayEffect>            PawnInGE;
	TMap<EFortPhysicsObjectType, struct FScalableFloat> ObjectTypeToMaxCapCount;
	struct FGameplayTagContainer                  TagsToIgnore;
	TSubclassOf<class UGameplayEffect>            RecentlyRemovedGE;
	class UTargetingPreset*                       TargetingPreset;
	struct FGameplayTag                           DamageSetByCallerTag;
	uint8                                         Pad_194[0x4];
	TSubclassOf<class UGameplayEffect>            PeriodicDamageGE;
	TSubclassOf<class UGameplayEffect>            BurstDamageGE;
	struct FGameplayTag                           TornadoActiveCue;
	struct FGameplayTag                           PlayerNearCue;
	struct FGameplayTag                           PawnInCue;
	uint8                                         Pad_1B4[0x4];
	struct FScalableFloat                         PlayerNearRange;
	struct FGameplayTagContainer                  BlockAbilitiesWithTag;
	struct FTornadoClientSimulationArray          ActorsToClientSimulate;
	uint8                                         Pad_318[0x118];
	struct FTargetingRequestHandle                AsyncTargetingHandle;
	uint8                                         Pad_434[0x4];
	TSet<class AFortPlayerPawn*>                  PreviouslyNearPlayers;
	uint8                                         Pad_488[0xA8];

public:
	void OnVehicleInTornadoPlayerExit(const class AFortPlayerControllerAthena* PlayerController, class AFortAthenaVehicle* Vehicle);

	bool IsActorInTornado(class AActor* Actor) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TempestTornadoForcesComponent">();
	}
	static class UTempestTornadoForcesComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTempestTornadoForcesComponent>();
	}
};
static_assert(alignof(UTempestTornadoForcesComponent) == 0x000008, "Wrong alignment on UTempestTornadoForcesComponent");
static_assert(sizeof(UTempestTornadoForcesComponent) == 0x000530, "Wrong size on UTempestTornadoForcesComponent");
static_assert(offsetof(UTempestTornadoForcesComponent, OnActorAddedToTornadoForces) == 0x0000A0, "Member 'UTempestTornadoForcesComponent::OnActorAddedToTornadoForces' has a wrong offset!");
static_assert(offsetof(UTempestTornadoForcesComponent, OnActorRemovedFromTornadoForces) == 0x0000B0, "Member 'UTempestTornadoForcesComponent::OnActorRemovedFromTornadoForces' has a wrong offset!");
static_assert(offsetof(UTempestTornadoForcesComponent, ConfigHandle) == 0x0000C0, "Member 'UTempestTornadoForcesComponent::ConfigHandle' has a wrong offset!");
static_assert(offsetof(UTempestTornadoForcesComponent, PhysicsPresetTagsAngularDampingToOverride) == 0x0000D0, "Member 'UTempestTornadoForcesComponent::PhysicsPresetTagsAngularDampingToOverride' has a wrong offset!");
static_assert(offsetof(UTempestTornadoForcesComponent, AngularDampingOverride) == 0x0000E0, "Member 'UTempestTornadoForcesComponent::AngularDampingOverride' has a wrong offset!");
static_assert(offsetof(UTempestTornadoForcesComponent, PawnInGE) == 0x000108, "Member 'UTempestTornadoForcesComponent::PawnInGE' has a wrong offset!");
static_assert(offsetof(UTempestTornadoForcesComponent, ObjectTypeToMaxCapCount) == 0x000110, "Member 'UTempestTornadoForcesComponent::ObjectTypeToMaxCapCount' has a wrong offset!");
static_assert(offsetof(UTempestTornadoForcesComponent, TagsToIgnore) == 0x000160, "Member 'UTempestTornadoForcesComponent::TagsToIgnore' has a wrong offset!");
static_assert(offsetof(UTempestTornadoForcesComponent, RecentlyRemovedGE) == 0x000180, "Member 'UTempestTornadoForcesComponent::RecentlyRemovedGE' has a wrong offset!");
static_assert(offsetof(UTempestTornadoForcesComponent, TargetingPreset) == 0x000188, "Member 'UTempestTornadoForcesComponent::TargetingPreset' has a wrong offset!");
static_assert(offsetof(UTempestTornadoForcesComponent, DamageSetByCallerTag) == 0x000190, "Member 'UTempestTornadoForcesComponent::DamageSetByCallerTag' has a wrong offset!");
static_assert(offsetof(UTempestTornadoForcesComponent, PeriodicDamageGE) == 0x000198, "Member 'UTempestTornadoForcesComponent::PeriodicDamageGE' has a wrong offset!");
static_assert(offsetof(UTempestTornadoForcesComponent, BurstDamageGE) == 0x0001A0, "Member 'UTempestTornadoForcesComponent::BurstDamageGE' has a wrong offset!");
static_assert(offsetof(UTempestTornadoForcesComponent, TornadoActiveCue) == 0x0001A8, "Member 'UTempestTornadoForcesComponent::TornadoActiveCue' has a wrong offset!");
static_assert(offsetof(UTempestTornadoForcesComponent, PlayerNearCue) == 0x0001AC, "Member 'UTempestTornadoForcesComponent::PlayerNearCue' has a wrong offset!");
static_assert(offsetof(UTempestTornadoForcesComponent, PawnInCue) == 0x0001B0, "Member 'UTempestTornadoForcesComponent::PawnInCue' has a wrong offset!");
static_assert(offsetof(UTempestTornadoForcesComponent, PlayerNearRange) == 0x0001B8, "Member 'UTempestTornadoForcesComponent::PlayerNearRange' has a wrong offset!");
static_assert(offsetof(UTempestTornadoForcesComponent, BlockAbilitiesWithTag) == 0x0001E0, "Member 'UTempestTornadoForcesComponent::BlockAbilitiesWithTag' has a wrong offset!");
static_assert(offsetof(UTempestTornadoForcesComponent, ActorsToClientSimulate) == 0x000200, "Member 'UTempestTornadoForcesComponent::ActorsToClientSimulate' has a wrong offset!");
static_assert(offsetof(UTempestTornadoForcesComponent, AsyncTargetingHandle) == 0x000430, "Member 'UTempestTornadoForcesComponent::AsyncTargetingHandle' has a wrong offset!");
static_assert(offsetof(UTempestTornadoForcesComponent, PreviouslyNearPlayers) == 0x000438, "Member 'UTempestTornadoForcesComponent::PreviouslyNearPlayers' has a wrong offset!");

class ATornadoRadialForce final : public AFieldSystemActor
{
public:
	float                                         Radius;
	float                                         Strength;
	float                                         StartTime;
	float                                         StopTime;
	float                                         IncomingDuration;
	float                                         OutgoingDuration;
	uint8                                         Pad_2A8[0x8];
	class URadialVector*                          RadialVector;
	class URadialFalloff*                         RadialFalloff;
	class UOperatorField*                         OperatorField;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TornadoRadialForce">();
	}
	static class ATornadoRadialForce* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATornadoRadialForce>();
	}
};
static_assert(alignof(ATornadoRadialForce) == 0x000008, "Wrong alignment on ATornadoRadialForce");
static_assert(sizeof(ATornadoRadialForce) == 0x0002C8, "Wrong size on ATornadoRadialForce");
static_assert(offsetof(ATornadoRadialForce, Radius) == 0x000290, "Member 'ATornadoRadialForce::Radius' has a wrong offset!");
static_assert(offsetof(ATornadoRadialForce, Strength) == 0x000294, "Member 'ATornadoRadialForce::Strength' has a wrong offset!");
static_assert(offsetof(ATornadoRadialForce, StartTime) == 0x000298, "Member 'ATornadoRadialForce::StartTime' has a wrong offset!");
static_assert(offsetof(ATornadoRadialForce, StopTime) == 0x00029C, "Member 'ATornadoRadialForce::StopTime' has a wrong offset!");
static_assert(offsetof(ATornadoRadialForce, IncomingDuration) == 0x0002A0, "Member 'ATornadoRadialForce::IncomingDuration' has a wrong offset!");
static_assert(offsetof(ATornadoRadialForce, OutgoingDuration) == 0x0002A4, "Member 'ATornadoRadialForce::OutgoingDuration' has a wrong offset!");
static_assert(offsetof(ATornadoRadialForce, RadialVector) == 0x0002B0, "Member 'ATornadoRadialForce::RadialVector' has a wrong offset!");
static_assert(offsetof(ATornadoRadialForce, RadialFalloff) == 0x0002B8, "Member 'ATornadoRadialForce::RadialFalloff' has a wrong offset!");
static_assert(offsetof(ATornadoRadialForce, OperatorField) == 0x0002C0, "Member 'ATornadoRadialForce::OperatorField' has a wrong offset!");

}
