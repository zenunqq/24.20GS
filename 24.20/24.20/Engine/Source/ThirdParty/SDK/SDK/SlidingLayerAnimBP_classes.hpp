#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlidingLayerAnimBP_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class USlidingLayerAnimBP_C final : public UFortSlidingLayerAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_7;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_6;
	struct FAnimNode_Root                         AnimGraphNode_Root_6;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_5;
	struct FAnimNode_Root                         AnimGraphNode_Root_5;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_4;
	struct FAnimNode_Root                         AnimGraphNode_Root_4;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_3;
	struct FAnimNode_ApplyMeshSpaceAdditive       AnimGraphNode_ApplyMeshSpaceAdditive_5;
	struct FAnimNode_Root                         AnimGraphNode_Root_3;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_6;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_5;
	struct FAnimNode_ApplyMeshSpaceAdditive       AnimGraphNode_ApplyMeshSpaceAdditive_4;
	struct FAnimNode_Root                         AnimGraphNode_Root_2;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_2;
	struct FAnimNode_RotateRootBone               AnimGraphNode_RotateRootBone_1;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;
	struct FAnimNode_ApplyMeshSpaceAdditive       AnimGraphNode_ApplyMeshSpaceAdditive_3;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_4;
	struct FAnimNode_ApplyMeshSpaceAdditive       AnimGraphNode_ApplyMeshSpaceAdditive_2;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_3;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_2;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;
	struct FAnimNode_ApplyMeshSpaceAdditive       AnimGraphNode_ApplyMeshSpaceAdditive_1;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;
	struct FAnimNode_ApplyMeshSpaceAdditive       AnimGraphNode_ApplyMeshSpaceAdditive;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;
	struct FAnimNode_RotateRootBone               AnimGraphNode_RotateRootBone;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;
	struct FAnimNode_Root                         AnimGraphNode_Root_1;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;
	struct FAnimNode_Root                         AnimGraphNode_Root;
	bool                                          IsKneeSliding;
	bool                                          b_KneeSlideNote_bTransition_FullBody_Sprinting;
	uint8                                         Pad_1B72[0x6];
	struct FRotator                               KneeSlideLowerBodyInitialRot_0;
	struct FRotator                               KneeSlideLowerBodyInitialRotSmooth_0;
	class AFortPlayerPawn*                        FortPlayerPawn_0;
	class UFortPlayerAnimInstance*                Fort_Player_Anim_Instance;
	double                                        Delta_Time_;
	double                                        KneeSlideLowerBodyYawOffset;
	double                                        KneeSlideRootYawOffset_0;
	double                                        VelocityAimYawDelta_0;
	double                                        KneeSlideSlopeAngle_0;
	double                                        KneeSlideSlopeYaw_0;
	double                                        KneeSlideSlopeYawMinusRootRot_0;
	bool                                          TransitionToKneeSlide;
	uint8                                         Pad_1BF1[0x7];
	double                                        KneeSlideForwardVectorVelocityDelta_0;
	bool                                          InitiatedSlideUpHill;
	bool                                          BypassEntry_0;
	uint8                                         Pad_1C02[0x6];
	double                                        SpineTweakLean_0;

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SlidingLayerAnimBP_AnimGraphNode_ApplyMeshSpaceAdditive_CA45D1154A0385BF8F15FBB40CA66AD6();
	void ExecuteUbergraph_SlidingLayerAnimBP(int32 EntryPoint);
	void MovementMode_AimOffset(const struct FPoseLink& InAimOffsetsPose, const struct FPoseLink& InSourcePosePreAimOffsets, struct FPoseLink* MovementMode_AimOffset_0);
	void MovementMode_FinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* MovementMode_FinalPoseOverride_0);
	void MovementMode_FullBodyOverride(const struct FPoseLink& InputPoseFullBody, struct FPoseLink* MovementMode_FullBodyOverride_0);
	void MovementMode_LocomotionAdditives(const struct FPoseLink& InLocomotionAdditivesPose, struct FPoseLink* MovementMode_LocomotionAdditives_0);
	void MovementMode_LowerBodyOverride(const struct FPoseLink& InLowerBodyPose, const struct FPoseLink& InSourcePose, struct FPoseLink* MovementMode_LowerBodyOverride_0);
	void MovementMode_SourcePose(const struct FPoseLink& InSourcePoseBase, struct FPoseLink* MovementMode_SourcePose_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SlidingLayerAnimBP_C">();
	}
	static class USlidingLayerAnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USlidingLayerAnimBP_C>();
	}
};
static_assert(alignof(USlidingLayerAnimBP_C) == 0x000010, "Wrong alignment on USlidingLayerAnimBP_C");
static_assert(sizeof(USlidingLayerAnimBP_C) == 0x001C10, "Wrong size on USlidingLayerAnimBP_C");
static_assert(offsetof(USlidingLayerAnimBP_C, UberGraphFrame) == 0x0004D0, "Member 'USlidingLayerAnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, __AnimBlueprintMutables) == 0x0004D8, "Member 'USlidingLayerAnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x000518, "Member 'USlidingLayerAnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimBlueprintExtension_Base) == 0x000520, "Member 'USlidingLayerAnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_LinkedInputPose_7) == 0x000528, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_LinkedInputPose_7' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_LinkedInputPose_6) == 0x0005E8, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_LinkedInputPose_6' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_Root_6) == 0x0006A8, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_Root_6' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_LinkedInputPose_5) == 0x0006C8, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_LinkedInputPose_5' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_Root_5) == 0x000788, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_Root_5' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_LinkedInputPose_4) == 0x0007A8, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_LinkedInputPose_4' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_Root_4) == 0x000868, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_Root_4' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_LinkedInputPose_3) == 0x000888, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_LinkedInputPose_3' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_ApplyMeshSpaceAdditive_5) == 0x000948, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_ApplyMeshSpaceAdditive_5' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_Root_3) == 0x000A18, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_Root_3' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_BlendSpacePlayer_6) == 0x000A38, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_BlendSpacePlayer_6' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_BlendListByBool_2) == 0x000AA8, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_IdentityPose) == 0x000AF0, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_IdentityPose' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_BlendSpacePlayer_5) == 0x000B00, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_BlendSpacePlayer_5' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_ApplyMeshSpaceAdditive_4) == 0x000B70, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_ApplyMeshSpaceAdditive_4' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_Root_2) == 0x000C40, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_Root_2' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_LinkedInputPose_2) == 0x000C60, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_LinkedInputPose_2' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_RotateRootBone_1) == 0x000D20, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_RotateRootBone_1' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_TransitionResult_7) == 0x000DC8, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_TransitionResult_6) == 0x000DF0, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_TransitionResult_5) == 0x000E18, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_TransitionResult_4) == 0x000E40, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_TransitionResult_3) == 0x000E68, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_TransitionResult_2) == 0x000E90, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_TransitionResult_1) == 0x000EB8, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_TransitionResult) == 0x000EE0, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x000F08, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_ApplyMeshSpaceAdditive_3) == 0x000F50, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_ApplyMeshSpaceAdditive_3' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x001020, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_BlendSpacePlayer_4) == 0x001068, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_BlendSpacePlayer_4' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_ApplyMeshSpaceAdditive_2) == 0x0010D8, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_ApplyMeshSpaceAdditive_2' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_BlendSpacePlayer_3) == 0x0011A8, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_BlendSpacePlayer_3' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x001218, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_StateResult_3) == 0x001260, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_BlendSpacePlayer_2) == 0x001280, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_BlendSpacePlayer_2' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_StateResult_2) == 0x0012F0, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_ApplyMeshSpaceAdditive_1) == 0x001310, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_ApplyMeshSpaceAdditive_1' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x0013E0, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_BlendSpacePlayer_1) == 0x001428, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_StateResult_1) == 0x001498, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_ApplyMeshSpaceAdditive) == 0x0014B8, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_ApplyMeshSpaceAdditive' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x001588, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_BlendSpacePlayer) == 0x0015D0, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_StateResult) == 0x001640, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_StateMachine) == 0x001660, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_SaveCachedPose) == 0x001728, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_BlendListByBool) == 0x001828, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x001870, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_UseCachedPose) == 0x001898, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_RotateRootBone) == 0x0018C0, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_RotateRootBone' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_LinkedInputPose_1) == 0x001968, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_Root_1) == 0x001A28, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_LinkedInputPose) == 0x001A48, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_SequencePlayer) == 0x001B08, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, AnimGraphNode_Root) == 0x001B50, "Member 'USlidingLayerAnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, IsKneeSliding) == 0x001B70, "Member 'USlidingLayerAnimBP_C::IsKneeSliding' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, b_KneeSlideNote_bTransition_FullBody_Sprinting) == 0x001B71, "Member 'USlidingLayerAnimBP_C::b_KneeSlideNote_bTransition_FullBody_Sprinting' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, KneeSlideLowerBodyInitialRot_0) == 0x001B78, "Member 'USlidingLayerAnimBP_C::KneeSlideLowerBodyInitialRot_0' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, KneeSlideLowerBodyInitialRotSmooth_0) == 0x001B90, "Member 'USlidingLayerAnimBP_C::KneeSlideLowerBodyInitialRotSmooth_0' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, FortPlayerPawn_0) == 0x001BA8, "Member 'USlidingLayerAnimBP_C::FortPlayerPawn_0' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, Fort_Player_Anim_Instance) == 0x001BB0, "Member 'USlidingLayerAnimBP_C::Fort_Player_Anim_Instance' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, Delta_Time_) == 0x001BB8, "Member 'USlidingLayerAnimBP_C::Delta_Time_' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, KneeSlideLowerBodyYawOffset) == 0x001BC0, "Member 'USlidingLayerAnimBP_C::KneeSlideLowerBodyYawOffset' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, KneeSlideRootYawOffset_0) == 0x001BC8, "Member 'USlidingLayerAnimBP_C::KneeSlideRootYawOffset_0' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, VelocityAimYawDelta_0) == 0x001BD0, "Member 'USlidingLayerAnimBP_C::VelocityAimYawDelta_0' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, KneeSlideSlopeAngle_0) == 0x001BD8, "Member 'USlidingLayerAnimBP_C::KneeSlideSlopeAngle_0' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, KneeSlideSlopeYaw_0) == 0x001BE0, "Member 'USlidingLayerAnimBP_C::KneeSlideSlopeYaw_0' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, KneeSlideSlopeYawMinusRootRot_0) == 0x001BE8, "Member 'USlidingLayerAnimBP_C::KneeSlideSlopeYawMinusRootRot_0' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, TransitionToKneeSlide) == 0x001BF0, "Member 'USlidingLayerAnimBP_C::TransitionToKneeSlide' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, KneeSlideForwardVectorVelocityDelta_0) == 0x001BF8, "Member 'USlidingLayerAnimBP_C::KneeSlideForwardVectorVelocityDelta_0' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, InitiatedSlideUpHill) == 0x001C00, "Member 'USlidingLayerAnimBP_C::InitiatedSlideUpHill' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, BypassEntry_0) == 0x001C01, "Member 'USlidingLayerAnimBP_C::BypassEntry_0' has a wrong offset!");
static_assert(offsetof(USlidingLayerAnimBP_C, SpineTweakLean_0) == 0x001C08, "Member 'USlidingLayerAnimBP_C::SpineTweakLean_0' has a wrong offset!");

}
