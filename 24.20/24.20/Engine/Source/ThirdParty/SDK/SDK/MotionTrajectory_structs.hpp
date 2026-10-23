#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FMotionTrajectorySettings final
{
public:
	int32                                         Domain;
	float                                         Seconds;
	float                                         Distance;
};
static_assert(alignof(FMotionTrajectorySettings) == 0x000004, "Wrong alignment on FMotionTrajectorySettings");
static_assert(sizeof(FMotionTrajectorySettings) == 0x00000C, "Wrong size on FMotionTrajectorySettings");
static_assert(offsetof(FMotionTrajectorySettings, Domain) == 0x000000, "Member 'FMotionTrajectorySettings::Domain' has a wrong offset!");
static_assert(offsetof(FMotionTrajectorySettings, Seconds) == 0x000004, "Member 'FMotionTrajectorySettings::Seconds' has a wrong offset!");
static_assert(offsetof(FMotionTrajectorySettings, Distance) == 0x000008, "Member 'FMotionTrajectorySettings::Distance' has a wrong offset!");

struct FTrajectoryDirectionClamp final
{
public:
	struct FVector                                Direction;
	float                                         AngleTresholdDegrees;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(FTrajectoryDirectionClamp) == 0x000008, "Wrong alignment on FTrajectoryDirectionClamp");
static_assert(sizeof(FTrajectoryDirectionClamp) == 0x000020, "Wrong size on FTrajectoryDirectionClamp");
static_assert(offsetof(FTrajectoryDirectionClamp, Direction) == 0x000000, "Member 'FTrajectoryDirectionClamp::Direction' has a wrong offset!");
static_assert(offsetof(FTrajectoryDirectionClamp, AngleTresholdDegrees) == 0x000018, "Member 'FTrajectoryDirectionClamp::AngleTresholdDegrees' has a wrong offset!");

}
