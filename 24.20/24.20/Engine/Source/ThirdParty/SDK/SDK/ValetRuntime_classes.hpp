#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ValetRuntime_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "ModularGameplay_classes.hpp"

namespace SDK
{

class UFortValetMountedGunAnimInstance final : public UFortAnimInstance
{
public:
	class AFortDagwoodVehicle*                    VehicleActor;
	bool                                          bIsUsingMountedGun;
	uint8                                         Pad_539[0x3];
	int32                                         SeatIndexCached;
	float                                         AimingYaw;
	float                                         AimingPitch;
	class AFortWeaponRangedForVehicle*            MountedWeapon;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortValetMountedGunAnimInstance">();
	}
	static class UFortValetMountedGunAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortValetMountedGunAnimInstance>();
	}
};
static_assert(alignof(UFortValetMountedGunAnimInstance) == 0x000010, "Wrong alignment on UFortValetMountedGunAnimInstance");
static_assert(sizeof(UFortValetMountedGunAnimInstance) == 0x000550, "Wrong size on UFortValetMountedGunAnimInstance");
static_assert(offsetof(UFortValetMountedGunAnimInstance, VehicleActor) == 0x000530, "Member 'UFortValetMountedGunAnimInstance::VehicleActor' has a wrong offset!");
static_assert(offsetof(UFortValetMountedGunAnimInstance, bIsUsingMountedGun) == 0x000538, "Member 'UFortValetMountedGunAnimInstance::bIsUsingMountedGun' has a wrong offset!");
static_assert(offsetof(UFortValetMountedGunAnimInstance, SeatIndexCached) == 0x00053C, "Member 'UFortValetMountedGunAnimInstance::SeatIndexCached' has a wrong offset!");
static_assert(offsetof(UFortValetMountedGunAnimInstance, AimingYaw) == 0x000540, "Member 'UFortValetMountedGunAnimInstance::AimingYaw' has a wrong offset!");
static_assert(offsetof(UFortValetMountedGunAnimInstance, AimingPitch) == 0x000544, "Member 'UFortValetMountedGunAnimInstance::AimingPitch' has a wrong offset!");
static_assert(offsetof(UFortValetMountedGunAnimInstance, MountedWeapon) == 0x000548, "Member 'UFortValetMountedGunAnimInstance::MountedWeapon' has a wrong offset!");

class UFortValetPassengerAnimInstance : public UFortVehicleOccupantAnimInstance
{
public:
	struct FCachedAnimRelevancyData               IntoVehicleCachedData;
	struct FCachedAnimRelevancyData               OutOfVehicleCachedData;
	TSoftObjectPtr<class AFortDagwoodVehicle>     DagwoodVehicleInstance;
	float                                         TurnYaw;
	float                                         InTime;
	float                                         OutTime;
	float                                         NegativeTurnYaw;
	bool                                          bIsReloading;
	bool                                          bIsTargeting;
	bool                                          bIsFiring;
	bool                                          bIsUsingConsumable;
	bool                                          bIsInAction;
	bool                                          bIsPassengerBackLeft;
	bool                                          bIsThrowConsumable;
	bool                                          bIsTargetingOrThrowingConsumable;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortValetPassengerAnimInstance">();
	}
	static class UFortValetPassengerAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortValetPassengerAnimInstance>();
	}
};
static_assert(alignof(UFortValetPassengerAnimInstance) == 0x000010, "Wrong alignment on UFortValetPassengerAnimInstance");
static_assert(sizeof(UFortValetPassengerAnimInstance) == 0x000870, "Wrong size on UFortValetPassengerAnimInstance");
static_assert(offsetof(UFortValetPassengerAnimInstance, IntoVehicleCachedData) == 0x000808, "Member 'UFortValetPassengerAnimInstance::IntoVehicleCachedData' has a wrong offset!");
static_assert(offsetof(UFortValetPassengerAnimInstance, OutOfVehicleCachedData) == 0x00081C, "Member 'UFortValetPassengerAnimInstance::OutOfVehicleCachedData' has a wrong offset!");
static_assert(offsetof(UFortValetPassengerAnimInstance, DagwoodVehicleInstance) == 0x000830, "Member 'UFortValetPassengerAnimInstance::DagwoodVehicleInstance' has a wrong offset!");
static_assert(offsetof(UFortValetPassengerAnimInstance, TurnYaw) == 0x000858, "Member 'UFortValetPassengerAnimInstance::TurnYaw' has a wrong offset!");
static_assert(offsetof(UFortValetPassengerAnimInstance, InTime) == 0x00085C, "Member 'UFortValetPassengerAnimInstance::InTime' has a wrong offset!");
static_assert(offsetof(UFortValetPassengerAnimInstance, OutTime) == 0x000860, "Member 'UFortValetPassengerAnimInstance::OutTime' has a wrong offset!");
static_assert(offsetof(UFortValetPassengerAnimInstance, NegativeTurnYaw) == 0x000864, "Member 'UFortValetPassengerAnimInstance::NegativeTurnYaw' has a wrong offset!");
static_assert(offsetof(UFortValetPassengerAnimInstance, bIsReloading) == 0x000868, "Member 'UFortValetPassengerAnimInstance::bIsReloading' has a wrong offset!");
static_assert(offsetof(UFortValetPassengerAnimInstance, bIsTargeting) == 0x000869, "Member 'UFortValetPassengerAnimInstance::bIsTargeting' has a wrong offset!");
static_assert(offsetof(UFortValetPassengerAnimInstance, bIsFiring) == 0x00086A, "Member 'UFortValetPassengerAnimInstance::bIsFiring' has a wrong offset!");
static_assert(offsetof(UFortValetPassengerAnimInstance, bIsUsingConsumable) == 0x00086B, "Member 'UFortValetPassengerAnimInstance::bIsUsingConsumable' has a wrong offset!");
static_assert(offsetof(UFortValetPassengerAnimInstance, bIsInAction) == 0x00086C, "Member 'UFortValetPassengerAnimInstance::bIsInAction' has a wrong offset!");
static_assert(offsetof(UFortValetPassengerAnimInstance, bIsPassengerBackLeft) == 0x00086D, "Member 'UFortValetPassengerAnimInstance::bIsPassengerBackLeft' has a wrong offset!");
static_assert(offsetof(UFortValetPassengerAnimInstance, bIsThrowConsumable) == 0x00086E, "Member 'UFortValetPassengerAnimInstance::bIsThrowConsumable' has a wrong offset!");
static_assert(offsetof(UFortValetPassengerAnimInstance, bIsTargetingOrThrowingConsumable) == 0x00086F, "Member 'UFortValetPassengerAnimInstance::bIsTargetingOrThrowingConsumable' has a wrong offset!");

class UDagwoodNetworkPhysicsComponent final : public UActorComponent
{
public:
	struct FNetworkPhysicsState                   NetworkPhysicsState;
	TMulticastInlineDelegate<void()>              OnGeneratedLocalInputCmd;
	struct FDagwoodManagedState                   ReplicatedManagedState;
	struct FDagwoodManagedState                   InManagedState;
	struct FDagwoodManagedState                   OutManagedState;
	uint8                                         Pad_E48[0x8];

public:
	void SetPendingInputCmd(const struct FFortDagwoodCmd& In);
	void SetState_GT(const struct FDagwoodInPersistent& In);

	struct FFortDagwoodCmd GetPendingInputCmd() const;
	struct FDagwoodInPersistent GetState_GT() const;
	struct FDagwoodState_PT GetState_PT() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DagwoodNetworkPhysicsComponent">();
	}
	static class UDagwoodNetworkPhysicsComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDagwoodNetworkPhysicsComponent>();
	}
};
static_assert(alignof(UDagwoodNetworkPhysicsComponent) == 0x000010, "Wrong alignment on UDagwoodNetworkPhysicsComponent");
static_assert(sizeof(UDagwoodNetworkPhysicsComponent) == 0x000E50, "Wrong size on UDagwoodNetworkPhysicsComponent");
static_assert(offsetof(UDagwoodNetworkPhysicsComponent, NetworkPhysicsState) == 0x0000A0, "Member 'UDagwoodNetworkPhysicsComponent::NetworkPhysicsState' has a wrong offset!");
static_assert(offsetof(UDagwoodNetworkPhysicsComponent, OnGeneratedLocalInputCmd) == 0x000130, "Member 'UDagwoodNetworkPhysicsComponent::OnGeneratedLocalInputCmd' has a wrong offset!");
static_assert(offsetof(UDagwoodNetworkPhysicsComponent, ReplicatedManagedState) == 0x000140, "Member 'UDagwoodNetworkPhysicsComponent::ReplicatedManagedState' has a wrong offset!");
static_assert(offsetof(UDagwoodNetworkPhysicsComponent, InManagedState) == 0x000598, "Member 'UDagwoodNetworkPhysicsComponent::InManagedState' has a wrong offset!");
static_assert(offsetof(UDagwoodNetworkPhysicsComponent, OutManagedState) == 0x0009F0, "Member 'UDagwoodNetworkPhysicsComponent::OutManagedState' has a wrong offset!");

class UNetworkPhysicsManager final : public UWorldSubsystem
{
public:
	uint8                                         Pad_30[0x60E8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetworkPhysicsManager">();
	}
	static class UNetworkPhysicsManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetworkPhysicsManager>();
	}
};
static_assert(alignof(UNetworkPhysicsManager) == 0x000008, "Wrong alignment on UNetworkPhysicsManager");
static_assert(sizeof(UNetworkPhysicsManager) == 0x006118, "Wrong size on UNetworkPhysicsManager");

