#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "IrisCore_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EFortDagwoodSimEvent : uint8
{
	EnterLandscape                           = 0,
	ExitLandscape                            = 1,
	EnterRoad                                = 2,
	ExitRoad                                 = 3,
	Explode                                  = 4,
	FlipImpact                               = 5,
	StartBoost                               = 6,
	FinishBoost                              = 7,
	EFortDagwoodSimEvent_MAX                 = 8,
};

enum class EControlsPrototypes : uint8
{
	CameraSteering                           = 0,
	NonCameraSteering                        = 1,
	HybridCameraSteering                     = 2,
	MaxCount                                 = 3,
	EControlsPrototypes_MAX                  = 4,
};

enum class EPoppedTireReactionStates : uint8
{
	None                                     = 0,
	VeerLeft                                 = 1,
	VeerRight                                = 2,
	Wiggle                                   = 3,
	Yaw90                                    = 4,
	FlipPitch                                = 5,
	FlipRoll                                 = 6,
	EPoppedTireReactionStates_MAX            = 7,
};

enum class ETireLocations : uint8
{
	FrontRight                               = 0,
	FrontLeft                                = 1,
	BackRight                                = 2,
	BackLeft                                 = 3,
	ETireLocations_MAX                       = 4,
};

enum class EVehicleClass : uint8
{
	Sedan                                    = 0,
	Sport                                    = 1,
	PickupTruck                              = 2,
	SemiTruck                                = 3,
	EVehicleClass_MAX                        = 4,
};

struct FRuntimeFuelInfo final
{
public:
	float                                         MaxFuel;
	float                                         FuelPerSecondDriving;
	float                                         FuelPerSecondBoosting;
};
static_assert(alignof(FRuntimeFuelInfo) == 0x000004, "Wrong alignment on FRuntimeFuelInfo");
static_assert(sizeof(FRuntimeFuelInfo) == 0x00000C, "Wrong size on FRuntimeFuelInfo");
static_assert(offsetof(FRuntimeFuelInfo, MaxFuel) == 0x000000, "Member 'FRuntimeFuelInfo::MaxFuel' has a wrong offset!");
static_assert(offsetof(FRuntimeFuelInfo, FuelPerSecondDriving) == 0x000004, "Member 'FRuntimeFuelInfo::FuelPerSecondDriving' has a wrong offset!");
static_assert(offsetof(FRuntimeFuelInfo, FuelPerSecondBoosting) == 0x000008, "Member 'FRuntimeFuelInfo::FuelPerSecondBoosting' has a wrong offset!");

struct FNetworkPhysicsStateNetSerializerDebugData final
{
public:
	struct FVector                                Force;
	struct FVector                                Torque;
	struct FVector                                LinearImpulse;
	struct FVector                                AngularImpulse;
};
static_assert(alignof(FNetworkPhysicsStateNetSerializerDebugData) == 0x000008, "Wrong alignment on FNetworkPhysicsStateNetSerializerDebugData");
static_assert(sizeof(FNetworkPhysicsStateNetSerializerDebugData) == 0x000060, "Wrong size on FNetworkPhysicsStateNetSerializerDebugData");
static_assert(offsetof(FNetworkPhysicsStateNetSerializerDebugData, Force) == 0x000000, "Member 'FNetworkPhysicsStateNetSerializerDebugData::Force' has a wrong offset!");
static_assert(offsetof(FNetworkPhysicsStateNetSerializerDebugData, Torque) == 0x000018, "Member 'FNetworkPhysicsStateNetSerializerDebugData::Torque' has a wrong offset!");
static_assert(offsetof(FNetworkPhysicsStateNetSerializerDebugData, LinearImpulse) == 0x000030, "Member 'FNetworkPhysicsStateNetSerializerDebugData::LinearImpulse' has a wrong offset!");
static_assert(offsetof(FNetworkPhysicsStateNetSerializerDebugData, AngularImpulse) == 0x000048, "Member 'FNetworkPhysicsStateNetSerializerDebugData::AngularImpulse' has a wrong offset!");

