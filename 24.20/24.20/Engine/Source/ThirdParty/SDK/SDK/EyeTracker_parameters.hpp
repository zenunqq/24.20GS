#pragma once

#include "Basic.hpp"

#include "EyeTracker_structs.hpp"

namespace SDK::Params
{

struct EyeTrackerFunctionLibrary_GetGazeData final
{
public:
	struct FEyeTrackerGazeData                    OutGazeData;
	bool                                          ReturnValue;
	uint8                                         Pad_59[0x7];
};
static_assert(alignof(EyeTrackerFunctionLibrary_GetGazeData) == 0x000008, "Wrong alignment on EyeTrackerFunctionLibrary_GetGazeData");
static_assert(sizeof(EyeTrackerFunctionLibrary_GetGazeData) == 0x000060, "Wrong size on EyeTrackerFunctionLibrary_GetGazeData");
static_assert(offsetof(EyeTrackerFunctionLibrary_GetGazeData, OutGazeData) == 0x000000, "Member 'EyeTrackerFunctionLibrary_GetGazeData::OutGazeData' has a wrong offset!");
static_assert(offsetof(EyeTrackerFunctionLibrary_GetGazeData, ReturnValue) == 0x000058, "Member 'EyeTrackerFunctionLibrary_GetGazeData::ReturnValue' has a wrong offset!");

struct EyeTrackerFunctionLibrary_GetStereoGazeData final
{
public:
	struct FEyeTrackerStereoGazeData              OutGazeData;
	bool                                          ReturnValue;
	uint8                                         Pad_81[0x7];
};
static_assert(alignof(EyeTrackerFunctionLibrary_GetStereoGazeData) == 0x000008, "Wrong alignment on EyeTrackerFunctionLibrary_GetStereoGazeData");
static_assert(sizeof(EyeTrackerFunctionLibrary_GetStereoGazeData) == 0x000088, "Wrong size on EyeTrackerFunctionLibrary_GetStereoGazeData");
static_assert(offsetof(EyeTrackerFunctionLibrary_GetStereoGazeData, OutGazeData) == 0x000000, "Member 'EyeTrackerFunctionLibrary_GetStereoGazeData::OutGazeData' has a wrong offset!");
static_assert(offsetof(EyeTrackerFunctionLibrary_GetStereoGazeData, ReturnValue) == 0x000080, "Member 'EyeTrackerFunctionLibrary_GetStereoGazeData::ReturnValue' has a wrong offset!");

struct EyeTrackerFunctionLibrary_IsEyeTrackerConnected final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(EyeTrackerFunctionLibrary_IsEyeTrackerConnected) == 0x000001, "Wrong alignment on EyeTrackerFunctionLibrary_IsEyeTrackerConnected");
static_assert(sizeof(EyeTrackerFunctionLibrary_IsEyeTrackerConnected) == 0x000001, "Wrong size on EyeTrackerFunctionLibrary_IsEyeTrackerConnected");
static_assert(offsetof(EyeTrackerFunctionLibrary_IsEyeTrackerConnected, ReturnValue) == 0x000000, "Member 'EyeTrackerFunctionLibrary_IsEyeTrackerConnected::ReturnValue' has a wrong offset!");

struct EyeTrackerFunctionLibrary_IsStereoGazeDataAvailable final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(EyeTrackerFunctionLibrary_IsStereoGazeDataAvailable) == 0x000001, "Wrong alignment on EyeTrackerFunctionLibrary_IsStereoGazeDataAvailable");
static_assert(sizeof(EyeTrackerFunctionLibrary_IsStereoGazeDataAvailable) == 0x000001, "Wrong size on EyeTrackerFunctionLibrary_IsStereoGazeDataAvailable");
static_assert(offsetof(EyeTrackerFunctionLibrary_IsStereoGazeDataAvailable, ReturnValue) == 0x000000, "Member 'EyeTrackerFunctionLibrary_IsStereoGazeDataAvailable::ReturnValue' has a wrong offset!");

struct EyeTrackerFunctionLibrary_SetEyeTrackedPlayer final
{
public:
	class APlayerController*                      PlayerController;
};
static_assert(alignof(EyeTrackerFunctionLibrary_SetEyeTrackedPlayer) == 0x000008, "Wrong alignment on EyeTrackerFunctionLibrary_SetEyeTrackedPlayer");
static_assert(sizeof(EyeTrackerFunctionLibrary_SetEyeTrackedPlayer) == 0x000008, "Wrong size on EyeTrackerFunctionLibrary_SetEyeTrackedPlayer");
static_assert(offsetof(EyeTrackerFunctionLibrary_SetEyeTrackedPlayer, PlayerController) == 0x000000, "Member 'EyeTrackerFunctionLibrary_SetEyeTrackedPlayer::PlayerController' has a wrong offset!");

}
