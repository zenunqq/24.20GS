#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Player_Sprint_AnimBP_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UPlayer_Sprint_AnimBP_C final : public UFortSprintAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;
	uint8                                         Pad_6F4[0x4];
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;
	struct FAnimNode_Root                         AnimGraphNode_Root;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;
	struct FAnimNode_RotateRootBone               AnimGraphNode_RotateRootBone;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_2;
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_4;
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_3;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_2;
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_1;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;
	struct FAnimNode_Slot                         AnimGraphNode_Slot;
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;
	struct FAnimNode_Inertialization              AnimGraphNode_Inertialization;

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_Player_Sprint_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Player_Sprint_AnimBP_C">();
	}
	static class UPlayer_Sprint_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayer_Sprint_AnimBP_C>();
	}
};
static_assert(alignof(UPlayer_Sprint_AnimBP_C) == 0x000010, "Wrong alignment on UPlayer_Sprint_AnimBP_C");
static_assert(sizeof(UPlayer_Sprint_AnimBP_C) == 0x001880, "Wrong size on UPlayer_Sprint_AnimBP_C");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, UberGraphFrame) == 0x0006C0, "Member 'UPlayer_Sprint_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, __AnimBlueprintMutables) == 0x0006C8, "Member 'UPlayer_Sprint_AnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x0006F8, "Member 'UPlayer_Sprint_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimBlueprintExtension_Base) == 0x000700, "Member 'UPlayer_Sprint_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_Root) == 0x000708, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x000728, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x000750, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x000778, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x0007A0, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_SequencePlayer_8) == 0x0007C8, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_SequencePlayer_7) == 0x000810, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_BlendListByBool_4) == 0x000858, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_StateResult_2) == 0x0008A0, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_SequencePlayer_6) == 0x0008C0, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_SequencePlayer_5) == 0x000908, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_BlendListByBool_3) == 0x000950, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_StateResult_1) == 0x000998, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_TransitionResult) == 0x0009B8, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_StateMachine_1) == 0x0009E0, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_RotateRootBone) == 0x000AA8, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_RotateRootBone' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_BlendSpacePlayer_2) == 0x000B50, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_BlendSpacePlayer_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_ApplyAdditive_4) == 0x000BC0, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_ApplyAdditive_4' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_ApplyAdditive_3) == 0x000C88, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_ApplyAdditive_3' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x000D50, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_BlendListByBool_2) == 0x000D98, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x000DE0, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x000E28, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x000E70, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x000EB8, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_ApplyAdditive_2) == 0x000F00, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_ApplyAdditive_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_ApplyAdditive_1) == 0x000FC8, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_ApplyAdditive_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x001090, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_ApplyAdditive) == 0x0010D8, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_Slot_1) == 0x0011A0, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_UseCachedPose_2) == 0x0011E8, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_LayeredBoneBlend_1) == 0x001210, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_BlendSpacePlayer_1) == 0x0012F0, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_BlendSpacePlayer) == 0x001360, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x0013D0, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x001418, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x001440, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_Slot) == 0x001468, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_LayeredBoneBlend) == 0x0014B0, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_StateResult) == 0x001590, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_StateMachine) == 0x0015B0, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x001678, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UPlayer_Sprint_AnimBP_C, AnimGraphNode_Inertialization) == 0x001778, "Member 'UPlayer_Sprint_AnimBP_C::AnimGraphNode_Inertialization' has a wrong offset!");

}
