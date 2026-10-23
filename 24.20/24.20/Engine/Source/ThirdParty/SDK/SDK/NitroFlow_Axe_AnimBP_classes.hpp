#pragma once

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UNitroFlow_Axe_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;
	struct FAnimNode_Root                         AnimGraphNode_Root;
	struct FAnimNode_LinkedInputPose              AnimGraphNode_SubInput;
	struct FAnimNode_Slot                         AnimGraphNode_Slot;

public:
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_NitroFlow_Axe_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NitroFlow_Axe_AnimBP_C">();
	}
	static class UNitroFlow_Axe_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNitroFlow_Axe_AnimBP_C>();
	}
};
static_assert(alignof(UNitroFlow_Axe_AnimBP_C) == 0x000010, "Wrong alignment on UNitroFlow_Axe_AnimBP_C");
static_assert(sizeof(UNitroFlow_Axe_AnimBP_C) == 0x000830, "Wrong size on UNitroFlow_Axe_AnimBP_C");
static_assert(offsetof(UNitroFlow_Axe_AnimBP_C, UberGraphFrame) == 0x0006F0, "Member 'UNitroFlow_Axe_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNitroFlow_Axe_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x0006F8, "Member 'UNitroFlow_Axe_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UNitroFlow_Axe_AnimBP_C, AnimBlueprintExtension_Base) == 0x000700, "Member 'UNitroFlow_Axe_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UNitroFlow_Axe_AnimBP_C, AnimGraphNode_Root) == 0x000708, "Member 'UNitroFlow_Axe_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UNitroFlow_Axe_AnimBP_C, AnimGraphNode_SubInput) == 0x000728, "Member 'UNitroFlow_Axe_AnimBP_C::AnimGraphNode_SubInput' has a wrong offset!");
static_assert(offsetof(UNitroFlow_Axe_AnimBP_C, AnimGraphNode_Slot) == 0x0007E8, "Member 'UNitroFlow_Axe_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");

}
