#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "InputCore_structs.hpp"

namespace SDK
{

enum class EOrientPositionSelector : uint8
{
	Orientation                              = 0,
	Position                                 = 1,
	OrientationAndPosition                   = 2,
	EOrientPositionSelector_MAX              = 3,
};

enum class EHMDTrackingOrigin : uint8
{
	Floor                                    = 0,
	Eye                                      = 1,
	Stage                                    = 2,
	EHMDTrackingOrigin_MAX                   = 3,
};

enum class EHMDWornState : uint8
{
	Unknown                                  = 0,
	Worn                                     = 1,
	NotWorn                                  = 2,
	EHMDWornState_MAX                        = 3,
};

enum class EXRDeviceConnectionResult : uint8
{
	NoTrackingSystem                         = 0,
	FeatureNotSupported                      = 1,
	NoValidViewport                          = 2,
	MiscFailure                              = 3,
	Success                                  = 4,
	EXRDeviceConnectionResult_MAX            = 5,
};

enum class EXRSystemFlags : uint8
{
	NoFlags                                  = 0,
	IsAR                                     = 1,
	IsTablet                                 = 2,
	IsHeadMounted                            = 4,
	SupportsHandTracking                     = 8,
	EXRSystemFlags_MAX                       = 9,
};

enum class ESpectatorScreenMode : uint8
{
	Disabled                                 = 0,
	SingleEyeLetterboxed                     = 1,
	Undistorted                              = 2,
	Distorted                                = 3,
	SingleEye                                = 4,
	SingleEyeCroppedToFill                   = 5,
	Texture                                  = 6,
	TexturePlusEye                           = 7,
	ESpectatorScreenMode_MAX                 = 8,
};

enum class EXRTrackedDeviceType : uint8
{
	HeadMountedDisplay                       = 0,
	Controller                               = 1,
	TrackingReference                        = 2,
	Other                                    = 3,
	Invalid                                  = 254,
	Any                                      = 255,
	EXRTrackedDeviceType_MAX                 = 256,
};

enum class EHandKeypoint : uint8
{
	Palm                                     = 0,
	Wrist                                    = 1,
	ThumbMetacarpal                          = 2,
	ThumbProximal                            = 3,
	ThumbDistal                              = 4,
	ThumbTip                                 = 5,
	IndexMetacarpal                          = 6,
	IndexProximal                            = 7,
	IndexIntermediate                        = 8,
	IndexDistal                              = 9,
	IndexTip                                 = 10,
	MiddleMetacarpal                         = 11,
	MiddleProximal                           = 12,
	MiddleIntermediate                       = 13,
	MiddleDistal                             = 14,
	MiddleTip                                = 15,
	RingMetacarpal                           = 16,
	RingProximal                             = 17,
	RingIntermediate                         = 18,
	RingDistal                               = 19,
	RingTip                                  = 20,
	LittleMetacarpal                         = 21,
	LittleProximal                           = 22,
	LittleIntermediate                       = 23,
	LittleDistal                             = 24,
	LittleTip                                = 25,
	EHandKeypoint_MAX                        = 26,
};

enum class EXRVisualType : uint8
{
	Controller                               = 0,
	Hand                                     = 1,
	EXRVisualType_MAX                        = 2,
};

enum class ETrackingStatus : uint8
{
	NotTracked                               = 0,
	InertialOnly                             = 1,
	Tracked                                  = 2,
	ETrackingStatus_MAX                      = 3,
};

enum class ESpatialInputGestureAxis : uint8
{
	None                                     = 0,
	Manipulation                             = 1,
	Navigation                               = 2,
	NavigationRails                          = 3,
	ESpatialInputGestureAxis_MAX             = 4,
};

struct FXRHMDData final
{
public:
	bool                                          bValid;
	uint8                                         Pad_1[0x3];
	class FName                                   DeviceName;
	struct FGuid                                  ApplicationInstanceID;
	ETrackingStatus                               TrackingStatus;
	uint8                                         Pad_19[0x7];
	struct FVector                                Position;
	uint8                                         Pad_38[0x8];
	struct FQuat                                  Rotation;
};
static_assert(alignof(FXRHMDData) == 0x000010, "Wrong alignment on FXRHMDData");
static_assert(sizeof(FXRHMDData) == 0x000060, "Wrong size on FXRHMDData");
static_assert(offsetof(FXRHMDData, bValid) == 0x000000, "Member 'FXRHMDData::bValid' has a wrong offset!");
static_assert(offsetof(FXRHMDData, DeviceName) == 0x000004, "Member 'FXRHMDData::DeviceName' has a wrong offset!");
static_assert(offsetof(FXRHMDData, ApplicationInstanceID) == 0x000008, "Member 'FXRHMDData::ApplicationInstanceID' has a wrong offset!");
static_assert(offsetof(FXRHMDData, TrackingStatus) == 0x000018, "Member 'FXRHMDData::TrackingStatus' has a wrong offset!");
static_assert(offsetof(FXRHMDData, Position) == 0x000020, "Member 'FXRHMDData::Position' has a wrong offset!");
static_assert(offsetof(FXRHMDData, Rotation) == 0x000040, "Member 'FXRHMDData::Rotation' has a wrong offset!");

struct FXRMotionControllerData final
{
public:
	bool                                          bValid;
	uint8                                         Pad_1[0x3];
	class FName                                   DeviceName;
	struct FGuid                                  ApplicationInstanceID;
	EXRVisualType                                 DeviceVisualType;
	EControllerHand                               HandIndex;
	ETrackingStatus                               TrackingStatus;
	uint8                                         Pad_1B[0x5];
	struct FVector                                GripPosition;
	uint8                                         Pad_38[0x8];
	struct FQuat                                  GripRotation;
	struct FVector                                AimPosition;
	uint8                                         Pad_78[0x8];
	struct FQuat                                  AimRotation;
	TArray<struct FVector>                        HandKeyPositions;
	TArray<struct FQuat>                          HandKeyRotations;
	TArray<float>                                 HandKeyRadii;
	bool                                          bIsGrasped;
	uint8                                         Pad_D1[0xF];
};
static_assert(alignof(FXRMotionControllerData) == 0x000010, "Wrong alignment on FXRMotionControllerData");
static_assert(sizeof(FXRMotionControllerData) == 0x0000E0, "Wrong size on FXRMotionControllerData");
static_assert(offsetof(FXRMotionControllerData, bValid) == 0x000000, "Member 'FXRMotionControllerData::bValid' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, DeviceName) == 0x000004, "Member 'FXRMotionControllerData::DeviceName' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, ApplicationInstanceID) == 0x000008, "Member 'FXRMotionControllerData::ApplicationInstanceID' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, DeviceVisualType) == 0x000018, "Member 'FXRMotionControllerData::DeviceVisualType' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, HandIndex) == 0x000019, "Member 'FXRMotionControllerData::HandIndex' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, TrackingStatus) == 0x00001A, "Member 'FXRMotionControllerData::TrackingStatus' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, GripPosition) == 0x000020, "Member 'FXRMotionControllerData::GripPosition' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, GripRotation) == 0x000040, "Member 'FXRMotionControllerData::GripRotation' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, AimPosition) == 0x000060, "Member 'FXRMotionControllerData::AimPosition' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, AimRotation) == 0x000080, "Member 'FXRMotionControllerData::AimRotation' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, HandKeyPositions) == 0x0000A0, "Member 'FXRMotionControllerData::HandKeyPositions' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, HandKeyRotations) == 0x0000B0, "Member 'FXRMotionControllerData::HandKeyRotations' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, HandKeyRadii) == 0x0000C0, "Member 'FXRMotionControllerData::HandKeyRadii' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, bIsGrasped) == 0x0000D0, "Member 'FXRMotionControllerData::bIsGrasped' has a wrong offset!");

