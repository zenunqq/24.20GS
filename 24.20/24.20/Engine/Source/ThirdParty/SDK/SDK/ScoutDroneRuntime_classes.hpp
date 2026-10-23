#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "ScoutDroneRuntime_structs.hpp"
#include "TargetingSystem_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "ModularGameplay_classes.hpp"

namespace SDK
{

class UFortGameplayAbility_ScoutDrone_Dive final : public UFortGameplayAbility
{
public:
	uint8                                         Pad_B28[0x10];
	struct FFortScoutDroneDiveTransitionData      EaseInData;
	struct FFortScoutDroneDiveTransitionData      EaseOutData;
	uint8                                         Pad_B98[0x8];
	struct FScalableFloat                         DiveUpdateInterval;
	struct FScalableFloat                         DiveSpeedIncrease;
	struct FScalableFloat                         MinSpeedToDive;
	struct FScalableFloat                         MinDistToGround;
	struct FScalableFloat                         TargetPitchToDive;
	struct FScalableFloat                         DivingGravityScale;
	struct FScalableFloat                         MaxSpeedDivingGravityScale;
	uint8                                         Pad_CB8[0x10];

public:
	void BP_OnDroneStartedDiving();
	void BP_OnDroneStoppedDiving();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameplayAbility_ScoutDrone_Dive">();
	}
	static class UFortGameplayAbility_ScoutDrone_Dive* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameplayAbility_ScoutDrone_Dive>();
	}
};
static_assert(alignof(UFortGameplayAbility_ScoutDrone_Dive) == 0x000008, "Wrong alignment on UFortGameplayAbility_ScoutDrone_Dive");
static_assert(sizeof(UFortGameplayAbility_ScoutDrone_Dive) == 0x000CC8, "Wrong size on UFortGameplayAbility_ScoutDrone_Dive");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Dive, EaseInData) == 0x000B38, "Member 'UFortGameplayAbility_ScoutDrone_Dive::EaseInData' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Dive, EaseOutData) == 0x000B68, "Member 'UFortGameplayAbility_ScoutDrone_Dive::EaseOutData' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Dive, DiveUpdateInterval) == 0x000BA0, "Member 'UFortGameplayAbility_ScoutDrone_Dive::DiveUpdateInterval' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Dive, DiveSpeedIncrease) == 0x000BC8, "Member 'UFortGameplayAbility_ScoutDrone_Dive::DiveSpeedIncrease' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Dive, MinSpeedToDive) == 0x000BF0, "Member 'UFortGameplayAbility_ScoutDrone_Dive::MinSpeedToDive' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Dive, MinDistToGround) == 0x000C18, "Member 'UFortGameplayAbility_ScoutDrone_Dive::MinDistToGround' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Dive, TargetPitchToDive) == 0x000C40, "Member 'UFortGameplayAbility_ScoutDrone_Dive::TargetPitchToDive' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Dive, DivingGravityScale) == 0x000C68, "Member 'UFortGameplayAbility_ScoutDrone_Dive::DivingGravityScale' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Dive, MaxSpeedDivingGravityScale) == 0x000C90, "Member 'UFortGameplayAbility_ScoutDrone_Dive::MaxSpeedDivingGravityScale' has a wrong offset!");

class UFortGameplayAbility_ScoutDrone_TargetingBase : public UFortGameplayAbility
{
public:
	class UTargetingPreset*                       TargetingPreset;
	struct FTargetingRequestHandle                AsyncTargetingHandle;
	uint8                                         Pad_B34[0x4];
	struct FTimerHandle                           TargetingTimerHandle;
	struct FScalableFloat                         TargetingInterval;
	bool                                          bUseControllerAsInstigator;
	uint8                                         Pad_B69[0x7];

public:
	void BP_OnTargetsFound(const struct FTargetingRequestHandle& TargetingHandle);
	void StartTargeting();
	void StopTargeting();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameplayAbility_ScoutDrone_TargetingBase">();
	}
	static class UFortGameplayAbility_ScoutDrone_TargetingBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameplayAbility_ScoutDrone_TargetingBase>();
	}
};
static_assert(alignof(UFortGameplayAbility_ScoutDrone_TargetingBase) == 0x000008, "Wrong alignment on UFortGameplayAbility_ScoutDrone_TargetingBase");
static_assert(sizeof(UFortGameplayAbility_ScoutDrone_TargetingBase) == 0x000B70, "Wrong size on UFortGameplayAbility_ScoutDrone_TargetingBase");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_TargetingBase, TargetingPreset) == 0x000B28, "Member 'UFortGameplayAbility_ScoutDrone_TargetingBase::TargetingPreset' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_TargetingBase, AsyncTargetingHandle) == 0x000B30, "Member 'UFortGameplayAbility_ScoutDrone_TargetingBase::AsyncTargetingHandle' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_TargetingBase, TargetingTimerHandle) == 0x000B38, "Member 'UFortGameplayAbility_ScoutDrone_TargetingBase::TargetingTimerHandle' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_TargetingBase, TargetingInterval) == 0x000B40, "Member 'UFortGameplayAbility_ScoutDrone_TargetingBase::TargetingInterval' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_TargetingBase, bUseControllerAsInstigator) == 0x000B68, "Member 'UFortGameplayAbility_ScoutDrone_TargetingBase::bUseControllerAsInstigator' has a wrong offset!");

class UFortGameplayAbility_ScoutDrone_SpeedBoost final : public UFortGameplayAbility_ScoutDrone_TargetingBase
{
public:
	struct FGameplayTag                           DoorBashCueTag;
	uint8                                         Pad_B74[0x4];
	TSubclassOf<class UGameplayEffect>            DamageGameplayEffectClass;
	struct FGameplayTag                           DoorBashPawnLaunchGameplayCueTag;
	uint8                                         Pad_B84[0x4];
	struct FScalableFloat                         DoorBashEnabledHotfix;
	struct FScalableFloat                         DoorBashSphereRadiusForPawnLaunch;
	struct FScalableFloat                         DoorBashScalarForPawnLaunch;
	TArray<EObjectTypeQuery>                      DoorBashCollisionTypesForPawn;
	struct FScalableFloat                         DoorBashEnabled;
	struct FScalableFloat                         DamageOnBoostEnabled;

public:
	void OnBoostedIntoActor(const struct FHitResult& HitResult);
	void OnDoorBashed(const struct FHitResult& HitResult, class UFortBuildingWallDoorComponent* BashedDoor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameplayAbility_ScoutDrone_SpeedBoost">();
	}
	static class UFortGameplayAbility_ScoutDrone_SpeedBoost* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameplayAbility_ScoutDrone_SpeedBoost>();
	}
};
static_assert(alignof(UFortGameplayAbility_ScoutDrone_SpeedBoost) == 0x000008, "Wrong alignment on UFortGameplayAbility_ScoutDrone_SpeedBoost");
static_assert(sizeof(UFortGameplayAbility_ScoutDrone_SpeedBoost) == 0x000C60, "Wrong size on UFortGameplayAbility_ScoutDrone_SpeedBoost");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_SpeedBoost, DoorBashCueTag) == 0x000B70, "Member 'UFortGameplayAbility_ScoutDrone_SpeedBoost::DoorBashCueTag' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_SpeedBoost, DamageGameplayEffectClass) == 0x000B78, "Member 'UFortGameplayAbility_ScoutDrone_SpeedBoost::DamageGameplayEffectClass' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_SpeedBoost, DoorBashPawnLaunchGameplayCueTag) == 0x000B80, "Member 'UFortGameplayAbility_ScoutDrone_SpeedBoost::DoorBashPawnLaunchGameplayCueTag' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_SpeedBoost, DoorBashEnabledHotfix) == 0x000B88, "Member 'UFortGameplayAbility_ScoutDrone_SpeedBoost::DoorBashEnabledHotfix' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_SpeedBoost, DoorBashSphereRadiusForPawnLaunch) == 0x000BB0, "Member 'UFortGameplayAbility_ScoutDrone_SpeedBoost::DoorBashSphereRadiusForPawnLaunch' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_SpeedBoost, DoorBashScalarForPawnLaunch) == 0x000BD8, "Member 'UFortGameplayAbility_ScoutDrone_SpeedBoost::DoorBashScalarForPawnLaunch' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_SpeedBoost, DoorBashCollisionTypesForPawn) == 0x000C00, "Member 'UFortGameplayAbility_ScoutDrone_SpeedBoost::DoorBashCollisionTypesForPawn' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_SpeedBoost, DoorBashEnabled) == 0x000C10, "Member 'UFortGameplayAbility_ScoutDrone_SpeedBoost::DoorBashEnabled' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_SpeedBoost, DamageOnBoostEnabled) == 0x000C38, "Member 'UFortGameplayAbility_ScoutDrone_SpeedBoost::DamageOnBoostEnabled' has a wrong offset!");