class AFortAthenaMutator_OverrideValetVehicleParameters final : public AFortAthenaMutator
{
public:
	struct FScalableFloat                         MinInitialVehicleFuelPercent;
	struct FScalableFloat                         MaxInitialVehicleFuelPercent;

public:
	void OnPlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContainerTags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaMutator_OverrideValetVehicleParameters">();
	}
	static class AFortAthenaMutator_OverrideValetVehicleParameters* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_OverrideValetVehicleParameters>();
	}
};
static_assert(alignof(AFortAthenaMutator_OverrideValetVehicleParameters) == 0x000008, "Wrong alignment on AFortAthenaMutator_OverrideValetVehicleParameters");
static_assert(sizeof(AFortAthenaMutator_OverrideValetVehicleParameters) == 0x000380, "Wrong size on AFortAthenaMutator_OverrideValetVehicleParameters");
static_assert(offsetof(AFortAthenaMutator_OverrideValetVehicleParameters, MinInitialVehicleFuelPercent) == 0x000330, "Member 'AFortAthenaMutator_OverrideValetVehicleParameters::MinInitialVehicleFuelPercent' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_OverrideValetVehicleParameters, MaxInitialVehicleFuelPercent) == 0x000358, "Member 'AFortAthenaMutator_OverrideValetVehicleParameters::MaxInitialVehicleFuelPercent' has a wrong offset!");

class UFortCameraMode_Dagwood final : public UFortCameraMode_AthenaVehicle
{
public:
	float                                         HorizontalCameraSpaceOffsetWhileTurning;
	float                                         SteeringAngleForMaxHorizontalOffset;
	float                                         InAirVerticalOffset;
	float                                         AirOffsetDampFactor;
	float                                         SpeedAlphaDampFactor;
	float                                         TimeInAirRequiredForVertOffset;
	float                                         VehicleBasePitch;
	float                                         HorizOffsetInterpSpeed;
	float                                         HorizOffsetInterpSpeedRecovery;
	float                                         CurrentSpeedAlpha;
	float                                         CurrentVerticalOffset;
	float                                         CurrentHorizontalOffset;
	float                                         TimeInAir;
	float                                         PreviousSpeed;
	float                                         AppliedPitch;
	uint8                                         Pad_1B6C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCameraMode_Dagwood">();
	}
	static class UFortCameraMode_Dagwood* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCameraMode_Dagwood>();
	}
};
static_assert(alignof(UFortCameraMode_Dagwood) == 0x000010, "Wrong alignment on UFortCameraMode_Dagwood");
static_assert(sizeof(UFortCameraMode_Dagwood) == 0x001B70, "Wrong size on UFortCameraMode_Dagwood");
static_assert(offsetof(UFortCameraMode_Dagwood, HorizontalCameraSpaceOffsetWhileTurning) == 0x001B30, "Member 'UFortCameraMode_Dagwood::HorizontalCameraSpaceOffsetWhileTurning' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Dagwood, SteeringAngleForMaxHorizontalOffset) == 0x001B34, "Member 'UFortCameraMode_Dagwood::SteeringAngleForMaxHorizontalOffset' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Dagwood, InAirVerticalOffset) == 0x001B38, "Member 'UFortCameraMode_Dagwood::InAirVerticalOffset' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Dagwood, AirOffsetDampFactor) == 0x001B3C, "Member 'UFortCameraMode_Dagwood::AirOffsetDampFactor' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Dagwood, SpeedAlphaDampFactor) == 0x001B40, "Member 'UFortCameraMode_Dagwood::SpeedAlphaDampFactor' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Dagwood, TimeInAirRequiredForVertOffset) == 0x001B44, "Member 'UFortCameraMode_Dagwood::TimeInAirRequiredForVertOffset' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Dagwood, VehicleBasePitch) == 0x001B48, "Member 'UFortCameraMode_Dagwood::VehicleBasePitch' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Dagwood, HorizOffsetInterpSpeed) == 0x001B4C, "Member 'UFortCameraMode_Dagwood::HorizOffsetInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Dagwood, HorizOffsetInterpSpeedRecovery) == 0x001B50, "Member 'UFortCameraMode_Dagwood::HorizOffsetInterpSpeedRecovery' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Dagwood, CurrentSpeedAlpha) == 0x001B54, "Member 'UFortCameraMode_Dagwood::CurrentSpeedAlpha' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Dagwood, CurrentVerticalOffset) == 0x001B58, "Member 'UFortCameraMode_Dagwood::CurrentVerticalOffset' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Dagwood, CurrentHorizontalOffset) == 0x001B5C, "Member 'UFortCameraMode_Dagwood::CurrentHorizontalOffset' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Dagwood, TimeInAir) == 0x001B60, "Member 'UFortCameraMode_Dagwood::TimeInAir' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Dagwood, PreviousSpeed) == 0x001B64, "Member 'UFortCameraMode_Dagwood::PreviousSpeed' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Dagwood, AppliedPitch) == 0x001B68, "Member 'UFortCameraMode_Dagwood::AppliedPitch' has a wrong offset!");

class UFortContextualTutorial_VehicleValetLowFuel final : public UFortContextualTutorial
{
public:
	uint8                                         Pad_F8[0x8];

public:
	void HandleStartSkydivingForActivation();
	void HandleVehicleStateChanged(class AFortPlayerPawn* PlayerPawn, class AActor* NewVehicle, class AActor* OldVehicle);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortContextualTutorial_VehicleValetLowFuel">();
	}
	static class UFortContextualTutorial_VehicleValetLowFuel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortContextualTutorial_VehicleValetLowFuel>();
	}
};
static_assert(alignof(UFortContextualTutorial_VehicleValetLowFuel) == 0x000008, "Wrong alignment on UFortContextualTutorial_VehicleValetLowFuel");
static_assert(sizeof(UFortContextualTutorial_VehicleValetLowFuel) == 0x000100, "Wrong size on UFortContextualTutorial_VehicleValetLowFuel");

class UFortDagwoodModsConfigs final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortDagwoodModsConfigs">();
	}
	static class UFortDagwoodModsConfigs* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortDagwoodModsConfigs>();
	}
};
static_assert(alignof(UFortDagwoodModsConfigs) == 0x000008, "Wrong alignment on UFortDagwoodModsConfigs");
static_assert(sizeof(UFortDagwoodModsConfigs) == 0x000028, "Wrong size on UFortDagwoodModsConfigs");

