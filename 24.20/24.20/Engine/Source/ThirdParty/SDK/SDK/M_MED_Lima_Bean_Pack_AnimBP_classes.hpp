#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M_MED_Lima_Bean_Pack_AnimBP_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UM_MED_Lima_Bean_Pack_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;
	uint8                                         Pad_6FA[0x6];
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;
	struct FAnimNode_Root                         AnimGraphNode_Root;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_4;
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
	uint8                                         Pad_938[0x8];
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_1;
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics;
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_3;
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_2;
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_1;
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint;
	double                                        skydiveDampen;
	class AFortPlayerPawn*                        PlayerPawn;
	bool                                          YawDeltaPositive;
	bool                                          YawDeltaPositiveLastTick;
	bool                                          RunFacingRight;
	uint8                                         Pad_1CCB[0x5];
	double                                        isDBNOoff;
	double                                        IsDBNO;

public:
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_M_MED_Lima_Bean_Pack_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"M_MED_Lima_Bean_Pack_AnimBP_C">();
	}
	static class UM_MED_Lima_Bean_Pack_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UM_MED_Lima_Bean_Pack_AnimBP_C>();
	}
};
static_assert(alignof(UM_MED_Lima_Bean_Pack_AnimBP_C) == 0x000010, "Wrong alignment on UM_MED_Lima_Bean_Pack_AnimBP_C");
static_assert(sizeof(UM_MED_Lima_Bean_Pack_AnimBP_C) == 0x001CE0, "Wrong size on UM_MED_Lima_Bean_Pack_AnimBP_C");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, UberGraphFrame) == 0x0006F0, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, __AnimBlueprintMutables) == 0x0006F8, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x000700, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimBlueprintExtension_Base) == 0x000708, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_Root) == 0x000710, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_LinkedInputPose) == 0x000730, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_Constraint_4) == 0x0007F0, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_Constraint_4' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x0008F8, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000918, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_AnimDynamics_1) == 0x000940, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_AnimDynamics_1' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_AnimDynamics) == 0x000E50, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_AnimDynamics' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_ModifyBone) == 0x001360, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_TransitionResult_6) == 0x001488, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_TransitionResult_5) == 0x0014B0, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x0014D8, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x001500, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x001528, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x001550, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_TransitionResult) == 0x001578, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x0015A0, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_StateResult_3) == 0x0015E8, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x001608, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_StateResult_2) == 0x001650, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x001670, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x0016B8, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x001700, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_StateResult_1) == 0x001748, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x001768, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_StateResult) == 0x0017B0, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_StateMachine) == 0x0017D0, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_Constraint_3) == 0x001898, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_Constraint_3' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_Constraint_2) == 0x0019A0, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_Constraint_2' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_Constraint_1) == 0x001AA8, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_Constraint_1' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, AnimGraphNode_Constraint) == 0x001BB0, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraphNode_Constraint' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, skydiveDampen) == 0x001CB8, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::skydiveDampen' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, PlayerPawn) == 0x001CC0, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, YawDeltaPositive) == 0x001CC8, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::YawDeltaPositive' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, YawDeltaPositiveLastTick) == 0x001CC9, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::YawDeltaPositiveLastTick' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, RunFacingRight) == 0x001CCA, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::RunFacingRight' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, isDBNOoff) == 0x001CD0, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::isDBNOoff' has a wrong offset!");
static_assert(offsetof(UM_MED_Lima_Bean_Pack_AnimBP_C, IsDBNO) == 0x001CD8, "Member 'UM_MED_Lima_Bean_Pack_AnimBP_C::IsDBNO' has a wrong offset!");

}
