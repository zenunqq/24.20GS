#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UMechanical_Engineer_Female_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
	struct FAnimNode_Root                         AnimGraphNode_Root;
	uint8                                         Pad_828[0x8];
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics;
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;
	struct FRotator                               gear_rot;
	class USkeletalMeshComponent*                 skel_mesh;

public:
	void ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Mechanical_Engineer_Female_AnimBP_C">();
	}
	static class UMechanical_Engineer_Female_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMechanical_Engineer_Female_AnimBP_C>();
	}
};
static_assert(alignof(UMechanical_Engineer_Female_AnimBP_C) == 0x000010, "Wrong alignment on UMechanical_Engineer_Female_AnimBP_C");
static_assert(sizeof(UMechanical_Engineer_Female_AnimBP_C) == 0x001820, "Wrong size on UMechanical_Engineer_Female_AnimBP_C");
static_assert(offsetof(UMechanical_Engineer_Female_AnimBP_C, UberGraphFrame) == 0x0006F0, "Member 'UMechanical_Engineer_Female_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMechanical_Engineer_Female_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x0006F8, "Member 'UMechanical_Engineer_Female_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UMechanical_Engineer_Female_AnimBP_C, AnimBlueprintExtension_Base) == 0x000700, "Member 'UMechanical_Engineer_Female_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UMechanical_Engineer_Female_AnimBP_C, AnimGraphNode_LinkedInputPose) == 0x000708, "Member 'UMechanical_Engineer_Female_AnimBP_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UMechanical_Engineer_Female_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x0007C8, "Member 'UMechanical_Engineer_Female_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UMechanical_Engineer_Female_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x0007E8, "Member 'UMechanical_Engineer_Female_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UMechanical_Engineer_Female_AnimBP_C, AnimGraphNode_Root) == 0x000808, "Member 'UMechanical_Engineer_Female_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UMechanical_Engineer_Female_AnimBP_C, AnimGraphNode_AnimDynamics) == 0x000830, "Member 'UMechanical_Engineer_Female_AnimBP_C::AnimGraphNode_AnimDynamics' has a wrong offset!");
static_assert(offsetof(UMechanical_Engineer_Female_AnimBP_C, AnimGraphNode_RigidBody) == 0x000D40, "Member 'UMechanical_Engineer_Female_AnimBP_C::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(UMechanical_Engineer_Female_AnimBP_C, AnimGraphNode_ModifyBone) == 0x0016D0, "Member 'UMechanical_Engineer_Female_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UMechanical_Engineer_Female_AnimBP_C, gear_rot) == 0x0017F8, "Member 'UMechanical_Engineer_Female_AnimBP_C::gear_rot' has a wrong offset!");
static_assert(offsetof(UMechanical_Engineer_Female_AnimBP_C, skel_mesh) == 0x001810, "Member 'UMechanical_Engineer_Female_AnimBP_C::skel_mesh' has a wrong offset!");

}
