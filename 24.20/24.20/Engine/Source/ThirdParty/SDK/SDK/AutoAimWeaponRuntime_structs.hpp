#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FAutoAimWeaponBoneSegmentData final
{
public:
	class FName                                   BoneName1;
	class FName                                   BoneName2;
	float                                         BoneCollisionCapsuleRadiusAproximation;
};
static_assert(alignof(FAutoAimWeaponBoneSegmentData) == 0x000004, "Wrong alignment on FAutoAimWeaponBoneSegmentData");
static_assert(sizeof(FAutoAimWeaponBoneSegmentData) == 0x00000C, "Wrong size on FAutoAimWeaponBoneSegmentData");
static_assert(offsetof(FAutoAimWeaponBoneSegmentData, BoneName1) == 0x000000, "Member 'FAutoAimWeaponBoneSegmentData::BoneName1' has a wrong offset!");
static_assert(offsetof(FAutoAimWeaponBoneSegmentData, BoneName2) == 0x000004, "Member 'FAutoAimWeaponBoneSegmentData::BoneName2' has a wrong offset!");
static_assert(offsetof(FAutoAimWeaponBoneSegmentData, BoneCollisionCapsuleRadiusAproximation) == 0x000008, "Member 'FAutoAimWeaponBoneSegmentData::BoneCollisionCapsuleRadiusAproximation' has a wrong offset!");

}
