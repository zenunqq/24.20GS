#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UBlueprint_Paper_VIM_C final : public UFortAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;
	struct FAnimNode_Root                         AnimGraphNode_Root;
	struct FAnimNode_MeshSpaceRefPose             AnimGraphNode_MeshRefPose;
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
	uint8                                         Pad_598[0x8];
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_3;
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_2;
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_1;
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics;

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_3AF159404BD341EBBF1D83916A014149();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_9E5EF2534AF35AEF656F7798016DF75B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_ADC4973B4FF994FAB62509B5C600BF73();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_BCA43E284168E0AB05BB9E98D217441B();
	void ExecuteUbergraph_Blueprint_Paper_VIM(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Blueprint_Paper_VIM_C">();
	}
	static class UBlueprint_Paper_VIM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlueprint_Paper_VIM_C>();
	}
};
static_assert(alignof(UBlueprint_Paper_VIM_C) == 0x000010, "Wrong alignment on UBlueprint_Paper_VIM_C");
static_assert(sizeof(UBlueprint_Paper_VIM_C) == 0x0019E0, "Wrong size on UBlueprint_Paper_VIM_C");
static_assert(offsetof(UBlueprint_Paper_VIM_C, UberGraphFrame) == 0x000530, "Member 'UBlueprint_Paper_VIM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBlueprint_Paper_VIM_C, AnimBlueprintExtension_PropertyAccess) == 0x000538, "Member 'UBlueprint_Paper_VIM_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UBlueprint_Paper_VIM_C, AnimBlueprintExtension_Base) == 0x000540, "Member 'UBlueprint_Paper_VIM_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UBlueprint_Paper_VIM_C, AnimGraphNode_Root) == 0x000548, "Member 'UBlueprint_Paper_VIM_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UBlueprint_Paper_VIM_C, AnimGraphNode_MeshRefPose) == 0x000568, "Member 'UBlueprint_Paper_VIM_C::AnimGraphNode_MeshRefPose' has a wrong offset!");
static_assert(offsetof(UBlueprint_Paper_VIM_C, AnimGraphNode_ComponentToLocalSpace) == 0x000578, "Member 'UBlueprint_Paper_VIM_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UBlueprint_Paper_VIM_C, AnimGraphNode_AnimDynamics_3) == 0x0005A0, "Member 'UBlueprint_Paper_VIM_C::AnimGraphNode_AnimDynamics_3' has a wrong offset!");
static_assert(offsetof(UBlueprint_Paper_VIM_C, AnimGraphNode_AnimDynamics_2) == 0x000AB0, "Member 'UBlueprint_Paper_VIM_C::AnimGraphNode_AnimDynamics_2' has a wrong offset!");
static_assert(offsetof(UBlueprint_Paper_VIM_C, AnimGraphNode_AnimDynamics_1) == 0x000FC0, "Member 'UBlueprint_Paper_VIM_C::AnimGraphNode_AnimDynamics_1' has a wrong offset!");
static_assert(offsetof(UBlueprint_Paper_VIM_C, AnimGraphNode_AnimDynamics) == 0x0014D0, "Member 'UBlueprint_Paper_VIM_C::AnimGraphNode_AnimDynamics' has a wrong offset!");

}
