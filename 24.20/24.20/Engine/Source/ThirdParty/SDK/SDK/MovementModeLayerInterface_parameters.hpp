#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct MovementModeLayerInterface_C_MovementMode_AimOffset final
{
public:
	struct FPoseLink                              InAimOffsetsPose;
	struct FPoseLink                              InSourcePosePreAimOffsets;
	struct FPoseLink                              MovementMode_AimOffset_0;
};
static_assert(alignof(MovementModeLayerInterface_C_MovementMode_AimOffset) == 0x000008, "Wrong alignment on MovementModeLayerInterface_C_MovementMode_AimOffset");
static_assert(sizeof(MovementModeLayerInterface_C_MovementMode_AimOffset) == 0x000030, "Wrong size on MovementModeLayerInterface_C_MovementMode_AimOffset");
static_assert(offsetof(MovementModeLayerInterface_C_MovementMode_AimOffset, InAimOffsetsPose) == 0x000000, "Member 'MovementModeLayerInterface_C_MovementMode_AimOffset::InAimOffsetsPose' has a wrong offset!");
static_assert(offsetof(MovementModeLayerInterface_C_MovementMode_AimOffset, InSourcePosePreAimOffsets) == 0x000010, "Member 'MovementModeLayerInterface_C_MovementMode_AimOffset::InSourcePosePreAimOffsets' has a wrong offset!");
static_assert(offsetof(MovementModeLayerInterface_C_MovementMode_AimOffset, MovementMode_AimOffset_0) == 0x000020, "Member 'MovementModeLayerInterface_C_MovementMode_AimOffset::MovementMode_AimOffset_0' has a wrong offset!");

struct MovementModeLayerInterface_C_MovementMode_FinalPoseOverride final
{
public:
	struct FPoseLink                              InFinalPose;
	struct FPoseLink                              MovementMode_FinalPoseOverride_0;
};
static_assert(alignof(MovementModeLayerInterface_C_MovementMode_FinalPoseOverride) == 0x000008, "Wrong alignment on MovementModeLayerInterface_C_MovementMode_FinalPoseOverride");
static_assert(sizeof(MovementModeLayerInterface_C_MovementMode_FinalPoseOverride) == 0x000020, "Wrong size on MovementModeLayerInterface_C_MovementMode_FinalPoseOverride");
static_assert(offsetof(MovementModeLayerInterface_C_MovementMode_FinalPoseOverride, InFinalPose) == 0x000000, "Member 'MovementModeLayerInterface_C_MovementMode_FinalPoseOverride::InFinalPose' has a wrong offset!");
static_assert(offsetof(MovementModeLayerInterface_C_MovementMode_FinalPoseOverride, MovementMode_FinalPoseOverride_0) == 0x000010, "Member 'MovementModeLayerInterface_C_MovementMode_FinalPoseOverride::MovementMode_FinalPoseOverride_0' has a wrong offset!");

struct MovementModeLayerInterface_C_MovementMode_FullBodyOverride final
{
public:
	struct FPoseLink                              InputPoseFullBody;
	struct FPoseLink                              MovementMode_FullBodyOverride_0;
};
static_assert(alignof(MovementModeLayerInterface_C_MovementMode_FullBodyOverride) == 0x000008, "Wrong alignment on MovementModeLayerInterface_C_MovementMode_FullBodyOverride");
static_assert(sizeof(MovementModeLayerInterface_C_MovementMode_FullBodyOverride) == 0x000020, "Wrong size on MovementModeLayerInterface_C_MovementMode_FullBodyOverride");
static_assert(offsetof(MovementModeLayerInterface_C_MovementMode_FullBodyOverride, InputPoseFullBody) == 0x000000, "Member 'MovementModeLayerInterface_C_MovementMode_FullBodyOverride::InputPoseFullBody' has a wrong offset!");
static_assert(offsetof(MovementModeLayerInterface_C_MovementMode_FullBodyOverride, MovementMode_FullBodyOverride_0) == 0x000010, "Member 'MovementModeLayerInterface_C_MovementMode_FullBodyOverride::MovementMode_FullBodyOverride_0' has a wrong offset!");

