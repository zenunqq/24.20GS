#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct FortAIFaunaAnimInstance_CalculateLookAtAlpha final
{
public:
	bool                                          bForceDisableLookAt;
	uint8                                         Pad_1[0x3];
	float                                         DeltaSeconds;
};
static_assert(alignof(FortAIFaunaAnimInstance_CalculateLookAtAlpha) == 0x000004, "Wrong alignment on FortAIFaunaAnimInstance_CalculateLookAtAlpha");
static_assert(sizeof(FortAIFaunaAnimInstance_CalculateLookAtAlpha) == 0x000008, "Wrong size on FortAIFaunaAnimInstance_CalculateLookAtAlpha");
static_assert(offsetof(FortAIFaunaAnimInstance_CalculateLookAtAlpha, bForceDisableLookAt) == 0x000000, "Member 'FortAIFaunaAnimInstance_CalculateLookAtAlpha::bForceDisableLookAt' has a wrong offset!");
static_assert(offsetof(FortAIFaunaAnimInstance_CalculateLookAtAlpha, DeltaSeconds) == 0x000004, "Member 'FortAIFaunaAnimInstance_CalculateLookAtAlpha::DeltaSeconds' has a wrong offset!");

struct FortAIFaunaAnimInstance_Grandma_CalculateBlinkAlpha final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortAIFaunaAnimInstance_Grandma_CalculateBlinkAlpha) == 0x000004, "Wrong alignment on FortAIFaunaAnimInstance_Grandma_CalculateBlinkAlpha");
static_assert(sizeof(FortAIFaunaAnimInstance_Grandma_CalculateBlinkAlpha) == 0x000004, "Wrong size on FortAIFaunaAnimInstance_Grandma_CalculateBlinkAlpha");
static_assert(offsetof(FortAIFaunaAnimInstance_Grandma_CalculateBlinkAlpha, ReturnValue) == 0x000000, "Member 'FortAIFaunaAnimInstance_Grandma_CalculateBlinkAlpha::ReturnValue' has a wrong offset!");

struct FortAIFaunaAnimInstance_Grandma_CalculateLocomotionPoseAlpha final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortAIFaunaAnimInstance_Grandma_CalculateLocomotionPoseAlpha) == 0x000004, "Wrong alignment on FortAIFaunaAnimInstance_Grandma_CalculateLocomotionPoseAlpha");
static_assert(sizeof(FortAIFaunaAnimInstance_Grandma_CalculateLocomotionPoseAlpha) == 0x000004, "Wrong size on FortAIFaunaAnimInstance_Grandma_CalculateLocomotionPoseAlpha");
static_assert(offsetof(FortAIFaunaAnimInstance_Grandma_CalculateLocomotionPoseAlpha, ReturnValue) == 0x000000, "Member 'FortAIFaunaAnimInstance_Grandma_CalculateLocomotionPoseAlpha::ReturnValue' has a wrong offset!");

struct FortAIFaunaAnimInstance_Grandma_CalculateMeshScale final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortAIFaunaAnimInstance_Grandma_CalculateMeshScale) == 0x000004, "Wrong alignment on FortAIFaunaAnimInstance_Grandma_CalculateMeshScale");
static_assert(sizeof(FortAIFaunaAnimInstance_Grandma_CalculateMeshScale) == 0x000004, "Wrong size on FortAIFaunaAnimInstance_Grandma_CalculateMeshScale");
static_assert(offsetof(FortAIFaunaAnimInstance_Grandma_CalculateMeshScale, ReturnValue) == 0x000000, "Member 'FortAIFaunaAnimInstance_Grandma_CalculateMeshScale::ReturnValue' has a wrong offset!");

struct FortAIFaunaAnimInstance_Grandma_CalculateWalkRunPlayRate final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortAIFaunaAnimInstance_Grandma_CalculateWalkRunPlayRate) == 0x000004, "Wrong alignment on FortAIFaunaAnimInstance_Grandma_CalculateWalkRunPlayRate");
static_assert(sizeof(FortAIFaunaAnimInstance_Grandma_CalculateWalkRunPlayRate) == 0x000004, "Wrong size on FortAIFaunaAnimInstance_Grandma_CalculateWalkRunPlayRate");
static_assert(offsetof(FortAIFaunaAnimInstance_Grandma_CalculateWalkRunPlayRate, ReturnValue) == 0x000000, "Member 'FortAIFaunaAnimInstance_Grandma_CalculateWalkRunPlayRate::ReturnValue' has a wrong offset!");

