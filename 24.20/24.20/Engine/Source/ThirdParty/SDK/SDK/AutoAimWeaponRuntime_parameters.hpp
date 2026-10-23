#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct AutoAimWeaponKismetLibrary_DoesAutoAimWeaponHaveLineOfSight final
{
public:
	class AFortPawn*                              SourcePawn;
	class AFortPawn*                              TargetPawn;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(AutoAimWeaponKismetLibrary_DoesAutoAimWeaponHaveLineOfSight) == 0x000008, "Wrong alignment on AutoAimWeaponKismetLibrary_DoesAutoAimWeaponHaveLineOfSight");
static_assert(sizeof(AutoAimWeaponKismetLibrary_DoesAutoAimWeaponHaveLineOfSight) == 0x000018, "Wrong size on AutoAimWeaponKismetLibrary_DoesAutoAimWeaponHaveLineOfSight");
static_assert(offsetof(AutoAimWeaponKismetLibrary_DoesAutoAimWeaponHaveLineOfSight, SourcePawn) == 0x000000, "Member 'AutoAimWeaponKismetLibrary_DoesAutoAimWeaponHaveLineOfSight::SourcePawn' has a wrong offset!");
static_assert(offsetof(AutoAimWeaponKismetLibrary_DoesAutoAimWeaponHaveLineOfSight, TargetPawn) == 0x000008, "Member 'AutoAimWeaponKismetLibrary_DoesAutoAimWeaponHaveLineOfSight::TargetPawn' has a wrong offset!");
static_assert(offsetof(AutoAimWeaponKismetLibrary_DoesAutoAimWeaponHaveLineOfSight, ReturnValue) == 0x000010, "Member 'AutoAimWeaponKismetLibrary_DoesAutoAimWeaponHaveLineOfSight::ReturnValue' has a wrong offset!");

struct AutoAimWeaponKismetLibrary_DoesAutoAimWeaponReticleIntersectTarget final
{
public:
	float                                         OutReticleDistance;
	uint8                                         Pad_4[0x4];
	class AFortPawn*                              SourcePawn;
	class AFortPawn*                              TargetPawn;
	float                                         ReticleSize;
	bool                                          ReturnValue;
	uint8                                         Pad_1D[0x3];
};
static_assert(alignof(AutoAimWeaponKismetLibrary_DoesAutoAimWeaponReticleIntersectTarget) == 0x000008, "Wrong alignment on AutoAimWeaponKismetLibrary_DoesAutoAimWeaponReticleIntersectTarget");
static_assert(sizeof(AutoAimWeaponKismetLibrary_DoesAutoAimWeaponReticleIntersectTarget) == 0x000020, "Wrong size on AutoAimWeaponKismetLibrary_DoesAutoAimWeaponReticleIntersectTarget");
static_assert(offsetof(AutoAimWeaponKismetLibrary_DoesAutoAimWeaponReticleIntersectTarget, OutReticleDistance) == 0x000000, "Member 'AutoAimWeaponKismetLibrary_DoesAutoAimWeaponReticleIntersectTarget::OutReticleDistance' has a wrong offset!");
static_assert(offsetof(AutoAimWeaponKismetLibrary_DoesAutoAimWeaponReticleIntersectTarget, SourcePawn) == 0x000008, "Member 'AutoAimWeaponKismetLibrary_DoesAutoAimWeaponReticleIntersectTarget::SourcePawn' has a wrong offset!");
static_assert(offsetof(AutoAimWeaponKismetLibrary_DoesAutoAimWeaponReticleIntersectTarget, TargetPawn) == 0x000010, "Member 'AutoAimWeaponKismetLibrary_DoesAutoAimWeaponReticleIntersectTarget::TargetPawn' has a wrong offset!");
static_assert(offsetof(AutoAimWeaponKismetLibrary_DoesAutoAimWeaponReticleIntersectTarget, ReticleSize) == 0x000018, "Member 'AutoAimWeaponKismetLibrary_DoesAutoAimWeaponReticleIntersectTarget::ReticleSize' has a wrong offset!");
static_assert(offsetof(AutoAimWeaponKismetLibrary_DoesAutoAimWeaponReticleIntersectTarget, ReturnValue) == 0x00001C, "Member 'AutoAimWeaponKismetLibrary_DoesAutoAimWeaponReticleIntersectTarget::ReturnValue' has a wrong offset!");

struct AutoAimWeaponKismetLibrary_FindBestAutoAimTarget final
{
public:
	class AFortPawn*                              OutTargetPawn;
	float                                         OutReticleDistance;
	uint8                                         Pad_C[0x4];
	class AFortPlayerPawn*                        SourcePawn;
	float                                         ReticleSize;
	float                                         Range;
};
static_assert(alignof(AutoAimWeaponKismetLibrary_FindBestAutoAimTarget) == 0x000008, "Wrong alignment on AutoAimWeaponKismetLibrary_FindBestAutoAimTarget");
static_assert(sizeof(AutoAimWeaponKismetLibrary_FindBestAutoAimTarget) == 0x000020, "Wrong size on AutoAimWeaponKismetLibrary_FindBestAutoAimTarget");
static_assert(offsetof(AutoAimWeaponKismetLibrary_FindBestAutoAimTarget, OutTargetPawn) == 0x000000, "Member 'AutoAimWeaponKismetLibrary_FindBestAutoAimTarget::OutTargetPawn' has a wrong offset!");
static_assert(offsetof(AutoAimWeaponKismetLibrary_FindBestAutoAimTarget, OutReticleDistance) == 0x000008, "Member 'AutoAimWeaponKismetLibrary_FindBestAutoAimTarget::OutReticleDistance' has a wrong offset!");
static_assert(offsetof(AutoAimWeaponKismetLibrary_FindBestAutoAimTarget, SourcePawn) == 0x000010, "Member 'AutoAimWeaponKismetLibrary_FindBestAutoAimTarget::SourcePawn' has a wrong offset!");
static_assert(offsetof(AutoAimWeaponKismetLibrary_FindBestAutoAimTarget, ReticleSize) == 0x000018, "Member 'AutoAimWeaponKismetLibrary_FindBestAutoAimTarget::ReticleSize' has a wrong offset!");
static_assert(offsetof(AutoAimWeaponKismetLibrary_FindBestAutoAimTarget, Range) == 0x00001C, "Member 'AutoAimWeaponKismetLibrary_FindBestAutoAimTarget::Range' has a wrong offset!");