class UFortScoutDroneAnalyticsComponent final : public UFortControllerComponent
{
public:
	float                                         SessionStartTime;
	float                                         SessionLength;
	struct FScalableFloat                         MinSessionLength;
	float                                         DistanceTraveled;
	int32                                         NumberOfContainersInteractedWith;
	struct FGameplayTag                           DismissalReason;
	int32                                         NumberOfItemsPickedUp;
	TArray<class FString>                         DBNOCarriedPlayers;
	int32                                         NumberOfEnemiesPassivelyMarked;
	int32                                         NumberOfEnemiesMarkedOnCaw;
	int32                                         NumberOfCaws;
	uint8                                         Pad_104[0xC];
	struct FScalableFloat                         DistanceTraveledUpdateInterval;
	struct FTimerHandle                           DistanceTraveledUpdateTimerHandle;
	struct FVector                                LastRecorderDroneLocation;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortScoutDroneAnalyticsComponent">();
	}
	static class UFortScoutDroneAnalyticsComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortScoutDroneAnalyticsComponent>();
	}
};
static_assert(alignof(UFortScoutDroneAnalyticsComponent) == 0x000008, "Wrong alignment on UFortScoutDroneAnalyticsComponent");
static_assert(sizeof(UFortScoutDroneAnalyticsComponent) == 0x000158, "Wrong size on UFortScoutDroneAnalyticsComponent");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, SessionStartTime) == 0x0000A8, "Member 'UFortScoutDroneAnalyticsComponent::SessionStartTime' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, SessionLength) == 0x0000AC, "Member 'UFortScoutDroneAnalyticsComponent::SessionLength' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, MinSessionLength) == 0x0000B0, "Member 'UFortScoutDroneAnalyticsComponent::MinSessionLength' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, DistanceTraveled) == 0x0000D8, "Member 'UFortScoutDroneAnalyticsComponent::DistanceTraveled' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, NumberOfContainersInteractedWith) == 0x0000DC, "Member 'UFortScoutDroneAnalyticsComponent::NumberOfContainersInteractedWith' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, DismissalReason) == 0x0000E0, "Member 'UFortScoutDroneAnalyticsComponent::DismissalReason' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, NumberOfItemsPickedUp) == 0x0000E4, "Member 'UFortScoutDroneAnalyticsComponent::NumberOfItemsPickedUp' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, DBNOCarriedPlayers) == 0x0000E8, "Member 'UFortScoutDroneAnalyticsComponent::DBNOCarriedPlayers' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, NumberOfEnemiesPassivelyMarked) == 0x0000F8, "Member 'UFortScoutDroneAnalyticsComponent::NumberOfEnemiesPassivelyMarked' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, NumberOfEnemiesMarkedOnCaw) == 0x0000FC, "Member 'UFortScoutDroneAnalyticsComponent::NumberOfEnemiesMarkedOnCaw' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, NumberOfCaws) == 0x000100, "Member 'UFortScoutDroneAnalyticsComponent::NumberOfCaws' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, DistanceTraveledUpdateInterval) == 0x000110, "Member 'UFortScoutDroneAnalyticsComponent::DistanceTraveledUpdateInterval' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, DistanceTraveledUpdateTimerHandle) == 0x000138, "Member 'UFortScoutDroneAnalyticsComponent::DistanceTraveledUpdateTimerHandle' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, LastRecorderDroneLocation) == 0x000140, "Member 'UFortScoutDroneAnalyticsComponent::LastRecorderDroneLocation' has a wrong offset!");