struct MovementModeLayerInterface_C_MovementMode_LocomotionAdditives final
{
public:
	struct FPoseLink                              InLocomotionAdditivesPose;
	struct FPoseLink                              MovementMode_LocomotionAdditives_0;
};
static_assert(alignof(MovementModeLayerInterface_C_MovementMode_LocomotionAdditives) == 0x000008, "Wrong alignment on MovementModeLayerInterface_C_MovementMode_LocomotionAdditives");
static_assert(sizeof(MovementModeLayerInterface_C_MovementMode_LocomotionAdditives) == 0x000020, "Wrong size on MovementModeLayerInterface_C_MovementMode_LocomotionAdditives");
static_assert(offsetof(MovementModeLayerInterface_C_MovementMode_LocomotionAdditives, InLocomotionAdditivesPose) == 0x000000, "Member 'MovementModeLayerInterface_C_MovementMode_LocomotionAdditives::InLocomotionAdditivesPose' has a wrong offset!");
static_assert(offsetof(MovementModeLayerInterface_C_MovementMode_LocomotionAdditives, MovementMode_LocomotionAdditives_0) == 0x000010, "Member 'MovementModeLayerInterface_C_MovementMode_LocomotionAdditives::MovementMode_LocomotionAdditives_0' has a wrong offset!");

struct MovementModeLayerInterface_C_MovementMode_LowerBodyOverride final
{
public:
	struct FPoseLink                              InLowerBodyPose;
	struct FPoseLink                              InSourcePose;
	struct FPoseLink                              MovementMode_LowerBodyOverride_0;
};
static_assert(alignof(MovementModeLayerInterface_C_MovementMode_LowerBodyOverride) == 0x000008, "Wrong alignment on MovementModeLayerInterface_C_MovementMode_LowerBodyOverride");
static_assert(sizeof(MovementModeLayerInterface_C_MovementMode_LowerBodyOverride) == 0x000030, "Wrong size on MovementModeLayerInterface_C_MovementMode_LowerBodyOverride");
static_assert(offsetof(MovementModeLayerInterface_C_MovementMode_LowerBodyOverride, InLowerBodyPose) == 0x000000, "Member 'MovementModeLayerInterface_C_MovementMode_LowerBodyOverride::InLowerBodyPose' has a wrong offset!");
static_assert(offsetof(MovementModeLayerInterface_C_MovementMode_LowerBodyOverride, InSourcePose) == 0x000010, "Member 'MovementModeLayerInterface_C_MovementMode_LowerBodyOverride::InSourcePose' has a wrong offset!");
static_assert(offsetof(MovementModeLayerInterface_C_MovementMode_LowerBodyOverride, MovementMode_LowerBodyOverride_0) == 0x000020, "Member 'MovementModeLayerInterface_C_MovementMode_LowerBodyOverride::MovementMode_LowerBodyOverride_0' has a wrong offset!");

struct MovementModeLayerInterface_C_MovementMode_SourcePose final
{
public:
	struct FPoseLink                              InSourcePoseBase;
	struct FPoseLink                              MovementMode_SourcePose_0;
};
static_assert(alignof(MovementModeLayerInterface_C_MovementMode_SourcePose) == 0x000008, "Wrong alignment on MovementModeLayerInterface_C_MovementMode_SourcePose");
static_assert(sizeof(MovementModeLayerInterface_C_MovementMode_SourcePose) == 0x000020, "Wrong size on MovementModeLayerInterface_C_MovementMode_SourcePose");
static_assert(offsetof(MovementModeLayerInterface_C_MovementMode_SourcePose, InSourcePoseBase) == 0x000000, "Member 'MovementModeLayerInterface_C_MovementMode_SourcePose::InSourcePoseBase' has a wrong offset!");
static_assert(offsetof(MovementModeLayerInterface_C_MovementMode_SourcePose, MovementMode_SourcePose_0) == 0x000010, "Member 'MovementModeLayerInterface_C_MovementMode_SourcePose::MovementMode_SourcePose_0' has a wrong offset!");

}
