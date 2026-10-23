#pragma once

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "LiveLinkAnimationCore_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Fortnite_Base_Head_Export_Skeleton_AnimBP_structs.hpp"
#include "CurveExpression_structs.hpp"

namespace SDK
{

class UFortnite_Base_Head_Export_Skeleton_AnimBP_C : public UHeadPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;
	uint8                                         Pad_70E[0x2];
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;
	struct FAnimNode_PoseBlendNode                AnimGraphNode_PoseBlendNode;
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_2;
	struct FAnimNode_Root                         AnimGraphNode_Root;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_1;
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_6;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_16;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_15;
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_5;
	struct FAnimNode_Slot                         AnimGraphNode_Slot;
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_4;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_14;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_13;
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_3;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_12;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_11;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_10;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_9;
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_1;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_8;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_7;
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;
	struct FAnimNode_RemapCurvesFromMesh          AnimGraphNode_RemapCurvesFromMesh;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;
	struct FAnimNode_LiveLinkPose                 AnimGraphNode_LiveLinkPose_1;
	struct FAnimNode_LiveLinkPose                 AnimGraphNode_LiveLinkPose;
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;
	class USkeletalMeshComponent*                 MeshToCopy;
	bool                                          GetPlayerListUsesCustomCharacterParts;
	bool                                          bIsMoving;
	bool                                          bIsOnGround_0;
	bool                                          bIsSlopeSliding_0;
	bool                                          bIsFallingLocal;
	bool                                          bIsJumpingLocal;
	bool                                          bIsCrouching_0;
	bool                                          bIsCrouchWalking;
	bool                                          bIsCrouchSprinting_0;
	bool                                          bIsSprinting_0;
	bool                                          bIsJogging_0;
	bool                                          bIsDBNO_0;
	bool                                          bIsTargeting_0;
	bool                                          bIsDancing;
	bool                                          bIsMeleeSwing_0;
	bool                                          bIsLocomotion_0;
	bool                                          bRecentlyFired_0;
	uint8                                         Pad_1D79[0x7];
	double                                        LastFireTime;
	bool                                          IsSkydiving0;
	bool                                          IsDive0;
	uint8                                         Pad_1D8A[0x6];
	double                                        LookYaw;
	double                                        LookPitch;
	bool                                          is_3L_anim_obsolete;

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP_AnimGraphNode_RemapCurvesFromMesh_FA2D152640A8B7905F9C52941913CB38();
	void ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fortnite_Base_Head_Export_Skeleton_AnimBP_C">();
	}
	static class UFortnite_Base_Head_Export_Skeleton_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortnite_Base_Head_Export_Skeleton_AnimBP_C>();
	}
};
static_assert(alignof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C) == 0x000010, "Wrong alignment on UFortnite_Base_Head_Export_Skeleton_AnimBP_C");
static_assert(sizeof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C) == 0x001DB0, "Wrong size on UFortnite_Base_Head_Export_Skeleton_AnimBP_C");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, UberGraphFrame) == 0x000700, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, __AnimBlueprintMutables) == 0x000708, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x000710, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimBlueprintExtension_Base) == 0x000718, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_PoseBlendNode) == 0x000720, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_PoseBlendNode' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_Slot_1) == 0x0007D0, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x000818, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_CopyPoseFromMesh) == 0x000860, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_LayeredBoneBlend_2) == 0x000A30, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_LayeredBoneBlend_2' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_Root) == 0x000B10, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_BlendListByBool_2) == 0x000B30, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_TwoWayBlend_1) == 0x000B78, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_TwoWayBlend_1' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_SaveCachedPose_6) == 0x000C38, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_SaveCachedPose_6' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_16) == 0x000D38, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_16' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_15) == 0x000D60, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_15' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_SaveCachedPose_5) == 0x000D88, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_SaveCachedPose_5' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_Slot) == 0x000E88, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_LayeredBoneBlend_1) == 0x000ED0, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_SaveCachedPose_4) == 0x000FB0, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_SaveCachedPose_4' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_14) == 0x0010B0, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_14' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_13) == 0x0010D8, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_13' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_ModifyBone) == 0x001100, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x001228, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x001248, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_SaveCachedPose_3) == 0x001268, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_SaveCachedPose_3' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_12) == 0x001368, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_12' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x001390, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_11) == 0x0013D8, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_11' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_10) == 0x001400, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_10' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_9) == 0x001428, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_9' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_SaveCachedPose_2) == 0x001450, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_BlendListByEnum_1) == 0x001550, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_BlendListByEnum_1' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_8) == 0x001598, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_8' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_7) == 0x0015C0, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_7' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_SaveCachedPose_1) == 0x0015E8, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_6) == 0x0016E8, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_LayeredBoneBlend) == 0x001710, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_5) == 0x0017F0, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_4) == 0x001818, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_3) == 0x001840, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_BlendListByEnum) == 0x001868, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_2) == 0x0018B0, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_RemapCurvesFromMesh) == 0x0018D8, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_RemapCurvesFromMesh' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x001A78, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x001AC0, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_LiveLinkPose_1) == 0x001AE8, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_LiveLinkPose_1' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_LiveLinkPose) == 0x001B30, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_LiveLinkPose' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x001B78, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_TwoWayBlend) == 0x001C78, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_TwoWayBlend' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x001D38, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, MeshToCopy) == 0x001D60, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::MeshToCopy' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, GetPlayerListUsesCustomCharacterParts) == 0x001D68, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::GetPlayerListUsesCustomCharacterParts' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsMoving) == 0x001D69, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsMoving' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsOnGround_0) == 0x001D6A, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsOnGround_0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsSlopeSliding_0) == 0x001D6B, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsSlopeSliding_0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsFallingLocal) == 0x001D6C, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsFallingLocal' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsJumpingLocal) == 0x001D6D, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsJumpingLocal' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsCrouching_0) == 0x001D6E, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsCrouching_0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsCrouchWalking) == 0x001D6F, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsCrouchWalking' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsCrouchSprinting_0) == 0x001D70, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsCrouchSprinting_0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsSprinting_0) == 0x001D71, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsSprinting_0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsJogging_0) == 0x001D72, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsJogging_0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsDBNO_0) == 0x001D73, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsDBNO_0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsTargeting_0) == 0x001D74, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsTargeting_0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsDancing) == 0x001D75, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsDancing' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsMeleeSwing_0) == 0x001D76, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsMeleeSwing_0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsLocomotion_0) == 0x001D77, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsLocomotion_0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bRecentlyFired_0) == 0x001D78, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bRecentlyFired_0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, LastFireTime) == 0x001D80, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::LastFireTime' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, IsSkydiving0) == 0x001D88, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::IsSkydiving0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, IsDive0) == 0x001D89, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::IsDive0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, LookYaw) == 0x001D90, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::LookYaw' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, LookPitch) == 0x001D98, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::LookPitch' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, is_3L_anim_obsolete) == 0x001DA0, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::is_3L_anim_obsolete' has a wrong offset!");

}