class UFortScoutDroneAnimInstance final : public UFortBaseAnimInstance
{
public:
	class UFortScoutDroneMovementComponent*       FortScoutDroneMovementComponent;
	double                                        YawDeltaLastTick;
	struct FRotator                               ActorCurrentRotationTick;
	double                                        YawDeltaCurrentTick;
	struct FRotator                               ActorRotationLastTick;
	bool                                          IsFlying;
	uint8                                         Pad_479[0x7];
	double                                        CurrentVelocity;
	double                                        LastVelocity;
	double                                        Velocity;
	double                                        ForwardInputAlpha;
	double                                        StrafeInputAlpha;
	struct FRotator                               DroneRotation;
	double                                        Acceleration;
	class AFortScoutDrone*                        ScoutDrone;
	bool                                          IsBoosting;
	bool                                          IsDiving;
	uint8                                         Pad_4D2[0x6];
	double                                        AimPitch;
	double                                        NegativeAimPitch;
	struct FRotator                               FinalFanRotationL;
	struct FRotator                               FinalFanRotationR;
	double                                        FanIdleSpeed;
	double                                        FanAuthoredSpeed;
	double                                        FanIdleAuthoredSpeed;
	double                                        FanBwdSpeed;
	double                                        FanFwdSpeed;
	double                                        TurnNoiseAlpha;
	double                                        LeanAlpha;
	double                                        TurnAlpha;
	bool                                          IsColliding;
	bool                                          IsFlyingBwd;
	bool                                          ShouldExitFromFlying;
	bool                                          ShouldExitFromDiving;
	bool                                          EarlyIntoLoop;
	uint8                                         Pad_55D[0x3];
	double                                        AccelerationZ;
	bool                                          IsLeftStrafe;
	bool                                          WasStrafing;
	uint8                                         Pad_56A[0x6];
	double                                        GroundDistance;
	bool                                          HasDivingConditionBeenMet;
	bool                                          IsItemAttached;
	bool                                          IsPlayerAttached;
	uint8                                         Pad_57B[0x5];
	double                                        FlapTime;
	int32                                         FlapRandomPick;
	bool                                          IsFlapSmall;
	uint8                                         Pad_58D[0x3];
	int32                                         FlapRandomMaxRange;
	uint8                                         Pad_594[0x4];
	double                                        FlapSmallTimeThreshold;
	double                                        FlapBigTimeThreshold;
	double                                        FlapSmallResetDelayDuration;
	double                                        FlapBigResetDelayDuration;
	bool                                          IsFlapBig;
	uint8                                         Pad_5B9[0x7];
	double                                        VerticalInputAlpha;
	bool                                          WasVerticalUp;
	bool                                          IsFlyingVerticalUp;
	bool                                          ShouldExitFromBoostOutro;
	bool                                          HasSpawned;
	bool                                          ShouldExitFromSpawning;
	bool                                          ShouldAllowTransition;
	bool                                          StateRuleFromBoostOutroToFlying;
	bool                                          WasBoosting;
	struct FScalableFloat                         SpeedBoostForceBoostVelocity;
	struct FScalableFloat                         SpeedBoostMaxSpeedIncrease;
	bool                                          IsFlappingTime;
	uint8                                         Pad_621[0xF];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortScoutDroneAnimInstance">();
	}
	static class UFortScoutDroneAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortScoutDroneAnimInstance>();
	}
};
static_assert(alignof(UFortScoutDroneAnimInstance) == 0x000010, "Wrong alignment on UFortScoutDroneAnimInstance");
static_assert(sizeof(UFortScoutDroneAnimInstance) == 0x000630, "Wrong size on UFortScoutDroneAnimInstance");
static_assert(offsetof(UFortScoutDroneAnimInstance, FortScoutDroneMovementComponent) == 0x000430, "Member 'UFortScoutDroneAnimInstance::FortScoutDroneMovementComponent' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, YawDeltaLastTick) == 0x000438, "Member 'UFortScoutDroneAnimInstance::YawDeltaLastTick' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, ActorCurrentRotationTick) == 0x000440, "Member 'UFortScoutDroneAnimInstance::ActorCurrentRotationTick' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, YawDeltaCurrentTick) == 0x000458, "Member 'UFortScoutDroneAnimInstance::YawDeltaCurrentTick' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, ActorRotationLastTick) == 0x000460, "Member 'UFortScoutDroneAnimInstance::ActorRotationLastTick' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, IsFlying) == 0x000478, "Member 'UFortScoutDroneAnimInstance::IsFlying' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, CurrentVelocity) == 0x000480, "Member 'UFortScoutDroneAnimInstance::CurrentVelocity' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, LastVelocity) == 0x000488, "Member 'UFortScoutDroneAnimInstance::LastVelocity' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, Velocity) == 0x000490, "Member 'UFortScoutDroneAnimInstance::Velocity' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, ForwardInputAlpha) == 0x000498, "Member 'UFortScoutDroneAnimInstance::ForwardInputAlpha' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, StrafeInputAlpha) == 0x0004A0, "Member 'UFortScoutDroneAnimInstance::StrafeInputAlpha' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, DroneRotation) == 0x0004A8, "Member 'UFortScoutDroneAnimInstance::DroneRotation' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, Acceleration) == 0x0004C0, "Member 'UFortScoutDroneAnimInstance::Acceleration' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, ScoutDrone) == 0x0004C8, "Member 'UFortScoutDroneAnimInstance::ScoutDrone' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, IsBoosting) == 0x0004D0, "Member 'UFortScoutDroneAnimInstance::IsBoosting' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, IsDiving) == 0x0004D1, "Member 'UFortScoutDroneAnimInstance::IsDiving' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, AimPitch) == 0x0004D8, "Member 'UFortScoutDroneAnimInstance::AimPitch' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, NegativeAimPitch) == 0x0004E0, "Member 'UFortScoutDroneAnimInstance::NegativeAimPitch' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, FinalFanRotationL) == 0x0004E8, "Member 'UFortScoutDroneAnimInstance::FinalFanRotationL' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, FinalFanRotationR) == 0x000500, "Member 'UFortScoutDroneAnimInstance::FinalFanRotationR' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, FanIdleSpeed) == 0x000518, "Member 'UFortScoutDroneAnimInstance::FanIdleSpeed' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, FanAuthoredSpeed) == 0x000520, "Member 'UFortScoutDroneAnimInstance::FanAuthoredSpeed' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, FanIdleAuthoredSpeed) == 0x000528, "Member 'UFortScoutDroneAnimInstance::FanIdleAuthoredSpeed' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, FanBwdSpeed) == 0x000530, "Member 'UFortScoutDroneAnimInstance::FanBwdSpeed' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, FanFwdSpeed) == 0x000538, "Member 'UFortScoutDroneAnimInstance::FanFwdSpeed' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, TurnNoiseAlpha) == 0x000540, "Member 'UFortScoutDroneAnimInstance::TurnNoiseAlpha' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, LeanAlpha) == 0x000548, "Member 'UFortScoutDroneAnimInstance::LeanAlpha' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, TurnAlpha) == 0x000550, "Member 'UFortScoutDroneAnimInstance::TurnAlpha' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, IsColliding) == 0x000558, "Member 'UFortScoutDroneAnimInstance::IsColliding' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, IsFlyingBwd) == 0x000559, "Member 'UFortScoutDroneAnimInstance::IsFlyingBwd' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, ShouldExitFromFlying) == 0x00055A, "Member 'UFortScoutDroneAnimInstance::ShouldExitFromFlying' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, ShouldExitFromDiving) == 0x00055B, "Member 'UFortScoutDroneAnimInstance::ShouldExitFromDiving' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, EarlyIntoLoop) == 0x00055C, "Member 'UFortScoutDroneAnimInstance::EarlyIntoLoop' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, AccelerationZ) == 0x000560, "Member 'UFortScoutDroneAnimInstance::AccelerationZ' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, IsLeftStrafe) == 0x000568, "Member 'UFortScoutDroneAnimInstance::IsLeftStrafe' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, WasStrafing) == 0x000569, "Member 'UFortScoutDroneAnimInstance::WasStrafing' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, GroundDistance) == 0x000570, "Member 'UFortScoutDroneAnimInstance::GroundDistance' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, HasDivingConditionBeenMet) == 0x000578, "Member 'UFortScoutDroneAnimInstance::HasDivingConditionBeenMet' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, IsItemAttached) == 0x000579, "Member 'UFortScoutDroneAnimInstance::IsItemAttached' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, IsPlayerAttached) == 0x00057A, "Member 'UFortScoutDroneAnimInstance::IsPlayerAttached' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, FlapTime) == 0x000580, "Member 'UFortScoutDroneAnimInstance::FlapTime' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, FlapRandomPick) == 0x000588, "Member 'UFortScoutDroneAnimInstance::FlapRandomPick' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, IsFlapSmall) == 0x00058C, "Member 'UFortScoutDroneAnimInstance::IsFlapSmall' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, FlapRandomMaxRange) == 0x000590, "Member 'UFortScoutDroneAnimInstance::FlapRandomMaxRange' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, FlapSmallTimeThreshold) == 0x000598, "Member 'UFortScoutDroneAnimInstance::FlapSmallTimeThreshold' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, FlapBigTimeThreshold) == 0x0005A0, "Member 'UFortScoutDroneAnimInstance::FlapBigTimeThreshold' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, FlapSmallResetDelayDuration) == 0x0005A8, "Member 'UFortScoutDroneAnimInstance::FlapSmallResetDelayDuration' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, FlapBigResetDelayDuration) == 0x0005B0, "Member 'UFortScoutDroneAnimInstance::FlapBigResetDelayDuration' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, IsFlapBig) == 0x0005B8, "Member 'UFortScoutDroneAnimInstance::IsFlapBig' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, VerticalInputAlpha) == 0x0005C0, "Member 'UFortScoutDroneAnimInstance::VerticalInputAlpha' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, WasVerticalUp) == 0x0005C8, "Member 'UFortScoutDroneAnimInstance::WasVerticalUp' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, IsFlyingVerticalUp) == 0x0005C9, "Member 'UFortScoutDroneAnimInstance::IsFlyingVerticalUp' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, ShouldExitFromBoostOutro) == 0x0005CA, "Member 'UFortScoutDroneAnimInstance::ShouldExitFromBoostOutro' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, HasSpawned) == 0x0005CB, "Member 'UFortScoutDroneAnimInstance::HasSpawned' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, ShouldExitFromSpawning) == 0x0005CC, "Member 'UFortScoutDroneAnimInstance::ShouldExitFromSpawning' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, ShouldAllowTransition) == 0x0005CD, "Member 'UFortScoutDroneAnimInstance::ShouldAllowTransition' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, StateRuleFromBoostOutroToFlying) == 0x0005CE, "Member 'UFortScoutDroneAnimInstance::StateRuleFromBoostOutroToFlying' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, WasBoosting) == 0x0005CF, "Member 'UFortScoutDroneAnimInstance::WasBoosting' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, SpeedBoostForceBoostVelocity) == 0x0005D0, "Member 'UFortScoutDroneAnimInstance::SpeedBoostForceBoostVelocity' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, SpeedBoostMaxSpeedIncrease) == 0x0005F8, "Member 'UFortScoutDroneAnimInstance::SpeedBoostMaxSpeedIncrease' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneAnimInstance, IsFlappingTime) == 0x000620, "Member 'UFortScoutDroneAnimInstance::IsFlappingTime' has a wrong offset!");