struct FFortDagwoodCmd final
{
public:
	float                                         ForwardAlpha;
	float                                         RightAlpha;
	float                                         AccelerationAlpha;
	uint8                                         Pad_C[0x4];
	struct FVector_NetQuantize100                 MovementDir;
	uint8                                         bBoost : 1;
	uint8                                         bHandbrake : 1;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(FFortDagwoodCmd) == 0x000008, "Wrong alignment on FFortDagwoodCmd");
static_assert(sizeof(FFortDagwoodCmd) == 0x000030, "Wrong size on FFortDagwoodCmd");
static_assert(offsetof(FFortDagwoodCmd, ForwardAlpha) == 0x000000, "Member 'FFortDagwoodCmd::ForwardAlpha' has a wrong offset!");
static_assert(offsetof(FFortDagwoodCmd, RightAlpha) == 0x000004, "Member 'FFortDagwoodCmd::RightAlpha' has a wrong offset!");
static_assert(offsetof(FFortDagwoodCmd, AccelerationAlpha) == 0x000008, "Member 'FFortDagwoodCmd::AccelerationAlpha' has a wrong offset!");
static_assert(offsetof(FFortDagwoodCmd, MovementDir) == 0x000010, "Member 'FFortDagwoodCmd::MovementDir' has a wrong offset!");

struct FDagwoodActionDefForUI final
{
public:
	TArray<struct FActionDefForUI>                ActionDefForUI;
};
static_assert(alignof(FDagwoodActionDefForUI) == 0x000008, "Wrong alignment on FDagwoodActionDefForUI");
static_assert(sizeof(FDagwoodActionDefForUI) == 0x000010, "Wrong size on FDagwoodActionDefForUI");
static_assert(offsetof(FDagwoodActionDefForUI, ActionDefForUI) == 0x000000, "Member 'FDagwoodActionDefForUI::ActionDefForUI' has a wrong offset!");

struct FRuntimeBoostInfo final
{
public:
	uint8                                         bCanBoost : 1;
	uint8                                         bUsesRechargeableBoost : 1;
	uint8                                         Pad_1[0x3];
	float                                         BoostPushForce;
	float                                         BoostTopSpeedForceMultiplier;
	float                                         BoostTopSpeedMultiplier;
	float                                         RechargeableBoostRateOfRegen;
	float                                         RechargeableBoostRateOfUse;
};
static_assert(alignof(FRuntimeBoostInfo) == 0x000004, "Wrong alignment on FRuntimeBoostInfo");
static_assert(sizeof(FRuntimeBoostInfo) == 0x000018, "Wrong size on FRuntimeBoostInfo");
static_assert(offsetof(FRuntimeBoostInfo, BoostPushForce) == 0x000004, "Member 'FRuntimeBoostInfo::BoostPushForce' has a wrong offset!");
static_assert(offsetof(FRuntimeBoostInfo, BoostTopSpeedForceMultiplier) == 0x000008, "Member 'FRuntimeBoostInfo::BoostTopSpeedForceMultiplier' has a wrong offset!");
static_assert(offsetof(FRuntimeBoostInfo, BoostTopSpeedMultiplier) == 0x00000C, "Member 'FRuntimeBoostInfo::BoostTopSpeedMultiplier' has a wrong offset!");
static_assert(offsetof(FRuntimeBoostInfo, RechargeableBoostRateOfRegen) == 0x000010, "Member 'FRuntimeBoostInfo::RechargeableBoostRateOfRegen' has a wrong offset!");
static_assert(offsetof(FRuntimeBoostInfo, RechargeableBoostRateOfUse) == 0x000014, "Member 'FRuntimeBoostInfo::RechargeableBoostRateOfUse' has a wrong offset!");

