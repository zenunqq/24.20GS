#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Player_Goop_AnimBP_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UPlayer_Goop_AnimBP_C final : public UFortGoopAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct Player_Goop_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;
	struct FAnimNode_Root                         AnimGraphNode_Root_21;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_9;
	struct FAnimNode_Root                         AnimGraphNode_Root_20;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_8;
	struct FAnimNode_Root                         AnimGraphNode_Root_19;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_7;
	struct FAnimNode_Root                         AnimGraphNode_Root_18;
	struct FAnimNode_Root                         AnimGraphNode_Root_17;
	struct FAnimNode_Root                         AnimGraphNode_Root_16;
	struct FAnimNode_Root                         AnimGraphNode_Root_15;
	struct FAnimNode_Root                         AnimGraphNode_Root_14;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_1;
	struct FAnimNode_Root                         AnimGraphNode_Root_13;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;
	struct FAnimNode_Root                         AnimGraphNode_Root_12;
	struct FAnimNode_Root                         AnimGraphNode_Root_11;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_6;
	struct FAnimNode_Root                         AnimGraphNode_Root_10;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_5;
	struct FAnimNode_Root                         AnimGraphNode_Root_9;
	struct FAnimNode_Root                         AnimGraphNode_Root_8;
	struct FAnimNode_Root                         AnimGraphNode_Root_7;
	struct FAnimNode_Root                         AnimGraphNode_Root_6;
	struct FAnimNode_Root                         AnimGraphNode_Root_5;
	struct FAnimNode_Root                         AnimGraphNode_Root_4;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_4;
	struct FAnimNode_Root                         AnimGraphNode_Root_3;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_3;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_2;
	struct FAnimNode_Root                         AnimGraphNode_Root_2;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;
	struct FAnimNode_Root                         AnimGraphNode_Root_1;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;
	struct FAnimNode_Root                         AnimGraphNode_Root;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_2;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_2;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_1;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_1;
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_Player_Goop_AnimBP(int32 EntryPoint);
	void ItemAimOffset(const struct FPoseLink& InPose_AimOffset, double AimOffsetAlpha, double Yaw, double Pitch, const struct FPoseLink& InPose_UpperLowerPreMeleeAO, struct FPoseLink* ItemAimOffset_0);
	void ItemFallAdditive(struct FPoseLink* ItemFallAdditive_0);
	void ItemFallLandAdditive(struct FPoseLink* ItemFallLandAdditive_0);
	void ItemFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* ItemFullBodyOverride_0);
	void ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* ItemIdleAdditive_0);
	void ItemJetPackJumpAdditive(struct FPoseLink* ItemJetPackJumpAdditive_0);
	void ItemJetPackStartAdditive(struct FPoseLink* ItemJetPackStartAdditive_0);
	void ItemJumpLoopAdditive(struct FPoseLink* ItemJumpLoopAdditive_0);
	void ItemJumpUpAdditive(struct FPoseLink* ItemJumpUpAdditive_0);
	void ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* ItemLowerBodyMovement_0);
	void ItemPreIK(const struct FPoseLink& InPose_PreIK, struct FPoseLink* ItemPreIK_0);
	void ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry_0);
	void ItemSkeletalControl(const struct FPoseLink& InPose, struct FPoseLink* ItemSkeletalControl_0);
	void ItemSwimJumpFallLoop(struct FPoseLink* ItemSwimJumpFallLoop_0);
	void ItemSwimJumpStart(struct FPoseLink* ItemSwimJumpStart_0);
	void ItemSwimJumpStartLoop(struct FPoseLink* ItemSwimJumpStartLoop_0);
	void ItemSwimJumpSurfaceEnd(struct FPoseLink* ItemSwimJumpSurfaceEnd_0);
	void ItemSwimJumpSurfaceLoop(struct FPoseLink* ItemSwimJumpSurfaceLoop_0);
	void ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink* ItemUpperBody_0);
	void ItemZipLineStartAdditive(struct FPoseLink* ItemZipLineStartAdditive_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Player_Goop_AnimBP_C">();
	}
	static class UPlayer_Goop_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayer_Goop_AnimBP_C>();
	}
};
static_assert(alignof(UPlayer_Goop_AnimBP_C) == 0x000010, "Wrong alignment on UPlayer_Goop_AnimBP_C");
static_assert(sizeof(UPlayer_Goop_AnimBP_C) == 0x001D50, "Wrong size on UPlayer_Goop_AnimBP_C");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, UberGraphFrame) == 0x000670, "Member 'UPlayer_Goop_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, __AnimBlueprintMutables) == 0x000678, "Member 'UPlayer_Goop_AnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x0006C8, "Member 'UPlayer_Goop_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimBlueprintExtension_Base) == 0x0006D0, "Member 'UPlayer_Goop_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_Root_21) == 0x0006D8, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_Root_21' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_LinkedInputPose_9) == 0x0006F8, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_LinkedInputPose_9' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_Root_20) == 0x0007B8, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_Root_20' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_LinkedInputPose_8) == 0x0007D8, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_LinkedInputPose_8' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_Root_19) == 0x000898, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_Root_19' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_LinkedInputPose_7) == 0x0008B8, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_LinkedInputPose_7' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_Root_18) == 0x000978, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_Root_18' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_Root_17) == 0x000998, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_Root_17' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_Root_16) == 0x0009B8, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_Root_16' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_Root_15) == 0x0009D8, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_Root_15' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_Root_14) == 0x0009F8, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_Root_14' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_BlendListByBool_4) == 0x000A18, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_BlendListByBool_3) == 0x000A60, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_SequencePlayer_8) == 0x000AA8, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_SequencePlayer_7) == 0x000AF0, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_SequencePlayer_6) == 0x000B38, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_SequencePlayer_5) == 0x000B80, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_BlendListByEnum_1) == 0x000BC8, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_BlendListByEnum_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_Root_13) == 0x000C10, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_Root_13' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_BlendListByBool_2) == 0x000C30, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x000C78, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x000CC0, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x000D08, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x000D50, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x000D98, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_BlendListByEnum) == 0x000DE0, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_Root_12) == 0x000E28, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_Root_12' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_Root_11) == 0x000E48, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_Root_11' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_LinkedInputPose_6) == 0x000E68, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_LinkedInputPose_6' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_Root_10) == 0x000F28, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_Root_10' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_LinkedInputPose_5) == 0x000F48, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_LinkedInputPose_5' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_Root_9) == 0x001008, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_Root_9' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_Root_8) == 0x001028, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_Root_8' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_Root_7) == 0x001048, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_Root_7' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_Root_6) == 0x001068, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_Root_6' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_Root_5) == 0x001088, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_Root_5' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_Root_4) == 0x0010A8, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_Root_4' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_LinkedInputPose_4) == 0x0010C8, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_LinkedInputPose_4' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_Root_3) == 0x001188, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_Root_3' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_LinkedInputPose_3) == 0x0011A8, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_LinkedInputPose_3' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_LinkedInputPose_2) == 0x001268, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_LinkedInputPose_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_Root_2) == 0x001328, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_Root_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_LinkedInputPose_1) == 0x001348, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_Root_1) == 0x001408, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_LinkedInputPose) == 0x001428, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_Root) == 0x0014E8, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x001508, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_TransitionResult) == 0x001530, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x001558, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_ApplyAdditive_2) == 0x0015A0, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_ApplyAdditive_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x001668, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_BlendSpacePlayer_2) == 0x0016B0, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_BlendSpacePlayer_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x001720, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_ApplyAdditive_1) == 0x001748, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_ApplyAdditive_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_BlendSpacePlayer_1) == 0x001810, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_StateResult_1) == 0x001880, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_LinkedAnimLayer_1) == 0x0018A0, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_LinkedAnimLayer_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_ApplyAdditive) == 0x001968, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_BlendSpacePlayer) == 0x001A30, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_StateResult) == 0x001AA0, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_StateMachine) == 0x001AC0, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x001B88, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UPlayer_Goop_AnimBP_C, AnimGraphNode_LinkedAnimLayer) == 0x001C88, "Member 'UPlayer_Goop_AnimBP_C::AnimGraphNode_LinkedAnimLayer' has a wrong offset!");

}