class AFortScoutDroneGlove final : public AFortWeapon
{
public:
	struct FScalableFloat                         HoldToDeployTime;
	uint8                                         Pad_10C8[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortScoutDroneGlove">();
	}
	static class AFortScoutDroneGlove* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortScoutDroneGlove>();
	}
};
static_assert(alignof(AFortScoutDroneGlove) == 0x000008, "Wrong alignment on AFortScoutDroneGlove");
static_assert(sizeof(AFortScoutDroneGlove) == 0x0010E0, "Wrong size on AFortScoutDroneGlove");
static_assert(offsetof(AFortScoutDroneGlove, HoldToDeployTime) == 0x0010A0, "Member 'AFortScoutDroneGlove::HoldToDeployTime' has a wrong offset!");

class UFortGameplayAbility_ScoutDrone_Activate final : public UFortGameplayAbility
{
public:
	TSubclassOf<class AFortScoutDrone>            RCActorClass;
	struct FVector                                SpawnOffset;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameplayAbility_ScoutDrone_Activate">();
	}
	static class UFortGameplayAbility_ScoutDrone_Activate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameplayAbility_ScoutDrone_Activate>();
	}
};
static_assert(alignof(UFortGameplayAbility_ScoutDrone_Activate) == 0x000008, "Wrong alignment on UFortGameplayAbility_ScoutDrone_Activate");
static_assert(sizeof(UFortGameplayAbility_ScoutDrone_Activate) == 0x000B48, "Wrong size on UFortGameplayAbility_ScoutDrone_Activate");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Activate, RCActorClass) == 0x000B28, "Member 'UFortGameplayAbility_ScoutDrone_Activate::RCActorClass' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Activate, SpawnOffset) == 0x000B30, "Member 'UFortGameplayAbility_ScoutDrone_Activate::SpawnOffset' has a wrong offset!");

class UFortGameplayAbility_ScoutDrone_Dismiss final : public UFortGameplayAbility
{
public:
	struct FScoutDroneDeferredDestructionData     DismissDelayData;

public:
	class AFortScoutDrone* GetControlledDrone();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameplayAbility_ScoutDrone_Dismiss">();
	}
	static class UFortGameplayAbility_ScoutDrone_Dismiss* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameplayAbility_ScoutDrone_Dismiss>();
	}
};
static_assert(alignof(UFortGameplayAbility_ScoutDrone_Dismiss) == 0x000008, "Wrong alignment on UFortGameplayAbility_ScoutDrone_Dismiss");
static_assert(sizeof(UFortGameplayAbility_ScoutDrone_Dismiss) == 0x000B38, "Wrong size on UFortGameplayAbility_ScoutDrone_Dismiss");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Dismiss, DismissDelayData) == 0x000B28, "Member 'UFortGameplayAbility_ScoutDrone_Dismiss::DismissDelayData' has a wrong offset!");

class UFortGameplayAbility_ScoutDrone_MarkPotentialTargets final : public UFortGameplayAbility_ScoutDrone_TargetingBase
{
public:
	struct FIndicatedActorData                    IndicatedActorData;
	uint8                                         Pad_C48[0x10];
	struct FScalableFloat                         MaxNumberOfPotentialTargets;

public:
	void OnStartHighlightingTarget(class AActor* Target);
	void OnStoppedHighlightingTarget(class AActor* Target);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameplayAbility_ScoutDrone_MarkPotentialTargets">();
	}
	static class UFortGameplayAbility_ScoutDrone_MarkPotentialTargets* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameplayAbility_ScoutDrone_MarkPotentialTargets>();
	}
};
static_assert(alignof(UFortGameplayAbility_ScoutDrone_MarkPotentialTargets) == 0x000008, "Wrong alignment on UFortGameplayAbility_ScoutDrone_MarkPotentialTargets");
static_assert(sizeof(UFortGameplayAbility_ScoutDrone_MarkPotentialTargets) == 0x000C80, "Wrong size on UFortGameplayAbility_ScoutDrone_MarkPotentialTargets");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_MarkPotentialTargets, IndicatedActorData) == 0x000B70, "Member 'UFortGameplayAbility_ScoutDrone_MarkPotentialTargets::IndicatedActorData' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_MarkPotentialTargets, MaxNumberOfPotentialTargets) == 0x000C58, "Member 'UFortGameplayAbility_ScoutDrone_MarkPotentialTargets::MaxNumberOfPotentialTargets' has a wrong offset!");

class UScoutDronePassiveMarkPayload final : public UObject
{
public:
	struct FScoutDroneStatusData                  TargetStatus;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScoutDronePassiveMarkPayload">();
	}
	static class UScoutDronePassiveMarkPayload* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScoutDronePassiveMarkPayload>();
	}
};
static_assert(alignof(UScoutDronePassiveMarkPayload) == 0x000008, "Wrong alignment on UScoutDronePassiveMarkPayload");
static_assert(sizeof(UScoutDronePassiveMarkPayload) == 0x000030, "Wrong size on UScoutDronePassiveMarkPayload");
static_assert(offsetof(UScoutDronePassiveMarkPayload, TargetStatus) == 0x000028, "Member 'UScoutDronePassiveMarkPayload::TargetStatus' has a wrong offset!");

class UFortGameplayAbility_ScoutDrone_PassiveMark final : public UFortGameplayAbility_ScoutDrone_TargetingBase
{
public:
	struct FScoutDroneStatusData                  CurrentTargetStatus;
	struct FStenciledActorData                    StenciledActorData;
	struct FIndicatedActorData                    IndicatedActorData;
	struct FScalableFloat                         ActorTargetingRange;
	struct FScalableFloat                         TimeToConfirmTarget;
	class AActor*                                 CurrentTarget;
	struct FTimerHandle                           TargetConfirmationTimerHandle;
	class UScoutDronePassiveMarkPayload*          PayloadCache;
	uint8                                         Pad_D38[0x10];

public:
	void BP_OnTargetStatusChanged(class AActor* ActiveTarget);
	void OnActorIndicatorExpired(class AActor* IndicatedActor);
	void OnRep_CurrentTargetStatus();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameplayAbility_ScoutDrone_PassiveMark">();
	}
	static class UFortGameplayAbility_ScoutDrone_PassiveMark* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameplayAbility_ScoutDrone_PassiveMark>();
	}
};
static_assert(alignof(UFortGameplayAbility_ScoutDrone_PassiveMark) == 0x000008, "Wrong alignment on UFortGameplayAbility_ScoutDrone_PassiveMark");
static_assert(sizeof(UFortGameplayAbility_ScoutDrone_PassiveMark) == 0x000D48, "Wrong size on UFortGameplayAbility_ScoutDrone_PassiveMark");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_PassiveMark, CurrentTargetStatus) == 0x000B70, "Member 'UFortGameplayAbility_ScoutDrone_PassiveMark::CurrentTargetStatus' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_PassiveMark, StenciledActorData) == 0x000B78, "Member 'UFortGameplayAbility_ScoutDrone_PassiveMark::StenciledActorData' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_PassiveMark, IndicatedActorData) == 0x000BF8, "Member 'UFortGameplayAbility_ScoutDrone_PassiveMark::IndicatedActorData' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_PassiveMark, ActorTargetingRange) == 0x000CD0, "Member 'UFortGameplayAbility_ScoutDrone_PassiveMark::ActorTargetingRange' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_PassiveMark, TimeToConfirmTarget) == 0x000CF8, "Member 'UFortGameplayAbility_ScoutDrone_PassiveMark::TimeToConfirmTarget' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_PassiveMark, CurrentTarget) == 0x000D20, "Member 'UFortGameplayAbility_ScoutDrone_PassiveMark::CurrentTarget' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_PassiveMark, TargetConfirmationTimerHandle) == 0x000D28, "Member 'UFortGameplayAbility_ScoutDrone_PassiveMark::TargetConfirmationTimerHandle' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_PassiveMark, PayloadCache) == 0x000D30, "Member 'UFortGameplayAbility_ScoutDrone_PassiveMark::PayloadCache' has a wrong offset!");

