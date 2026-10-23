#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK
{

struct FAnimationSetup final
{
public:
	class UAnimSequence*                          AnimSequence;
	TSubclassOf<class UAnimSharingStateInstance>  AnimBlueprint;
	struct FPerPlatformInt                        NumRandomizedInstances;
	struct FPerPlatformBool                       Enabled;
	uint8                                         Pad_15[0x3];
};
static_assert(alignof(FAnimationSetup) == 0x000008, "Wrong alignment on FAnimationSetup");
static_assert(sizeof(FAnimationSetup) == 0x000018, "Wrong size on FAnimationSetup");
static_assert(offsetof(FAnimationSetup, AnimSequence) == 0x000000, "Member 'FAnimationSetup::AnimSequence' has a wrong offset!");
static_assert(offsetof(FAnimationSetup, AnimBlueprint) == 0x000008, "Member 'FAnimationSetup::AnimBlueprint' has a wrong offset!");
static_assert(offsetof(FAnimationSetup, NumRandomizedInstances) == 0x000010, "Member 'FAnimationSetup::NumRandomizedInstances' has a wrong offset!");
static_assert(offsetof(FAnimationSetup, Enabled) == 0x000014, "Member 'FAnimationSetup::Enabled' has a wrong offset!");

struct FAnimationStateEntry final
{
public:
	uint8                                         State;
	uint8                                         Pad_1[0x7];
	TArray<struct FAnimationSetup>                AnimationSetups;
	bool                                          bOnDemand;
	bool                                          bAdditive;
	uint8                                         Pad_1A[0x2];
	float                                         BlendTime;
	bool                                          bReturnToPreviousState;
	bool                                          bSetNextState;
	uint8                                         NextState;
	uint8                                         Pad_23[0x1];
	struct FPerPlatformInt                        MaximumNumberOfConcurrentInstances;
	float                                         WiggleTimePercentage;
	bool                                          bRequiresCurves;
	uint8                                         Pad_2D[0x3];
};
static_assert(alignof(FAnimationStateEntry) == 0x000008, "Wrong alignment on FAnimationStateEntry");
static_assert(sizeof(FAnimationStateEntry) == 0x000030, "Wrong size on FAnimationStateEntry");
static_assert(offsetof(FAnimationStateEntry, State) == 0x000000, "Member 'FAnimationStateEntry::State' has a wrong offset!");
static_assert(offsetof(FAnimationStateEntry, AnimationSetups) == 0x000008, "Member 'FAnimationStateEntry::AnimationSetups' has a wrong offset!");
static_assert(offsetof(FAnimationStateEntry, bOnDemand) == 0x000018, "Member 'FAnimationStateEntry::bOnDemand' has a wrong offset!");
static_assert(offsetof(FAnimationStateEntry, bAdditive) == 0x000019, "Member 'FAnimationStateEntry::bAdditive' has a wrong offset!");
static_assert(offsetof(FAnimationStateEntry, BlendTime) == 0x00001C, "Member 'FAnimationStateEntry::BlendTime' has a wrong offset!");
static_assert(offsetof(FAnimationStateEntry, bReturnToPreviousState) == 0x000020, "Member 'FAnimationStateEntry::bReturnToPreviousState' has a wrong offset!");
static_assert(offsetof(FAnimationStateEntry, bSetNextState) == 0x000021, "Member 'FAnimationStateEntry::bSetNextState' has a wrong offset!");
static_assert(offsetof(FAnimationStateEntry, NextState) == 0x000022, "Member 'FAnimationStateEntry::NextState' has a wrong offset!");
static_assert(offsetof(FAnimationStateEntry, MaximumNumberOfConcurrentInstances) == 0x000024, "Member 'FAnimationStateEntry::MaximumNumberOfConcurrentInstances' has a wrong offset!");
static_assert(offsetof(FAnimationStateEntry, WiggleTimePercentage) == 0x000028, "Member 'FAnimationStateEntry::WiggleTimePercentage' has a wrong offset!");
static_assert(offsetof(FAnimationStateEntry, bRequiresCurves) == 0x00002C, "Member 'FAnimationStateEntry::bRequiresCurves' has a wrong offset!");

struct FPerSkeletonAnimationSharingSetup final
{
public:
	class USkeleton*                              Skeleton;
	class USkeletalMesh*                          SkeletalMesh;
	TSubclassOf<class UAnimSharingTransitionInstance> BlendAnimBlueprint;
	TSubclassOf<class UAnimSharingAdditiveInstance> AdditiveAnimBlueprint;
	TSubclassOf<class UAnimationSharingStateProcessor> StateProcessorClass;
	TArray<struct FAnimationStateEntry>           AnimationStates;
};
static_assert(alignof(FPerSkeletonAnimationSharingSetup) == 0x000008, "Wrong alignment on FPerSkeletonAnimationSharingSetup");
static_assert(sizeof(FPerSkeletonAnimationSharingSetup) == 0x000038, "Wrong size on FPerSkeletonAnimationSharingSetup");
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, Skeleton) == 0x000000, "Member 'FPerSkeletonAnimationSharingSetup::Skeleton' has a wrong offset!");
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, SkeletalMesh) == 0x000008, "Member 'FPerSkeletonAnimationSharingSetup::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, BlendAnimBlueprint) == 0x000010, "Member 'FPerSkeletonAnimationSharingSetup::BlendAnimBlueprint' has a wrong offset!");
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, AdditiveAnimBlueprint) == 0x000018, "Member 'FPerSkeletonAnimationSharingSetup::AdditiveAnimBlueprint' has a wrong offset!");
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, StateProcessorClass) == 0x000020, "Member 'FPerSkeletonAnimationSharingSetup::StateProcessorClass' has a wrong offset!");
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, AnimationStates) == 0x000028, "Member 'FPerSkeletonAnimationSharingSetup::AnimationStates' has a wrong offset!");

struct FAnimationSharingScalability final
{
public:
	struct FPerPlatformBool                       UseBlendTransitions;
	uint8                                         Pad_1[0x3];
	struct FPerPlatformFloat                      BlendSignificanceValue;
	struct FPerPlatformInt                        MaximumNumberConcurrentBlends;
	struct FPerPlatformFloat                      TickSignificanceValue;
};
static_assert(alignof(FAnimationSharingScalability) == 0x000004, "Wrong alignment on FAnimationSharingScalability");
static_assert(sizeof(FAnimationSharingScalability) == 0x000010, "Wrong size on FAnimationSharingScalability");
static_assert(offsetof(FAnimationSharingScalability, UseBlendTransitions) == 0x000000, "Member 'FAnimationSharingScalability::UseBlendTransitions' has a wrong offset!");
static_assert(offsetof(FAnimationSharingScalability, BlendSignificanceValue) == 0x000004, "Member 'FAnimationSharingScalability::BlendSignificanceValue' has a wrong offset!");
static_assert(offsetof(FAnimationSharingScalability, MaximumNumberConcurrentBlends) == 0x000008, "Member 'FAnimationSharingScalability::MaximumNumberConcurrentBlends' has a wrong offset!");
static_assert(offsetof(FAnimationSharingScalability, TickSignificanceValue) == 0x00000C, "Member 'FAnimationSharingScalability::TickSignificanceValue' has a wrong offset!");

struct FTickAnimationSharingFunction final : public FTickFunction
{
public:
	uint8                                         Pad_28[0x8];
};
static_assert(alignof(FTickAnimationSharingFunction) == 0x000008, "Wrong alignment on FTickAnimationSharingFunction");
static_assert(sizeof(FTickAnimationSharingFunction) == 0x000030, "Wrong size on FTickAnimationSharingFunction");

}
