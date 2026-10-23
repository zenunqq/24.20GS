#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "ControlRig_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GravityOverrideParamsStruct_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UF_MED_Blue_Jay_Summer_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;
	struct FAnimNode_Root                         AnimGraphNode_Root;
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;
	uint8                                         Pad_8F8[0x8];
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_9;
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_8;
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_7;
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_6;
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_5;
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_4;
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_3;
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_2;
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
	struct FAnimNode_ControlRig                   AnimGraphNode_ControlRig;
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_1;
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics;
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;
	struct FGravityOverrideParamsStruct           Gravity_Override_Params;
	struct FVector                                GravityVector;
	double                                        idlePlaying;
	class UAnimInstance*                          Anim_Inst;
	class USkeletalMeshComponent*                 skel_mesh;
	bool                                          EnsembleBackpack;

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"F_MED_Blue_Jay_Summer_AnimBP_C">();
	}
	static class UF_MED_Blue_Jay_Summer_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_MED_Blue_Jay_Summer_AnimBP_C>();
	}
};
static_assert(alignof(UF_MED_Blue_Jay_Summer_AnimBP_C) == 0x000010, "Wrong alignment on UF_MED_Blue_Jay_Summer_AnimBP_C");
static_assert(sizeof(UF_MED_Blue_Jay_Summer_AnimBP_C) == 0x005550, "Wrong size on UF_MED_Blue_Jay_Summer_AnimBP_C");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, UberGraphFrame) == 0x0006F0, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x0006F8, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, AnimBlueprintExtension_Base) == 0x000700, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, AnimGraphNode_Root) == 0x000708, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, AnimGraphNode_CopyPoseFromMesh) == 0x000728, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, AnimGraphNode_AnimDynamics_9) == 0x000900, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::AnimGraphNode_AnimDynamics_9' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, AnimGraphNode_AnimDynamics_8) == 0x000E10, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::AnimGraphNode_AnimDynamics_8' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, AnimGraphNode_AnimDynamics_7) == 0x001320, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::AnimGraphNode_AnimDynamics_7' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, AnimGraphNode_AnimDynamics_6) == 0x001830, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::AnimGraphNode_AnimDynamics_6' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, AnimGraphNode_AnimDynamics_5) == 0x001D40, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::AnimGraphNode_AnimDynamics_5' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, AnimGraphNode_AnimDynamics_4) == 0x002250, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::AnimGraphNode_AnimDynamics_4' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, AnimGraphNode_AnimDynamics_3) == 0x002760, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::AnimGraphNode_AnimDynamics_3' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, AnimGraphNode_AnimDynamics_2) == 0x002C70, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::AnimGraphNode_AnimDynamics_2' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, AnimGraphNode_RigidBody) == 0x003180, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, AnimGraphNode_ModifyBone_2) == 0x003B10, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x003C38, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, AnimGraphNode_ControlRig) == 0x003C58, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::AnimGraphNode_ControlRig' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x0040C8, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x0041F0, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, AnimGraphNode_AnimDynamics_1) == 0x004210, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::AnimGraphNode_AnimDynamics_1' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, AnimGraphNode_AnimDynamics) == 0x004720, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::AnimGraphNode_AnimDynamics' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, AnimGraphNode_ModifyBone) == 0x004C30, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, Gravity_Override_Params) == 0x004D58, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::Gravity_Override_Params' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, GravityVector) == 0x005510, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::GravityVector' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, idlePlaying) == 0x005528, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::idlePlaying' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, Anim_Inst) == 0x005530, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::Anim_Inst' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, skel_mesh) == 0x005538, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::skel_mesh' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_AnimBP_C, EnsembleBackpack) == 0x005540, "Member 'UF_MED_Blue_Jay_Summer_AnimBP_C::EnsembleBackpack' has a wrong offset!");

}