struct FortAIFaunaAnimInstance_Grandma_DetermineEnableAlertAdditive final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortAIFaunaAnimInstance_Grandma_DetermineEnableAlertAdditive) == 0x000001, "Wrong alignment on FortAIFaunaAnimInstance_Grandma_DetermineEnableAlertAdditive");
static_assert(sizeof(FortAIFaunaAnimInstance_Grandma_DetermineEnableAlertAdditive) == 0x000001, "Wrong size on FortAIFaunaAnimInstance_Grandma_DetermineEnableAlertAdditive");
static_assert(offsetof(FortAIFaunaAnimInstance_Grandma_DetermineEnableAlertAdditive, ReturnValue) == 0x000000, "Member 'FortAIFaunaAnimInstance_Grandma_DetermineEnableAlertAdditive::ReturnValue' has a wrong offset!");

struct FortAIFaunaAnimInstance_Grandma_DetermineEnableSniffAdditive final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortAIFaunaAnimInstance_Grandma_DetermineEnableSniffAdditive) == 0x000001, "Wrong alignment on FortAIFaunaAnimInstance_Grandma_DetermineEnableSniffAdditive");
static_assert(sizeof(FortAIFaunaAnimInstance_Grandma_DetermineEnableSniffAdditive) == 0x000001, "Wrong size on FortAIFaunaAnimInstance_Grandma_DetermineEnableSniffAdditive");
static_assert(offsetof(FortAIFaunaAnimInstance_Grandma_DetermineEnableSniffAdditive, ReturnValue) == 0x000000, "Member 'FortAIFaunaAnimInstance_Grandma_DetermineEnableSniffAdditive::ReturnValue' has a wrong offset!");

struct FortAIFaunaAnimInstance_Grandma_DetermineIdleStartTurn final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortAIFaunaAnimInstance_Grandma_DetermineIdleStartTurn) == 0x000001, "Wrong alignment on FortAIFaunaAnimInstance_Grandma_DetermineIdleStartTurn");
static_assert(sizeof(FortAIFaunaAnimInstance_Grandma_DetermineIdleStartTurn) == 0x000001, "Wrong size on FortAIFaunaAnimInstance_Grandma_DetermineIdleStartTurn");
static_assert(offsetof(FortAIFaunaAnimInstance_Grandma_DetermineIdleStartTurn, ReturnValue) == 0x000000, "Member 'FortAIFaunaAnimInstance_Grandma_DetermineIdleStartTurn::ReturnValue' has a wrong offset!");

struct FortAIFaunaAnimInstance_Grandma_DetermineShouldPlayFullBodyInPlace final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortAIFaunaAnimInstance_Grandma_DetermineShouldPlayFullBodyInPlace) == 0x000001, "Wrong alignment on FortAIFaunaAnimInstance_Grandma_DetermineShouldPlayFullBodyInPlace");
static_assert(sizeof(FortAIFaunaAnimInstance_Grandma_DetermineShouldPlayFullBodyInPlace) == 0x000001, "Wrong size on FortAIFaunaAnimInstance_Grandma_DetermineShouldPlayFullBodyInPlace");
static_assert(offsetof(FortAIFaunaAnimInstance_Grandma_DetermineShouldPlayFullBodyInPlace, ReturnValue) == 0x000000, "Member 'FortAIFaunaAnimInstance_Grandma_DetermineShouldPlayFullBodyInPlace::ReturnValue' has a wrong offset!");