struct FRuntimeGearInfo final
{
public:
	int32                                         GearIndex;
	float                                         TopSpeed;
	float                                         MinSpeed;
	float                                         PushForce;
};
static_assert(alignof(FRuntimeGearInfo) == 0x000004, "Wrong alignment on FRuntimeGearInfo");
static_assert(sizeof(FRuntimeGearInfo) == 0x000010, "Wrong size on FRuntimeGearInfo");
static_assert(offsetof(FRuntimeGearInfo, GearIndex) == 0x000000, "Member 'FRuntimeGearInfo::GearIndex' has a wrong offset!");
static_assert(offsetof(FRuntimeGearInfo, TopSpeed) == 0x000004, "Member 'FRuntimeGearInfo::TopSpeed' has a wrong offset!");
static_assert(offsetof(FRuntimeGearInfo, MinSpeed) == 0x000008, "Member 'FRuntimeGearInfo::MinSpeed' has a wrong offset!");
static_assert(offsetof(FRuntimeGearInfo, PushForce) == 0x00000C, "Member 'FRuntimeGearInfo::PushForce' has a wrong offset!");

struct FDagwoodRuntimeModifiers final
{
public:
	struct FRuntimeBoostInfo                      BoostInfo;
	struct FRuntimeFuelInfo                       FuelInfo;
	struct FRuntimeSpringsInfo                    SpringsInfo;
	bool                                          bDamageFriendlyVehicles;
	bool                                          bDamageOtherVehicles;
	bool                                          bDamageOwnVehicle;
	bool                                          bDamageAllowedFromOtherVehicle;
	float                                         GravityMultiplier;
	float                                         MaxInclineAngle;
	float                                         MaxTiltAngle;
	uint8                                         Pad_54[0x4];
	TArray<struct FRuntimeGearInfo>               GearInfos;
	struct FGameplayTag                           TireModTag;
	uint8                                         TireModVersion;
	bool                                          bTireModAdjustsPosition;
	uint8                                         DataVersion;
	uint8                                         Pad_6F[0x1];
};
static_assert(alignof(FDagwoodRuntimeModifiers) == 0x000008, "Wrong alignment on FDagwoodRuntimeModifiers");
static_assert(sizeof(FDagwoodRuntimeModifiers) == 0x000070, "Wrong size on FDagwoodRuntimeModifiers");
static_assert(offsetof(FDagwoodRuntimeModifiers, BoostInfo) == 0x000000, "Member 'FDagwoodRuntimeModifiers::BoostInfo' has a wrong offset!");
static_assert(offsetof(FDagwoodRuntimeModifiers, FuelInfo) == 0x000018, "Member 'FDagwoodRuntimeModifiers::FuelInfo' has a wrong offset!");
static_assert(offsetof(FDagwoodRuntimeModifiers, SpringsInfo) == 0x000024, "Member 'FDagwoodRuntimeModifiers::SpringsInfo' has a wrong offset!");
static_assert(offsetof(FDagwoodRuntimeModifiers, bDamageFriendlyVehicles) == 0x000044, "Member 'FDagwoodRuntimeModifiers::bDamageFriendlyVehicles' has a wrong offset!");
static_assert(offsetof(FDagwoodRuntimeModifiers, bDamageOtherVehicles) == 0x000045, "Member 'FDagwoodRuntimeModifiers::bDamageOtherVehicles' has a wrong offset!");
static_assert(offsetof(FDagwoodRuntimeModifiers, bDamageOwnVehicle) == 0x000046, "Member 'FDagwoodRuntimeModifiers::bDamageOwnVehicle' has a wrong offset!");
static_assert(offsetof(FDagwoodRuntimeModifiers, bDamageAllowedFromOtherVehicle) == 0x000047, "Member 'FDagwoodRuntimeModifiers::bDamageAllowedFromOtherVehicle' has a wrong offset!");
static_assert(offsetof(FDagwoodRuntimeModifiers, GravityMultiplier) == 0x000048, "Member 'FDagwoodRuntimeModifiers::GravityMultiplier' has a wrong offset!");
static_assert(offsetof(FDagwoodRuntimeModifiers, MaxInclineAngle) == 0x00004C, "Member 'FDagwoodRuntimeModifiers::MaxInclineAngle' has a wrong offset!");
static_assert(offsetof(FDagwoodRuntimeModifiers, MaxTiltAngle) == 0x000050, "Member 'FDagwoodRuntimeModifiers::MaxTiltAngle' has a wrong offset!");
static_assert(offsetof(FDagwoodRuntimeModifiers, GearInfos) == 0x000058, "Member 'FDagwoodRuntimeModifiers::GearInfos' has a wrong offset!");
static_assert(offsetof(FDagwoodRuntimeModifiers, TireModTag) == 0x000068, "Member 'FDagwoodRuntimeModifiers::TireModTag' has a wrong offset!");
static_assert(offsetof(FDagwoodRuntimeModifiers, TireModVersion) == 0x00006C, "Member 'FDagwoodRuntimeModifiers::TireModVersion' has a wrong offset!");
static_assert(offsetof(FDagwoodRuntimeModifiers, bTireModAdjustsPosition) == 0x00006D, "Member 'FDagwoodRuntimeModifiers::bTireModAdjustsPosition' has a wrong offset!");
static_assert(offsetof(FDagwoodRuntimeModifiers, DataVersion) == 0x00006E, "Member 'FDagwoodRuntimeModifiers::DataVersion' has a wrong offset!");

