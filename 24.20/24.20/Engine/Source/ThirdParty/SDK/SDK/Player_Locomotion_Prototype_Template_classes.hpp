#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UPlayer_Locomotion_Prototype_Template_C final : public UAnimInstance
{
public:
	uint8                                         Pad_348[0x8];
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;
	struct FAnimNode_Root                         AnimGraphNode_Root;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;

public:
	void AnimGraph(const struct FPoseLink& InSourcePose, struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_Player_Locomotion_Prototype_Template(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Player_Locomotion_Prototype_Template_C">();
	}
	static class UPlayer_Locomotion_Prototype_Template_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayer_Locomotion_Prototype_Template_C>();
	}
};
static_assert(alignof(UPlayer_Locomotion_Prototype_Template_C) == 0x000010, "Wrong alignment on UPlayer_Locomotion_Prototype_Template_C");
static_assert(sizeof(UPlayer_Locomotion_Prototype_Template_C) == 0x000450, "Wrong size on UPlayer_Locomotion_Prototype_Template_C");
static_assert(offsetof(UPlayer_Locomotion_Prototype_Template_C, UberGraphFrame) == 0x000350, "Member 'UPlayer_Locomotion_Prototype_Template_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayer_Locomotion_Prototype_Template_C, AnimBlueprintExtension_PropertyAccess) == 0x000358, "Member 'UPlayer_Locomotion_Prototype_Template_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UPlayer_Locomotion_Prototype_Template_C, AnimBlueprintExtension_Base) == 0x000360, "Member 'UPlayer_Locomotion_Prototype_Template_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UPlayer_Locomotion_Prototype_Template_C, AnimGraphNode_Root) == 0x000368, "Member 'UPlayer_Locomotion_Prototype_Template_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UPlayer_Locomotion_Prototype_Template_C, AnimGraphNode_LinkedInputPose) == 0x000388, "Member 'UPlayer_Locomotion_Prototype_Template_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");

}
