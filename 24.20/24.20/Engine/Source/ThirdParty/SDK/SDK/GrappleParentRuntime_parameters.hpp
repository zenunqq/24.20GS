#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct FortCameraModifier_Swinging_CalculateDynamicMultipliers final
{
public:
	float                                         OutFOVBoundsMultiplier;
	float                                         OutBoostOffsetMultiplier;
};
static_assert(alignof(FortCameraModifier_Swinging_CalculateDynamicMultipliers) == 0x000004, "Wrong alignment on FortCameraModifier_Swinging_CalculateDynamicMultipliers");
static_assert(sizeof(FortCameraModifier_Swinging_CalculateDynamicMultipliers) == 0x000008, "Wrong size on FortCameraModifier_Swinging_CalculateDynamicMultipliers");
static_assert(offsetof(FortCameraModifier_Swinging_CalculateDynamicMultipliers, OutFOVBoundsMultiplier) == 0x000000, "Member 'FortCameraModifier_Swinging_CalculateDynamicMultipliers::OutFOVBoundsMultiplier' has a wrong offset!");
static_assert(offsetof(FortCameraModifier_Swinging_CalculateDynamicMultipliers, OutBoostOffsetMultiplier) == 0x000004, "Member 'FortCameraModifier_Swinging_CalculateDynamicMultipliers::OutBoostOffsetMultiplier' has a wrong offset!");

struct FortSwingingLayerAnimInstance_GetAttachVectorInPlayerSpace final
{
public:
	struct FVector                                InPlayerToAttachPoint;
	struct FVector                                ReturnValue;
};
static_assert(alignof(FortSwingingLayerAnimInstance_GetAttachVectorInPlayerSpace) == 0x000008, "Wrong alignment on FortSwingingLayerAnimInstance_GetAttachVectorInPlayerSpace");
static_assert(sizeof(FortSwingingLayerAnimInstance_GetAttachVectorInPlayerSpace) == 0x000030, "Wrong size on FortSwingingLayerAnimInstance_GetAttachVectorInPlayerSpace");
static_assert(offsetof(FortSwingingLayerAnimInstance_GetAttachVectorInPlayerSpace, InPlayerToAttachPoint) == 0x000000, "Member 'FortSwingingLayerAnimInstance_GetAttachVectorInPlayerSpace::InPlayerToAttachPoint' has a wrong offset!");
static_assert(offsetof(FortSwingingLayerAnimInstance_GetAttachVectorInPlayerSpace, ReturnValue) == 0x000018, "Member 'FortSwingingLayerAnimInstance_GetAttachVectorInPlayerSpace::ReturnValue' has a wrong offset!");

struct FortSwingingLayerAnimInstance_GetPlayerAnglesFromAttachPoint final
{
public:
	float                                         Pitch;
	float                                         Roll;
	float                                         Yaw;
};
static_assert(alignof(FortSwingingLayerAnimInstance_GetPlayerAnglesFromAttachPoint) == 0x000004, "Wrong alignment on FortSwingingLayerAnimInstance_GetPlayerAnglesFromAttachPoint");
static_assert(sizeof(FortSwingingLayerAnimInstance_GetPlayerAnglesFromAttachPoint) == 0x00000C, "Wrong size on FortSwingingLayerAnimInstance_GetPlayerAnglesFromAttachPoint");
static_assert(offsetof(FortSwingingLayerAnimInstance_GetPlayerAnglesFromAttachPoint, Pitch) == 0x000000, "Member 'FortSwingingLayerAnimInstance_GetPlayerAnglesFromAttachPoint::Pitch' has a wrong offset!");
static_assert(offsetof(FortSwingingLayerAnimInstance_GetPlayerAnglesFromAttachPoint, Roll) == 0x000004, "Member 'FortSwingingLayerAnimInstance_GetPlayerAnglesFromAttachPoint::Roll' has a wrong offset!");
static_assert(offsetof(FortSwingingLayerAnimInstance_GetPlayerAnglesFromAttachPoint, Yaw) == 0x000008, "Member 'FortSwingingLayerAnimInstance_GetPlayerAnglesFromAttachPoint::Yaw' has a wrong offset!");

}