struct FDagwoodInPersistent final : public FFortVehicleInPersistent
{
public:
	class UFortDagwoodVehicleConfigs*             FortDagwoodVehicleConfigs;
	struct FDagwoodRuntimeModifiers               DagwoodRuntimeModifiedProperties;
	uint8                                         Pad_200[0x48];
};
static_assert(alignof(FDagwoodInPersistent) == 0x000008, "Wrong alignment on FDagwoodInPersistent");
static_assert(sizeof(FDagwoodInPersistent) == 0x000248, "Wrong size on FDagwoodInPersistent");
static_assert(offsetof(FDagwoodInPersistent, FortDagwoodVehicleConfigs) == 0x000188, "Member 'FDagwoodInPersistent::FortDagwoodVehicleConfigs' has a wrong offset!");
static_assert(offsetof(FDagwoodInPersistent, DagwoodRuntimeModifiedProperties) == 0x000190, "Member 'FDagwoodInPersistent::DagwoodRuntimeModifiedProperties' has a wrong offset!");

struct FDagwoodOutContinuous final : public FFortVehicleOutContinuous
{
public:
	uint8                                         Pad_38[0x10];
};
static_assert(alignof(FDagwoodOutContinuous) == 0x000008, "Wrong alignment on FDagwoodOutContinuous");
static_assert(sizeof(FDagwoodOutContinuous) == 0x000048, "Wrong size on FDagwoodOutContinuous");

struct FTireSimulationRuntimeData final
{
public:
	struct FRuntimeTerrainHandlingInfo            HandlingInfo;
	float                                         PoppedTireSpringLength;
	float                                         PoppedTireSpringStiff;
	float                                         PoppedTireSpringDamp;
};
static_assert(alignof(FTireSimulationRuntimeData) == 0x000004, "Wrong alignment on FTireSimulationRuntimeData");
static_assert(sizeof(FTireSimulationRuntimeData) == 0x000020, "Wrong size on FTireSimulationRuntimeData");
static_assert(offsetof(FTireSimulationRuntimeData, HandlingInfo) == 0x000000, "Member 'FTireSimulationRuntimeData::HandlingInfo' has a wrong offset!");
static_assert(offsetof(FTireSimulationRuntimeData, PoppedTireSpringLength) == 0x000014, "Member 'FTireSimulationRuntimeData::PoppedTireSpringLength' has a wrong offset!");
static_assert(offsetof(FTireSimulationRuntimeData, PoppedTireSpringStiff) == 0x000018, "Member 'FTireSimulationRuntimeData::PoppedTireSpringStiff' has a wrong offset!");
static_assert(offsetof(FTireSimulationRuntimeData, PoppedTireSpringDamp) == 0x00001C, "Member 'FTireSimulationRuntimeData::PoppedTireSpringDamp' has a wrong offset!");

