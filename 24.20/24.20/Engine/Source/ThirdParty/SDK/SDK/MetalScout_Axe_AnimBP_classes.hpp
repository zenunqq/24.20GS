#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UMetalScout_Axe_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;
	struct FAnimNode_Root                         AnimGraphNode_Root;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_SubInput;

public:
	void ExecuteUbergraph_MetalScout_Axe_AnimBP(int32 EntryPoint);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MetalScout_Axe_AnimBP_C">();
	}
	static class UMetalScout_Axe_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetalScout_Axe_AnimBP_C>();
	}
};
static_assert(alignof(UMetalScout_Axe_AnimBP_C) == 0x000010, "Wrong alignment on UMetalScout_Axe_AnimBP_C");
static_assert(sizeof(UMetalScout_Axe_AnimBP_C) == 0x0007F0, "Wrong size on UMetalScout_Axe_AnimBP_C");
static_assert(offsetof(UMetalScout_Axe_AnimBP_C, UberGraphFrame) == 0x0006F0, "Member 'UMetalScout_Axe_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMetalScout_Axe_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x0006F8, "Member 'UMetalScout_Axe_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UMetalScout_Axe_AnimBP_C, AnimBlueprintExtension_Base) == 0x000700, "Member 'UMetalScout_Axe_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UMetalScout_Axe_AnimBP_C, AnimGraphNode_Root) == 0x000708, "Member 'UMetalScout_Axe_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UMetalScout_Axe_AnimBP_C, AnimGraphNode_SubInput) == 0x000728, "Member 'UMetalScout_Axe_AnimBP_C::AnimGraphNode_SubInput' has a wrong offset!");

}