class AFortDagwoodVehicle final : public AFortAthenaSKMotorVehicle
{
public:
	TMulticastInlineDelegate<void()>              OnStartHandbrakeDelegate;
	TMulticastInlineDelegate<void()>              OnStopHandbrakeDelegate;
	TMulticastInlineDelegate<void()>              OnStartHandBrakeCatchupForceDelegate;
	TSubclassOf<class ULegacyCameraShake>         HardLandingCameraShake;
	TSubclassOf<class ULegacyCameraShake>         DriverCamShakeClass;
	TSubclassOf<class ULegacyCameraShake>         HandBrakeCamShakeClass;
	EVehicleClass                                 VehicleClass;
	uint8                                         Pad_1B71[0x3];
	float                                         FadeDelay;
	float                                         FadeDuration;
	float                                         MinBrakeForceForSkid;
	float                                         MinForwardSpeedForSkid;
	struct FGameplayTag                           SpeedLinesCueTag;
	float                                         FadeStartTime;
	uint8                                         Pad_1B8C[0x4];
	class UDagwoodNetworkPhysicsComponent*        NetworkPhysicsComponent;
	uint8                                         Pad_1B98[0x78];
	TMulticastInlineDelegate<void(struct FAttachedWheel& WheelData)> OnTireModHealthChanged;
	float                                         RechargeableBoostPercent;
	uint8                                         Pad_1C24[0x4];
	class UFortSplatterSourceComponent*           SplatterSourceComp;
	bool                                          bEnableNativizedTick;
	uint8                                         Pad_1C31[0x7];
	TArray<class FName>                           PassengerLeanSockets;
	TArray<struct FVector>                        PassngerLeanRelativeOffsets;
	TSubclassOf<class UFortCameraMode_AthenaVehicle> PassengerCameraModeClass;
	TSubclassOf<class UFortCameraMode>            PassengerCameraModeClass_ADS;
	TArray<class FName>                           WheelSocketNames;
	class UFortDagwoodVehicleConfigs*             FortDagwoodVehicleConfigs;
	TArray<int32>                                 RearShocks;
	struct FGameplayTagContainer                  OffroadEnvironmentDamageTags;
	struct FGameplayTagContainer                  FireDamageTags;
	struct FVector                                NativeWheelScaleRear;
	struct FVector                                NativeWheelScaleFront;
	struct FVector                                NativeTireScaleRear;
	struct FVector                                NativeTireScaleFront;
	bool                                          bTireSmokeActive;
	bool                                          bBoostFailed;
	bool                                          bCanBoostPitch;
	bool                                          bWasBrakeSkidding;
	uint8                                         Pad_1D34[0x4];
	uint64                                        AccelForceFeedbackHandle;
	uint64                                        SkidForceFeedbackHandle;
	uint64                                        BrakeForceFeedbackHandle;
	uint64                                        HandBrakeForceFeedbackHandle;
	bool                                          bSpeedLinesActive;
	uint8                                         Pad_1D59[0x1F];
	struct FDagwoodRuntimeModifiers               DagwoodRuntimeModifiedProperties;
	TArray<struct FAttachedWheel>                 ServerRepWheelData;
	uint8                                         Pad_1DF8[0x50];
	struct FVector                                FlipYawForwardTargetDirection;
	struct FVector                                FlipYawOriginalForward;
	ETireLocations                                LastPoppedTire;
	uint8                                         Pad_1E79[0x3];
	float                                         RoadTopSpeedMultiplier;
	float                                         CurrentBumpiness;
	float                                         CurrentForwardAcceleration;
	float                                         PreviousTurnAlpha;
	float                                         CurrentCameraAssistStrength;
	float                                         LostGripTime;
	float                                         LostGripRightAlpha;
	float                                         HandbrakeTime;
	float                                         HandbrakeStartTime;
	float                                         FlipYawMult;
	float                                         FlipTimer;
	float                                         FlipExplodeTimer;
	float                                         FlipPushForceTimer;
	float                                         FlipAirTimer;
	float                                         FlipLanding;
	float                                         FlipStartTime;
	float                                         LastFlipDamageTime;
	float                                         PreFlipControlLossTimer;
	bool                                          bDidCinematicFlip;
	bool                                          bCanCinematicFlip;
	bool                                          bInPopTireVeer;
	bool                                          bInFlipRecovery;
	bool                                          bExplodeAfterFlip;
	bool                                          bLostGrip;
	bool                                          bApplyHandbrakeCatchupForce;
	bool                                          bDidHandbrakeCatchup;
	bool                                          bInFlipRoll;
	bool                                          bInFlipYaw;
	bool                                          bInFlipPitch;
	bool                                          bFlipDidLeaveGround;
	bool                                          bBreakBuildingsIfBlockingLeaningPassenger;
	uint8                                         Pad_1ED1[0x3];
	float                                         LeanBreakTimeAccumulator;
	float                                         LeanBreakCheckInterval;
	uint8                                         Pad_1EDC[0x4];
	TArray<class FName>                           SeatToWindowShapeNames;
	class ULegacyCameraShake*                     OffroadCameraShakeInstance;
	class ULegacyCameraShake*                     DriverCameraShakeInstance;
	class ULegacyCameraShake*                     AccelCameraShakeInstance;
	class ULegacyCameraShake*                     HandBrakeCameraShakeInstance;
	class UNiagaraComponent*                      NativeComp_RoadAndExhaust;
	class UNiagaraComponent*                      NativeComp_TireSkid;
	class UNiagaraComponent*                      NativeComp_Damage;
	class UNiagaraComponent*                      NativeComp_SpeedLines;
	class UNiagaraSystem*                         NativeSys_TireExhaust;
	class UNiagaraSystem*                         NativeSys_SpeedLines;
	class UNiagaraSystem*                         NativeSys_TireSkid;
	TArray<EPhysicalSurface>                      RoadAndExhaustSurfaceTypeArrayForFX;
	class FName                                   RoadAndExhaustPeelOutColorIndexName;
	uint8                                         Pad_1F5C[0x14];
	TArray<ETireStates>                           FakeTireStates;
	EPoppedTireReactionStates                     ActivePoppedTireReaction;
	EPoppedTireReactionStates                     ReplicatedPoppedTireReaction;
	uint8                                         Pad_1F82[0x2];
	TWeakObjectPtr<class AFortValetAudioController> ValetAudio;
	uint8                                         Pad_1F8C[0x4];
	TArray<class UStaticMeshComponent*>           TireMeshes;
	TArray<class UStaticMeshComponent*>           FakeTireMeshes;
	uint8                                         Pad_1FB0[0x4];
	bool                                          bIsInoperable;
	uint8                                         Pad_1FB5[0x3];
	int32                                         RandomSeed;
	struct FRandomStream                          RandStream;
	bool                                          bHasTraction;
	bool                                          bStartHandBrakeCatchupForce;
	uint8                                         Pad_1FC6[0x10A];
	uint8                                         bSelfDestructEnabled : 1;
	uint8                                         bClientUsesSelfDestructTimer : 1;
	uint8                                         Pad_20D1[0x7];
	class UStaticMesh*                            TireBootMesh;
	TMap<int32, struct FDagwoodActionDefForUI>    MapSelfDestructActionDefForUI;
	float                                         MinimumTimeBetweenSelfDestructPromptChanges;
	uint8                                         Pad_2134[0x3C];

public:
	void ApplyRuntimeModifiers();
	void CleanupLoopingPooledFX();
	const struct FDagwoodRuntimeModifiers GetCurrentDagwoodRuntimeProperties();
	void HandleCurrentPlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags);
	void MakeInoperable();
	void MakeOperable(bool bAddGas);
	void OnBoostFailed();
	void OnBoostReady();
	void OnClientBeginAltInteract(class AFortPawn* Pawn);
	void OnDestroyedPropFromCollision(const class ABuildingActor* BuildingHitActor);
	void OnFlipImpactDamage();
	void OnHoldSelfDestructStarted(class AFortPawn* DriverPawn, const float ExitDuration);
	void OnHoldSelfDestructStopped(class AFortPawn* DriverPawn);
	void OnInoperableChanged(bool bInoperable);
	void OnRep_DagwoodRuntimeModifiers(const struct FDagwoodRuntimeModifiers& PrevMods);
	void OnRep_FakeTires(const TArray<ETireStates>& PrevTireStates);
	void OnRep_IsInoperable();
	void OnRep_PoppedTireReaction();
	void OnRep_RandSeed();
	void OnRep_ServerRepWheelData(const TArray<struct FAttachedWheel>& PrevWheelData);
	void OnServerAltInteract(class AFortPawn* Pawn);
	void OnStartHandbrake();
	void OnStopHandbrake();
	void OnTickAudioController(float DeltaTime);
	void OnTickAudioFade(float FadeParam);
	void SelfDestructCleanup();
	void ServerAddRuntimeGearsInfo(const struct FRuntimeGearInfo& GearInfo);
	void ServerSelfDestructActivated();
	void ServerSetFadeDuration(const float NewFadeDuration);
	void ServerSetRuntimeBoostInfo(const struct FRuntimeBoostInfo& BoostInfo);
	void ServerSetRuntimeDriveInfo(float MaxIncline, float MaxTilt);
	void ServerSetRuntimeFuelInfo(const struct FRuntimeFuelInfo& FuelInfo);
	void ServerSetRuntimeGravity(float GravMult);
	void ServerSetRuntimeSpringsInfo(const struct FRuntimeSpringsInfo& SpringsInfo);
	void SetDamageInfoOnServer(const bool bInDamageFriendlyVehicles, const bool bInDamageOtherVehicles, const bool bInDamageOwnVehicle, const bool bInDamageAllowedFromOtherVehicle);
	void SetValetAudioController(class AFortValetAudioController* ValetAudio_0);
	void StartFade();

	bool ForwardOrReverseInputPressed() const;
	float GetBumpiness() const;
	float GetMiddleAxleForwardAdjust() const;
	float GetTireHealthPercent(ETireLocations TireIndex) const;
	ETireSurfaces GetTireSurface(ETireLocations TireIndex) const;
	bool IsNativeBPTickEnabled() const;
	bool IsOnLandscape() const;
	bool IsTireSkidding(const float MinSpeedForSkid, const float AngleForSkid, const float SpeedForPeelout, const float SpeedForBraking) const;
	float NativeCalculateAccelRumbleIntensity(float MaxIntensity) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortDagwoodVehicle">();
	}
	static class AFortDagwoodVehicle* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortDagwoodVehicle>();
	}
};
static_assert(alignof(AFortDagwoodVehicle) == 0x000010, "Wrong alignment on AFortDagwoodVehicle");
static_assert(sizeof(AFortDagwoodVehicle) == 0x002170, "Wrong size on AFortDagwoodVehicle");
static_assert(offsetof(AFortDagwoodVehicle, OnStartHandbrakeDelegate) == 0x001B28, "Member 'AFortDagwoodVehicle::OnStartHandbrakeDelegate' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, OnStopHandbrakeDelegate) == 0x001B38, "Member 'AFortDagwoodVehicle::OnStopHandbrakeDelegate' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, OnStartHandBrakeCatchupForceDelegate) == 0x001B48, "Member 'AFortDagwoodVehicle::OnStartHandBrakeCatchupForceDelegate' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, HardLandingCameraShake) == 0x001B58, "Member 'AFortDagwoodVehicle::HardLandingCameraShake' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, DriverCamShakeClass) == 0x001B60, "Member 'AFortDagwoodVehicle::DriverCamShakeClass' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, HandBrakeCamShakeClass) == 0x001B68, "Member 'AFortDagwoodVehicle::HandBrakeCamShakeClass' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, VehicleClass) == 0x001B70, "Member 'AFortDagwoodVehicle::VehicleClass' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, FadeDelay) == 0x001B74, "Member 'AFortDagwoodVehicle::FadeDelay' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, FadeDuration) == 0x001B78, "Member 'AFortDagwoodVehicle::FadeDuration' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, MinBrakeForceForSkid) == 0x001B7C, "Member 'AFortDagwoodVehicle::MinBrakeForceForSkid' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, MinForwardSpeedForSkid) == 0x001B80, "Member 'AFortDagwoodVehicle::MinForwardSpeedForSkid' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, SpeedLinesCueTag) == 0x001B84, "Member 'AFortDagwoodVehicle::SpeedLinesCueTag' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, FadeStartTime) == 0x001B88, "Member 'AFortDagwoodVehicle::FadeStartTime' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, NetworkPhysicsComponent) == 0x001B90, "Member 'AFortDagwoodVehicle::NetworkPhysicsComponent' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, OnTireModHealthChanged) == 0x001C10, "Member 'AFortDagwoodVehicle::OnTireModHealthChanged' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, RechargeableBoostPercent) == 0x001C20, "Member 'AFortDagwoodVehicle::RechargeableBoostPercent' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, SplatterSourceComp) == 0x001C28, "Member 'AFortDagwoodVehicle::SplatterSourceComp' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, bEnableNativizedTick) == 0x001C30, "Member 'AFortDagwoodVehicle::bEnableNativizedTick' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, PassengerLeanSockets) == 0x001C38, "Member 'AFortDagwoodVehicle::PassengerLeanSockets' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, PassngerLeanRelativeOffsets) == 0x001C48, "Member 'AFortDagwoodVehicle::PassngerLeanRelativeOffsets' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, PassengerCameraModeClass) == 0x001C58, "Member 'AFortDagwoodVehicle::PassengerCameraModeClass' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, PassengerCameraModeClass_ADS) == 0x001C60, "Member 'AFortDagwoodVehicle::PassengerCameraModeClass_ADS' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, WheelSocketNames) == 0x001C68, "Member 'AFortDagwoodVehicle::WheelSocketNames' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, FortDagwoodVehicleConfigs) == 0x001C78, "Member 'AFortDagwoodVehicle::FortDagwoodVehicleConfigs' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, RearShocks) == 0x001C80, "Member 'AFortDagwoodVehicle::RearShocks' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, OffroadEnvironmentDamageTags) == 0x001C90, "Member 'AFortDagwoodVehicle::OffroadEnvironmentDamageTags' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, FireDamageTags) == 0x001CB0, "Member 'AFortDagwoodVehicle::FireDamageTags' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, NativeWheelScaleRear) == 0x001CD0, "Member 'AFortDagwoodVehicle::NativeWheelScaleRear' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, NativeWheelScaleFront) == 0x001CE8, "Member 'AFortDagwoodVehicle::NativeWheelScaleFront' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, NativeTireScaleRear) == 0x001D00, "Member 'AFortDagwoodVehicle::NativeTireScaleRear' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, NativeTireScaleFront) == 0x001D18, "Member 'AFortDagwoodVehicle::NativeTireScaleFront' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, bTireSmokeActive) == 0x001D30, "Member 'AFortDagwoodVehicle::bTireSmokeActive' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, bBoostFailed) == 0x001D31, "Member 'AFortDagwoodVehicle::bBoostFailed' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, bCanBoostPitch) == 0x001D32, "Member 'AFortDagwoodVehicle::bCanBoostPitch' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, bWasBrakeSkidding) == 0x001D33, "Member 'AFortDagwoodVehicle::bWasBrakeSkidding' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, AccelForceFeedbackHandle) == 0x001D38, "Member 'AFortDagwoodVehicle::AccelForceFeedbackHandle' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, SkidForceFeedbackHandle) == 0x001D40, "Member 'AFortDagwoodVehicle::SkidForceFeedbackHandle' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, BrakeForceFeedbackHandle) == 0x001D48, "Member 'AFortDagwoodVehicle::BrakeForceFeedbackHandle' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, HandBrakeForceFeedbackHandle) == 0x001D50, "Member 'AFortDagwoodVehicle::HandBrakeForceFeedbackHandle' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, bSpeedLinesActive) == 0x001D58, "Member 'AFortDagwoodVehicle::bSpeedLinesActive' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, DagwoodRuntimeModifiedProperties) == 0x001D78, "Member 'AFortDagwoodVehicle::DagwoodRuntimeModifiedProperties' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, ServerRepWheelData) == 0x001DE8, "Member 'AFortDagwoodVehicle::ServerRepWheelData' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, FlipYawForwardTargetDirection) == 0x001E48, "Member 'AFortDagwoodVehicle::FlipYawForwardTargetDirection' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, FlipYawOriginalForward) == 0x001E60, "Member 'AFortDagwoodVehicle::FlipYawOriginalForward' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, LastPoppedTire) == 0x001E78, "Member 'AFortDagwoodVehicle::LastPoppedTire' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, RoadTopSpeedMultiplier) == 0x001E7C, "Member 'AFortDagwoodVehicle::RoadTopSpeedMultiplier' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, CurrentBumpiness) == 0x001E80, "Member 'AFortDagwoodVehicle::CurrentBumpiness' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, CurrentForwardAcceleration) == 0x001E84, "Member 'AFortDagwoodVehicle::CurrentForwardAcceleration' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, PreviousTurnAlpha) == 0x001E88, "Member 'AFortDagwoodVehicle::PreviousTurnAlpha' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, CurrentCameraAssistStrength) == 0x001E8C, "Member 'AFortDagwoodVehicle::CurrentCameraAssistStrength' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, LostGripTime) == 0x001E90, "Member 'AFortDagwoodVehicle::LostGripTime' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, LostGripRightAlpha) == 0x001E94, "Member 'AFortDagwoodVehicle::LostGripRightAlpha' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, HandbrakeTime) == 0x001E98, "Member 'AFortDagwoodVehicle::HandbrakeTime' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, HandbrakeStartTime) == 0x001E9C, "Member 'AFortDagwoodVehicle::HandbrakeStartTime' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, FlipYawMult) == 0x001EA0, "Member 'AFortDagwoodVehicle::FlipYawMult' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, FlipTimer) == 0x001EA4, "Member 'AFortDagwoodVehicle::FlipTimer' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, FlipExplodeTimer) == 0x001EA8, "Member 'AFortDagwoodVehicle::FlipExplodeTimer' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, FlipPushForceTimer) == 0x001EAC, "Member 'AFortDagwoodVehicle::FlipPushForceTimer' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, FlipAirTimer) == 0x001EB0, "Member 'AFortDagwoodVehicle::FlipAirTimer' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, FlipLanding) == 0x001EB4, "Member 'AFortDagwoodVehicle::FlipLanding' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, FlipStartTime) == 0x001EB8, "Member 'AFortDagwoodVehicle::FlipStartTime' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, LastFlipDamageTime) == 0x001EBC, "Member 'AFortDagwoodVehicle::LastFlipDamageTime' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, PreFlipControlLossTimer) == 0x001EC0, "Member 'AFortDagwoodVehicle::PreFlipControlLossTimer' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, bDidCinematicFlip) == 0x001EC4, "Member 'AFortDagwoodVehicle::bDidCinematicFlip' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, bCanCinematicFlip) == 0x001EC5, "Member 'AFortDagwoodVehicle::bCanCinematicFlip' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, bInPopTireVeer) == 0x001EC6, "Member 'AFortDagwoodVehicle::bInPopTireVeer' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, bInFlipRecovery) == 0x001EC7, "Member 'AFortDagwoodVehicle::bInFlipRecovery' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, bExplodeAfterFlip) == 0x001EC8, "Member 'AFortDagwoodVehicle::bExplodeAfterFlip' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, bLostGrip) == 0x001EC9, "Member 'AFortDagwoodVehicle::bLostGrip' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, bApplyHandbrakeCatchupForce) == 0x001ECA, "Member 'AFortDagwoodVehicle::bApplyHandbrakeCatchupForce' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, bDidHandbrakeCatchup) == 0x001ECB, "Member 'AFortDagwoodVehicle::bDidHandbrakeCatchup' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, bInFlipRoll) == 0x001ECC, "Member 'AFortDagwoodVehicle::bInFlipRoll' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, bInFlipYaw) == 0x001ECD, "Member 'AFortDagwoodVehicle::bInFlipYaw' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, bInFlipPitch) == 0x001ECE, "Member 'AFortDagwoodVehicle::bInFlipPitch' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, bFlipDidLeaveGround) == 0x001ECF, "Member 'AFortDagwoodVehicle::bFlipDidLeaveGround' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, bBreakBuildingsIfBlockingLeaningPassenger) == 0x001ED0, "Member 'AFortDagwoodVehicle::bBreakBuildingsIfBlockingLeaningPassenger' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, LeanBreakTimeAccumulator) == 0x001ED4, "Member 'AFortDagwoodVehicle::LeanBreakTimeAccumulator' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, LeanBreakCheckInterval) == 0x001ED8, "Member 'AFortDagwoodVehicle::LeanBreakCheckInterval' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, SeatToWindowShapeNames) == 0x001EE0, "Member 'AFortDagwoodVehicle::SeatToWindowShapeNames' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, OffroadCameraShakeInstance) == 0x001EF0, "Member 'AFortDagwoodVehicle::OffroadCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, DriverCameraShakeInstance) == 0x001EF8, "Member 'AFortDagwoodVehicle::DriverCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, AccelCameraShakeInstance) == 0x001F00, "Member 'AFortDagwoodVehicle::AccelCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, HandBrakeCameraShakeInstance) == 0x001F08, "Member 'AFortDagwoodVehicle::HandBrakeCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, NativeComp_RoadAndExhaust) == 0x001F10, "Member 'AFortDagwoodVehicle::NativeComp_RoadAndExhaust' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, NativeComp_TireSkid) == 0x001F18, "Member 'AFortDagwoodVehicle::NativeComp_TireSkid' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, NativeComp_Damage) == 0x001F20, "Member 'AFortDagwoodVehicle::NativeComp_Damage' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, NativeComp_SpeedLines) == 0x001F28, "Member 'AFortDagwoodVehicle::NativeComp_SpeedLines' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, NativeSys_TireExhaust) == 0x001F30, "Member 'AFortDagwoodVehicle::NativeSys_TireExhaust' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, NativeSys_SpeedLines) == 0x001F38, "Member 'AFortDagwoodVehicle::NativeSys_SpeedLines' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, NativeSys_TireSkid) == 0x001F40, "Member 'AFortDagwoodVehicle::NativeSys_TireSkid' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, RoadAndExhaustSurfaceTypeArrayForFX) == 0x001F48, "Member 'AFortDagwoodVehicle::RoadAndExhaustSurfaceTypeArrayForFX' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, RoadAndExhaustPeelOutColorIndexName) == 0x001F58, "Member 'AFortDagwoodVehicle::RoadAndExhaustPeelOutColorIndexName' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, FakeTireStates) == 0x001F70, "Member 'AFortDagwoodVehicle::FakeTireStates' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, ActivePoppedTireReaction) == 0x001F80, "Member 'AFortDagwoodVehicle::ActivePoppedTireReaction' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, ReplicatedPoppedTireReaction) == 0x001F81, "Member 'AFortDagwoodVehicle::ReplicatedPoppedTireReaction' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, ValetAudio) == 0x001F84, "Member 'AFortDagwoodVehicle::ValetAudio' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, TireMeshes) == 0x001F90, "Member 'AFortDagwoodVehicle::TireMeshes' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, FakeTireMeshes) == 0x001FA0, "Member 'AFortDagwoodVehicle::FakeTireMeshes' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, bIsInoperable) == 0x001FB4, "Member 'AFortDagwoodVehicle::bIsInoperable' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, RandomSeed) == 0x001FB8, "Member 'AFortDagwoodVehicle::RandomSeed' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, RandStream) == 0x001FBC, "Member 'AFortDagwoodVehicle::RandStream' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, bHasTraction) == 0x001FC4, "Member 'AFortDagwoodVehicle::bHasTraction' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, bStartHandBrakeCatchupForce) == 0x001FC5, "Member 'AFortDagwoodVehicle::bStartHandBrakeCatchupForce' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, TireBootMesh) == 0x0020D8, "Member 'AFortDagwoodVehicle::TireBootMesh' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, MapSelfDestructActionDefForUI) == 0x0020E0, "Member 'AFortDagwoodVehicle::MapSelfDestructActionDefForUI' has a wrong offset!");
static_assert(offsetof(AFortDagwoodVehicle, MinimumTimeBetweenSelfDestructPromptChanges) == 0x002130, "Member 'AFortDagwoodVehicle::MinimumTimeBetweenSelfDestructPromptChanges' has a wrong offset!");

