#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "RidingPlayerLayerAnimBP_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ValetRuntime_classes.hpp"

namespace SDK
{

class URidingPlayerLayerAnimBP_C final : public UFortValetPassengerAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;
	uint8                                         Pad_894[0x4];
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;
	struct FAnimNode_Root                         AnimGraphNode_Root_4;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_6;
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_4;
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_7;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;
	struct FAnimNode_RotateRootBone               AnimGraphNode_RotateRootBone_1;
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_1;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_5;
	struct FAnimNode_Root                         AnimGraphNode_Root_3;
	struct FAnimNode_Slot                         AnimGraphNode_Slot;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_6;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_5;
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;
	struct FAnimNode_RotateRootBone               AnimGraphNode_RotateRootBone;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;
	struct FAnimNode_Root                         AnimGraphNode_Root_2;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_4;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_3;
	struct FAnimNode_Root                         AnimGraphNode_Root_1;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_2;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;
	struct FAnimNode_Root                         AnimGraphNode_Root;
	struct FRotator                               MatchRootYaw;
	bool                                          Is_Targeting;
	uint8                                         Pad_22B9[0x7];
	class AFortPlayerPawn*                        FortPlayer;
	double                                        Timer;
	bool                                          ShouldTransitionToRiding;
	uint8                                         Pad_22D1[0x7];
	double                                        LowerBodyYaw;
	bool                                          IsRideMode;
	bool                                          IsSprinting;
	bool                                          IsStandingStill;
	bool                                          IsInCombat;
	uint8                                         Pad_22E4[0x4];
	class AFortAIPawn*                            WildlifePawn;
	bool                                          IsSmackie;
	uint8                                         Pad_22F1[0x7];
	double                                        Velocity;
	bool                                          IsNug;

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D1B22730415169A7290CBFAD6C915976();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_RotateRootBone_D73766CE4BF0C956278D7FA8259A40CA();
	void ExecuteUbergraph_RidingPlayerLayerAnimBP(int32 EntryPoint);
	void VehicleFinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* VehicleFinalPoseOverride_0);
	void VehicleFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* VehicleFullBodyOverride_0);
	void VehicleLowerBodyOverride(const struct FPoseLink& InPoseLowerBodyDefault, const struct FPoseLink& InPoseUpperBody, struct FPoseLink* VehicleLowerBodyOverride_0);
	void VehicleSplitBodyOverride(const struct FPoseLink& InPoseSplitBody, const struct FPoseLink& InPoseUpperAndLowerBody, const struct FFortAnimInput_TurnInPlace& TurnInPlace, const struct FPoseLink& InPoseUpperAndLowerBodyRemoveRoot, struct FPoseLink* VehicleSplitBodyOverride_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RidingPlayerLayerAnimBP_C">();
	}
	static class URidingPlayerLayerAnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URidingPlayerLayerAnimBP_C>();
	}
};
static_assert(alignof(URidingPlayerLayerAnimBP_C) == 0x000010, "Wrong alignment on URidingPlayerLayerAnimBP_C");
static_assert(sizeof(URidingPlayerLayerAnimBP_C) == 0x002310, "Wrong size on URidingPlayerLayerAnimBP_C");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, UberGraphFrame) == 0x000870, "Member 'URidingPlayerLayerAnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, __AnimBlueprintMutables) == 0x000878, "Member 'URidingPlayerLayerAnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x000898, "Member 'URidingPlayerLayerAnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimBlueprintExtension_Base) == 0x0008A0, "Member 'URidingPlayerLayerAnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_Root_4) == 0x0008A8, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_Root_4' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_LinkedInputPose_6) == 0x0008C8, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_LinkedInputPose_6' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_SaveCachedPose_2) == 0x000988, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_LayeredBoneBlend) == 0x000A88, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_UseCachedPose_6) == 0x000B68, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_ModifyBone_4) == 0x000B90, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x000CB8, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000CD8, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_SaveCachedPose_1) == 0x000CF8, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_UseCachedPose_5) == 0x000DF8, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_BlendListByBool_7) == 0x000E20, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_BlendListByBool_7' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_UseCachedPose_4) == 0x000E68, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_RotateRootBone_1) == 0x000E90, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_RotateRootBone_1' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_Slot_1) == 0x000F38, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x000F80, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_RotationOffsetBlendSpace_1) == 0x000FC8, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_RotationOffsetBlendSpace_1' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_BlendSpacePlayer_1) == 0x0010E0, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_ApplyAdditive) == 0x001150, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_ModifyBone_3) == 0x001218, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_LinkedInputPose_5) == 0x001340, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_LinkedInputPose_5' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_Root_3) == 0x001400, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_Root_3' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_Slot) == 0x001420, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_BlendListByBool_6) == 0x001468, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_BlendListByBool_6' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x0014B0, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_BlendListByBool_5) == 0x0014F8, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_BlendListByBool_5' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_SaveCachedPose) == 0x001540, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_UseCachedPose_3) == 0x001640, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_UseCachedPose_2) == 0x001668, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_BlendListByBool_4) == 0x001690, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_BlendSpacePlayer) == 0x0016D8, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_BlendListByBool_3) == 0x001748, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_RotateRootBone) == 0x001790, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_RotateRootBone' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x001838, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_BlendListByBool_2) == 0x001880, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x0018C8, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x0018F0, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_SequencePlayer) == 0x001938, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_BlendListByBool) == 0x001980, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_RotationOffsetBlendSpace) == 0x0019C8, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_RotationOffsetBlendSpace' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_UseCachedPose) == 0x001AE0, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_ModifyBone_2) == 0x001B08, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_ModifyBone_1) == 0x001C30, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_ModifyBone) == 0x001D58, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_Root_2) == 0x001E80, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_Root_2' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_LinkedInputPose_4) == 0x001EA0, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_LinkedInputPose_4' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_LinkedInputPose_3) == 0x001F60, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_LinkedInputPose_3' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_Root_1) == 0x002020, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_LinkedInputPose_2) == 0x002040, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_LinkedInputPose_2' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_LinkedInputPose_1) == 0x002100, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_LinkedInputPose) == 0x0021C0, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, AnimGraphNode_Root) == 0x002280, "Member 'URidingPlayerLayerAnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, MatchRootYaw) == 0x0022A0, "Member 'URidingPlayerLayerAnimBP_C::MatchRootYaw' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, Is_Targeting) == 0x0022B8, "Member 'URidingPlayerLayerAnimBP_C::Is_Targeting' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, FortPlayer) == 0x0022C0, "Member 'URidingPlayerLayerAnimBP_C::FortPlayer' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, Timer) == 0x0022C8, "Member 'URidingPlayerLayerAnimBP_C::Timer' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, ShouldTransitionToRiding) == 0x0022D0, "Member 'URidingPlayerLayerAnimBP_C::ShouldTransitionToRiding' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, LowerBodyYaw) == 0x0022D8, "Member 'URidingPlayerLayerAnimBP_C::LowerBodyYaw' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, IsRideMode) == 0x0022E0, "Member 'URidingPlayerLayerAnimBP_C::IsRideMode' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, IsSprinting) == 0x0022E1, "Member 'URidingPlayerLayerAnimBP_C::IsSprinting' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, IsStandingStill) == 0x0022E2, "Member 'URidingPlayerLayerAnimBP_C::IsStandingStill' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, IsInCombat) == 0x0022E3, "Member 'URidingPlayerLayerAnimBP_C::IsInCombat' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, WildlifePawn) == 0x0022E8, "Member 'URidingPlayerLayerAnimBP_C::WildlifePawn' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, IsSmackie) == 0x0022F0, "Member 'URidingPlayerLayerAnimBP_C::IsSmackie' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, Velocity) == 0x0022F8, "Member 'URidingPlayerLayerAnimBP_C::Velocity' has a wrong offset!");
static_assert(offsetof(URidingPlayerLayerAnimBP_C, IsNug) == 0x002300, "Member 'URidingPlayerLayerAnimBP_C::IsNug' has a wrong offset!");

}
