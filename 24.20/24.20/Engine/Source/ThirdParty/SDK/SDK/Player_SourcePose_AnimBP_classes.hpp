#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Player_SourcePose_AnimBP_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UPlayer_SourcePose_AnimBP_C final : public UFortPlayerAnimInstanceProxy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance_NodeRelevancy   AnimBlueprintExtension_NodeRelevancy;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;
	struct FAnimNode_Root                         AnimGraphNode_Root;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_5;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_6;
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_5;
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_4;
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_3;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_2;
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_1;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator;

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_Player_SourcePose_AnimBP(int32 EntryPoint);
	void ResetBlendListNode(const struct FAnimUpdateContext& Context, const struct FAnimNodeReference& Node);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Player_SourcePose_AnimBP_C">();
	}
	static class UPlayer_SourcePose_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayer_SourcePose_AnimBP_C>();
	}
};
static_assert(alignof(UPlayer_SourcePose_AnimBP_C) == 0x000010, "Wrong alignment on UPlayer_SourcePose_AnimBP_C");
static_assert(sizeof(UPlayer_SourcePose_AnimBP_C) == 0x001A60, "Wrong size on UPlayer_SourcePose_AnimBP_C");
static_assert(offsetof(UPlayer_SourcePose_AnimBP_C, UberGraphFrame) == 0x0015A0, "Member 'UPlayer_SourcePose_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayer_SourcePose_AnimBP_C, __AnimBlueprintMutables) == 0x0015A8, "Member 'UPlayer_SourcePose_AnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UPlayer_SourcePose_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x001610, "Member 'UPlayer_SourcePose_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UPlayer_SourcePose_AnimBP_C, AnimBlueprintExtension_NodeRelevancy) == 0x001618, "Member 'UPlayer_SourcePose_AnimBP_C::AnimBlueprintExtension_NodeRelevancy' has a wrong offset!");
static_assert(offsetof(UPlayer_SourcePose_AnimBP_C, AnimBlueprintExtension_Base) == 0x0016C0, "Member 'UPlayer_SourcePose_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UPlayer_SourcePose_AnimBP_C, AnimGraphNode_Root) == 0x0016C8, "Member 'UPlayer_SourcePose_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UPlayer_SourcePose_AnimBP_C, AnimGraphNode_BlendListByBool_5) == 0x0016E8, "Member 'UPlayer_SourcePose_AnimBP_C::AnimGraphNode_BlendListByBool_5' has a wrong offset!");
static_assert(offsetof(UPlayer_SourcePose_AnimBP_C, AnimGraphNode_BlendListByBool_4) == 0x001730, "Member 'UPlayer_SourcePose_AnimBP_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(UPlayer_SourcePose_AnimBP_C, AnimGraphNode_BlendListByBool_3) == 0x001778, "Member 'UPlayer_SourcePose_AnimBP_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UPlayer_SourcePose_AnimBP_C, AnimGraphNode_SequenceEvaluator_6) == 0x0017C0, "Member 'UPlayer_SourcePose_AnimBP_C::AnimGraphNode_SequenceEvaluator_6' has a wrong offset!");
static_assert(offsetof(UPlayer_SourcePose_AnimBP_C, AnimGraphNode_SequenceEvaluator_5) == 0x001800, "Member 'UPlayer_SourcePose_AnimBP_C::AnimGraphNode_SequenceEvaluator_5' has a wrong offset!");
static_assert(offsetof(UPlayer_SourcePose_AnimBP_C, AnimGraphNode_SequenceEvaluator_4) == 0x001840, "Member 'UPlayer_SourcePose_AnimBP_C::AnimGraphNode_SequenceEvaluator_4' has a wrong offset!");
static_assert(offsetof(UPlayer_SourcePose_AnimBP_C, AnimGraphNode_SequenceEvaluator_3) == 0x001880, "Member 'UPlayer_SourcePose_AnimBP_C::AnimGraphNode_SequenceEvaluator_3' has a wrong offset!");
static_assert(offsetof(UPlayer_SourcePose_AnimBP_C, AnimGraphNode_BlendListByBool_2) == 0x0018C0, "Member 'UPlayer_SourcePose_AnimBP_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UPlayer_SourcePose_AnimBP_C, AnimGraphNode_SequenceEvaluator_2) == 0x001908, "Member 'UPlayer_SourcePose_AnimBP_C::AnimGraphNode_SequenceEvaluator_2' has a wrong offset!");
static_assert(offsetof(UPlayer_SourcePose_AnimBP_C, AnimGraphNode_SequenceEvaluator_1) == 0x001948, "Member 'UPlayer_SourcePose_AnimBP_C::AnimGraphNode_SequenceEvaluator_1' has a wrong offset!");
static_assert(offsetof(UPlayer_SourcePose_AnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x001988, "Member 'UPlayer_SourcePose_AnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UPlayer_SourcePose_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x0019D0, "Member 'UPlayer_SourcePose_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UPlayer_SourcePose_AnimBP_C, AnimGraphNode_SequenceEvaluator) == 0x001A18, "Member 'UPlayer_SourcePose_AnimBP_C::AnimGraphNode_SequenceEvaluator' has a wrong offset!");

}
