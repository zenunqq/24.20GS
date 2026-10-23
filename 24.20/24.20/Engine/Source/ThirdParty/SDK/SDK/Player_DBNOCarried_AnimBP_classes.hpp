#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Player_DBNOCarried_AnimBP_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"

namespace SDK
{

class UPlayer_DBNOCarried_AnimBP_C final : public UFortPlayerDBNOCarriedAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct Player_DBNOCarried_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;
	uint8                                         Pad_594[0x4];
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;
	struct FAnimNode_Root                         AnimGraphNode_Root;
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_8;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_13;
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_6;
	uint8                                         Pad_988[0x8];
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK;
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_7;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_2;
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_5;
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_4;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_12;
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_3;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_11;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_10;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_12;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_2;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9;
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_1;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_6;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_11;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_10;
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_5;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_9;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_4;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_8;
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_3;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_7;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_6;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_5;
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_2;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_1;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
	uint8                                         Pad_1ED8[0x8];
	struct FAnimNode_Trail                        AnimGraphNode_Trail;
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;
	struct FAnimNode_Slot                         AnimGraphNode_Slot;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_Player_DBNOCarried_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Player_DBNOCarried_AnimBP_C">();
	}
	static class UPlayer_DBNOCarried_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayer_DBNOCarried_AnimBP_C>();
	}
};
static_assert(alignof(UPlayer_DBNOCarried_AnimBP_C) == 0x000010, "Wrong alignment on UPlayer_DBNOCarried_AnimBP_C");
static_assert(sizeof(UPlayer_DBNOCarried_AnimBP_C) == 0x002410, "Wrong size on UPlayer_DBNOCarried_AnimBP_C");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, UberGraphFrame) == 0x000540, "Member 'UPlayer_DBNOCarried_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, __AnimBlueprintMutables) == 0x000548, "Member 'UPlayer_DBNOCarried_AnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x000598, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimBlueprintExtension_Base) == 0x0005A0, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_Root) == 0x0005A8, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_LocalToComponentSpace_1) == 0x0005C8, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x0005E8, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_ModifyBone) == 0x000710, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_SequenceEvaluator_8) == 0x000838, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_SequenceEvaluator_8' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_SequencePlayer_13) == 0x000878, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_SequencePlayer_13' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_ApplyAdditive_6) == 0x0008C0, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_ApplyAdditive_6' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_TwoBoneIK) == 0x000990, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_TwoBoneIK' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x000BE0, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_TransitionResult_8) == 0x000C00, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_TransitionResult_7) == 0x000C28, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_SequenceEvaluator_7) == 0x000C50, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_SequenceEvaluator_7' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_StateResult_7) == 0x000C90, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_BlendSpacePlayer_2) == 0x000CB0, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_BlendSpacePlayer_2' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_ApplyAdditive_5) == 0x000D20, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_ApplyAdditive_5' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_ApplyAdditive_4) == 0x000DE8, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_ApplyAdditive_4' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_BlendSpacePlayer_1) == 0x000EB0, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_TransitionResult_6) == 0x000F20, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_TransitionResult_5) == 0x000F48, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x000F70, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x000F98, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x000FC0, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x000FE8, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_TransitionResult) == 0x001010, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_SequencePlayer_12) == 0x001038, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_SequencePlayer_12' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_ApplyAdditive_3) == 0x001080, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_ApplyAdditive_3' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_SequencePlayer_11) == 0x001148, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_SequencePlayer_11' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_StateResult_6) == 0x001190, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_SequencePlayer_10) == 0x0011B0, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_SequencePlayer_10' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_BlendListByBool_12) == 0x0011F8, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_BlendListByBool_12' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_BlendSpacePlayer) == 0x001240, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_ApplyAdditive_2) == 0x0012B0, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_ApplyAdditive_2' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_SequencePlayer_9) == 0x001378, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_SequencePlayer_9' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_ApplyAdditive_1) == 0x0013C0, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_ApplyAdditive_1' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_SequencePlayer_8) == 0x001488, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_StateResult_5) == 0x0014D0, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_SequenceEvaluator_6) == 0x0014F0, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_SequenceEvaluator_6' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_SequencePlayer_7) == 0x001530, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_BlendListByBool_11) == 0x001578, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_BlendListByBool_11' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_BlendListByBool_10) == 0x0015C0, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_BlendListByBool_10' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_SequenceEvaluator_5) == 0x001608, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_SequenceEvaluator_5' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_BlendListByBool_9) == 0x001648, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_BlendListByBool_9' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_SequencePlayer_6) == 0x001690, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_StateResult_4) == 0x0016D8, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_SequenceEvaluator_4) == 0x0016F8, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_SequenceEvaluator_4' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_SequencePlayer_5) == 0x001738, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_BlendListByBool_8) == 0x001780, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_BlendListByBool_8' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_SequenceEvaluator_3) == 0x0017C8, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_SequenceEvaluator_3' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_BlendListByBool_7) == 0x001808, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_BlendListByBool_7' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x001850, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_BlendListByBool_6) == 0x001898, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_BlendListByBool_6' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_BlendListByBool_5) == 0x0018E0, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_BlendListByBool_5' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_SequenceEvaluator_2) == 0x001928, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_SequenceEvaluator_2' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_BlendListByBool_4) == 0x001968, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_BlendListByBool_3) == 0x0019B0, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x0019F8, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_BlendListByBool_2) == 0x001A40, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_SequenceEvaluator_1) == 0x001A88, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_SequenceEvaluator_1' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x001AC8, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_StateResult_3) == 0x001B10, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x001B30, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_ApplyAdditive) == 0x001B78, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x001C40, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_StateResult_2) == 0x001C88, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_StateMachine_1) == 0x001CA8, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_StateResult_1) == 0x001D70, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_SequenceEvaluator) == 0x001D90, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_SequenceEvaluator' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_StateResult) == 0x001DD0, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_StateMachine) == 0x001DF0, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x001EB8, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_Trail) == 0x001EE0, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_Trail' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_Slot_1) == 0x002180, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_Slot) == 0x0021C8, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x002210, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x002258, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x0022A0, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x0023A0, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x0023C8, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UPlayer_DBNOCarried_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x0023F0, "Member 'UPlayer_DBNOCarried_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");

}
