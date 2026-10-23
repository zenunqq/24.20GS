#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class ETempestState : uint8
{
	Unformed                                 = 0,
	Forming                                  = 1,
	Active                                   = 2,
	Dissipating                              = 3,
	Complete                                 = 4,
	ETempestState_MAX                        = 5,
};

enum class ETempestMovementMode : uint8
{
	EnvQuery                                 = 0,
	Path                                     = 1,
	ETempestMovementMode_MAX                 = 2,
};

struct FTempestStateInfo final
{
public:
	ETempestState                                 CurrentState;
	uint8                                         Pad_1[0x3];
	float                                         StartTime;
	float                                         EndTime;
};
static_assert(alignof(FTempestStateInfo) == 0x000004, "Wrong alignment on FTempestStateInfo");
static_assert(sizeof(FTempestStateInfo) == 0x00000C, "Wrong size on FTempestStateInfo");
static_assert(offsetof(FTempestStateInfo, CurrentState) == 0x000000, "Member 'FTempestStateInfo::CurrentState' has a wrong offset!");
static_assert(offsetof(FTempestStateInfo, StartTime) == 0x000004, "Member 'FTempestStateInfo::StartTime' has a wrong offset!");
static_assert(offsetof(FTempestStateInfo, EndTime) == 0x000008, "Member 'FTempestStateInfo::EndTime' has a wrong offset!");

struct FTempestReplicatedMovementData final
{
public:
	struct FVector                                TargetServerLocation;
	struct FVector                                LastServerLocation;
	struct FQuat                                  LastServerRotation;
};
static_assert(alignof(FTempestReplicatedMovementData) == 0x000010, "Wrong alignment on FTempestReplicatedMovementData");
static_assert(sizeof(FTempestReplicatedMovementData) == 0x000050, "Wrong size on FTempestReplicatedMovementData");
static_assert(offsetof(FTempestReplicatedMovementData, TargetServerLocation) == 0x000000, "Member 'FTempestReplicatedMovementData::TargetServerLocation' has a wrong offset!");
static_assert(offsetof(FTempestReplicatedMovementData, LastServerLocation) == 0x000018, "Member 'FTempestReplicatedMovementData::LastServerLocation' has a wrong offset!");
static_assert(offsetof(FTempestReplicatedMovementData, LastServerRotation) == 0x000030, "Member 'FTempestReplicatedMovementData::LastServerRotation' has a wrong offset!");

struct alignas(0x04) FTempestStateChangeTimerInfo final
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FTempestStateChangeTimerInfo) == 0x000004, "Wrong alignment on FTempestStateChangeTimerInfo");
static_assert(sizeof(FTempestStateChangeTimerInfo) == 0x000008, "Wrong size on FTempestStateChangeTimerInfo");

}