struct FXRGestureConfig final
{
public:
	bool                                          bTap;
	bool                                          bHold;
	ESpatialInputGestureAxis                      AxisGesture;
	bool                                          bNavigationAxisX;
	bool                                          bNavigationAxisY;
	bool                                          bNavigationAxisZ;
};
static_assert(alignof(FXRGestureConfig) == 0x000001, "Wrong alignment on FXRGestureConfig");
static_assert(sizeof(FXRGestureConfig) == 0x000006, "Wrong size on FXRGestureConfig");
static_assert(offsetof(FXRGestureConfig, bTap) == 0x000000, "Member 'FXRGestureConfig::bTap' has a wrong offset!");
static_assert(offsetof(FXRGestureConfig, bHold) == 0x000001, "Member 'FXRGestureConfig::bHold' has a wrong offset!");
static_assert(offsetof(FXRGestureConfig, AxisGesture) == 0x000002, "Member 'FXRGestureConfig::AxisGesture' has a wrong offset!");
static_assert(offsetof(FXRGestureConfig, bNavigationAxisX) == 0x000003, "Member 'FXRGestureConfig::bNavigationAxisX' has a wrong offset!");
static_assert(offsetof(FXRGestureConfig, bNavigationAxisY) == 0x000004, "Member 'FXRGestureConfig::bNavigationAxisY' has a wrong offset!");
static_assert(offsetof(FXRGestureConfig, bNavigationAxisZ) == 0x000005, "Member 'FXRGestureConfig::bNavigationAxisZ' has a wrong offset!");

struct FXRDeviceId final
{
public:
	class FName                                   SystemName;
	int32                                         DeviceID;
};
static_assert(alignof(FXRDeviceId) == 0x000004, "Wrong alignment on FXRDeviceId");
static_assert(sizeof(FXRDeviceId) == 0x000008, "Wrong size on FXRDeviceId");
static_assert(offsetof(FXRDeviceId, SystemName) == 0x000000, "Member 'FXRDeviceId::SystemName' has a wrong offset!");
static_assert(offsetof(FXRDeviceId, DeviceID) == 0x000004, "Member 'FXRDeviceId::DeviceID' has a wrong offset!");

}
