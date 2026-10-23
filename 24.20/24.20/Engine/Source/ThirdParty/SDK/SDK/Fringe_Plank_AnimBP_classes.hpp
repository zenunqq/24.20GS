#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"

namespace SDK
{

class UFringe_Plank_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_348[0x8];
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;
	struct FAnimNode_Root                         AnimGraphNode_Root;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;
	uint8                                         Pad_448[0x8];
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;

public:
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_Fringe_Plank_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fringe_Plank_AnimBP_C">();
	}
	static class UFringe_Plank_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFringe_Plank_AnimBP_C>();
	}
};
static_assert(alignof(UFringe_Plank_AnimBP_C) == 0x000010, "Wrong alignment on UFringe_Plank_AnimBP_C");
static_assert(sizeof(UFringe_Plank_AnimBP_C) == 0x000E20, "Wrong size on UFringe_Plank_AnimBP_C");
static_assert(offsetof(UFringe_Plank_AnimBP_C, UberGraphFrame) == 0x000350, "Member 'UFringe_Plank_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFringe_Plank_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x000358, "Member 'UFringe_Plank_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UFringe_Plank_AnimBP_C, AnimBlueprintExtension_Base) == 0x000360, "Member 'UFringe_Plank_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UFringe_Plank_AnimBP_C, AnimGraphNode_Root) == 0x000368, "Member 'UFringe_Plank_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UFringe_Plank_AnimBP_C, AnimGraphNode_LinkedInputPose) == 0x000388, "Member 'UFringe_Plank_AnimBP_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UFringe_Plank_AnimBP_C, AnimGraphNode_RigidBody) == 0x000450, "Member 'UFringe_Plank_AnimBP_C::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(UFringe_Plank_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x000DE0, "Member 'UFringe_Plank_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UFringe_Plank_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000E00, "Member 'UFringe_Plank_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");

}