class UFortDagwoodVehicleAnimInstance final : public UFortVehicleAnimInstance
{
public:
	class AFortDagwoodVehicle*                    Dagwood;
	struct FVector                                GlassScale_FR;
	struct FVector                                GlassScale_FL;
	struct FVector                                GlassScale_BR;
	struct FVector                                GlassScale_BL;
	uint8                                         Pad_658[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortDagwoodVehicleAnimInstance">();
	}
	static class UFortDagwoodVehicleAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortDagwoodVehicleAnimInstance>();
	}
};
static_assert(alignof(UFortDagwoodVehicleAnimInstance) == 0x000010, "Wrong alignment on UFortDagwoodVehicleAnimInstance");
static_assert(sizeof(UFortDagwoodVehicleAnimInstance) == 0x000660, "Wrong size on UFortDagwoodVehicleAnimInstance");
static_assert(offsetof(UFortDagwoodVehicleAnimInstance, Dagwood) == 0x0005F0, "Member 'UFortDagwoodVehicleAnimInstance::Dagwood' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleAnimInstance, GlassScale_FR) == 0x0005F8, "Member 'UFortDagwoodVehicleAnimInstance::GlassScale_FR' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleAnimInstance, GlassScale_FL) == 0x000610, "Member 'UFortDagwoodVehicleAnimInstance::GlassScale_FL' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleAnimInstance, GlassScale_BR) == 0x000628, "Member 'UFortDagwoodVehicleAnimInstance::GlassScale_BR' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleAnimInstance, GlassScale_BL) == 0x000640, "Member 'UFortDagwoodVehicleAnimInstance::GlassScale_BL' has a wrong offset!");

