#pragma once

#include "Basic.hpp"

#include "AnimationBudgetAllocator_structs.hpp"

namespace SDK::Params
{

struct AnimationBudgetBlueprintLibrary_EnableAnimationBudget final
{
public:
	class UObject*                                WorldContextObject;
	bool                                          bEnabled;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(AnimationBudgetBlueprintLibrary_EnableAnimationBudget) == 0x000008, "Wrong alignment on AnimationBudgetBlueprintLibrary_EnableAnimationBudget");
static_assert(sizeof(AnimationBudgetBlueprintLibrary_EnableAnimationBudget) == 0x000010, "Wrong size on AnimationBudgetBlueprintLibrary_EnableAnimationBudget");
static_assert(offsetof(AnimationBudgetBlueprintLibrary_EnableAnimationBudget, WorldContextObject) == 0x000000, "Member 'AnimationBudgetBlueprintLibrary_EnableAnimationBudget::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AnimationBudgetBlueprintLibrary_EnableAnimationBudget, bEnabled) == 0x000008, "Member 'AnimationBudgetBlueprintLibrary_EnableAnimationBudget::bEnabled' has a wrong offset!");

struct AnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters final
{
public:
	class UObject*                                WorldContextObject;
	struct FAnimationBudgetAllocatorParameters    InParameters;
};
static_assert(alignof(AnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters) == 0x000008, "Wrong alignment on AnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters");
static_assert(sizeof(AnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters) == 0x000060, "Wrong size on AnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters");
static_assert(offsetof(AnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters, WorldContextObject) == 0x000000, "Member 'AnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters, InParameters) == 0x000008, "Member 'AnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters::InParameters' has a wrong offset!");

struct SkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator final
{
public:
	bool                                          bInAutoRegisterWithBudgetAllocator;
};
static_assert(alignof(SkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator) == 0x000001, "Wrong alignment on SkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator");
static_assert(sizeof(SkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator) == 0x000001, "Wrong size on SkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator");
static_assert(offsetof(SkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator, bInAutoRegisterWithBudgetAllocator) == 0x000000, "Member 'SkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator::bInAutoRegisterWithBudgetAllocator' has a wrong offset!");

}