class UScoutDronePickUpTargetsPayload final : public UObject
{
public:
	struct FScoutDronePickupTargets               PickUpTargets;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScoutDronePickUpTargetsPayload">();
	}
	static class UScoutDronePickUpTargetsPayload* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScoutDronePickUpTargetsPayload>();
	}
};
static_assert(alignof(UScoutDronePickUpTargetsPayload) == 0x000008, "Wrong alignment on UScoutDronePickUpTargetsPayload");
static_assert(sizeof(UScoutDronePickUpTargetsPayload) == 0x000040, "Wrong size on UScoutDronePickUpTargetsPayload");
static_assert(offsetof(UScoutDronePickUpTargetsPayload, PickUpTargets) == 0x000028, "Member 'UScoutDronePickUpTargetsPayload::PickUpTargets' has a wrong offset!");

class UFortGameplayAbility_ScoutDrone_PickUp final : public UFortGameplayAbility_ScoutDrone_TargetingBase
{
public:
	uint8                                         Pad_B70[0x8];
	struct FScalableFloat                         MaxNumberOfItemsToGrab;
	class UScoutDronePickUpTargetsPayload*        PayloadCache;
	struct FScalableFloat                         PickupToggleCooldownDuration;
	uint8                                         Pad_BD0[0x10];
	TSubclassOf<class UGameplayEffect>            AttachedPawnGEClass;

public:
	void ServerConfirmTargets();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameplayAbility_ScoutDrone_PickUp">();
	}
	static class UFortGameplayAbility_ScoutDrone_PickUp* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameplayAbility_ScoutDrone_PickUp>();
	}
};
static_assert(alignof(UFortGameplayAbility_ScoutDrone_PickUp) == 0x000008, "Wrong alignment on UFortGameplayAbility_ScoutDrone_PickUp");
static_assert(sizeof(UFortGameplayAbility_ScoutDrone_PickUp) == 0x000BE8, "Wrong size on UFortGameplayAbility_ScoutDrone_PickUp");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_PickUp, MaxNumberOfItemsToGrab) == 0x000B78, "Member 'UFortGameplayAbility_ScoutDrone_PickUp::MaxNumberOfItemsToGrab' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_PickUp, PayloadCache) == 0x000BA0, "Member 'UFortGameplayAbility_ScoutDrone_PickUp::PayloadCache' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_PickUp, PickupToggleCooldownDuration) == 0x000BA8, "Member 'UFortGameplayAbility_ScoutDrone_PickUp::PickupToggleCooldownDuration' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_PickUp, AttachedPawnGEClass) == 0x000BE0, "Member 'UFortGameplayAbility_ScoutDrone_PickUp::AttachedPawnGEClass' has a wrong offset!");

class UFortGameplayAbility_ScoutDrone_Tether final : public UFortGameplayAbility
{
public:
	struct FScalableFloat                         WarningRange;
	struct FScalableFloat                         SignalLossRange;
	bool                                          bIsInWarningRange;
	bool                                          bIsInSignalLossRange;
	uint8                                         Pad_B7A[0x6];
	struct FTimerHandle                           TetheringTimerHandle;
	struct FTimerHandle                           TetheringReportTimerHandle;
	struct FScoutDroneDeferredDestructionData     DismissDelayData;

public:
	void OnRep_bIsInSignalLossRange();
	void OnRep_bIsInWarningRange();
	void StartCheckingDistances();
	void StopCheckingDistances();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameplayAbility_ScoutDrone_Tether">();
	}
	static class UFortGameplayAbility_ScoutDrone_Tether* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameplayAbility_ScoutDrone_Tether>();
	}
};
static_assert(alignof(UFortGameplayAbility_ScoutDrone_Tether) == 0x000008, "Wrong alignment on UFortGameplayAbility_ScoutDrone_Tether");
static_assert(sizeof(UFortGameplayAbility_ScoutDrone_Tether) == 0x000BA0, "Wrong size on UFortGameplayAbility_ScoutDrone_Tether");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Tether, WarningRange) == 0x000B28, "Member 'UFortGameplayAbility_ScoutDrone_Tether::WarningRange' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Tether, SignalLossRange) == 0x000B50, "Member 'UFortGameplayAbility_ScoutDrone_Tether::SignalLossRange' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Tether, bIsInWarningRange) == 0x000B78, "Member 'UFortGameplayAbility_ScoutDrone_Tether::bIsInWarningRange' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Tether, bIsInSignalLossRange) == 0x000B79, "Member 'UFortGameplayAbility_ScoutDrone_Tether::bIsInSignalLossRange' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Tether, TetheringTimerHandle) == 0x000B80, "Member 'UFortGameplayAbility_ScoutDrone_Tether::TetheringTimerHandle' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Tether, TetheringReportTimerHandle) == 0x000B88, "Member 'UFortGameplayAbility_ScoutDrone_Tether::TetheringReportTimerHandle' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Tether, DismissDelayData) == 0x000B90, "Member 'UFortGameplayAbility_ScoutDrone_Tether::DismissDelayData' has a wrong offset!");

class AFortAthenaMutator_ScoutDrone final : public AFortAthenaMutator
{
public:
	struct FGameplayTagContainer                  DroneAllowedInteractionTags;
	struct FGameplayTagContainer                  DroneBlockedInteractionTags;
	bool                                          bIsControllingDrone;
	uint8                                         Pad_371[0x7];

public:
	void OnViewTargetChanged(class AFortPlayerController* PlayerController, class AActor* OldViewTarget, class AActor* NewViewTarget);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaMutator_ScoutDrone">();
	}
	static class AFortAthenaMutator_ScoutDrone* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_ScoutDrone>();
	}
};
static_assert(alignof(AFortAthenaMutator_ScoutDrone) == 0x000008, "Wrong alignment on AFortAthenaMutator_ScoutDrone");
static_assert(sizeof(AFortAthenaMutator_ScoutDrone) == 0x000378, "Wrong size on AFortAthenaMutator_ScoutDrone");
static_assert(offsetof(AFortAthenaMutator_ScoutDrone, DroneAllowedInteractionTags) == 0x000330, "Member 'AFortAthenaMutator_ScoutDrone::DroneAllowedInteractionTags' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_ScoutDrone, DroneBlockedInteractionTags) == 0x000350, "Member 'AFortAthenaMutator_ScoutDrone::DroneBlockedInteractionTags' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_ScoutDrone, bIsControllingDrone) == 0x000370, "Member 'AFortAthenaMutator_ScoutDrone::bIsControllingDrone' has a wrong offset!");

class UFortChargingSet_ScoutDroneEnergy final : public UFortChargingSet_Base
{
public:
	struct FFortGameplayAttributeData             Energy;
	struct FFortGameplayAttributeData             MaxEnergy;
	struct FFortGameplayAttributeData             EnergyChargeRate;
	struct FFortGameplayAttributeData             ServerTimeEnergyIncrements;
	uint8                                         Pad_E8[0x20];

public:
	void OnRep_Energy(const struct FFortGameplayAttributeData& OldValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortChargingSet_ScoutDroneEnergy">();
	}
	static class UFortChargingSet_ScoutDroneEnergy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortChargingSet_ScoutDroneEnergy>();
	}
};
static_assert(alignof(UFortChargingSet_ScoutDroneEnergy) == 0x000008, "Wrong alignment on UFortChargingSet_ScoutDroneEnergy");
static_assert(sizeof(UFortChargingSet_ScoutDroneEnergy) == 0x000108, "Wrong size on UFortChargingSet_ScoutDroneEnergy");
static_assert(offsetof(UFortChargingSet_ScoutDroneEnergy, Energy) == 0x000048, "Member 'UFortChargingSet_ScoutDroneEnergy::Energy' has a wrong offset!");
static_assert(offsetof(UFortChargingSet_ScoutDroneEnergy, MaxEnergy) == 0x000070, "Member 'UFortChargingSet_ScoutDroneEnergy::MaxEnergy' has a wrong offset!");
static_assert(offsetof(UFortChargingSet_ScoutDroneEnergy, EnergyChargeRate) == 0x000098, "Member 'UFortChargingSet_ScoutDroneEnergy::EnergyChargeRate' has a wrong offset!");
static_assert(offsetof(UFortChargingSet_ScoutDroneEnergy, ServerTimeEnergyIncrements) == 0x0000C0, "Member 'UFortChargingSet_ScoutDroneEnergy::ServerTimeEnergyIncrements' has a wrong offset!");

