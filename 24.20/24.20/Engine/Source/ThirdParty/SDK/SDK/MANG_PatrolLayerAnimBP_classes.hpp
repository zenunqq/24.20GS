#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MANG_PatrolLayerAnimBP_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UMANG_PatrolLayerAnimBP_C final : public UFortPatrolAnimLayer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;
	uint8                                         Pad_4E4[0x4];
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;
	struct FAnimNode_Root                         AnimGraphNode_Root_2;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;
	struct FAnimNode_Root                         AnimGraphNode_Root_1;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_2;
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_1;
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;
	struct FAnimNode_Root                         AnimGraphNode_Root;

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void CharacterSkeletalControlPostLegIK(const struct FPoseLink& InPosePostLegIK, struct FPoseLink* CharacterSkeletalControlPostLegIK_0);
	void ExecuteUbergraph_MANG_PatrolLayerAnimBP(int32 EntryPoint);
	void FullBodyOverride(const struct FPoseLink& PassThroughFullBodyPose, struct FPoseLink* FullBodyOverride_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MANG_PatrolLayerAnimBP_C">();
	}
	static class UMANG_PatrolLayerAnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMANG_PatrolLayerAnimBP_C>();
	}
};
static_assert(alignof(UMANG_PatrolLayerAnimBP_C) == 0x000010, "Wrong alignment on UMANG_PatrolLayerAnimBP_C");
static_assert(sizeof(UMANG_PatrolLayerAnimBP_C) == 0x0011A0, "Wrong size on UMANG_PatrolLayerAnimBP_C");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, UberGraphFrame) == 0x0004C0, "Member 'UMANG_PatrolLayerAnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, __AnimBlueprintMutables) == 0x0004C8, "Member 'UMANG_PatrolLayerAnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x0004E8, "Member 'UMANG_PatrolLayerAnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimBlueprintExtension_Base) == 0x0004F0, "Member 'UMANG_PatrolLayerAnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_Root_2) == 0x0004F8, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_Root_2' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_LinkedInputPose_1) == 0x000518, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_Root_1) == 0x0005D8, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_LinkedInputPose) == 0x0005F8, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_BlendListByBool) == 0x0006B8, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_TransitionResult_7) == 0x000700, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_TransitionResult_6) == 0x000728, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_TransitionResult_5) == 0x000750, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_TransitionResult_4) == 0x000778, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_TransitionResult_3) == 0x0007A0, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_TransitionResult_2) == 0x0007C8, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_TransitionResult_1) == 0x0007F0, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_TransitionResult) == 0x000818, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_BlendSpacePlayer_2) == 0x000840, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_BlendSpacePlayer_2' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_LayeredBoneBlend_1) == 0x0008B0, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_UseCachedPose_4) == 0x000990, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_StateResult_3) == 0x0009B8, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_UseCachedPose_3) == 0x0009D8, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_StateResult_2) == 0x000A00, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_BlendSpacePlayer_1) == 0x000A20, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_ApplyAdditive_1) == 0x000A90, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_ApplyAdditive_1' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_LayeredBoneBlend) == 0x000B58, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_UseCachedPose_2) == 0x000C38, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_BlendSpacePlayer) == 0x000C60, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_StateResult_1) == 0x000CD0, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x000CF0, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_ApplyAdditive) == 0x000D18, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x000DE0, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_StateResult) == 0x000E28, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_StateMachine) == 0x000E48, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_SaveCachedPose_1) == 0x000F10, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_UseCachedPose) == 0x001010, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_SequencePlayer) == 0x001038, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_SaveCachedPose) == 0x001080, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UMANG_PatrolLayerAnimBP_C, AnimGraphNode_Root) == 0x001180, "Member 'UMANG_PatrolLayerAnimBP_C::AnimGraphNode_Root' has a wrong offset!");

}
