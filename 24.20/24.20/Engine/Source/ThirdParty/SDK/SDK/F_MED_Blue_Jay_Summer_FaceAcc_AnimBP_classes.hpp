#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;
	struct FAnimNode_Root                         AnimGraphNode_Root;
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;
	uint8                                         Pad_8F8[0x8];
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_11;
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_10;
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_9;
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_8;
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_7;
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_6;
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_5;
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_4;
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_3;
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_2;
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_1;
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics;

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_F_MED_Blue_Jay_Summer_FaceAcc_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"F_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C">();
	}
	static class UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C>();
	}
};
static_assert(alignof(UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C) == 0x000010, "Wrong alignment on UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C");
static_assert(sizeof(UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C) == 0x004600, "Wrong size on UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C, UberGraphFrame) == 0x0006F0, "Member 'UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x0006F8, "Member 'UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C, AnimBlueprintExtension_Base) == 0x000700, "Member 'UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C, AnimGraphNode_Root) == 0x000708, "Member 'UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C, AnimGraphNode_CopyPoseFromMesh) == 0x000728, "Member 'UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C, AnimGraphNode_AnimDynamics_11) == 0x000900, "Member 'UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C::AnimGraphNode_AnimDynamics_11' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C, AnimGraphNode_AnimDynamics_10) == 0x000E10, "Member 'UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C::AnimGraphNode_AnimDynamics_10' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C, AnimGraphNode_AnimDynamics_9) == 0x001320, "Member 'UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C::AnimGraphNode_AnimDynamics_9' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x001830, "Member 'UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x001850, "Member 'UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C, AnimGraphNode_AnimDynamics_8) == 0x001870, "Member 'UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C::AnimGraphNode_AnimDynamics_8' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C, AnimGraphNode_AnimDynamics_7) == 0x001D80, "Member 'UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C::AnimGraphNode_AnimDynamics_7' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C, AnimGraphNode_AnimDynamics_6) == 0x002290, "Member 'UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C::AnimGraphNode_AnimDynamics_6' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C, AnimGraphNode_AnimDynamics_5) == 0x0027A0, "Member 'UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C::AnimGraphNode_AnimDynamics_5' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C, AnimGraphNode_AnimDynamics_4) == 0x002CB0, "Member 'UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C::AnimGraphNode_AnimDynamics_4' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C, AnimGraphNode_AnimDynamics_3) == 0x0031C0, "Member 'UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C::AnimGraphNode_AnimDynamics_3' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C, AnimGraphNode_AnimDynamics_2) == 0x0036D0, "Member 'UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C::AnimGraphNode_AnimDynamics_2' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C, AnimGraphNode_AnimDynamics_1) == 0x003BE0, "Member 'UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C::AnimGraphNode_AnimDynamics_1' has a wrong offset!");
static_assert(offsetof(UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C, AnimGraphNode_AnimDynamics) == 0x0040F0, "Member 'UF_MED_Blue_Jay_Summer_FaceAcc_AnimBP_C::AnimGraphNode_AnimDynamics' has a wrong offset!");

}