class AFortScoutDrone final : public ACharacter
{
public:
	uint8                                         Pad_620[0x50];
	bool                                          bIsDiving;
	uint8                                         Pad_671[0x7];
	struct FScalableFloat                         DivingEnabled;
	bool                                          bIsSpeedBoosting;
	uint8                                         Pad_6A1[0x7];
	class UNiagaraComponent*                      NSScoutDroneIdle_Native;
	class UFortScoutDronePickupManager*           PickupManagerComponent_Native;
	TSubclassOf<class UUserWidget>                TeamMateIndicatorMarkerWidgetClass;
	class UAudioComponent*                        DroneMotorLoopComponent;
	class UAudioComponent*                        DroneThrustSoundComponent;
	struct FScalableFloat                         BaseMaxFlySpeed;
	uint8                                         Pad_6F8[0x8];
	class UFortAbilitySystemComponent*            AbilitySystemComponent;
	class UFortActorComponent_Affiliation*        AffiliationComponent;
	class UFortAbilitySet*                        StartupAbilitySet;
	class AFortPawn*                              ControllingPlayerPawn;
	class UFortHealthSet*                         HealthSet;
	class UFortChargingSet_ScoutDroneEnergy*      EnergySet;
	float                                         LifespanAfterDeath;
	struct FFortAttributeInitializationKey        AttributeInitKey;
	EPhysicalSurface                              PrimarySurfaceType;
	EFortBaseWeaponDamage                         WeaponResponseType;
	bool                                          bPlayedDeath;
	uint8                                         Pad_73F[0x1];
	struct FScoutDroneDeferredDestructionData     OutOfHealthDismissDelayData;
	struct FScoutDroneDeferredDestructionData     OutOfEnergyDismissDelayData;
	TMulticastInlineDelegate<void()>              OnTeamIndexChanged;
	TSubclassOf<class UFortScoutDronePawnOverrideComponent> PawnOverrideComponentClass;
	class USoundBase*                             DroneMotorLoopSound;
	class USoundBase*                             DroneThrusterSound;
	class UAudioParameterComponent*               AudioParameter;
	class FName                                   LocallyViewedPawnAudioParamName;
	class FName                                   IsEnemyAudioParamName;
	class FName                                   ThrustAmountAudioParamName;
	float                                         ThrustSoundThreshold;
	uint8                                         Pad_7A0[0x10];

public:
	void GameplayCue_Damage(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GetForwardAndRightDotProducts_Native(float* OutForwardDot, float* OutRightDot);
	void OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnRep_ControllingPlayerPawn();
	void SetAffiliationAudio();
	void SetTeamMatesIndicator(bool bState);
	void SetupGameplayAudioParameters();

	class AFortPawn* GetControllingPlayerPawn() const;
	struct FRotator GetDeltaRotator() const;
	float GetHealthPercentage() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortScoutDrone">();
	}
	static class AFortScoutDrone* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortScoutDrone>();
	}
};
static_assert(alignof(AFortScoutDrone) == 0x000010, "Wrong alignment on AFortScoutDrone");
static_assert(sizeof(AFortScoutDrone) == 0x0007B0, "Wrong size on AFortScoutDrone");
static_assert(offsetof(AFortScoutDrone, bIsDiving) == 0x000670, "Member 'AFortScoutDrone::bIsDiving' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, DivingEnabled) == 0x000678, "Member 'AFortScoutDrone::DivingEnabled' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, bIsSpeedBoosting) == 0x0006A0, "Member 'AFortScoutDrone::bIsSpeedBoosting' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, NSScoutDroneIdle_Native) == 0x0006A8, "Member 'AFortScoutDrone::NSScoutDroneIdle_Native' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, PickupManagerComponent_Native) == 0x0006B0, "Member 'AFortScoutDrone::PickupManagerComponent_Native' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, TeamMateIndicatorMarkerWidgetClass) == 0x0006B8, "Member 'AFortScoutDrone::TeamMateIndicatorMarkerWidgetClass' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, DroneMotorLoopComponent) == 0x0006C0, "Member 'AFortScoutDrone::DroneMotorLoopComponent' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, DroneThrustSoundComponent) == 0x0006C8, "Member 'AFortScoutDrone::DroneThrustSoundComponent' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, BaseMaxFlySpeed) == 0x0006D0, "Member 'AFortScoutDrone::BaseMaxFlySpeed' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, AbilitySystemComponent) == 0x000700, "Member 'AFortScoutDrone::AbilitySystemComponent' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, AffiliationComponent) == 0x000708, "Member 'AFortScoutDrone::AffiliationComponent' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, StartupAbilitySet) == 0x000710, "Member 'AFortScoutDrone::StartupAbilitySet' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, ControllingPlayerPawn) == 0x000718, "Member 'AFortScoutDrone::ControllingPlayerPawn' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, HealthSet) == 0x000720, "Member 'AFortScoutDrone::HealthSet' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, EnergySet) == 0x000728, "Member 'AFortScoutDrone::EnergySet' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, LifespanAfterDeath) == 0x000730, "Member 'AFortScoutDrone::LifespanAfterDeath' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, AttributeInitKey) == 0x000734, "Member 'AFortScoutDrone::AttributeInitKey' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, PrimarySurfaceType) == 0x00073C, "Member 'AFortScoutDrone::PrimarySurfaceType' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, WeaponResponseType) == 0x00073D, "Member 'AFortScoutDrone::WeaponResponseType' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, bPlayedDeath) == 0x00073E, "Member 'AFortScoutDrone::bPlayedDeath' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, OutOfHealthDismissDelayData) == 0x000740, "Member 'AFortScoutDrone::OutOfHealthDismissDelayData' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, OutOfEnergyDismissDelayData) == 0x000750, "Member 'AFortScoutDrone::OutOfEnergyDismissDelayData' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, OnTeamIndexChanged) == 0x000760, "Member 'AFortScoutDrone::OnTeamIndexChanged' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, PawnOverrideComponentClass) == 0x000770, "Member 'AFortScoutDrone::PawnOverrideComponentClass' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, DroneMotorLoopSound) == 0x000778, "Member 'AFortScoutDrone::DroneMotorLoopSound' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, DroneThrusterSound) == 0x000780, "Member 'AFortScoutDrone::DroneThrusterSound' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, AudioParameter) == 0x000788, "Member 'AFortScoutDrone::AudioParameter' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, LocallyViewedPawnAudioParamName) == 0x000790, "Member 'AFortScoutDrone::LocallyViewedPawnAudioParamName' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, IsEnemyAudioParamName) == 0x000794, "Member 'AFortScoutDrone::IsEnemyAudioParamName' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, ThrustAmountAudioParamName) == 0x000798, "Member 'AFortScoutDrone::ThrustAmountAudioParamName' has a wrong offset!");
static_assert(offsetof(AFortScoutDrone, ThrustSoundThreshold) == 0x00079C, "Member 'AFortScoutDrone::ThrustSoundThreshold' has a wrong offset!");

