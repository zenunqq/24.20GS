#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Player_FreeFlying_AnimBP_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UPlayer_FreeFlying_AnimBP_C final : public UFortPlayerAnimInstanceProxy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;
	struct FAnimNode_Root                         AnimGraphNode_Root;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_1;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_1;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_Player_FreeFlying_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Player_FreeFlying_AnimBP_C">();
	}
	static class UPlayer_FreeFlying_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayer_FreeFlying_AnimBP_C>();
	}
};
static_assert(alignof(UPlayer_FreeFlying_AnimBP_C) == 0x000010, "Wrong alignment on UPlayer_FreeFlying_AnimBP_C");
static_assert(sizeof(UPlayer_FreeFlying_AnimBP_C) == 0x001DB0, "Wrong size on UPlayer_FreeFlying_AnimBP_C");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, UberGraphFrame) == 0x0015A0, "Member 'UPlayer_FreeFlying_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, __AnimBlueprintMutables) == 0x0015A8, "Member 'UPlayer_FreeFlying_AnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x0015F0, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimBlueprintExtension_Base) == 0x0015F8, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimGraphNode_Root) == 0x001600, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimGraphNode_TransitionResult) == 0x001620, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimGraphNode_BlendListByEnum_1) == 0x001648, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimGraphNode_BlendListByEnum_1' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimGraphNode_SequencePlayer_7) == 0x001690, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimGraphNode_SequencePlayer_6) == 0x0016D8, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimGraphNode_SequencePlayer_5) == 0x001720, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x001768, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimGraphNode_BlendListByBool_3) == 0x0017B0, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimGraphNode_BlendListByBool_2) == 0x0017F8, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimGraphNode_BlendSpacePlayer_1) == 0x001840, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimGraphNode_ApplyAdditive_1) == 0x0018B0, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimGraphNode_ApplyAdditive_1' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimGraphNode_StateResult_1) == 0x001978, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimGraphNode_BlendListByEnum) == 0x001998, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x0019E0, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x001A28, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x001A70, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x001AB8, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x001B00, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x001B48, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimGraphNode_BlendSpacePlayer) == 0x001B90, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimGraphNode_ApplyAdditive) == 0x001C00, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimGraphNode_StateResult) == 0x001CC8, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UPlayer_FreeFlying_AnimBP_C, AnimGraphNode_StateMachine) == 0x001CE8, "Member 'UPlayer_FreeFlying_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");

}
