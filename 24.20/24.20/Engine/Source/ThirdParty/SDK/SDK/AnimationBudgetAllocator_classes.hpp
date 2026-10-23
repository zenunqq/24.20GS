#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UAnimationBudgetBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled);
	static void SetAnimationBudgetParameters(class UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimationBudgetBlueprintLibrary">();
	}
	static class UAnimationBudgetBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimationBudgetBlueprintLibrary>();
	}
};
static_assert(alignof(UAnimationBudgetBlueprintLibrary) == 0x000008, "Wrong alignment on UAnimationBudgetBlueprintLibrary");
static_assert(sizeof(UAnimationBudgetBlueprintLibrary) == 0x000028, "Wrong size on UAnimationBudgetBlueprintLibrary");

class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
{
public:
	uint8                                         Pad_FB0[0x20];
	uint8                                         bAutoRegisterWithBudgetAllocator : 1;
	uint8                                         bAutoCalculateSignificance : 1;
	uint8                                         bShouldUseActorRenderedFlag : 1;
	uint8                                         Pad_FD1[0xF];

public:
	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SkeletalMeshComponentBudgeted">();
	}
	static class USkeletalMeshComponentBudgeted* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkeletalMeshComponentBudgeted>();
	}
};
static_assert(alignof(USkeletalMeshComponentBudgeted) == 0x000010, "Wrong alignment on USkeletalMeshComponentBudgeted");
static_assert(sizeof(USkeletalMeshComponentBudgeted) == 0x000FE0, "Wrong size on USkeletalMeshComponentBudgeted");

}
