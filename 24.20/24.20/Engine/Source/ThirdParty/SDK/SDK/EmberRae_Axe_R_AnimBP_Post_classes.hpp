#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UEmberRae_Axe_R_AnimBP_Post_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;
	struct FAnimNode_Root                         AnimGraphNode_Root;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_SubInput;
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
	uint8                                         Pad_828[0x8];
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;
	class USkeletalMeshComponent*                 SkeletalMesh;
	struct FVector                                TranslateMSTR;
	double                                        StrapScaleAlpha;

public:
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_EmberRae_Axe_R_AnimBP_Post(int32 EntryPoint);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);
	void BlueprintUpdateAnimation(float DeltaTimeX);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EmberRae_Axe_R_AnimBP_Post_C">();
	}
	static class UEmberRae_Axe_R_AnimBP_Post_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEmberRae_Axe_R_AnimBP_Post_C>();
	}
};
static_assert(alignof(UEmberRae_Axe_R_AnimBP_Post_C) == 0x000010, "Wrong alignment on UEmberRae_Axe_R_AnimBP_Post_C");
static_assert(sizeof(UEmberRae_Axe_R_AnimBP_Post_C) == 0x001560, "Wrong size on UEmberRae_Axe_R_AnimBP_Post_C");
static_assert(offsetof(UEmberRae_Axe_R_AnimBP_Post_C, UberGraphFrame) == 0x0006F0, "Member 'UEmberRae_Axe_R_AnimBP_Post_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEmberRae_Axe_R_AnimBP_Post_C, AnimBlueprintExtension_PropertyAccess) == 0x0006F8, "Member 'UEmberRae_Axe_R_AnimBP_Post_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UEmberRae_Axe_R_AnimBP_Post_C, AnimBlueprintExtension_Base) == 0x000700, "Member 'UEmberRae_Axe_R_AnimBP_Post_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UEmberRae_Axe_R_AnimBP_Post_C, AnimGraphNode_Root) == 0x000708, "Member 'UEmberRae_Axe_R_AnimBP_Post_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UEmberRae_Axe_R_AnimBP_Post_C, AnimGraphNode_SubInput) == 0x000728, "Member 'UEmberRae_Axe_R_AnimBP_Post_C::AnimGraphNode_SubInput' has a wrong offset!");
static_assert(offsetof(UEmberRae_Axe_R_AnimBP_Post_C, AnimGraphNode_ComponentToLocalSpace) == 0x0007E8, "Member 'UEmberRae_Axe_R_AnimBP_Post_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UEmberRae_Axe_R_AnimBP_Post_C, AnimGraphNode_LocalToComponentSpace) == 0x000808, "Member 'UEmberRae_Axe_R_AnimBP_Post_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UEmberRae_Axe_R_AnimBP_Post_C, AnimGraphNode_RigidBody) == 0x000830, "Member 'UEmberRae_Axe_R_AnimBP_Post_C::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(UEmberRae_Axe_R_AnimBP_Post_C, AnimGraphNode_ModifyBone_2) == 0x0011C0, "Member 'UEmberRae_Axe_R_AnimBP_Post_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UEmberRae_Axe_R_AnimBP_Post_C, AnimGraphNode_ModifyBone_1) == 0x0012E8, "Member 'UEmberRae_Axe_R_AnimBP_Post_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UEmberRae_Axe_R_AnimBP_Post_C, AnimGraphNode_ModifyBone) == 0x001410, "Member 'UEmberRae_Axe_R_AnimBP_Post_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UEmberRae_Axe_R_AnimBP_Post_C, SkeletalMesh) == 0x001538, "Member 'UEmberRae_Axe_R_AnimBP_Post_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(UEmberRae_Axe_R_AnimBP_Post_C, TranslateMSTR) == 0x001540, "Member 'UEmberRae_Axe_R_AnimBP_Post_C::TranslateMSTR' has a wrong offset!");
static_assert(offsetof(UEmberRae_Axe_R_AnimBP_Post_C, StrapScaleAlpha) == 0x001558, "Member 'UEmberRae_Axe_R_AnimBP_Post_C::StrapScaleAlpha' has a wrong offset!");

}
