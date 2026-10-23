#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EEyeTrackerStatus : uint8
{
	NotConnected                             = 0,
	NotTracking                              = 1,
	Tracking                                 = 2,
	EEyeTrackerStatus_MAX                    = 3,
};

struct FEyeTrackerGazeData final
{
public:
	struct FVector                                GazeOrigin;
	struct FVector                                GazeDirection;
	struct FVector                                FixationPoint;
	float                                         ConfidenceValue;
	bool                                          bIsLeftEyeBlink;
	bool                                          bIsRightEyeBlink;
	uint8                                         Pad_4E[0x2];
	float                                         LeftPupilDiameter;
	float                                         RightPupilDiameter;
};
static_assert(alignof(FEyeTrackerGazeData) == 0x000008, "Wrong alignment on FEyeTrackerGazeData");
static_assert(sizeof(FEyeTrackerGazeData) == 0x000058, "Wrong size on FEyeTrackerGazeData");
static_assert(offsetof(FEyeTrackerGazeData, GazeOrigin) == 0x000000, "Member 'FEyeTrackerGazeData::GazeOrigin' has a wrong offset!");
static_assert(offsetof(FEyeTrackerGazeData, GazeDirection) == 0x000018, "Member 'FEyeTrackerGazeData::GazeDirection' has a wrong offset!");
static_assert(offsetof(FEyeTrackerGazeData, FixationPoint) == 0x000030, "Member 'FEyeTrackerGazeData::FixationPoint' has a wrong offset!");
static_assert(offsetof(FEyeTrackerGazeData, ConfidenceValue) == 0x000048, "Member 'FEyeTrackerGazeData::ConfidenceValue' has a wrong offset!");
static_assert(offsetof(FEyeTrackerGazeData, bIsLeftEyeBlink) == 0x00004C, "Member 'FEyeTrackerGazeData::bIsLeftEyeBlink' has a wrong offset!");
static_assert(offsetof(FEyeTrackerGazeData, bIsRightEyeBlink) == 0x00004D, "Member 'FEyeTrackerGazeData::bIsRightEyeBlink' has a wrong offset!");
static_assert(offsetof(FEyeTrackerGazeData, LeftPupilDiameter) == 0x000050, "Member 'FEyeTrackerGazeData::LeftPupilDiameter' has a wrong offset!");
static_assert(offsetof(FEyeTrackerGazeData, RightPupilDiameter) == 0x000054, "Member 'FEyeTrackerGazeData::RightPupilDiameter' has a wrong offset!");

struct FEyeTrackerStereoGazeData final
{
public:
	struct FVector                                LeftEyeOrigin;
	struct FVector                                LeftEyeDirection;
	struct FVector                                RightEyeOrigin;
	struct FVector                                RightEyeDirection;
	struct FVector                                FixationPoint;
	float                                         ConfidenceValue;
	uint8                                         Pad_7C[0x4];
};
static_assert(alignof(FEyeTrackerStereoGazeData) == 0x000008, "Wrong alignment on FEyeTrackerStereoGazeData");
static_assert(sizeof(FEyeTrackerStereoGazeData) == 0x000080, "Wrong size on FEyeTrackerStereoGazeData");
static_assert(offsetof(FEyeTrackerStereoGazeData, LeftEyeOrigin) == 0x000000, "Member 'FEyeTrackerStereoGazeData::LeftEyeOrigin' has a wrong offset!");
static_assert(offsetof(FEyeTrackerStereoGazeData, LeftEyeDirection) == 0x000018, "Member 'FEyeTrackerStereoGazeData::LeftEyeDirection' has a wrong offset!");
static_assert(offsetof(FEyeTrackerStereoGazeData, RightEyeOrigin) == 0x000030, "Member 'FEyeTrackerStereoGazeData::RightEyeOrigin' has a wrong offset!");
static_assert(offsetof(FEyeTrackerStereoGazeData, RightEyeDirection) == 0x000048, "Member 'FEyeTrackerStereoGazeData::RightEyeDirection' has a wrong offset!");
static_assert(offsetof(FEyeTrackerStereoGazeData, FixationPoint) == 0x000060, "Member 'FEyeTrackerStereoGazeData::FixationPoint' has a wrong offset!");
static_assert(offsetof(FEyeTrackerStereoGazeData, ConfidenceValue) == 0x000078, "Member 'FEyeTrackerStereoGazeData::ConfidenceValue' has a wrong offset!");

}