struct FortAIFaunaAnimInstance_Grandma_UpdateStateVariables final
{
public:
	bool                                          bAccelerating;
};
static_assert(alignof(FortAIFaunaAnimInstance_Grandma_UpdateStateVariables) == 0x000001, "Wrong alignment on FortAIFaunaAnimInstance_Grandma_UpdateStateVariables");
static_assert(sizeof(FortAIFaunaAnimInstance_Grandma_UpdateStateVariables) == 0x000001, "Wrong size on FortAIFaunaAnimInstance_Grandma_UpdateStateVariables");
static_assert(offsetof(FortAIFaunaAnimInstance_Grandma_UpdateStateVariables, bAccelerating) == 0x000000, "Member 'FortAIFaunaAnimInstance_Grandma_UpdateStateVariables::bAccelerating' has a wrong offset!");

struct FortAIFaunaAnimInstance_Robert_CalculateLocomotionPoseAdditiveAlpha final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortAIFaunaAnimInstance_Robert_CalculateLocomotionPoseAdditiveAlpha) == 0x000004, "Wrong alignment on FortAIFaunaAnimInstance_Robert_CalculateLocomotionPoseAdditiveAlpha");
static_assert(sizeof(FortAIFaunaAnimInstance_Robert_CalculateLocomotionPoseAdditiveAlpha) == 0x000004, "Wrong size on FortAIFaunaAnimInstance_Robert_CalculateLocomotionPoseAdditiveAlpha");
static_assert(offsetof(FortAIFaunaAnimInstance_Robert_CalculateLocomotionPoseAdditiveAlpha, ReturnValue) == 0x000000, "Member 'FortAIFaunaAnimInstance_Robert_CalculateLocomotionPoseAdditiveAlpha::ReturnValue' has a wrong offset!");

struct FortAIFaunaAnimInstance_Robert_DetermineEnableHeadTiltDownAdditive final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortAIFaunaAnimInstance_Robert_DetermineEnableHeadTiltDownAdditive) == 0x000001, "Wrong alignment on FortAIFaunaAnimInstance_Robert_DetermineEnableHeadTiltDownAdditive");
static_assert(sizeof(FortAIFaunaAnimInstance_Robert_DetermineEnableHeadTiltDownAdditive) == 0x000001, "Wrong size on FortAIFaunaAnimInstance_Robert_DetermineEnableHeadTiltDownAdditive");
static_assert(offsetof(FortAIFaunaAnimInstance_Robert_DetermineEnableHeadTiltDownAdditive, ReturnValue) == 0x000000, "Member 'FortAIFaunaAnimInstance_Robert_DetermineEnableHeadTiltDownAdditive::ReturnValue' has a wrong offset!");

struct FortAIFaunaAnimInstance_Robert_DetermineIdleStartTurn final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortAIFaunaAnimInstance_Robert_DetermineIdleStartTurn) == 0x000001, "Wrong alignment on FortAIFaunaAnimInstance_Robert_DetermineIdleStartTurn");
static_assert(sizeof(FortAIFaunaAnimInstance_Robert_DetermineIdleStartTurn) == 0x000001, "Wrong size on FortAIFaunaAnimInstance_Robert_DetermineIdleStartTurn");
static_assert(offsetof(FortAIFaunaAnimInstance_Robert_DetermineIdleStartTurn, ReturnValue) == 0x000000, "Member 'FortAIFaunaAnimInstance_Robert_DetermineIdleStartTurn::ReturnValue' has a wrong offset!");

struct FortAIFaunaAnimInstance_Robert_DetermineIsFullBodyInPlace final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortAIFaunaAnimInstance_Robert_DetermineIsFullBodyInPlace) == 0x000001, "Wrong alignment on FortAIFaunaAnimInstance_Robert_DetermineIsFullBodyInPlace");
static_assert(sizeof(FortAIFaunaAnimInstance_Robert_DetermineIsFullBodyInPlace) == 0x000001, "Wrong size on FortAIFaunaAnimInstance_Robert_DetermineIsFullBodyInPlace");
static_assert(offsetof(FortAIFaunaAnimInstance_Robert_DetermineIsFullBodyInPlace, ReturnValue) == 0x000000, "Member 'FortAIFaunaAnimInstance_Robert_DetermineIsFullBodyInPlace::ReturnValue' has a wrong offset!");

}