struct alignas(0x04) FValetUpdateContext final
{
public:
	uint8                                         Pad_0[0x18];
};
static_assert(alignof(FValetUpdateContext) == 0x000004, "Wrong alignment on FValetUpdateContext");
static_assert(sizeof(FValetUpdateContext) == 0x000018, "Wrong size on FValetUpdateContext");

struct FDagwoodInternal final : public FFortVehicleInternalPersistent
{
public:
	uint8                                         Pad_80[0xB8];
};
static_assert(alignof(FDagwoodInternal) == 0x000008, "Wrong alignment on FDagwoodInternal");
static_assert(sizeof(FDagwoodInternal) == 0x000138, "Wrong size on FDagwoodInternal");

struct FDagwoodOutPersistent final : public FFortVehicleOutPersistent
{
public:
	bool                                          bHasTraction;
	bool                                          bStartHandBrakeCatchupForce;
	uint8                                         Pad_2A[0x6];
};
static_assert(alignof(FDagwoodOutPersistent) == 0x000008, "Wrong alignment on FDagwoodOutPersistent");
static_assert(sizeof(FDagwoodOutPersistent) == 0x000030, "Wrong size on FDagwoodOutPersistent");
static_assert(offsetof(FDagwoodOutPersistent, bHasTraction) == 0x000028, "Member 'FDagwoodOutPersistent::bHasTraction' has a wrong offset!");
static_assert(offsetof(FDagwoodOutPersistent, bStartHandBrakeCatchupForce) == 0x000029, "Member 'FDagwoodOutPersistent::bStartHandBrakeCatchupForce' has a wrong offset!");

struct FDagwoodState_PT final
{
public:
	struct FDagwoodInternal                       Internal;
	struct FDagwoodOutPersistent                  OutPersistent;
	struct FDagwoodOutContinuous                  OutContinuous;
	bool                                          bOutValid;
	uint8                                         Pad_1B1[0x7];
};
static_assert(alignof(FDagwoodState_PT) == 0x000008, "Wrong alignment on FDagwoodState_PT");
static_assert(sizeof(FDagwoodState_PT) == 0x0001B8, "Wrong size on FDagwoodState_PT");
static_assert(offsetof(FDagwoodState_PT, Internal) == 0x000000, "Member 'FDagwoodState_PT::Internal' has a wrong offset!");
static_assert(offsetof(FDagwoodState_PT, OutPersistent) == 0x000138, "Member 'FDagwoodState_PT::OutPersistent' has a wrong offset!");
static_assert(offsetof(FDagwoodState_PT, OutContinuous) == 0x000168, "Member 'FDagwoodState_PT::OutContinuous' has a wrong offset!");
static_assert(offsetof(FDagwoodState_PT, bOutValid) == 0x0001B0, "Member 'FDagwoodState_PT::bOutValid' has a wrong offset!");

struct FDagwoodFutureClientInput final
{
public:
	int32                                         Frame;
	uint8                                         Pad_4[0x4];
	struct FFortDagwoodCmd                        InputCmd;
};
static_assert(alignof(FDagwoodFutureClientInput) == 0x000008, "Wrong alignment on FDagwoodFutureClientInput");
static_assert(sizeof(FDagwoodFutureClientInput) == 0x000038, "Wrong size on FDagwoodFutureClientInput");
static_assert(offsetof(FDagwoodFutureClientInput, Frame) == 0x000000, "Member 'FDagwoodFutureClientInput::Frame' has a wrong offset!");
static_assert(offsetof(FDagwoodFutureClientInput, InputCmd) == 0x000008, "Member 'FDagwoodFutureClientInput::InputCmd' has a wrong offset!");

