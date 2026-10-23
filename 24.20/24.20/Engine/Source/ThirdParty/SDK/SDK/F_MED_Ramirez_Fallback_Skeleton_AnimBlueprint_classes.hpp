#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;
	struct FAnimNode_Root                         AnimGraphNode_Root;
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_F_MED_Ramirez_Fallback_Skeleton_AnimBlueprint(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"F_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C">();
	}
	static class UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C>();
	}
};
static_assert(alignof(UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C) == 0x000010, "Wrong alignment on UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C");
static_assert(sizeof(UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C) == 0x000900, "Wrong size on UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C");
static_assert(offsetof(UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x0006F0, "Member 'UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C, AnimBlueprintExtension_PropertyAccess) == 0x0006F8, "Member 'UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C, AnimBlueprintExtension_Base) == 0x000700, "Member 'UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C, AnimGraphNode_Root) == 0x000708, "Member 'UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C, AnimGraphNode_CopyPoseFromMesh) == 0x000728, "Member 'UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");

}
