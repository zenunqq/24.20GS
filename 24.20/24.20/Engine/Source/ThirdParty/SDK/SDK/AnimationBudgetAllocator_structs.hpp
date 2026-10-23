#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FAnimationBudgetAllocatorParameters final
{
public:
	float                                         BudgetInMs;
	float                                         MinQuality;
	int32                                         MaxTickRate;
	float                                         WorkUnitSmoothingSpeed;
	float                                         AlwaysTickFalloffAggression;
	float                                         InterpolationFalloffAggression;
	int32                                         InterpolationMaxRate;
	int32                                         MaxInterpolatedComponents;
	float                                         InterpolationTickMultiplier;
	float                                         InitialEstimatedWorkUnitTimeMs;
	int32                                         MaxTickedOffsreenComponents;
	int32                                         StateChangeThrottleInFrames;
	float                                         BudgetFactorBeforeReducedWork;
	float                                         BudgetFactorBeforeReducedWorkEpsilon;
	float                                         BudgetPressureSmoothingSpeed;
	int32                                         ReducedWorkThrottleMinInFrames;
	int32                                         ReducedWorkThrottleMaxInFrames;
	float                                         BudgetFactorBeforeAggressiveReducedWork;
	int32                                         ReducedWorkThrottleMaxPerFrame;
	float                                         BudgetPressureBeforeEmergencyReducedWork;
	float                                         AutoCalculatedSignificanceMaxDistance;
	uint8                                         Pad_54[0x4];
};
static_assert(alignof(FAnimationBudgetAllocatorParameters) == 0x000004, "Wrong alignment on FAnimationBudgetAllocatorParameters");
static_assert(sizeof(FAnimationBudgetAllocatorParameters) == 0x000058, "Wrong size on FAnimationBudgetAllocatorParameters");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, BudgetInMs) == 0x000000, "Member 'FAnimationBudgetAllocatorParameters::BudgetInMs' has a wrong offset!");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, MinQuality) == 0x000004, "Member 'FAnimationBudgetAllocatorParameters::MinQuality' has a wrong offset!");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, MaxTickRate) == 0x000008, "Member 'FAnimationBudgetAllocatorParameters::MaxTickRate' has a wrong offset!");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, WorkUnitSmoothingSpeed) == 0x00000C, "Member 'FAnimationBudgetAllocatorParameters::WorkUnitSmoothingSpeed' has a wrong offset!");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, AlwaysTickFalloffAggression) == 0x000010, "Member 'FAnimationBudgetAllocatorParameters::AlwaysTickFalloffAggression' has a wrong offset!");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, InterpolationFalloffAggression) == 0x000014, "Member 'FAnimationBudgetAllocatorParameters::InterpolationFalloffAggression' has a wrong offset!");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, InterpolationMaxRate) == 0x000018, "Member 'FAnimationBudgetAllocatorParameters::InterpolationMaxRate' has a wrong offset!");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, MaxInterpolatedComponents) == 0x00001C, "Member 'FAnimationBudgetAllocatorParameters::MaxInterpolatedComponents' has a wrong offset!");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, InterpolationTickMultiplier) == 0x000020, "Member 'FAnimationBudgetAllocatorParameters::InterpolationTickMultiplier' has a wrong offset!");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, InitialEstimatedWorkUnitTimeMs) == 0x000024, "Member 'FAnimationBudgetAllocatorParameters::InitialEstimatedWorkUnitTimeMs' has a wrong offset!");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, MaxTickedOffsreenComponents) == 0x000028, "Member 'FAnimationBudgetAllocatorParameters::MaxTickedOffsreenComponents' has a wrong offset!");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, StateChangeThrottleInFrames) == 0x00002C, "Member 'FAnimationBudgetAllocatorParameters::StateChangeThrottleInFrames' has a wrong offset!");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, BudgetFactorBeforeReducedWork) == 0x000030, "Member 'FAnimationBudgetAllocatorParameters::BudgetFactorBeforeReducedWork' has a wrong offset!");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, BudgetFactorBeforeReducedWorkEpsilon) == 0x000034, "Member 'FAnimationBudgetAllocatorParameters::BudgetFactorBeforeReducedWorkEpsilon' has a wrong offset!");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, BudgetPressureSmoothingSpeed) == 0x000038, "Member 'FAnimationBudgetAllocatorParameters::BudgetPressureSmoothingSpeed' has a wrong offset!");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, ReducedWorkThrottleMinInFrames) == 0x00003C, "Member 'FAnimationBudgetAllocatorParameters::ReducedWorkThrottleMinInFrames' has a wrong offset!");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, ReducedWorkThrottleMaxInFrames) == 0x000040, "Member 'FAnimationBudgetAllocatorParameters::ReducedWorkThrottleMaxInFrames' has a wrong offset!");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, BudgetFactorBeforeAggressiveReducedWork) == 0x000044, "Member 'FAnimationBudgetAllocatorParameters::BudgetFactorBeforeAggressiveReducedWork' has a wrong offset!");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, ReducedWorkThrottleMaxPerFrame) == 0x000048, "Member 'FAnimationBudgetAllocatorParameters::ReducedWorkThrottleMaxPerFrame' has a wrong offset!");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, BudgetPressureBeforeEmergencyReducedWork) == 0x00004C, "Member 'FAnimationBudgetAllocatorParameters::BudgetPressureBeforeEmergencyReducedWork' has a wrong offset!");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, AutoCalculatedSignificanceMaxDistance) == 0x000050, "Member 'FAnimationBudgetAllocatorParameters::AutoCalculatedSignificanceMaxDistance' has a wrong offset!");

}
