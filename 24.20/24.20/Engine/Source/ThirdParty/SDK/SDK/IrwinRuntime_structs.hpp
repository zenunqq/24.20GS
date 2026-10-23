#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FRidingAnimationData final
{
public:
	bool                                          bIsRidden;
	bool                                          bIsTurningInPlace;
	bool                                          bIsSprinting;
	bool                                          bIsBeingPetted;
	bool                                          bIsMovingBackwards;
	uint8                                         Pad_5[0x3];
	float                                         TurnInPlaceRotationSpeed;
	float                                         TurnInPlaceAngleDelta;
	float                                         RiderReferentialYaw;
};
static_assert(alignof(FRidingAnimationData) == 0x000004, "Wrong alignment on FRidingAnimationData");
static_assert(sizeof(FRidingAnimationData) == 0x000014, "Wrong size on FRidingAnimationData");
static_assert(offsetof(FRidingAnimationData, bIsRidden) == 0x000000, "Member 'FRidingAnimationData::bIsRidden' has a wrong offset!");
static_assert(offsetof(FRidingAnimationData, bIsTurningInPlace) == 0x000001, "Member 'FRidingAnimationData::bIsTurningInPlace' has a wrong offset!");
static_assert(offsetof(FRidingAnimationData, bIsSprinting) == 0x000002, "Member 'FRidingAnimationData::bIsSprinting' has a wrong offset!");
static_assert(offsetof(FRidingAnimationData, bIsBeingPetted) == 0x000003, "Member 'FRidingAnimationData::bIsBeingPetted' has a wrong offset!");
static_assert(offsetof(FRidingAnimationData, bIsMovingBackwards) == 0x000004, "Member 'FRidingAnimationData::bIsMovingBackwards' has a wrong offset!");
static_assert(offsetof(FRidingAnimationData, TurnInPlaceRotationSpeed) == 0x000008, "Member 'FRidingAnimationData::TurnInPlaceRotationSpeed' has a wrong offset!");
static_assert(offsetof(FRidingAnimationData, TurnInPlaceAngleDelta) == 0x00000C, "Member 'FRidingAnimationData::TurnInPlaceAngleDelta' has a wrong offset!");
static_assert(offsetof(FRidingAnimationData, RiderReferentialYaw) == 0x000010, "Member 'FRidingAnimationData::RiderReferentialYaw' has a wrong offset!");

}