class UFortDagwoodVehicleConfigs final : public UFortPhysicsVehicleConfigs
{
public:
	float                                         BoostMinPushForce;
	float                                         BoostTopSpeedForceMultiplier;
	float                                         BoostTopSpeedMultiplier;
	float                                         BoostWaterMultiplier;
	float                                         VehiclePowerSlideFrontMultiplier;
	float                                         VehiclePowerSlideRearMultiplier;
	float                                         IceVehiclePowerSlideFrontMultiplier;
	float                                         IceVehiclePowerSlideRearMultiplier;
	float                                         MudVehiclePowerSlideFrontMultiplier;
	float                                         MudVehiclePowerSlideRearMultiplier;
	bool                                          bUseAccelerationLean;
	uint8                                         Pad_8D1[0x3];
	float                                         HandbrakeGripAngle;
	float                                         HandbrakeGripAngleRecovery;
	float                                         HandbrakeSpeedForGripLoss;
	float                                         MinSlipDuration;
	float                                         HandbrakeLateralFriction;
	float                                         HandbrakeSteeringMultiplier;
	float                                         HandbrakeFrictionDampFactor;
	float                                         RestoreTractionDampFactor;
	float                                         HandBrakeForce;
	float                                         HandbrakeForceNoAccel;
	bool                                          bUseHandbrakeToDrift;
	uint8                                         Pad_8FD[0x3];
	float                                         DriftMinSpeedSteeringAngle;
	float                                         DriftMaxSpeedSteeringAngle;
	float                                         DriftFrontLateralFrictionMultiplier;
	float                                         DriftRearLateralFrictionMultiplier;
	float                                         BoostSteeringMultiplier;
	float                                         DirtRoadTopSpeedMultiplier;
	float                                         DirtRoadFrontLateralFriction;
	float                                         DirtRoadRearLateralFriction;
	float                                         DirtRoadAccelForceMultiplier;
	float                                         OffRoadTopSpeedMultiplier;
	float                                         OffRoadFrontLateralFriction;
	float                                         OffRoadRearLateralFriction;
	float                                         OffRoadPushForceMultiplier;
	float                                         OffroadDamageImpactForceMin;
	float                                         OffroadDamageImpactForceMax;
	float                                         OffroadImpactDamageMin;
	float                                         OffroadImpactDamageMax;
	float                                         MinSpeedForOffroadHandling;
	float                                         SnowFrontLateralFriction;
	float                                         SnowRearLateralFriction;
	float                                         IceFrontLateralFriction;
	float                                         IceRearLateralFriction;
	float                                         MudFrontLateralFriction;
	float                                         MudRearLateralFriction;
	float                                         IcePushForceMultiplier;
	float                                         IceBrakeForceMultiplier;
	float                                         FireHealthPercentThreshold;
	float                                         OffroadRumbleIntensity;
	float                                         DirtRoadRumbleIntensity;
	float                                         OffroadDamageScaleExponent;
	float                                         HardLandingThresholdMin;
	float                                         HardLandingThresholdMax;
	float                                         HardLandingShakeZAmplitudeMin;
	float                                         HardLandingShakeZAmplitudeMax;
	float                                         SpeedLinesThreshold;
	float                                         PropDestructionImpulse;
	float                                         DestructionAngle;
	float                                         UpNormalMinProtected;
	float                                         UpForwardMinProtected;
	float                                         NonCameraSteeringAngleMultiplier;
	float                                         CameraAssistStrengthMax;
	float                                         CameraAssistStrengthMin;
	float                                         CameraAssistStrengthRecovery;
	float                                         CameraAssistInterpSpeed;
	float                                         ReverseChangeDirectionBrakeForceMultiplier;
	float                                         ReverseChangeDirectionSpeedThreshold;
	float                                         DriftExitPushForce;
	float                                         DriftExitCatchupSpeed;
	float                                         HandbrakeDurationRequiredForCatchup;
	float                                         ImpactMagnitudeToEndCatchup;
	float                                         PoppedTireSpringLength;
	float                                         PoppedTireSpringStiff;
	float                                         PoppedTireSpringDamp;
	float                                         PoppedTireScrapeFrictionMultiplier;
	float                                         RimScrapeFlipRollMagnitude;
	float                                         RimScrapeFlipPitchMagnitude;
	float                                         SpeedForRimFlip;
	float                                         HealthPercentForFlip;
	float                                         FlipYawDuration;
	float                                         FlipRollDuration;
	float                                         FlipPitchDuration;
	float                                         FlipExplodeDuration_Yaw;
	float                                         FlipExplodeDuration_Pitch;
	float                                         FlipPushForceDuration_Yaw;
	float                                         FlipPushForceDuration_Pitch;
	float                                         FlipPushForcMultiplier;
	float                                         FlipPushForce_UpComponentPitch;
	float                                         FlipPushForce_UpComponentRoll;
	float                                         MinTimeInAirRequiredForExplodeLanding;
	float                                         FlipYawSpringStiff;
	float                                         FlipYawSpringDamp;
	float                                         FlipYawSpringMaxAccel;
	float                                         HealthPercentForExplode;
	float                                         FlipRecoveryTime;
	float                                         FlipMaxDuration;
	float                                         FlipWiggleDuration;
	float                                         PoppedTireVeerDuration;
	float                                         PoppedTireVeerSteeringAngle;
	float                                         FlipWiggleFrequency;
	float                                         FlipWiggleSteeringAngle;
	float                                         FlipYawAngleThreshold;
	bool                                          bUsesBoost;
	uint8                                         Pad_A45[0x3];
	float                                         RechargeableBoostRateOfUse;
	float                                         RechargeableBoostRateOfRegen;
	float                                         BoostRateOfRegenMinMultiplier;
	float                                         BoostRateOfRegenMaxMultiplier;
	float                                         BoostRegenMaxMultiplyTime;
	float                                         RechargeableBoostRequiredPercentToActivate;
	float                                         RechargeableBoostMaxPercent;
	float                                         RechargeableBoostMinPercent;
	float                                         AnalogDriftStickThreshold;
	class FName                                   TireBootRightSocketName;
	class FName                                   TireBootLeftSocketName;
	float                                         TireBootRelativeDistance;
	float                                         BoostForceInAir;
	float                                         BoostAirMaxSpeed;
	TArray<class FName>                           TireSocketNames;
	TArray<class FName>                           TireBoneNames;
	TArray<int32>                                 RearTireIndices;
	TArray<int32>                                 RightSideTires;
	TArray<int32>                                 FakeTireIndices;
	bool                                          bNoWheels;
	uint8                                         Pad_AD1[0x3];
	float                                         NoWheelsSpringLenMult;
	TArray<class FName>                           NoWheelsBonesToHide;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortDagwoodVehicleConfigs">();
	}
	static class UFortDagwoodVehicleConfigs* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortDagwoodVehicleConfigs>();
	}
};
static_assert(alignof(UFortDagwoodVehicleConfigs) == 0x000008, "Wrong alignment on UFortDagwoodVehicleConfigs");
static_assert(sizeof(UFortDagwoodVehicleConfigs) == 0x000AE8, "Wrong size on UFortDagwoodVehicleConfigs");
static_assert(offsetof(UFortDagwoodVehicleConfigs, BoostMinPushForce) == 0x0008A8, "Member 'UFortDagwoodVehicleConfigs::BoostMinPushForce' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, BoostTopSpeedForceMultiplier) == 0x0008AC, "Member 'UFortDagwoodVehicleConfigs::BoostTopSpeedForceMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, BoostTopSpeedMultiplier) == 0x0008B0, "Member 'UFortDagwoodVehicleConfigs::BoostTopSpeedMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, BoostWaterMultiplier) == 0x0008B4, "Member 'UFortDagwoodVehicleConfigs::BoostWaterMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, VehiclePowerSlideFrontMultiplier) == 0x0008B8, "Member 'UFortDagwoodVehicleConfigs::VehiclePowerSlideFrontMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, VehiclePowerSlideRearMultiplier) == 0x0008BC, "Member 'UFortDagwoodVehicleConfigs::VehiclePowerSlideRearMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, IceVehiclePowerSlideFrontMultiplier) == 0x0008C0, "Member 'UFortDagwoodVehicleConfigs::IceVehiclePowerSlideFrontMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, IceVehiclePowerSlideRearMultiplier) == 0x0008C4, "Member 'UFortDagwoodVehicleConfigs::IceVehiclePowerSlideRearMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, MudVehiclePowerSlideFrontMultiplier) == 0x0008C8, "Member 'UFortDagwoodVehicleConfigs::MudVehiclePowerSlideFrontMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, MudVehiclePowerSlideRearMultiplier) == 0x0008CC, "Member 'UFortDagwoodVehicleConfigs::MudVehiclePowerSlideRearMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, bUseAccelerationLean) == 0x0008D0, "Member 'UFortDagwoodVehicleConfigs::bUseAccelerationLean' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HandbrakeGripAngle) == 0x0008D4, "Member 'UFortDagwoodVehicleConfigs::HandbrakeGripAngle' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HandbrakeGripAngleRecovery) == 0x0008D8, "Member 'UFortDagwoodVehicleConfigs::HandbrakeGripAngleRecovery' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HandbrakeSpeedForGripLoss) == 0x0008DC, "Member 'UFortDagwoodVehicleConfigs::HandbrakeSpeedForGripLoss' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, MinSlipDuration) == 0x0008E0, "Member 'UFortDagwoodVehicleConfigs::MinSlipDuration' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HandbrakeLateralFriction) == 0x0008E4, "Member 'UFortDagwoodVehicleConfigs::HandbrakeLateralFriction' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HandbrakeSteeringMultiplier) == 0x0008E8, "Member 'UFortDagwoodVehicleConfigs::HandbrakeSteeringMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HandbrakeFrictionDampFactor) == 0x0008EC, "Member 'UFortDagwoodVehicleConfigs::HandbrakeFrictionDampFactor' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, RestoreTractionDampFactor) == 0x0008F0, "Member 'UFortDagwoodVehicleConfigs::RestoreTractionDampFactor' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HandBrakeForce) == 0x0008F4, "Member 'UFortDagwoodVehicleConfigs::HandBrakeForce' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HandbrakeForceNoAccel) == 0x0008F8, "Member 'UFortDagwoodVehicleConfigs::HandbrakeForceNoAccel' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, bUseHandbrakeToDrift) == 0x0008FC, "Member 'UFortDagwoodVehicleConfigs::bUseHandbrakeToDrift' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, DriftMinSpeedSteeringAngle) == 0x000900, "Member 'UFortDagwoodVehicleConfigs::DriftMinSpeedSteeringAngle' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, DriftMaxSpeedSteeringAngle) == 0x000904, "Member 'UFortDagwoodVehicleConfigs::DriftMaxSpeedSteeringAngle' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, DriftFrontLateralFrictionMultiplier) == 0x000908, "Member 'UFortDagwoodVehicleConfigs::DriftFrontLateralFrictionMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, DriftRearLateralFrictionMultiplier) == 0x00090C, "Member 'UFortDagwoodVehicleConfigs::DriftRearLateralFrictionMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, BoostSteeringMultiplier) == 0x000910, "Member 'UFortDagwoodVehicleConfigs::BoostSteeringMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, DirtRoadTopSpeedMultiplier) == 0x000914, "Member 'UFortDagwoodVehicleConfigs::DirtRoadTopSpeedMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, DirtRoadFrontLateralFriction) == 0x000918, "Member 'UFortDagwoodVehicleConfigs::DirtRoadFrontLateralFriction' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, DirtRoadRearLateralFriction) == 0x00091C, "Member 'UFortDagwoodVehicleConfigs::DirtRoadRearLateralFriction' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, DirtRoadAccelForceMultiplier) == 0x000920, "Member 'UFortDagwoodVehicleConfigs::DirtRoadAccelForceMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, OffRoadTopSpeedMultiplier) == 0x000924, "Member 'UFortDagwoodVehicleConfigs::OffRoadTopSpeedMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, OffRoadFrontLateralFriction) == 0x000928, "Member 'UFortDagwoodVehicleConfigs::OffRoadFrontLateralFriction' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, OffRoadRearLateralFriction) == 0x00092C, "Member 'UFortDagwoodVehicleConfigs::OffRoadRearLateralFriction' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, OffRoadPushForceMultiplier) == 0x000930, "Member 'UFortDagwoodVehicleConfigs::OffRoadPushForceMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, OffroadDamageImpactForceMin) == 0x000934, "Member 'UFortDagwoodVehicleConfigs::OffroadDamageImpactForceMin' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, OffroadDamageImpactForceMax) == 0x000938, "Member 'UFortDagwoodVehicleConfigs::OffroadDamageImpactForceMax' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, OffroadImpactDamageMin) == 0x00093C, "Member 'UFortDagwoodVehicleConfigs::OffroadImpactDamageMin' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, OffroadImpactDamageMax) == 0x000940, "Member 'UFortDagwoodVehicleConfigs::OffroadImpactDamageMax' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, MinSpeedForOffroadHandling) == 0x000944, "Member 'UFortDagwoodVehicleConfigs::MinSpeedForOffroadHandling' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, SnowFrontLateralFriction) == 0x000948, "Member 'UFortDagwoodVehicleConfigs::SnowFrontLateralFriction' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, SnowRearLateralFriction) == 0x00094C, "Member 'UFortDagwoodVehicleConfigs::SnowRearLateralFriction' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, IceFrontLateralFriction) == 0x000950, "Member 'UFortDagwoodVehicleConfigs::IceFrontLateralFriction' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, IceRearLateralFriction) == 0x000954, "Member 'UFortDagwoodVehicleConfigs::IceRearLateralFriction' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, MudFrontLateralFriction) == 0x000958, "Member 'UFortDagwoodVehicleConfigs::MudFrontLateralFriction' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, MudRearLateralFriction) == 0x00095C, "Member 'UFortDagwoodVehicleConfigs::MudRearLateralFriction' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, IcePushForceMultiplier) == 0x000960, "Member 'UFortDagwoodVehicleConfigs::IcePushForceMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, IceBrakeForceMultiplier) == 0x000964, "Member 'UFortDagwoodVehicleConfigs::IceBrakeForceMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FireHealthPercentThreshold) == 0x000968, "Member 'UFortDagwoodVehicleConfigs::FireHealthPercentThreshold' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, OffroadRumbleIntensity) == 0x00096C, "Member 'UFortDagwoodVehicleConfigs::OffroadRumbleIntensity' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, DirtRoadRumbleIntensity) == 0x000970, "Member 'UFortDagwoodVehicleConfigs::DirtRoadRumbleIntensity' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, OffroadDamageScaleExponent) == 0x000974, "Member 'UFortDagwoodVehicleConfigs::OffroadDamageScaleExponent' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HardLandingThresholdMin) == 0x000978, "Member 'UFortDagwoodVehicleConfigs::HardLandingThresholdMin' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HardLandingThresholdMax) == 0x00097C, "Member 'UFortDagwoodVehicleConfigs::HardLandingThresholdMax' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HardLandingShakeZAmplitudeMin) == 0x000980, "Member 'UFortDagwoodVehicleConfigs::HardLandingShakeZAmplitudeMin' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HardLandingShakeZAmplitudeMax) == 0x000984, "Member 'UFortDagwoodVehicleConfigs::HardLandingShakeZAmplitudeMax' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, SpeedLinesThreshold) == 0x000988, "Member 'UFortDagwoodVehicleConfigs::SpeedLinesThreshold' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, PropDestructionImpulse) == 0x00098C, "Member 'UFortDagwoodVehicleConfigs::PropDestructionImpulse' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, DestructionAngle) == 0x000990, "Member 'UFortDagwoodVehicleConfigs::DestructionAngle' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, UpNormalMinProtected) == 0x000994, "Member 'UFortDagwoodVehicleConfigs::UpNormalMinProtected' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, UpForwardMinProtected) == 0x000998, "Member 'UFortDagwoodVehicleConfigs::UpForwardMinProtected' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, NonCameraSteeringAngleMultiplier) == 0x00099C, "Member 'UFortDagwoodVehicleConfigs::NonCameraSteeringAngleMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, CameraAssistStrengthMax) == 0x0009A0, "Member 'UFortDagwoodVehicleConfigs::CameraAssistStrengthMax' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, CameraAssistStrengthMin) == 0x0009A4, "Member 'UFortDagwoodVehicleConfigs::CameraAssistStrengthMin' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, CameraAssistStrengthRecovery) == 0x0009A8, "Member 'UFortDagwoodVehicleConfigs::CameraAssistStrengthRecovery' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, CameraAssistInterpSpeed) == 0x0009AC, "Member 'UFortDagwoodVehicleConfigs::CameraAssistInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, ReverseChangeDirectionBrakeForceMultiplier) == 0x0009B0, "Member 'UFortDagwoodVehicleConfigs::ReverseChangeDirectionBrakeForceMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, ReverseChangeDirectionSpeedThreshold) == 0x0009B4, "Member 'UFortDagwoodVehicleConfigs::ReverseChangeDirectionSpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, DriftExitPushForce) == 0x0009B8, "Member 'UFortDagwoodVehicleConfigs::DriftExitPushForce' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, DriftExitCatchupSpeed) == 0x0009BC, "Member 'UFortDagwoodVehicleConfigs::DriftExitCatchupSpeed' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HandbrakeDurationRequiredForCatchup) == 0x0009C0, "Member 'UFortDagwoodVehicleConfigs::HandbrakeDurationRequiredForCatchup' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, ImpactMagnitudeToEndCatchup) == 0x0009C4, "Member 'UFortDagwoodVehicleConfigs::ImpactMagnitudeToEndCatchup' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, PoppedTireSpringLength) == 0x0009C8, "Member 'UFortDagwoodVehicleConfigs::PoppedTireSpringLength' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, PoppedTireSpringStiff) == 0x0009CC, "Member 'UFortDagwoodVehicleConfigs::PoppedTireSpringStiff' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, PoppedTireSpringDamp) == 0x0009D0, "Member 'UFortDagwoodVehicleConfigs::PoppedTireSpringDamp' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, PoppedTireScrapeFrictionMultiplier) == 0x0009D4, "Member 'UFortDagwoodVehicleConfigs::PoppedTireScrapeFrictionMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, RimScrapeFlipRollMagnitude) == 0x0009D8, "Member 'UFortDagwoodVehicleConfigs::RimScrapeFlipRollMagnitude' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, RimScrapeFlipPitchMagnitude) == 0x0009DC, "Member 'UFortDagwoodVehicleConfigs::RimScrapeFlipPitchMagnitude' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, SpeedForRimFlip) == 0x0009E0, "Member 'UFortDagwoodVehicleConfigs::SpeedForRimFlip' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HealthPercentForFlip) == 0x0009E4, "Member 'UFortDagwoodVehicleConfigs::HealthPercentForFlip' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipYawDuration) == 0x0009E8, "Member 'UFortDagwoodVehicleConfigs::FlipYawDuration' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipRollDuration) == 0x0009EC, "Member 'UFortDagwoodVehicleConfigs::FlipRollDuration' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipPitchDuration) == 0x0009F0, "Member 'UFortDagwoodVehicleConfigs::FlipPitchDuration' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipExplodeDuration_Yaw) == 0x0009F4, "Member 'UFortDagwoodVehicleConfigs::FlipExplodeDuration_Yaw' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipExplodeDuration_Pitch) == 0x0009F8, "Member 'UFortDagwoodVehicleConfigs::FlipExplodeDuration_Pitch' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipPushForceDuration_Yaw) == 0x0009FC, "Member 'UFortDagwoodVehicleConfigs::FlipPushForceDuration_Yaw' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipPushForceDuration_Pitch) == 0x000A00, "Member 'UFortDagwoodVehicleConfigs::FlipPushForceDuration_Pitch' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipPushForcMultiplier) == 0x000A04, "Member 'UFortDagwoodVehicleConfigs::FlipPushForcMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipPushForce_UpComponentPitch) == 0x000A08, "Member 'UFortDagwoodVehicleConfigs::FlipPushForce_UpComponentPitch' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipPushForce_UpComponentRoll) == 0x000A0C, "Member 'UFortDagwoodVehicleConfigs::FlipPushForce_UpComponentRoll' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, MinTimeInAirRequiredForExplodeLanding) == 0x000A10, "Member 'UFortDagwoodVehicleConfigs::MinTimeInAirRequiredForExplodeLanding' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipYawSpringStiff) == 0x000A14, "Member 'UFortDagwoodVehicleConfigs::FlipYawSpringStiff' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipYawSpringDamp) == 0x000A18, "Member 'UFortDagwoodVehicleConfigs::FlipYawSpringDamp' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipYawSpringMaxAccel) == 0x000A1C, "Member 'UFortDagwoodVehicleConfigs::FlipYawSpringMaxAccel' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HealthPercentForExplode) == 0x000A20, "Member 'UFortDagwoodVehicleConfigs::HealthPercentForExplode' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipRecoveryTime) == 0x000A24, "Member 'UFortDagwoodVehicleConfigs::FlipRecoveryTime' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipMaxDuration) == 0x000A28, "Member 'UFortDagwoodVehicleConfigs::FlipMaxDuration' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipWiggleDuration) == 0x000A2C, "Member 'UFortDagwoodVehicleConfigs::FlipWiggleDuration' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, PoppedTireVeerDuration) == 0x000A30, "Member 'UFortDagwoodVehicleConfigs::PoppedTireVeerDuration' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, PoppedTireVeerSteeringAngle) == 0x000A34, "Member 'UFortDagwoodVehicleConfigs::PoppedTireVeerSteeringAngle' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipWiggleFrequency) == 0x000A38, "Member 'UFortDagwoodVehicleConfigs::FlipWiggleFrequency' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipWiggleSteeringAngle) == 0x000A3C, "Member 'UFortDagwoodVehicleConfigs::FlipWiggleSteeringAngle' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipYawAngleThreshold) == 0x000A40, "Member 'UFortDagwoodVehicleConfigs::FlipYawAngleThreshold' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, bUsesBoost) == 0x000A44, "Member 'UFortDagwoodVehicleConfigs::bUsesBoost' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, RechargeableBoostRateOfUse) == 0x000A48, "Member 'UFortDagwoodVehicleConfigs::RechargeableBoostRateOfUse' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, RechargeableBoostRateOfRegen) == 0x000A4C, "Member 'UFortDagwoodVehicleConfigs::RechargeableBoostRateOfRegen' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, BoostRateOfRegenMinMultiplier) == 0x000A50, "Member 'UFortDagwoodVehicleConfigs::BoostRateOfRegenMinMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, BoostRateOfRegenMaxMultiplier) == 0x000A54, "Member 'UFortDagwoodVehicleConfigs::BoostRateOfRegenMaxMultiplier' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, BoostRegenMaxMultiplyTime) == 0x000A58, "Member 'UFortDagwoodVehicleConfigs::BoostRegenMaxMultiplyTime' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, RechargeableBoostRequiredPercentToActivate) == 0x000A5C, "Member 'UFortDagwoodVehicleConfigs::RechargeableBoostRequiredPercentToActivate' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, RechargeableBoostMaxPercent) == 0x000A60, "Member 'UFortDagwoodVehicleConfigs::RechargeableBoostMaxPercent' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, RechargeableBoostMinPercent) == 0x000A64, "Member 'UFortDagwoodVehicleConfigs::RechargeableBoostMinPercent' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, AnalogDriftStickThreshold) == 0x000A68, "Member 'UFortDagwoodVehicleConfigs::AnalogDriftStickThreshold' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, TireBootRightSocketName) == 0x000A6C, "Member 'UFortDagwoodVehicleConfigs::TireBootRightSocketName' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, TireBootLeftSocketName) == 0x000A70, "Member 'UFortDagwoodVehicleConfigs::TireBootLeftSocketName' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, TireBootRelativeDistance) == 0x000A74, "Member 'UFortDagwoodVehicleConfigs::TireBootRelativeDistance' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, BoostForceInAir) == 0x000A78, "Member 'UFortDagwoodVehicleConfigs::BoostForceInAir' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, BoostAirMaxSpeed) == 0x000A7C, "Member 'UFortDagwoodVehicleConfigs::BoostAirMaxSpeed' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, TireSocketNames) == 0x000A80, "Member 'UFortDagwoodVehicleConfigs::TireSocketNames' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, TireBoneNames) == 0x000A90, "Member 'UFortDagwoodVehicleConfigs::TireBoneNames' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, RearTireIndices) == 0x000AA0, "Member 'UFortDagwoodVehicleConfigs::RearTireIndices' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, RightSideTires) == 0x000AB0, "Member 'UFortDagwoodVehicleConfigs::RightSideTires' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FakeTireIndices) == 0x000AC0, "Member 'UFortDagwoodVehicleConfigs::FakeTireIndices' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, bNoWheels) == 0x000AD0, "Member 'UFortDagwoodVehicleConfigs::bNoWheels' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, NoWheelsSpringLenMult) == 0x000AD4, "Member 'UFortDagwoodVehicleConfigs::NoWheelsSpringLenMult' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleConfigs, NoWheelsBonesToHide) == 0x000AD8, "Member 'UFortDagwoodVehicleConfigs::NoWheelsBonesToHide' has a wrong offset!");