struct AutoAimWeaponKismetLibrary_GetAutoAimWeaponPawnComponent final
{
public:
	class AFortPawn*                              SourcePawn;
	class UAutoAimWeaponPawnComponent*            ReturnValue;
};
static_assert(alignof(AutoAimWeaponKismetLibrary_GetAutoAimWeaponPawnComponent) == 0x000008, "Wrong alignment on AutoAimWeaponKismetLibrary_GetAutoAimWeaponPawnComponent");
static_assert(sizeof(AutoAimWeaponKismetLibrary_GetAutoAimWeaponPawnComponent) == 0x000010, "Wrong size on AutoAimWeaponKismetLibrary_GetAutoAimWeaponPawnComponent");
static_assert(offsetof(AutoAimWeaponKismetLibrary_GetAutoAimWeaponPawnComponent, SourcePawn) == 0x000000, "Member 'AutoAimWeaponKismetLibrary_GetAutoAimWeaponPawnComponent::SourcePawn' has a wrong offset!");
static_assert(offsetof(AutoAimWeaponKismetLibrary_GetAutoAimWeaponPawnComponent, ReturnValue) == 0x000008, "Member 'AutoAimWeaponKismetLibrary_GetAutoAimWeaponPawnComponent::ReturnValue' has a wrong offset!");

struct AutoAimWeaponPawnComponent_GetCurrentLockOnCount final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(AutoAimWeaponPawnComponent_GetCurrentLockOnCount) == 0x000004, "Wrong alignment on AutoAimWeaponPawnComponent_GetCurrentLockOnCount");
static_assert(sizeof(AutoAimWeaponPawnComponent_GetCurrentLockOnCount) == 0x000004, "Wrong size on AutoAimWeaponPawnComponent_GetCurrentLockOnCount");
static_assert(offsetof(AutoAimWeaponPawnComponent_GetCurrentLockOnCount, ReturnValue) == 0x000000, "Member 'AutoAimWeaponPawnComponent_GetCurrentLockOnCount::ReturnValue' has a wrong offset!");

struct AutoAimWeaponPawnComponent_GetLockOnProgress final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(AutoAimWeaponPawnComponent_GetLockOnProgress) == 0x000004, "Wrong alignment on AutoAimWeaponPawnComponent_GetLockOnProgress");
static_assert(sizeof(AutoAimWeaponPawnComponent_GetLockOnProgress) == 0x000004, "Wrong size on AutoAimWeaponPawnComponent_GetLockOnProgress");
static_assert(offsetof(AutoAimWeaponPawnComponent_GetLockOnProgress, ReturnValue) == 0x000000, "Member 'AutoAimWeaponPawnComponent_GetLockOnProgress::ReturnValue' has a wrong offset!");

struct AutoAimWeaponPawnComponent_GetLockOnTargetLocation final
{
public:
	struct FVector                                OutLockTargetLocation;
	bool                                          ReturnValue;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(AutoAimWeaponPawnComponent_GetLockOnTargetLocation) == 0x000008, "Wrong alignment on AutoAimWeaponPawnComponent_GetLockOnTargetLocation");
static_assert(sizeof(AutoAimWeaponPawnComponent_GetLockOnTargetLocation) == 0x000020, "Wrong size on AutoAimWeaponPawnComponent_GetLockOnTargetLocation");
static_assert(offsetof(AutoAimWeaponPawnComponent_GetLockOnTargetLocation, OutLockTargetLocation) == 0x000000, "Member 'AutoAimWeaponPawnComponent_GetLockOnTargetLocation::OutLockTargetLocation' has a wrong offset!");
static_assert(offsetof(AutoAimWeaponPawnComponent_GetLockOnTargetLocation, ReturnValue) == 0x000018, "Member 'AutoAimWeaponPawnComponent_GetLockOnTargetLocation::ReturnValue' has a wrong offset!");

struct AutoAimWeaponPawnComponent_GetTargetToReticleDistanceNormalized final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(AutoAimWeaponPawnComponent_GetTargetToReticleDistanceNormalized) == 0x000004, "Wrong alignment on AutoAimWeaponPawnComponent_GetTargetToReticleDistanceNormalized");
static_assert(sizeof(AutoAimWeaponPawnComponent_GetTargetToReticleDistanceNormalized) == 0x000004, "Wrong size on AutoAimWeaponPawnComponent_GetTargetToReticleDistanceNormalized");
static_assert(offsetof(AutoAimWeaponPawnComponent_GetTargetToReticleDistanceNormalized, ReturnValue) == 0x000000, "Member 'AutoAimWeaponPawnComponent_GetTargetToReticleDistanceNormalized::ReturnValue' has a wrong offset!");

}
