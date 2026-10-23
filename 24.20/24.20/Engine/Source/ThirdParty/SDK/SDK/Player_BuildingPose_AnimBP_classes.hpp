#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Player_BuildingPose_AnimBP_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UPlayer_BuildingPose_AnimBP_C final : public UFortPlayerBuildingAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;
	uint8                                         Pad_45D[0x3];
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;
	struct FAnimNode_Root                         AnimGraphNode_Root;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_1;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_Player_BuildingPose_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Player_BuildingPose_AnimBP_C">();
	}
	static class UPlayer_BuildingPose_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayer_BuildingPose_AnimBP_C>();
	}
};
static_assert(alignof(UPlayer_BuildingPose_AnimBP_C) == 0x000010, "Wrong alignment on UPlayer_BuildingPose_AnimBP_C");
static_assert(sizeof(UPlayer_BuildingPose_AnimBP_C) == 0x000930, "Wrong size on UPlayer_BuildingPose_AnimBP_C");
static_assert(offsetof(UPlayer_BuildingPose_AnimBP_C, UberGraphFrame) == 0x000450, "Member 'UPlayer_BuildingPose_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayer_BuildingPose_AnimBP_C, __AnimBlueprintMutables) == 0x000458, "Member 'UPlayer_BuildingPose_AnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UPlayer_BuildingPose_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x000460, "Member 'UPlayer_BuildingPose_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UPlayer_BuildingPose_AnimBP_C, AnimBlueprintExtension_Base) == 0x000468, "Member 'UPlayer_BuildingPose_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UPlayer_BuildingPose_AnimBP_C, AnimGraphNode_Root) == 0x000470, "Member 'UPlayer_BuildingPose_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UPlayer_BuildingPose_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x000490, "Member 'UPlayer_BuildingPose_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UPlayer_BuildingPose_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x0004B8, "Member 'UPlayer_BuildingPose_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UPlayer_BuildingPose_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x0004E0, "Member 'UPlayer_BuildingPose_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UPlayer_BuildingPose_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x000508, "Member 'UPlayer_BuildingPose_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UPlayer_BuildingPose_AnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x000530, "Member 'UPlayer_BuildingPose_AnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UPlayer_BuildingPose_AnimBP_C, AnimGraphNode_SequencePlayer_5) == 0x000578, "Member 'UPlayer_BuildingPose_AnimBP_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UPlayer_BuildingPose_AnimBP_C, AnimGraphNode_BlendListByEnum_1) == 0x0005C0, "Member 'UPlayer_BuildingPose_AnimBP_C::AnimGraphNode_BlendListByEnum_1' has a wrong offset!");
static_assert(offsetof(UPlayer_BuildingPose_AnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x000608, "Member 'UPlayer_BuildingPose_AnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UPlayer_BuildingPose_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x000650, "Member 'UPlayer_BuildingPose_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UPlayer_BuildingPose_AnimBP_C, AnimGraphNode_BlendListByEnum) == 0x000698, "Member 'UPlayer_BuildingPose_AnimBP_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UPlayer_BuildingPose_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x0006E0, "Member 'UPlayer_BuildingPose_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UPlayer_BuildingPose_AnimBP_C, AnimGraphNode_StateResult_1) == 0x000728, "Member 'UPlayer_BuildingPose_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UPlayer_BuildingPose_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x000748, "Member 'UPlayer_BuildingPose_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UPlayer_BuildingPose_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x000790, "Member 'UPlayer_BuildingPose_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UPlayer_BuildingPose_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x0007D8, "Member 'UPlayer_BuildingPose_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UPlayer_BuildingPose_AnimBP_C, AnimGraphNode_StateResult) == 0x000820, "Member 'UPlayer_BuildingPose_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UPlayer_BuildingPose_AnimBP_C, AnimGraphNode_TransitionResult) == 0x000840, "Member 'UPlayer_BuildingPose_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UPlayer_BuildingPose_AnimBP_C, AnimGraphNode_StateMachine) == 0x000868, "Member 'UPlayer_BuildingPose_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");

}