class UFortDagwoodVehicleManager final : public UGameStateComponent
{
public:
	bool                                          bHasUpdatedPropReplacement;
	uint8                                         Pad_A1[0x3];
	int32                                         NumVehiclesSpawnedWithTireMod;
	uint8                                         Pad_A8[0x8];

public:
	void CustomHandleActorStreamedInEditor(class AActor* SourceActor);
	void OnVehicleSpawned(class AFortAthenaVehicle* Vehicle);
	void OnVehicleSpawnsUpdated(class UFortVehicleItemDefinition* VehicleItemDef, TArray<class AActor*>* SpawnedVehicles, int32 NewVehicleCount);
	void UpdatePropReplacement();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortDagwoodVehicleManager">();
	}
	static class UFortDagwoodVehicleManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortDagwoodVehicleManager>();
	}
};
static_assert(alignof(UFortDagwoodVehicleManager) == 0x000008, "Wrong alignment on UFortDagwoodVehicleManager");
static_assert(sizeof(UFortDagwoodVehicleManager) == 0x0000B0, "Wrong size on UFortDagwoodVehicleManager");
static_assert(offsetof(UFortDagwoodVehicleManager, bHasUpdatedPropReplacement) == 0x0000A0, "Member 'UFortDagwoodVehicleManager::bHasUpdatedPropReplacement' has a wrong offset!");
static_assert(offsetof(UFortDagwoodVehicleManager, NumVehiclesSpawnedWithTireMod) == 0x0000A4, "Member 'UFortDagwoodVehicleManager::NumVehiclesSpawnedWithTireMod' has a wrong offset!");