struct FDagwoodManagedState final
{
public:
	int32                                         Frame;
	uint8                                         Pad_4[0x4];
	struct FFortDagwoodCmd                        InputCmd;
	struct FDagwoodInPersistent                   GT_State;
	struct FDagwoodState_PT                       PT_State;
	class APlayerController*                      PC;
	uint8                                         Pad_440[0x8];
	TArray<struct FDagwoodFutureClientInput>      FutureInputs;
};
static_assert(alignof(FDagwoodManagedState) == 0x000008, "Wrong alignment on FDagwoodManagedState");
static_assert(sizeof(FDagwoodManagedState) == 0x000458, "Wrong size on FDagwoodManagedState");
static_assert(offsetof(FDagwoodManagedState, Frame) == 0x000000, "Member 'FDagwoodManagedState::Frame' has a wrong offset!");
static_assert(offsetof(FDagwoodManagedState, InputCmd) == 0x000008, "Member 'FDagwoodManagedState::InputCmd' has a wrong offset!");
static_assert(offsetof(FDagwoodManagedState, GT_State) == 0x000038, "Member 'FDagwoodManagedState::GT_State' has a wrong offset!");
static_assert(offsetof(FDagwoodManagedState, PT_State) == 0x000280, "Member 'FDagwoodManagedState::PT_State' has a wrong offset!");
static_assert(offsetof(FDagwoodManagedState, PC) == 0x000438, "Member 'FDagwoodManagedState::PC' has a wrong offset!");
static_assert(offsetof(FDagwoodManagedState, FutureInputs) == 0x000448, "Member 'FDagwoodManagedState::FutureInputs' has a wrong offset!");

struct alignas(0x10) FNetworkPhysicsState final
{
public:
	uint8                                         Pad_0[0x90];
};
static_assert(alignof(FNetworkPhysicsState) == 0x000010, "Wrong alignment on FNetworkPhysicsState");
static_assert(sizeof(FNetworkPhysicsState) == 0x000090, "Wrong size on FNetworkPhysicsState");

struct FNetworkPhysicsStateNetSerializerState final
{
public:
	struct FVector                                Location;
	struct FVector                                LinearVelocity;
	struct FVector                                AngularVelocity;
	uint8                                         Pad_48[0x8];
	struct FQuat                                  Rotation;
	int32                                         NetworkHandle;
	int32                                         Frame;
	uint8                                         ObjectState;
	uint8                                         Pad_79[0x7];
};
static_assert(alignof(FNetworkPhysicsStateNetSerializerState) == 0x000010, "Wrong alignment on FNetworkPhysicsStateNetSerializerState");
static_assert(sizeof(FNetworkPhysicsStateNetSerializerState) == 0x000080, "Wrong size on FNetworkPhysicsStateNetSerializerState");
static_assert(offsetof(FNetworkPhysicsStateNetSerializerState, Location) == 0x000000, "Member 'FNetworkPhysicsStateNetSerializerState::Location' has a wrong offset!");
static_assert(offsetof(FNetworkPhysicsStateNetSerializerState, LinearVelocity) == 0x000018, "Member 'FNetworkPhysicsStateNetSerializerState::LinearVelocity' has a wrong offset!");
static_assert(offsetof(FNetworkPhysicsStateNetSerializerState, AngularVelocity) == 0x000030, "Member 'FNetworkPhysicsStateNetSerializerState::AngularVelocity' has a wrong offset!");
static_assert(offsetof(FNetworkPhysicsStateNetSerializerState, Rotation) == 0x000050, "Member 'FNetworkPhysicsStateNetSerializerState::Rotation' has a wrong offset!");
static_assert(offsetof(FNetworkPhysicsStateNetSerializerState, NetworkHandle) == 0x000070, "Member 'FNetworkPhysicsStateNetSerializerState::NetworkHandle' has a wrong offset!");
static_assert(offsetof(FNetworkPhysicsStateNetSerializerState, Frame) == 0x000074, "Member 'FNetworkPhysicsStateNetSerializerState::Frame' has a wrong offset!");
static_assert(offsetof(FNetworkPhysicsStateNetSerializerState, ObjectState) == 0x000078, "Member 'FNetworkPhysicsStateNetSerializerState::ObjectState' has a wrong offset!");

