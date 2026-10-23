#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct MANG_PatrolLayerAnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;
};
static_assert(alignof(MANG_PatrolLayerAnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on MANG_PatrolLayerAnimBP_C_AnimGraph");
static_assert(sizeof(MANG_PatrolLayerAnimBP_C_AnimGraph) == 0x000010, "Wrong size on MANG_PatrolLayerAnimBP_C_AnimGraph");
static_assert(offsetof(MANG_PatrolLayerAnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'MANG_PatrolLayerAnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

struct MANG_PatrolLayerAnimBP_C_CharacterSkeletalControlPostLegIK final
{
public:
	struct FPoseLink                              InPosePostLegIK;
	struct FPoseLink                              CharacterSkeletalControlPostLegIK_0;
};
static_assert(alignof(MANG_PatrolLayerAnimBP_C_CharacterSkeletalControlPostLegIK) == 0x000008, "Wrong alignment on MANG_PatrolLayerAnimBP_C_CharacterSkeletalControlPostLegIK");
static_assert(sizeof(MANG_PatrolLayerAnimBP_C_CharacterSkeletalControlPostLegIK) == 0x000020, "Wrong size on MANG_PatrolLayerAnimBP_C_CharacterSkeletalControlPostLegIK");
static_assert(offsetof(MANG_PatrolLayerAnimBP_C_CharacterSkeletalControlPostLegIK, InPosePostLegIK) == 0x000000, "Member 'MANG_PatrolLayerAnimBP_C_CharacterSkeletalControlPostLegIK::InPosePostLegIK' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP_C_CharacterSkeletalControlPostLegIK, CharacterSkeletalControlPostLegIK_0) == 0x000010, "Member 'MANG_PatrolLayerAnimBP_C_CharacterSkeletalControlPostLegIK::CharacterSkeletalControlPostLegIK_0' has a wrong offset!");

struct MANG_PatrolLayerAnimBP_C_ExecuteUbergraph_MANG_PatrolLayerAnimBP final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(MANG_PatrolLayerAnimBP_C_ExecuteUbergraph_MANG_PatrolLayerAnimBP) == 0x000004, "Wrong alignment on MANG_PatrolLayerAnimBP_C_ExecuteUbergraph_MANG_PatrolLayerAnimBP");
static_assert(sizeof(MANG_PatrolLayerAnimBP_C_ExecuteUbergraph_MANG_PatrolLayerAnimBP) == 0x000004, "Wrong size on MANG_PatrolLayerAnimBP_C_ExecuteUbergraph_MANG_PatrolLayerAnimBP");
static_assert(offsetof(MANG_PatrolLayerAnimBP_C_ExecuteUbergraph_MANG_PatrolLayerAnimBP, EntryPoint) == 0x000000, "Member 'MANG_PatrolLayerAnimBP_C_ExecuteUbergraph_MANG_PatrolLayerAnimBP::EntryPoint' has a wrong offset!");

struct MANG_PatrolLayerAnimBP_C_FullBodyOverride final
{
public:
	struct FPoseLink                              PassThroughFullBodyPose;
	struct FPoseLink                              FullBodyOverride_0;
};
static_assert(alignof(MANG_PatrolLayerAnimBP_C_FullBodyOverride) == 0x000008, "Wrong alignment on MANG_PatrolLayerAnimBP_C_FullBodyOverride");
static_assert(sizeof(MANG_PatrolLayerAnimBP_C_FullBodyOverride) == 0x000020, "Wrong size on MANG_PatrolLayerAnimBP_C_FullBodyOverride");
static_assert(offsetof(MANG_PatrolLayerAnimBP_C_FullBodyOverride, PassThroughFullBodyPose) == 0x000000, "Member 'MANG_PatrolLayerAnimBP_C_FullBodyOverride::PassThroughFullBodyPose' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP_C_FullBodyOverride, FullBodyOverride_0) == 0x000010, "Member 'MANG_PatrolLayerAnimBP_C_FullBodyOverride::FullBodyOverride_0' has a wrong offset!");

}
