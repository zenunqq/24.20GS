#pragma once

#include "Basic.hpp"

#include "Player_DBNO_AnimBP_structs.hpp"
#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UPlayer_DBNO_AnimBP_C final : public UFortDBNOAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct Player_DBNO_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;
	struct FAnimNode_Root                         AnimGraphNode_Root;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;
	bool                                          AdjustLargeBody;

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_DBNO_AnimBP_AnimGraphNode_ModifyBone_5F4823B441208B2FBDD3F9A03D4F08DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_DBNO_AnimBP_AnimGraphNode_ModifyBone_F28F19494706BFB6D2F74181D211D9E5();
	void ExecuteUbergraph_Player_DBNO_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Player_DBNO_AnimBP_C">();
	}
	static class UPlayer_DBNO_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayer_DBNO_AnimBP_C>();
	}
};
static_assert(alignof(UPlayer_DBNO_AnimBP_C) == 0x000010, "Wrong alignment on UPlayer_DBNO_AnimBP_C");
static_assert(sizeof(UPlayer_DBNO_AnimBP_C) == 0x000D30, "Wrong size on UPlayer_DBNO_AnimBP_C");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, UberGraphFrame) == 0x000460, "Member 'UPlayer_DBNO_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, __AnimBlueprintMutables) == 0x000468, "Member 'UPlayer_DBNO_AnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x000480, "Member 'UPlayer_DBNO_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimBlueprintExtension_Base) == 0x000488, "Member 'UPlayer_DBNO_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_Root) == 0x000490, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_TransitionResult_10) == 0x0004B0, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_TransitionResult_9) == 0x0004D8, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_TransitionResult_8) == 0x000500, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_TransitionResult_7) == 0x000528, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_TransitionResult_6) == 0x000550, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_TransitionResult_5) == 0x000578, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x0005A0, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x0005C8, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x0005F0, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x000618, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x000640, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_StateResult_4) == 0x000688, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x0006A8, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_StateResult_3) == 0x0006F0, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x000710, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_StateResult_2) == 0x000758, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_BlendSpacePlayer_1) == 0x000778, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_StateResult_1) == 0x0007E8, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x000808, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_StateResult) == 0x000850, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_TransitionResult) == 0x000870, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_StateMachine) == 0x000898, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_ApplyAdditive) == 0x000960, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_BlendSpacePlayer) == 0x000A28, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x000A98, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x000BC0, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000BE0, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AnimGraphNode_ModifyBone) == 0x000C00, "Member 'UPlayer_DBNO_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNO_AnimBP_C, AdjustLargeBody) == 0x000D28, "Member 'UPlayer_DBNO_AnimBP_C::AdjustLargeBody' has a wrong offset!");

}
