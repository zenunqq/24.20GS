#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct PlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK final
{
public:
	struct FPoseLink                              InPosePostLegIK;
	struct FPoseLink                              CharacterSkeletalControlPostLegIK_0;
};
static_assert(alignof(PlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK) == 0x000008, "Wrong alignment on PlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK");
static_assert(sizeof(PlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK) == 0x000020, "Wrong size on PlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK");
static_assert(offsetof(PlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK, InPosePostLegIK) == 0x000000, "Member 'PlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK::InPosePostLegIK' has a wrong offset!");
static_assert(offsetof(PlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK, CharacterSkeletalControlPostLegIK_0) == 0x000010, "Member 'PlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK::CharacterSkeletalControlPostLegIK_0' has a wrong offset!");

struct PlayerAnimOverrideLayerInterface_C_FullBodyOverride final
{
public:
	struct FPoseLink                              PassThroughFullBodyPose;
	struct FPoseLink                              FullBodyOverride_0;
};
static_assert(alignof(PlayerAnimOverrideLayerInterface_C_FullBodyOverride) == 0x000008, "Wrong alignment on PlayerAnimOverrideLayerInterface_C_FullBodyOverride");
static_assert(sizeof(PlayerAnimOverrideLayerInterface_C_FullBodyOverride) == 0x000020, "Wrong size on PlayerAnimOverrideLayerInterface_C_FullBodyOverride");
static_assert(offsetof(PlayerAnimOverrideLayerInterface_C_FullBodyOverride, PassThroughFullBodyPose) == 0x000000, "Member 'PlayerAnimOverrideLayerInterface_C_FullBodyOverride::PassThroughFullBodyPose' has a wrong offset!");
static_assert(offsetof(PlayerAnimOverrideLayerInterface_C_FullBodyOverride, FullBodyOverride_0) == 0x000010, "Member 'PlayerAnimOverrideLayerInterface_C_FullBodyOverride::FullBodyOverride_0' has a wrong offset!");

}
