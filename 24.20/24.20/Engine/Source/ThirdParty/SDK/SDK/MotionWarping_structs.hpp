#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class ERootMotionModifierState : uint8
{
	Waiting                                  = 0,
	Active                                   = 1,
	MarkedForRemoval                         = 2,
	Disabled                                 = 3,
	ERootMotionModifierState_MAX             = 4,
};

enum class EMotionWarpRotationType : uint8
{
	Default                                  = 0,
	Facing                                   = 1,
	EMotionWarpRotationType_MAX              = 2,
};

enum class EWarpPointAnimProvider : uint8
{
	None                                     = 0,
	Static                                   = 1,
	Bone                                     = 2,
	EWarpPointAnimProvider_MAX               = 3,
};

struct FMotionWarpingWindowData final
{
public:
	class UAnimNotifyState_MotionWarping*         AnimNotify;
	float                                         StartTime;
	float                                         EndTime;
};
static_assert(alignof(FMotionWarpingWindowData) == 0x000008, "Wrong alignment on FMotionWarpingWindowData");
static_assert(sizeof(FMotionWarpingWindowData) == 0x000010, "Wrong size on FMotionWarpingWindowData");
static_assert(offsetof(FMotionWarpingWindowData, AnimNotify) == 0x000000, "Member 'FMotionWarpingWindowData::AnimNotify' has a wrong offset!");
static_assert(offsetof(FMotionWarpingWindowData, StartTime) == 0x000008, "Member 'FMotionWarpingWindowData::StartTime' has a wrong offset!");
static_assert(offsetof(FMotionWarpingWindowData, EndTime) == 0x00000C, "Member 'FMotionWarpingWindowData::EndTime' has a wrong offset!");

struct FMotionWarpingUpdateContext final
{
public:
	TWeakObjectPtr<class UAnimSequenceBase>       Animation;
	float                                         PreviousPosition;
	float                                         CurrentPosition;
	float                                         Weight;
	float                                         PlayRate;
	float                                         DeltaSeconds;
};
static_assert(alignof(FMotionWarpingUpdateContext) == 0x000004, "Wrong alignment on FMotionWarpingUpdateContext");
static_assert(sizeof(FMotionWarpingUpdateContext) == 0x00001C, "Wrong size on FMotionWarpingUpdateContext");
static_assert(offsetof(FMotionWarpingUpdateContext, Animation) == 0x000000, "Member 'FMotionWarpingUpdateContext::Animation' has a wrong offset!");
static_assert(offsetof(FMotionWarpingUpdateContext, PreviousPosition) == 0x000008, "Member 'FMotionWarpingUpdateContext::PreviousPosition' has a wrong offset!");
static_assert(offsetof(FMotionWarpingUpdateContext, CurrentPosition) == 0x00000C, "Member 'FMotionWarpingUpdateContext::CurrentPosition' has a wrong offset!");
static_assert(offsetof(FMotionWarpingUpdateContext, Weight) == 0x000010, "Member 'FMotionWarpingUpdateContext::Weight' has a wrong offset!");
static_assert(offsetof(FMotionWarpingUpdateContext, PlayRate) == 0x000014, "Member 'FMotionWarpingUpdateContext::PlayRate' has a wrong offset!");
static_assert(offsetof(FMotionWarpingUpdateContext, DeltaSeconds) == 0x000018, "Member 'FMotionWarpingUpdateContext::DeltaSeconds' has a wrong offset!");

struct FMotionWarpingTarget final
{
public:
	class FName                                   Name;
	uint8                                         Pad_4[0x4];
	struct FVector                                Location;
	struct FRotator                               Rotation;
	TWeakObjectPtr<class USceneComponent>         Component;
	class FName                                   BoneName;
	bool                                          bFollowComponent;
	uint8                                         Pad_45[0x3];
};
static_assert(alignof(FMotionWarpingTarget) == 0x000008, "Wrong alignment on FMotionWarpingTarget");
static_assert(sizeof(FMotionWarpingTarget) == 0x000048, "Wrong size on FMotionWarpingTarget");
static_assert(offsetof(FMotionWarpingTarget, Name) == 0x000000, "Member 'FMotionWarpingTarget::Name' has a wrong offset!");
static_assert(offsetof(FMotionWarpingTarget, Location) == 0x000008, "Member 'FMotionWarpingTarget::Location' has a wrong offset!");
static_assert(offsetof(FMotionWarpingTarget, Rotation) == 0x000020, "Member 'FMotionWarpingTarget::Rotation' has a wrong offset!");
static_assert(offsetof(FMotionWarpingTarget, Component) == 0x000038, "Member 'FMotionWarpingTarget::Component' has a wrong offset!");
static_assert(offsetof(FMotionWarpingTarget, BoneName) == 0x000040, "Member 'FMotionWarpingTarget::BoneName' has a wrong offset!");
static_assert(offsetof(FMotionWarpingTarget, bFollowComponent) == 0x000044, "Member 'FMotionWarpingTarget::bFollowComponent' has a wrong offset!");

struct FMotionDeltaTrack final
{
public:
	TArray<struct FTransform>                     BoneTransformTrack;
	TArray<struct FVector>                        DeltaTranslationTrack;
	TArray<struct FRotator>                       DeltaRotationTrack;
	struct FVector                                TotalTranslation;
	struct FRotator                               TotalRotation;
};
static_assert(alignof(FMotionDeltaTrack) == 0x000008, "Wrong alignment on FMotionDeltaTrack");
static_assert(sizeof(FMotionDeltaTrack) == 0x000060, "Wrong size on FMotionDeltaTrack");
static_assert(offsetof(FMotionDeltaTrack, BoneTransformTrack) == 0x000000, "Member 'FMotionDeltaTrack::BoneTransformTrack' has a wrong offset!");
static_assert(offsetof(FMotionDeltaTrack, DeltaTranslationTrack) == 0x000010, "Member 'FMotionDeltaTrack::DeltaTranslationTrack' has a wrong offset!");
static_assert(offsetof(FMotionDeltaTrack, DeltaRotationTrack) == 0x000020, "Member 'FMotionDeltaTrack::DeltaRotationTrack' has a wrong offset!");
static_assert(offsetof(FMotionDeltaTrack, TotalTranslation) == 0x000030, "Member 'FMotionDeltaTrack::TotalTranslation' has a wrong offset!");
static_assert(offsetof(FMotionDeltaTrack, TotalRotation) == 0x000048, "Member 'FMotionDeltaTrack::TotalRotation' has a wrong offset!");

struct FMotionDeltaTrackContainer final
{
public:
	TArray<struct FMotionDeltaTrack>              Tracks;
};
static_assert(alignof(FMotionDeltaTrackContainer) == 0x000008, "Wrong alignment on FMotionDeltaTrackContainer");
static_assert(sizeof(FMotionDeltaTrackContainer) == 0x000010, "Wrong size on FMotionDeltaTrackContainer");
static_assert(offsetof(FMotionDeltaTrackContainer, Tracks) == 0x000000, "Member 'FMotionDeltaTrackContainer::Tracks' has a wrong offset!");

}
