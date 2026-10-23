#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class ETractorBeamState : uint8
{
	TBS_Inactive                             = 0,
	TBS_Charging                             = 1,
	TBS_Active                               = 2,
	TBS_MAX                                  = 3,
};

enum class ENevadaFlightStates : uint8
{
	FLIGHT                                   = 0,
	CRASHING                                 = 1,
	CRASHED                                  = 2,
	REBOOTING                                = 3,
	LANDING                                  = 4,
	LANDED                                   = 5,
	IDLE                                     = 6,
	NONE                                     = 7,
	ENevadaFlightStates_MAX                  = 8,
};

struct FNevadaAudioUpdateContext final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FNevadaAudioUpdateContext) == 0x000001, "Wrong alignment on FNevadaAudioUpdateContext");
static_assert(sizeof(FNevadaAudioUpdateContext) == 0x000001, "Wrong size on FNevadaAudioUpdateContext");

struct FNevadaOutContinuous final : public FFortVehicleOutContinuous
{
public:
	float                                         AltimeterTraceHitDistance;
	float                                         TractorBeamAppliedForceMagnitude;
};
static_assert(alignof(FNevadaOutContinuous) == 0x000008, "Wrong alignment on FNevadaOutContinuous");
static_assert(sizeof(FNevadaOutContinuous) == 0x000040, "Wrong size on FNevadaOutContinuous");
static_assert(offsetof(FNevadaOutContinuous, AltimeterTraceHitDistance) == 0x000038, "Member 'FNevadaOutContinuous::AltimeterTraceHitDistance' has a wrong offset!");
static_assert(offsetof(FNevadaOutContinuous, TractorBeamAppliedForceMagnitude) == 0x00003C, "Member 'FNevadaOutContinuous::TractorBeamAppliedForceMagnitude' has a wrong offset!");

struct FNevadaOutPersistent final : public FFortVehicleOutPersistent
{
public:
	uint8                                         Pad_28[0x428];
};
static_assert(alignof(FNevadaOutPersistent) == 0x000008, "Wrong alignment on FNevadaOutPersistent");
static_assert(sizeof(FNevadaOutPersistent) == 0x000450, "Wrong size on FNevadaOutPersistent");

struct FNevadaState final
{
public:
	ENevadaFlightStates                           CurrentStatus;
	uint8                                         Pad_1[0x3];
	int32                                         LivesRemaining;
	bool                                          bHijackingActive;
	bool                                          bPilotBubbleCollisionEnabled;
	uint8                                         Pad_A[0x2];
	float                                         CurrentBatteryCharge;
	bool                                          bCannonEnabled;
	bool                                          bTractorBeamEnabled;
	uint8                                         Pad_12[0x2];
};
static_assert(alignof(FNevadaState) == 0x000004, "Wrong alignment on FNevadaState");
static_assert(sizeof(FNevadaState) == 0x000014, "Wrong size on FNevadaState");
static_assert(offsetof(FNevadaState, CurrentStatus) == 0x000000, "Member 'FNevadaState::CurrentStatus' has a wrong offset!");
static_assert(offsetof(FNevadaState, LivesRemaining) == 0x000004, "Member 'FNevadaState::LivesRemaining' has a wrong offset!");
static_assert(offsetof(FNevadaState, bHijackingActive) == 0x000008, "Member 'FNevadaState::bHijackingActive' has a wrong offset!");
static_assert(offsetof(FNevadaState, bPilotBubbleCollisionEnabled) == 0x000009, "Member 'FNevadaState::bPilotBubbleCollisionEnabled' has a wrong offset!");
static_assert(offsetof(FNevadaState, CurrentBatteryCharge) == 0x00000C, "Member 'FNevadaState::CurrentBatteryCharge' has a wrong offset!");
static_assert(offsetof(FNevadaState, bCannonEnabled) == 0x000010, "Member 'FNevadaState::bCannonEnabled' has a wrong offset!");
static_assert(offsetof(FNevadaState, bTractorBeamEnabled) == 0x000011, "Member 'FNevadaState::bTractorBeamEnabled' has a wrong offset!");