class AFortValetAudioController final : public AActor
{
public:
	TMulticastInlineDelegate<void()>              OnEngineLoadChanged;
	TMulticastInlineDelegate<void()>              OnShiftGearCompleted;
	TMulticastInlineDelegate<void(bool bUpshift)> OnShiftGearDelegate;
	float                                         RPMResetTime_Native;
	float                                         JitterAmount_Native;
	float                                         ShiftTimeThreshold_Native;
	float                                         TimeSinceShift_Native;
	float                                         EngineRPMInterp_Native;
	float                                         EngineRPMLinear_Native;
	float                                         MinRPMRange_Native;
	float                                         MaxRPMRange_Native;
	bool                                          bCurrentlyShifting_Native;
	uint8                                         Pad_2D9[0x3];
	float                                         CurrentAccelRateGearModifier_Native;
	float                                         CurrentAccelRate_Native;
	int32                                         CurrentGear_Native;
	int32                                         MaxGear_Native;
	float                                         DefaultAccelRateScalar_Native;
	float                                         GearAttackInterpSpeed_Native;
	float                                         GearReleaseInterpSpeed_Native;
	float                                         AccelRateScalarFirstGear_Native;
	float                                         AccelRateScalarMinGear_Native;
	float                                         AccelRateScalarMaxGear_Native;
	float                                         ShiftToRPMStart_Native;
	float                                         ShiftToRPMEnd_Native;
	float                                         ShiftFromRPMStart_Native;
	float                                         ShiftFromRPMEnd_Native;
	float                                         MaxRPMSawtoothDecrement_Native;
	float                                         MaxRPMSawtoothRepeatTime_Native;
	float                                         DownhillAccelScalar_Native;
	float                                         UphillAccelScalar_Native;
	uint8                                         Pad_324[0x4];
	class UCurveFloat*                            RPMFloatCurveMapping;
	float                                         NormalizedSpeed_Native;
	float                                         SuspValue_Native;
	bool                                          bIsHandbraking_Native;
	uint8                                         Pad_339[0x3];
	float                                         MotoSynthVolume_Native;
	float                                         MotoSynthInitialFadeInTime_Native;
	uint8                                         Pad_344[0x4];
	float                                         MotoSynthLogRPM_Native;
	bool                                          bHasFuel_Native;
	bool                                          bIsInWater_Native;
	bool                                          bLocalPlayerInVehicle_Native;
	uint8                                         Pad_34F[0x1];
	float                                         TimeLocalPlayerEnteredVehicle_Native;
	bool                                          bAttemptingDirectionChange_Native;
	bool                                          bPreDestroy_Native;
	bool                                          bEngineLoad_Native;
	uint8                                         Pad_357[0x1];
	float                                         SkidAmount_Native;
	float                                         TimeSinceAwoken_Native;
	bool                                          bDestroyed_Native;
	uint8                                         Pad_361[0x3];
	float                                         TimeSinceSurfaceChange_Native;
	class USoundBase*                             OnInitialSuspensionSound;
	float                                         AngleForSkidding_Native;
	float                                         SpringCompressionMultiplier;
	float                                         MotoSynthMaxVolume_Native;
	uint8                                         Pad_37C[0x4];
	struct FVector2D                              MotoSynthTimeInVehicleTimeRange;
	struct FVector2D                              MotoSynthTimeInVehicleVolumeRange;
	TWeakObjectPtr<class AFortDagwoodVehicle>     ValetVehicle;
	class UFortLayeredAudioComponent*             Engine_Native;
	class UAudioComponent*                        BoostAudioComponent_Native;
	class USynthComponentMoto*                    SynthComponentMoto_Native;
	class UFortCollisionAudioComponent*           SuspensionCollisionComponent_Native;
	uint8                                         Pad_3C8[0x10];

public:
	void CacheValetVehicle(class AFortDagwoodVehicle* InVehicle);
	void OnSuspensionCollision_Native(bool* outResult, float* OutMagnitude);
	void OnTireModApplied(const struct FTireInfo& AppliedTireMod);
	void Update_Native();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortValetAudioController">();
	}
	static class AFortValetAudioController* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortValetAudioController>();
	}
};
static_assert(alignof(AFortValetAudioController) == 0x000008, "Wrong alignment on AFortValetAudioController");
static_assert(sizeof(AFortValetAudioController) == 0x0003D8, "Wrong size on AFortValetAudioController");
static_assert(offsetof(AFortValetAudioController, OnEngineLoadChanged) == 0x000288, "Member 'AFortValetAudioController::OnEngineLoadChanged' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, OnShiftGearCompleted) == 0x000298, "Member 'AFortValetAudioController::OnShiftGearCompleted' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, OnShiftGearDelegate) == 0x0002A8, "Member 'AFortValetAudioController::OnShiftGearDelegate' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, RPMResetTime_Native) == 0x0002B8, "Member 'AFortValetAudioController::RPMResetTime_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, JitterAmount_Native) == 0x0002BC, "Member 'AFortValetAudioController::JitterAmount_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, ShiftTimeThreshold_Native) == 0x0002C0, "Member 'AFortValetAudioController::ShiftTimeThreshold_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, TimeSinceShift_Native) == 0x0002C4, "Member 'AFortValetAudioController::TimeSinceShift_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, EngineRPMInterp_Native) == 0x0002C8, "Member 'AFortValetAudioController::EngineRPMInterp_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, EngineRPMLinear_Native) == 0x0002CC, "Member 'AFortValetAudioController::EngineRPMLinear_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, MinRPMRange_Native) == 0x0002D0, "Member 'AFortValetAudioController::MinRPMRange_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, MaxRPMRange_Native) == 0x0002D4, "Member 'AFortValetAudioController::MaxRPMRange_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, bCurrentlyShifting_Native) == 0x0002D8, "Member 'AFortValetAudioController::bCurrentlyShifting_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, CurrentAccelRateGearModifier_Native) == 0x0002DC, "Member 'AFortValetAudioController::CurrentAccelRateGearModifier_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, CurrentAccelRate_Native) == 0x0002E0, "Member 'AFortValetAudioController::CurrentAccelRate_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, CurrentGear_Native) == 0x0002E4, "Member 'AFortValetAudioController::CurrentGear_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, MaxGear_Native) == 0x0002E8, "Member 'AFortValetAudioController::MaxGear_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, DefaultAccelRateScalar_Native) == 0x0002EC, "Member 'AFortValetAudioController::DefaultAccelRateScalar_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, GearAttackInterpSpeed_Native) == 0x0002F0, "Member 'AFortValetAudioController::GearAttackInterpSpeed_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, GearReleaseInterpSpeed_Native) == 0x0002F4, "Member 'AFortValetAudioController::GearReleaseInterpSpeed_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, AccelRateScalarFirstGear_Native) == 0x0002F8, "Member 'AFortValetAudioController::AccelRateScalarFirstGear_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, AccelRateScalarMinGear_Native) == 0x0002FC, "Member 'AFortValetAudioController::AccelRateScalarMinGear_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, AccelRateScalarMaxGear_Native) == 0x000300, "Member 'AFortValetAudioController::AccelRateScalarMaxGear_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, ShiftToRPMStart_Native) == 0x000304, "Member 'AFortValetAudioController::ShiftToRPMStart_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, ShiftToRPMEnd_Native) == 0x000308, "Member 'AFortValetAudioController::ShiftToRPMEnd_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, ShiftFromRPMStart_Native) == 0x00030C, "Member 'AFortValetAudioController::ShiftFromRPMStart_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, ShiftFromRPMEnd_Native) == 0x000310, "Member 'AFortValetAudioController::ShiftFromRPMEnd_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, MaxRPMSawtoothDecrement_Native) == 0x000314, "Member 'AFortValetAudioController::MaxRPMSawtoothDecrement_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, MaxRPMSawtoothRepeatTime_Native) == 0x000318, "Member 'AFortValetAudioController::MaxRPMSawtoothRepeatTime_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, DownhillAccelScalar_Native) == 0x00031C, "Member 'AFortValetAudioController::DownhillAccelScalar_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, UphillAccelScalar_Native) == 0x000320, "Member 'AFortValetAudioController::UphillAccelScalar_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, RPMFloatCurveMapping) == 0x000328, "Member 'AFortValetAudioController::RPMFloatCurveMapping' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, NormalizedSpeed_Native) == 0x000330, "Member 'AFortValetAudioController::NormalizedSpeed_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, SuspValue_Native) == 0x000334, "Member 'AFortValetAudioController::SuspValue_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, bIsHandbraking_Native) == 0x000338, "Member 'AFortValetAudioController::bIsHandbraking_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, MotoSynthVolume_Native) == 0x00033C, "Member 'AFortValetAudioController::MotoSynthVolume_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, MotoSynthInitialFadeInTime_Native) == 0x000340, "Member 'AFortValetAudioController::MotoSynthInitialFadeInTime_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, MotoSynthLogRPM_Native) == 0x000348, "Member 'AFortValetAudioController::MotoSynthLogRPM_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, bHasFuel_Native) == 0x00034C, "Member 'AFortValetAudioController::bHasFuel_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, bIsInWater_Native) == 0x00034D, "Member 'AFortValetAudioController::bIsInWater_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, bLocalPlayerInVehicle_Native) == 0x00034E, "Member 'AFortValetAudioController::bLocalPlayerInVehicle_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, TimeLocalPlayerEnteredVehicle_Native) == 0x000350, "Member 'AFortValetAudioController::TimeLocalPlayerEnteredVehicle_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, bAttemptingDirectionChange_Native) == 0x000354, "Member 'AFortValetAudioController::bAttemptingDirectionChange_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, bPreDestroy_Native) == 0x000355, "Member 'AFortValetAudioController::bPreDestroy_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, bEngineLoad_Native) == 0x000356, "Member 'AFortValetAudioController::bEngineLoad_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, SkidAmount_Native) == 0x000358, "Member 'AFortValetAudioController::SkidAmount_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, TimeSinceAwoken_Native) == 0x00035C, "Member 'AFortValetAudioController::TimeSinceAwoken_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, bDestroyed_Native) == 0x000360, "Member 'AFortValetAudioController::bDestroyed_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, TimeSinceSurfaceChange_Native) == 0x000364, "Member 'AFortValetAudioController::TimeSinceSurfaceChange_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, OnInitialSuspensionSound) == 0x000368, "Member 'AFortValetAudioController::OnInitialSuspensionSound' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, AngleForSkidding_Native) == 0x000370, "Member 'AFortValetAudioController::AngleForSkidding_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, SpringCompressionMultiplier) == 0x000374, "Member 'AFortValetAudioController::SpringCompressionMultiplier' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, MotoSynthMaxVolume_Native) == 0x000378, "Member 'AFortValetAudioController::MotoSynthMaxVolume_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, MotoSynthTimeInVehicleTimeRange) == 0x000380, "Member 'AFortValetAudioController::MotoSynthTimeInVehicleTimeRange' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, MotoSynthTimeInVehicleVolumeRange) == 0x000390, "Member 'AFortValetAudioController::MotoSynthTimeInVehicleVolumeRange' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, ValetVehicle) == 0x0003A0, "Member 'AFortValetAudioController::ValetVehicle' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, Engine_Native) == 0x0003A8, "Member 'AFortValetAudioController::Engine_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, BoostAudioComponent_Native) == 0x0003B0, "Member 'AFortValetAudioController::BoostAudioComponent_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, SynthComponentMoto_Native) == 0x0003B8, "Member 'AFortValetAudioController::SynthComponentMoto_Native' has a wrong offset!");
static_assert(offsetof(AFortValetAudioController, SuspensionCollisionComponent_Native) == 0x0003C0, "Member 'AFortValetAudioController::SuspensionCollisionComponent_Native' has a wrong offset!");