class UFortScoutDroneCameraMode final : public UFort3PCameraMode
{
public:
	bool                                          bShouldInterpolateLocation;
	bool                                          bShouldInterpolateRotation;
	uint8                                         Pad_1EA[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortScoutDroneCameraMode">();
	}
	static class UFortScoutDroneCameraMode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortScoutDroneCameraMode>();
	}
};
static_assert(alignof(UFortScoutDroneCameraMode) == 0x000008, "Wrong alignment on UFortScoutDroneCameraMode");
static_assert(sizeof(UFortScoutDroneCameraMode) == 0x0001F0, "Wrong size on UFortScoutDroneCameraMode");
static_assert(offsetof(UFortScoutDroneCameraMode, bShouldInterpolateLocation) == 0x0001E8, "Member 'UFortScoutDroneCameraMode::bShouldInterpolateLocation' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneCameraMode, bShouldInterpolateRotation) == 0x0001E9, "Member 'UFortScoutDroneCameraMode::bShouldInterpolateRotation' has a wrong offset!");

class UScoutDroneDeferredDestructionPayload final : public UObject
{
public:
	struct FScoutDroneDeferredDestructionData     DeferredDestructionData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScoutDroneDeferredDestructionPayload">();
	}
	static class UScoutDroneDeferredDestructionPayload* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScoutDroneDeferredDestructionPayload>();
	}
};
static_assert(alignof(UScoutDroneDeferredDestructionPayload) == 0x000008, "Wrong alignment on UScoutDroneDeferredDestructionPayload");
static_assert(sizeof(UScoutDroneDeferredDestructionPayload) == 0x000038, "Wrong size on UScoutDroneDeferredDestructionPayload");
static_assert(offsetof(UScoutDroneDeferredDestructionPayload, DeferredDestructionData) == 0x000028, "Member 'UScoutDroneDeferredDestructionPayload::DeferredDestructionData' has a wrong offset!");

class UFortScoutDroneControllingComponent final : public UFortControllerComponent
{
public:
	uint8                                         Pad_A8[0x30];
	class UInputComponent*                        DroneInputComponent;
	class AFortScoutDrone*                        ControlledDrone;
	class AActor*                                 OriginalDroneOwner;
	class UFortInputMappingContext*               DroneInputContext;
	TArray<struct FScoutDroneInputTriggerableEvent> InputTriggerableEvents;
	class UInputAction*                           MoveUpAction;
	class UInputAction*                           MoveAction;
	class UInputAction*                           DismissAction;
	TSubclassOf<class UGameplayEffect>            DroneCooldownEffectClass;
	uint8                                         Pad_128[0x18];
	struct FStenciledActorData                    OwningActorStencilData;
	struct FScoutDroneDeferredDestructionData     CurrentDestructionData;
	TSubclassOf<class UFortCameraMode>            FirstPersonCameraModeOverride;
	TSubclassOf<class UFortCameraMode>            ThirdPersonCameraModeOverride;
	struct FGameplayAbilitySpec                   FakeCameraAbilitySpec;
	TArray<class FName>                           LegacyInputActionsToBlock;
	class UScoutDroneDeferredDestructionPayload*  DismissPayloadCache;
	struct FScalableFloat                         DismissButtonPressCooldown;
	uint8                                         Pad_308[0x8];
	struct FViewTargetTransitionParams            PlayerToDroneTransitionParams;
	uint8                                         Pad_320[0x8];
	struct FGameplayTagContainer                  InterruptingPlayerTags;
	uint8                                         Pad_348[0x8];

public:
	void BP_OnDestructionStarted(bool bInstantDestruction, const struct FGameplayTag& DismissalReason);
	void BP_OnDismissalStarted(bool bInstantDismissal, const struct FGameplayTag& DismissalReason);
	void BP_OnDroneDestroyed(const struct FGameplayTag& DismissalReason);
	void BP_OnPlayerInteractLongUseChanged(bool bInteracting, bool bLongUseInteractionCompleted);
	void BP_OnPlayerShortInteract();
	void OnControlledDroneDestroyed(class AActor* InControlledDrone);
	void OnOwningPlayerStartedDBNO();
	void OnPlayerInterruptionTagsChanged(const struct FGameplayTag& tag, int32 NewCount);
	void OnRep_ControlledDrone();
	void OnRep_CurrentDestructionData();
	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void ServerRequestDroneDismissal();

	class AFortScoutDrone* GetControlledDrone() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortScoutDroneControllingComponent">();
	}
	static class UFortScoutDroneControllingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortScoutDroneControllingComponent>();
	}
};
static_assert(alignof(UFortScoutDroneControllingComponent) == 0x000008, "Wrong alignment on UFortScoutDroneControllingComponent");
static_assert(sizeof(UFortScoutDroneControllingComponent) == 0x000350, "Wrong size on UFortScoutDroneControllingComponent");
static_assert(offsetof(UFortScoutDroneControllingComponent, DroneInputComponent) == 0x0000D8, "Member 'UFortScoutDroneControllingComponent::DroneInputComponent' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneControllingComponent, ControlledDrone) == 0x0000E0, "Member 'UFortScoutDroneControllingComponent::ControlledDrone' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneControllingComponent, OriginalDroneOwner) == 0x0000E8, "Member 'UFortScoutDroneControllingComponent::OriginalDroneOwner' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneControllingComponent, DroneInputContext) == 0x0000F0, "Member 'UFortScoutDroneControllingComponent::DroneInputContext' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneControllingComponent, InputTriggerableEvents) == 0x0000F8, "Member 'UFortScoutDroneControllingComponent::InputTriggerableEvents' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneControllingComponent, MoveUpAction) == 0x000108, "Member 'UFortScoutDroneControllingComponent::MoveUpAction' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneControllingComponent, MoveAction) == 0x000110, "Member 'UFortScoutDroneControllingComponent::MoveAction' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneControllingComponent, DismissAction) == 0x000118, "Member 'UFortScoutDroneControllingComponent::DismissAction' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneControllingComponent, DroneCooldownEffectClass) == 0x000120, "Member 'UFortScoutDroneControllingComponent::DroneCooldownEffectClass' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneControllingComponent, OwningActorStencilData) == 0x000140, "Member 'UFortScoutDroneControllingComponent::OwningActorStencilData' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneControllingComponent, CurrentDestructionData) == 0x0001C0, "Member 'UFortScoutDroneControllingComponent::CurrentDestructionData' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneControllingComponent, FirstPersonCameraModeOverride) == 0x0001D0, "Member 'UFortScoutDroneControllingComponent::FirstPersonCameraModeOverride' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneControllingComponent, ThirdPersonCameraModeOverride) == 0x0001D8, "Member 'UFortScoutDroneControllingComponent::ThirdPersonCameraModeOverride' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneControllingComponent, FakeCameraAbilitySpec) == 0x0001E0, "Member 'UFortScoutDroneControllingComponent::FakeCameraAbilitySpec' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneControllingComponent, LegacyInputActionsToBlock) == 0x0002C8, "Member 'UFortScoutDroneControllingComponent::LegacyInputActionsToBlock' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneControllingComponent, DismissPayloadCache) == 0x0002D8, "Member 'UFortScoutDroneControllingComponent::DismissPayloadCache' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneControllingComponent, DismissButtonPressCooldown) == 0x0002E0, "Member 'UFortScoutDroneControllingComponent::DismissButtonPressCooldown' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneControllingComponent, PlayerToDroneTransitionParams) == 0x000310, "Member 'UFortScoutDroneControllingComponent::PlayerToDroneTransitionParams' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneControllingComponent, InterruptingPlayerTags) == 0x000328, "Member 'UFortScoutDroneControllingComponent::InterruptingPlayerTags' has a wrong offset!");

class UFortScoutDroneCooldownMagnitudeCalculation final : public UFortGameplayModMagnitudeCalculation
{
public:
	struct FScalableFloat                         MinDroneCooldown;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortScoutDroneCooldownMagnitudeCalculation">();
	}
	static class UFortScoutDroneCooldownMagnitudeCalculation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortScoutDroneCooldownMagnitudeCalculation>();
	}
};
static_assert(alignof(UFortScoutDroneCooldownMagnitudeCalculation) == 0x000008, "Wrong alignment on UFortScoutDroneCooldownMagnitudeCalculation");
static_assert(sizeof(UFortScoutDroneCooldownMagnitudeCalculation) == 0x000068, "Wrong size on UFortScoutDroneCooldownMagnitudeCalculation");
static_assert(offsetof(UFortScoutDroneCooldownMagnitudeCalculation, MinDroneCooldown) == 0x000040, "Member 'UFortScoutDroneCooldownMagnitudeCalculation::MinDroneCooldown' has a wrong offset!");

