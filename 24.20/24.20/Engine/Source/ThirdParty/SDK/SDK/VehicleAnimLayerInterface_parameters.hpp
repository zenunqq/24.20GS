#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct VehicleAnimLayerInterface_C_VehicleFinalPoseOverride final
{
public:
	struct FPoseLink                              InFinalPose;
	struct FPoseLink                              VehicleFinalPoseOverride_0;
};
static_assert(alignof(VehicleAnimLayerInterface_C_VehicleFinalPoseOverride) == 0x000008, "Wrong alignment on VehicleAnimLayerInterface_C_VehicleFinalPoseOverride");
static_assert(sizeof(VehicleAnimLayerInterface_C_VehicleFinalPoseOverride) == 0x000020, "Wrong size on VehicleAnimLayerInterface_C_VehicleFinalPoseOverride");
static_assert(offsetof(VehicleAnimLayerInterface_C_VehicleFinalPoseOverride, InFinalPose) == 0x000000, "Member 'VehicleAnimLayerInterface_C_VehicleFinalPoseOverride::InFinalPose' has a wrong offset!");
static_assert(offsetof(VehicleAnimLayerInterface_C_VehicleFinalPoseOverride, VehicleFinalPoseOverride_0) == 0x000010, "Member 'VehicleAnimLayerInterface_C_VehicleFinalPoseOverride::VehicleFinalPoseOverride_0' has a wrong offset!");

struct VehicleAnimLayerInterface_C_VehicleFullBodyOverride final
{
public:
	struct FPoseLink                              InPoseFullBody;
	struct FPoseLink                              VehicleFullBodyOverride_0;
};
static_assert(alignof(VehicleAnimLayerInterface_C_VehicleFullBodyOverride) == 0x000008, "Wrong alignment on VehicleAnimLayerInterface_C_VehicleFullBodyOverride");
static_assert(sizeof(VehicleAnimLayerInterface_C_VehicleFullBodyOverride) == 0x000020, "Wrong size on VehicleAnimLayerInterface_C_VehicleFullBodyOverride");
static_assert(offsetof(VehicleAnimLayerInterface_C_VehicleFullBodyOverride, InPoseFullBody) == 0x000000, "Member 'VehicleAnimLayerInterface_C_VehicleFullBodyOverride::InPoseFullBody' has a wrong offset!");
static_assert(offsetof(VehicleAnimLayerInterface_C_VehicleFullBodyOverride, VehicleFullBodyOverride_0) == 0x000010, "Member 'VehicleAnimLayerInterface_C_VehicleFullBodyOverride::VehicleFullBodyOverride_0' has a wrong offset!");

struct VehicleAnimLayerInterface_C_VehicleLowerBodyOverride final
{
public:
	struct FPoseLink                              InPoseLowerBodyDefault;
	struct FPoseLink                              InPoseUpperBody;
	struct FPoseLink                              VehicleLowerBodyOverride_0;
};
static_assert(alignof(VehicleAnimLayerInterface_C_VehicleLowerBodyOverride) == 0x000008, "Wrong alignment on VehicleAnimLayerInterface_C_VehicleLowerBodyOverride");
static_assert(sizeof(VehicleAnimLayerInterface_C_VehicleLowerBodyOverride) == 0x000030, "Wrong size on VehicleAnimLayerInterface_C_VehicleLowerBodyOverride");
static_assert(offsetof(VehicleAnimLayerInterface_C_VehicleLowerBodyOverride, InPoseLowerBodyDefault) == 0x000000, "Member 'VehicleAnimLayerInterface_C_VehicleLowerBodyOverride::InPoseLowerBodyDefault' has a wrong offset!");
static_assert(offsetof(VehicleAnimLayerInterface_C_VehicleLowerBodyOverride, InPoseUpperBody) == 0x000010, "Member 'VehicleAnimLayerInterface_C_VehicleLowerBodyOverride::InPoseUpperBody' has a wrong offset!");
static_assert(offsetof(VehicleAnimLayerInterface_C_VehicleLowerBodyOverride, VehicleLowerBodyOverride_0) == 0x000020, "Member 'VehicleAnimLayerInterface_C_VehicleLowerBodyOverride::VehicleLowerBodyOverride_0' has a wrong offset!");

struct VehicleAnimLayerInterface_C_VehicleSplitBodyOverride final
{
public:
	struct FPoseLink                              InPoseSplitBody;
	struct FPoseLink                              InPoseUpperAndLowerBody;
	struct FFortAnimInput_TurnInPlace             TurnInPlace;
	struct FPoseLink                              InPoseUpperAndLowerBodyRemoveRoot;
	struct FPoseLink                              VehicleSplitBodyOverride_0;
};
static_assert(alignof(VehicleAnimLayerInterface_C_VehicleSplitBodyOverride) == 0x000008, "Wrong alignment on VehicleAnimLayerInterface_C_VehicleSplitBodyOverride");
static_assert(sizeof(VehicleAnimLayerInterface_C_VehicleSplitBodyOverride) == 0x0000B8, "Wrong size on VehicleAnimLayerInterface_C_VehicleSplitBodyOverride");
static_assert(offsetof(VehicleAnimLayerInterface_C_VehicleSplitBodyOverride, InPoseSplitBody) == 0x000000, "Member 'VehicleAnimLayerInterface_C_VehicleSplitBodyOverride::InPoseSplitBody' has a wrong offset!");
static_assert(offsetof(VehicleAnimLayerInterface_C_VehicleSplitBodyOverride, InPoseUpperAndLowerBody) == 0x000010, "Member 'VehicleAnimLayerInterface_C_VehicleSplitBodyOverride::InPoseUpperAndLowerBody' has a wrong offset!");
static_assert(offsetof(VehicleAnimLayerInterface_C_VehicleSplitBodyOverride, TurnInPlace) == 0x000020, "Member 'VehicleAnimLayerInterface_C_VehicleSplitBodyOverride::TurnInPlace' has a wrong offset!");
static_assert(offsetof(VehicleAnimLayerInterface_C_VehicleSplitBodyOverride, InPoseUpperAndLowerBodyRemoveRoot) == 0x000098, "Member 'VehicleAnimLayerInterface_C_VehicleSplitBodyOverride::InPoseUpperAndLowerBodyRemoveRoot' has a wrong offset!");
static_assert(offsetof(VehicleAnimLayerInterface_C_VehicleSplitBodyOverride, VehicleSplitBodyOverride_0) == 0x0000A8, "Member 'VehicleAnimLayerInterface_C_VehicleSplitBodyOverride::VehicleSplitBodyOverride_0' has a wrong offset!");

}
