#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HighTower_Tapas_Axe_AnimBP_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UHighTower_Tapas_Axe_AnimBP_C final : public UCustomCharacterPartAnimInstance_HightowerTapasAxe
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;
	uint8                                         Pad_70A[0x6];
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;
	struct FAnimNode_Root                         AnimGraphNode_Root;
	struct FAnimNode_Trail                        AnimGraphNode_Trail;
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
	struct FAnimNode_Slot                         AnimGraphNode_Slot;
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;

public:
	void ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HighTower_Tapas_Axe_AnimBP_C">();
	}
	static class UHighTower_Tapas_Axe_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHighTower_Tapas_Axe_AnimBP_C>();
	}
};
static_assert(alignof(UHighTower_Tapas_Axe_AnimBP_C) == 0x000010, "Wrong alignment on UHighTower_Tapas_Axe_AnimBP_C");
static_assert(sizeof(UHighTower_Tapas_Axe_AnimBP_C) == 0x001C40, "Wrong size on UHighTower_Tapas_Axe_AnimBP_C");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, UberGraphFrame) == 0x000700, "Member 'UHighTower_Tapas_Axe_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, __AnimBlueprintMutables) == 0x000708, "Member 'UHighTower_Tapas_Axe_AnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x000710, "Member 'UHighTower_Tapas_Axe_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, AnimBlueprintExtension_Base) == 0x000718, "Member 'UHighTower_Tapas_Axe_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, AnimGraphNode_LocalToComponentSpace_2) == 0x000720, "Member 'UHighTower_Tapas_Axe_AnimBP_C::AnimGraphNode_LocalToComponentSpace_2' has a wrong offset!");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, AnimGraphNode_CopyPoseFromMesh) == 0x000740, "Member 'UHighTower_Tapas_Axe_AnimBP_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, AnimGraphNode_Root) == 0x000910, "Member 'UHighTower_Tapas_Axe_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, AnimGraphNode_Trail) == 0x000930, "Member 'UHighTower_Tapas_Axe_AnimBP_C::AnimGraphNode_Trail' has a wrong offset!");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x000BD0, "Member 'UHighTower_Tapas_Axe_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x000CF8, "Member 'UHighTower_Tapas_Axe_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, AnimGraphNode_RigidBody) == 0x000D40, "Member 'UHighTower_Tapas_Axe_AnimBP_C::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, AnimGraphNode_ComponentToLocalSpace_2) == 0x0016D0, "Member 'UHighTower_Tapas_Axe_AnimBP_C::AnimGraphNode_ComponentToLocalSpace_2' has a wrong offset!");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x0016F0, "Member 'UHighTower_Tapas_Axe_AnimBP_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, AnimGraphNode_SaveCachedPose_1) == 0x001710, "Member 'UHighTower_Tapas_Axe_AnimBP_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, AnimGraphNode_UseCachedPose_3) == 0x001810, "Member 'UHighTower_Tapas_Axe_AnimBP_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, AnimGraphNode_LocalToComponentSpace_1) == 0x001838, "Member 'UHighTower_Tapas_Axe_AnimBP_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, AnimGraphNode_UseCachedPose_2) == 0x001858, "Member 'UHighTower_Tapas_Axe_AnimBP_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x001880, "Member 'UHighTower_Tapas_Axe_AnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, AnimGraphNode_ModifyBone) == 0x0018A8, "Member 'UHighTower_Tapas_Axe_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x0019D0, "Member 'UHighTower_Tapas_Axe_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x0019F0, "Member 'UHighTower_Tapas_Axe_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, AnimGraphNode_Slot) == 0x001A10, "Member 'UHighTower_Tapas_Axe_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x001A58, "Member 'UHighTower_Tapas_Axe_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, AnimGraphNode_TwoWayBlend) == 0x001B58, "Member 'UHighTower_Tapas_Axe_AnimBP_C::AnimGraphNode_TwoWayBlend' has a wrong offset!");
static_assert(offsetof(UHighTower_Tapas_Axe_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x001C18, "Member 'UHighTower_Tapas_Axe_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");

}