class UFortScoutDroneMovementComponent final : public UCharacterMovementComponent
{
public:
	struct FVector                                LocalInputState;
	struct FVector                                LastInputState;
	struct FVector                                ReplicatedAcceleration;
	struct FScalableFloat                         StrafeInputMultiplier;
	struct FScalableFloat                         BacktrackingInputMultiplier;
	struct FScalableFloat                         VerticalMovementInputMultiplier;
	uint8                                         Pad_F98[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortScoutDroneMovementComponent">();
	}
	static class UFortScoutDroneMovementComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortScoutDroneMovementComponent>();
	}
};
static_assert(alignof(UFortScoutDroneMovementComponent) == 0x000010, "Wrong alignment on UFortScoutDroneMovementComponent");
static_assert(sizeof(UFortScoutDroneMovementComponent) == 0x000FA0, "Wrong size on UFortScoutDroneMovementComponent");
static_assert(offsetof(UFortScoutDroneMovementComponent, LocalInputState) == 0x000ED8, "Member 'UFortScoutDroneMovementComponent::LocalInputState' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneMovementComponent, LastInputState) == 0x000EF0, "Member 'UFortScoutDroneMovementComponent::LastInputState' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneMovementComponent, ReplicatedAcceleration) == 0x000F08, "Member 'UFortScoutDroneMovementComponent::ReplicatedAcceleration' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneMovementComponent, StrafeInputMultiplier) == 0x000F20, "Member 'UFortScoutDroneMovementComponent::StrafeInputMultiplier' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneMovementComponent, BacktrackingInputMultiplier) == 0x000F48, "Member 'UFortScoutDroneMovementComponent::BacktrackingInputMultiplier' has a wrong offset!");
static_assert(offsetof(UFortScoutDroneMovementComponent, VerticalMovementInputMultiplier) == 0x000F70, "Member 'UFortScoutDroneMovementComponent::VerticalMovementInputMultiplier' has a wrong offset!");

class UFortScoutDronePawnOverrideComponent final : public UFortPawnOverrideComponent
{
public:
	TSubclassOf<class UFortCameraMode>            DroneSpectateCameraMode;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortScoutDronePawnOverrideComponent">();
	}
	static class UFortScoutDronePawnOverrideComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortScoutDronePawnOverrideComponent>();
	}
};
static_assert(alignof(UFortScoutDronePawnOverrideComponent) == 0x000008, "Wrong alignment on UFortScoutDronePawnOverrideComponent");
static_assert(sizeof(UFortScoutDronePawnOverrideComponent) == 0x0000B0, "Wrong size on UFortScoutDronePawnOverrideComponent");
static_assert(offsetof(UFortScoutDronePawnOverrideComponent, DroneSpectateCameraMode) == 0x0000A8, "Member 'UFortScoutDronePawnOverrideComponent::DroneSpectateCameraMode' has a wrong offset!");

class UFortScoutDronePawnOwnerOverrideComponent final : public UFortPawnOverrideComponent
{
public:
	TWeakObjectPtr<class AFortScoutDrone>         ControlledDrone;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortScoutDronePawnOwnerOverrideComponent">();
	}
	static class UFortScoutDronePawnOwnerOverrideComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortScoutDronePawnOwnerOverrideComponent>();
	}
};
static_assert(alignof(UFortScoutDronePawnOwnerOverrideComponent) == 0x000008, "Wrong alignment on UFortScoutDronePawnOwnerOverrideComponent");
static_assert(sizeof(UFortScoutDronePawnOwnerOverrideComponent) == 0x0000B0, "Wrong size on UFortScoutDronePawnOwnerOverrideComponent");
static_assert(offsetof(UFortScoutDronePawnOwnerOverrideComponent, ControlledDrone) == 0x0000A8, "Member 'UFortScoutDronePawnOwnerOverrideComponent::ControlledDrone' has a wrong offset!");

class UFortScoutDronePickupManager final : public UPawnComponent
{
public:
	struct FScoutDronePickupTargets               AttachedTargets;
	class FName                                   AttachPointSocketName;
	uint8                                         Pad_BC[0x4];
	struct FScoutDronePickupTargets               PreviouslyAttachedTargets;
	struct FVector                                ItemOffset;
	struct FVector                                DBNOPawnOffset;
	float                                         CurrentlyAppliedCameraOffset;
	uint8                                         Pad_10C[0x4];
	struct FScoutDroneCapsuleSizeData             MaxExtraCapsuleDimensions;
	struct FScalableFloat                         MaxPickupSpread;
	struct FScalableFloat                         PickupTossSpeed;
	struct FGameplayTagContainer                  ItemsPickupTags;
	uint8                                         Pad_1D0[0x8];

public:
	void BP_OnActorsAttached();
	void BP_OnActorsDetached();
	void OnAttachedPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnPawnDBNOStateChanged(class AFortPawn* Pawn, bool bIsDBNO);
	void OnRep_AttachedTargets();
	void ServerDropAttachedActors();
	void ServerUpdateItemAttachment(const struct FVector& CalculatedItemOffset);

	bool HasAnyAttachedActors() const;
	bool HasAPawnAtached() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortScoutDronePickupManager">();
	}
	static class UFortScoutDronePickupManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortScoutDronePickupManager>();
	}
};
static_assert(alignof(UFortScoutDronePickupManager) == 0x000008, "Wrong alignment on UFortScoutDronePickupManager");
static_assert(sizeof(UFortScoutDronePickupManager) == 0x0001D8, "Wrong size on UFortScoutDronePickupManager");
static_assert(offsetof(UFortScoutDronePickupManager, AttachedTargets) == 0x0000A0, "Member 'UFortScoutDronePickupManager::AttachedTargets' has a wrong offset!");
static_assert(offsetof(UFortScoutDronePickupManager, AttachPointSocketName) == 0x0000B8, "Member 'UFortScoutDronePickupManager::AttachPointSocketName' has a wrong offset!");
static_assert(offsetof(UFortScoutDronePickupManager, PreviouslyAttachedTargets) == 0x0000C0, "Member 'UFortScoutDronePickupManager::PreviouslyAttachedTargets' has a wrong offset!");
static_assert(offsetof(UFortScoutDronePickupManager, ItemOffset) == 0x0000D8, "Member 'UFortScoutDronePickupManager::ItemOffset' has a wrong offset!");
static_assert(offsetof(UFortScoutDronePickupManager, DBNOPawnOffset) == 0x0000F0, "Member 'UFortScoutDronePickupManager::DBNOPawnOffset' has a wrong offset!");
static_assert(offsetof(UFortScoutDronePickupManager, CurrentlyAppliedCameraOffset) == 0x000108, "Member 'UFortScoutDronePickupManager::CurrentlyAppliedCameraOffset' has a wrong offset!");
static_assert(offsetof(UFortScoutDronePickupManager, MaxExtraCapsuleDimensions) == 0x000110, "Member 'UFortScoutDronePickupManager::MaxExtraCapsuleDimensions' has a wrong offset!");
static_assert(offsetof(UFortScoutDronePickupManager, MaxPickupSpread) == 0x000160, "Member 'UFortScoutDronePickupManager::MaxPickupSpread' has a wrong offset!");
static_assert(offsetof(UFortScoutDronePickupManager, PickupTossSpeed) == 0x000188, "Member 'UFortScoutDronePickupManager::PickupTossSpeed' has a wrong offset!");
static_assert(offsetof(UFortScoutDronePickupManager, ItemsPickupTags) == 0x0001B0, "Member 'UFortScoutDronePickupManager::ItemsPickupTags' has a wrong offset!");

}
