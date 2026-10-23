#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Player_Land_AnimBP_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UPlayer_Land_AnimBP_C final : public UFortPlayerLandingAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct Player_Land_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance_NodeRelevancy   AnimBlueprintExtension_NodeRelevancy;
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
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_14;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_27;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_26;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_25;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_13;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_24;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_23;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_22;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_12;
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_6;
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_5;
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_4;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_21;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_11;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_20;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_10;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_19;
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_3;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_18;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_9;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_17;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_8;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_16;
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_2;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_7;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_15;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_14;
	struct FAnimNode_ModifyCurve                  AnimGraphNode_ModifyCurve;
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_1;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_13;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_6;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_12;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_11;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_10;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_5;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;
	struct FAnimNode_Root                         AnimGraphNode_Root_14;
	struct FAnimNode_Root                         AnimGraphNode_Root_13;
	struct FAnimNode_Root                         AnimGraphNode_Root_12;
	struct FAnimNode_Root                         AnimGraphNode_Root_11;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_6;
	struct FAnimNode_Root                         AnimGraphNode_Root_10;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_5;
	struct FAnimNode_Root                         AnimGraphNode_Root_9;
	struct FAnimNode_Root                         AnimGraphNode_Root_8;
	struct FAnimNode_Root                         AnimGraphNode_Root_7;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose_3;
	struct FAnimNode_Root                         AnimGraphNode_Root_6;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose_2;
	struct FAnimNode_Root                         AnimGraphNode_Root_5;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose_1;
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
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_2;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_1;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_Layer;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_Player_Land_AnimBP(int32 EntryPoint);
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
	void OnLandingBecomesRelevant(const struct FAnimUpdateContext& Context, const struct FAnimNodeReference& Node);
	void OnLandingUpdate(const struct FAnimUpdateContext& Context, const struct FAnimNodeReference& Node);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Player_Land_AnimBP_C">();
	}
	static class UPlayer_Land_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayer_Land_AnimBP_C>();
	}
};
static_assert(alignof(UPlayer_Land_AnimBP_C) == 0x000010, "Wrong alignment on UPlayer_Land_AnimBP_C");
static_assert(sizeof(UPlayer_Land_AnimBP_C) == 0x003740, "Wrong size on UPlayer_Land_AnimBP_C");
static_assert(offsetof(UPlayer_Land_AnimBP_C, UberGraphFrame) == 0x0015A0, "Member 'UPlayer_Land_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, __AnimBlueprintMutables) == 0x0015A8, "Member 'UPlayer_Land_AnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x0015D0, "Member 'UPlayer_Land_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimBlueprintExtension_NodeRelevancy) == 0x0015D8, "Member 'UPlayer_Land_AnimBP_C::AnimBlueprintExtension_NodeRelevancy' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimBlueprintExtension_Base) == 0x001680, "Member 'UPlayer_Land_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Root_21) == 0x001688, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_Root_21' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_LinkedInputPose_9) == 0x0016A8, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_LinkedInputPose_9' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Root_20) == 0x001768, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_Root_20' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_LinkedInputPose_8) == 0x001788, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_LinkedInputPose_8' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Root_19) == 0x001848, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_Root_19' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_LinkedInputPose_7) == 0x001868, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_LinkedInputPose_7' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Root_18) == 0x001928, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_Root_18' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Root_17) == 0x001948, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_Root_17' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Root_16) == 0x001968, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_Root_16' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Root_15) == 0x001988, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_Root_15' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_BlendListByBool_14) == 0x0019A8, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_BlendListByBool_14' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_27) == 0x0019F0, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_27' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_26) == 0x001A38, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_26' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_25) == 0x001A80, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_25' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_BlendListByBool_13) == 0x001AC8, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_BlendListByBool_13' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_24) == 0x001B10, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_24' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_23) == 0x001B58, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_23' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_22) == 0x001BA0, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_22' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_BlendListByBool_12) == 0x001BE8, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_BlendListByBool_12' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_BlendListByEnum_6) == 0x001C30, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_BlendListByEnum_6' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_BlendListByEnum_5) == 0x001C78, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_BlendListByEnum_5' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_BlendListByEnum_4) == 0x001CC0, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_BlendListByEnum_4' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_21) == 0x001D08, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_21' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_BlendListByBool_11) == 0x001D50, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_BlendListByBool_11' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_20) == 0x001D98, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_20' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_BlendListByBool_10) == 0x001DE0, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_BlendListByBool_10' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_19) == 0x001E28, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_19' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_BlendListByEnum_3) == 0x001E70, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_BlendListByEnum_3' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_18) == 0x001EB8, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_18' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_BlendListByBool_9) == 0x001F00, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_BlendListByBool_9' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_17) == 0x001F48, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_17' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_BlendListByBool_8) == 0x001F90, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_BlendListByBool_8' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_16) == 0x001FD8, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_16' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_BlendListByEnum_2) == 0x002020, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_BlendListByEnum_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_BlendListByBool_7) == 0x002068, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_BlendListByBool_7' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_15) == 0x0020B0, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_15' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_14) == 0x0020F8, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_14' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_ModifyCurve) == 0x002140, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_ModifyCurve' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_BlendListByEnum_1) == 0x002240, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_BlendListByEnum_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_13) == 0x002288, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_13' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_BlendListByBool_6) == 0x0022D0, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_BlendListByBool_6' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_12) == 0x002318, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_12' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_11) == 0x002360, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_11' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_10) == 0x0023A8, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_10' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_BlendListByBool_5) == 0x0023F0, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_BlendListByBool_5' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_9) == 0x002438, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_9' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_BlendListByBool_4) == 0x002480, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_8) == 0x0024C8, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Root_14) == 0x002510, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_Root_14' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Root_13) == 0x002530, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_Root_13' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Root_12) == 0x002550, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_Root_12' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Root_11) == 0x002570, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_Root_11' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_LinkedInputPose_6) == 0x002590, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_LinkedInputPose_6' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Root_10) == 0x002650, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_Root_10' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_LinkedInputPose_5) == 0x002670, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_LinkedInputPose_5' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Root_9) == 0x002730, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_Root_9' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Root_8) == 0x002750, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_Root_8' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Root_7) == 0x002770, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_Root_7' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_7) == 0x002790, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_BlendListByBool_3) == 0x0027D8, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_IdentityPose_3) == 0x002820, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_IdentityPose_3' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Root_6) == 0x002830, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_Root_6' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_6) == 0x002850, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_BlendListByBool_2) == 0x002898, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_IdentityPose_2) == 0x0028E0, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_IdentityPose_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Root_5) == 0x0028F0, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_Root_5' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_5) == 0x002910, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x002958, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_IdentityPose_1) == 0x0029A0, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_IdentityPose_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Root_4) == 0x0029B0, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_Root_4' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_LinkedInputPose_4) == 0x0029D0, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_LinkedInputPose_4' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Root_3) == 0x002A90, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_Root_3' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_LinkedInputPose_3) == 0x002AB0, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_LinkedInputPose_3' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_LinkedInputPose_2) == 0x002B70, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_LinkedInputPose_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Root_2) == 0x002C30, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_Root_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_LinkedInputPose_1) == 0x002C50, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Root_1) == 0x002D10, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_LinkedInputPose) == 0x002D30, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Root) == 0x002DF0, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_TransitionResult_6) == 0x002E10, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_TransitionResult_5) == 0x002E38, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x002E60, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x002E88, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x002EB0, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x002ED8, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_TransitionResult) == 0x002F00, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_LinkedAnimLayer_2) == 0x002F28, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_LinkedAnimLayer_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_StateResult_3) == 0x002FF0, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_LinkedAnimLayer_1) == 0x003010, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_LinkedAnimLayer_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_StateResult_2) == 0x0030D8, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_LinkedAnimLayer) == 0x0030F8, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_LinkedAnimLayer' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_StateResult_1) == 0x0031C0, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Layer) == 0x0031E0, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_Layer' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x0032A8, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_LayeredBoneBlend) == 0x0032F0, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x0033D0, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x003418, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x003460, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_BlendListByEnum) == 0x0034A8, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x0034F0, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_TwoWayBlend) == 0x003538, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_TwoWayBlend' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_IdentityPose) == 0x0035F8, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_IdentityPose' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x003608, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_StateResult) == 0x003650, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_StateMachine) == 0x003670, "Member 'UPlayer_Land_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");

}
