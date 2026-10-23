#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UPlayer_PropertiesDebug_AnimBP_C final : public UFortPlayerDebugAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;
	struct FAnimNode_Root                         AnimGraphNode_Root;
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose;

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_Player_PropertiesDebug_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Player_PropertiesDebug_AnimBP_C">();
	}
	static class UPlayer_PropertiesDebug_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayer_PropertiesDebug_AnimBP_C>();
	}
};
static_assert(alignof(UPlayer_PropertiesDebug_AnimBP_C) == 0x000010, "Wrong alignment on UPlayer_PropertiesDebug_AnimBP_C");
static_assert(sizeof(UPlayer_PropertiesDebug_AnimBP_C) == 0x000500, "Wrong size on UPlayer_PropertiesDebug_AnimBP_C");
static_assert(offsetof(UPlayer_PropertiesDebug_AnimBP_C, UberGraphFrame) == 0x0004B0, "Member 'UPlayer_PropertiesDebug_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayer_PropertiesDebug_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x0004B8, "Member 'UPlayer_PropertiesDebug_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UPlayer_PropertiesDebug_AnimBP_C, AnimBlueprintExtension_Base) == 0x0004C0, "Member 'UPlayer_PropertiesDebug_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UPlayer_PropertiesDebug_AnimBP_C, AnimGraphNode_Root) == 0x0004C8, "Member 'UPlayer_PropertiesDebug_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UPlayer_PropertiesDebug_AnimBP_C, AnimGraphNode_IdentityPose) == 0x0004E8, "Member 'UPlayer_PropertiesDebug_AnimBP_C::AnimGraphNode_IdentityPose' has a wrong offset!");

}