class UFortValetGameFeatureData final : public UFortGameFeatureData
{
public:
	TMap<TSoftClassPtr<class UClass>, struct FVehiclePropReplacementData> PropReplacements;
	TSoftClassPtr<class UClass>                   VehicleSpawnerClass;
	ESpawnActorCollisionHandlingMethod            SpawnActorCollisionHandlingMethod;
	uint8                                         Pad_599[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortValetGameFeatureData">();
	}
	static class UFortValetGameFeatureData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortValetGameFeatureData>();
	}
};
static_assert(alignof(UFortValetGameFeatureData) == 0x000008, "Wrong alignment on UFortValetGameFeatureData");
static_assert(sizeof(UFortValetGameFeatureData) == 0x0005A0, "Wrong size on UFortValetGameFeatureData");
static_assert(offsetof(UFortValetGameFeatureData, PropReplacements) == 0x000520, "Member 'UFortValetGameFeatureData::PropReplacements' has a wrong offset!");
static_assert(offsetof(UFortValetGameFeatureData, VehicleSpawnerClass) == 0x000570, "Member 'UFortValetGameFeatureData::VehicleSpawnerClass' has a wrong offset!");
static_assert(offsetof(UFortValetGameFeatureData, SpawnActorCollisionHandlingMethod) == 0x000598, "Member 'UFortValetGameFeatureData::SpawnActorCollisionHandlingMethod' has a wrong offset!");

}