struct FNetworkPhysicsStateNetSerializerDebugState final
{
public:
	struct FNetworkPhysicsStateNetSerializerDebugData DebugData[0x3];
};
static_assert(alignof(FNetworkPhysicsStateNetSerializerDebugState) == 0x000008, "Wrong alignment on FNetworkPhysicsStateNetSerializerDebugState");
static_assert(sizeof(FNetworkPhysicsStateNetSerializerDebugState) == 0x000120, "Wrong size on FNetworkPhysicsStateNetSerializerDebugState");
static_assert(offsetof(FNetworkPhysicsStateNetSerializerDebugState, DebugData) == 0x000000, "Member 'FNetworkPhysicsStateNetSerializerDebugState::DebugData' has a wrong offset!");

struct FNetworkPhysicsStateNetSerializerConfig final : public FNetSerializerConfig
{
};
static_assert(alignof(FNetworkPhysicsStateNetSerializerConfig) == 0x000008, "Wrong alignment on FNetworkPhysicsStateNetSerializerConfig");
static_assert(sizeof(FNetworkPhysicsStateNetSerializerConfig) == 0x000010, "Wrong size on FNetworkPhysicsStateNetSerializerConfig");

struct FVehicleAttachment final
{
public:
	class FName                                   ModName;
	class FName                                   SocketName;
	class USkeletalMesh*                          SkeletalMesh;
};
static_assert(alignof(FVehicleAttachment) == 0x000008, "Wrong alignment on FVehicleAttachment");
static_assert(sizeof(FVehicleAttachment) == 0x000010, "Wrong size on FVehicleAttachment");
static_assert(offsetof(FVehicleAttachment, ModName) == 0x000000, "Member 'FVehicleAttachment::ModName' has a wrong offset!");
static_assert(offsetof(FVehicleAttachment, SocketName) == 0x000004, "Member 'FVehicleAttachment::SocketName' has a wrong offset!");
static_assert(offsetof(FVehicleAttachment, SkeletalMesh) == 0x000008, "Member 'FVehicleAttachment::SkeletalMesh' has a wrong offset!");

struct FVehiclePropReplacementData final
{
public:
	TSoftObjectPtr<class UFortVehicleItemDefinition> FortVehicleItemDefinition;
	struct FVector                                TransOffset;
	struct FRotator                               RotOffset;
};
static_assert(alignof(FVehiclePropReplacementData) == 0x000008, "Wrong alignment on FVehiclePropReplacementData");
static_assert(sizeof(FVehiclePropReplacementData) == 0x000058, "Wrong size on FVehiclePropReplacementData");
static_assert(offsetof(FVehiclePropReplacementData, FortVehicleItemDefinition) == 0x000000, "Member 'FVehiclePropReplacementData::FortVehicleItemDefinition' has a wrong offset!");
static_assert(offsetof(FVehiclePropReplacementData, TransOffset) == 0x000028, "Member 'FVehiclePropReplacementData::TransOffset' has a wrong offset!");
static_assert(offsetof(FVehiclePropReplacementData, RotOffset) == 0x000040, "Member 'FVehiclePropReplacementData::RotOffset' has a wrong offset!");

}