struct FNevadaMoveModeConfig final
{
public:
	float                                         ThrustForce;
	float                                         LiftForce;
	float                                         MaxHorizontalSpeed;
	float                                         MaxVerticalSpeed;
	float                                         DragForceMultiplier;
};
static_assert(alignof(FNevadaMoveModeConfig) == 0x000004, "Wrong alignment on FNevadaMoveModeConfig");
static_assert(sizeof(FNevadaMoveModeConfig) == 0x000014, "Wrong size on FNevadaMoveModeConfig");
static_assert(offsetof(FNevadaMoveModeConfig, ThrustForce) == 0x000000, "Member 'FNevadaMoveModeConfig::ThrustForce' has a wrong offset!");
static_assert(offsetof(FNevadaMoveModeConfig, LiftForce) == 0x000004, "Member 'FNevadaMoveModeConfig::LiftForce' has a wrong offset!");
static_assert(offsetof(FNevadaMoveModeConfig, MaxHorizontalSpeed) == 0x000008, "Member 'FNevadaMoveModeConfig::MaxHorizontalSpeed' has a wrong offset!");
static_assert(offsetof(FNevadaMoveModeConfig, MaxVerticalSpeed) == 0x00000C, "Member 'FNevadaMoveModeConfig::MaxVerticalSpeed' has a wrong offset!");
static_assert(offsetof(FNevadaMoveModeConfig, DragForceMultiplier) == 0x000010, "Member 'FNevadaMoveModeConfig::DragForceMultiplier' has a wrong offset!");

struct FDampedSpringConfig final
{
public:
	float                                         Stiffness;
	float                                         Damping;
	float                                         MaxAccel;
};
static_assert(alignof(FDampedSpringConfig) == 0x000004, "Wrong alignment on FDampedSpringConfig");
static_assert(sizeof(FDampedSpringConfig) == 0x00000C, "Wrong size on FDampedSpringConfig");
static_assert(offsetof(FDampedSpringConfig, Stiffness) == 0x000000, "Member 'FDampedSpringConfig::Stiffness' has a wrong offset!");
static_assert(offsetof(FDampedSpringConfig, Damping) == 0x000004, "Member 'FDampedSpringConfig::Damping' has a wrong offset!");
static_assert(offsetof(FDampedSpringConfig, MaxAccel) == 0x000008, "Member 'FDampedSpringConfig::MaxAccel' has a wrong offset!");

struct FNevadaInPersistent final : public FFortVehicleInPersistent
{
public:
	class UFortNevadaVehicleConfigs*              FortNevadaVehicleConfigs;
	bool                                          bBoostThrust;
	bool                                          bBoostDrag;
	uint8                                         Pad_192[0x2];
	float                                         TractorBeamExtraLengthForExtents;
	bool                                          bUseTractorBeamUprightForce;
	uint8                                         Pad_199[0x7];
	struct FVector                                CrashingDesiredUp;
	ENevadaFlightStates                           CurrentVehicleState;
	uint8                                         Pad_1B9[0xDF];
};
static_assert(alignof(FNevadaInPersistent) == 0x000008, "Wrong alignment on FNevadaInPersistent");
static_assert(sizeof(FNevadaInPersistent) == 0x000298, "Wrong size on FNevadaInPersistent");
static_assert(offsetof(FNevadaInPersistent, FortNevadaVehicleConfigs) == 0x000188, "Member 'FNevadaInPersistent::FortNevadaVehicleConfigs' has a wrong offset!");
static_assert(offsetof(FNevadaInPersistent, bBoostThrust) == 0x000190, "Member 'FNevadaInPersistent::bBoostThrust' has a wrong offset!");
static_assert(offsetof(FNevadaInPersistent, bBoostDrag) == 0x000191, "Member 'FNevadaInPersistent::bBoostDrag' has a wrong offset!");
static_assert(offsetof(FNevadaInPersistent, TractorBeamExtraLengthForExtents) == 0x000194, "Member 'FNevadaInPersistent::TractorBeamExtraLengthForExtents' has a wrong offset!");
static_assert(offsetof(FNevadaInPersistent, bUseTractorBeamUprightForce) == 0x000198, "Member 'FNevadaInPersistent::bUseTractorBeamUprightForce' has a wrong offset!");
static_assert(offsetof(FNevadaInPersistent, CrashingDesiredUp) == 0x0001A0, "Member 'FNevadaInPersistent::CrashingDesiredUp' has a wrong offset!");
static_assert(offsetof(FNevadaInPersistent, CurrentVehicleState) == 0x0001B8, "Member 'FNevadaInPersistent::CurrentVehicleState' has a wrong offset!");

}
